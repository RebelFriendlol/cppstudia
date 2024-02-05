#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>

int main() {
    const int dzieci = 4;
    int pipes[dzieci * 2];
    srand(time(NULL));

    for (int i = 0; i < dzieci; ++i) {
        pipe(&pipes[i * 2]);

        pid_t pid = fork();

        if (pid == 0)
        { // Proces potomny

            close(pipes[i * 2]);

            while (true)
            {
                int num = rand() % 100 + 1;
                write(pipes[i * 2 + 1], &num, sizeof(num));
                sleep(rand() % 5 + 1);
            }

            close(pipes[i * 2 + 1]);
            exit(0);
        }
        else if (pid < 0)
        {
            std::cerr << "bląd podczas tworzenia procesu potomnego " << i << std::endl;
            return 1;
        }
    }

    for (int i = 0; i < dzieci; ++i) {
        close(pipes[i * 2 + 1]);
    }

    while (true)
    {
        for (int i = 0; i < dzieci; ++i)
        {
            int receivedNum;

            if (read(pipes[i * 2], &receivedNum, sizeof(receivedNum)) > 0)
            {
                int squaredNum = receivedNum * receivedNum;
                std::cout << "proces macierzysty otrzymal liczby: " << receivedNum
                          << ", podniesiona do kwadratu: " << squaredNum << std::endl;
            }
        }
    }

    for (int i = 0; i < dzieci; ++i)
    {
        close(pipes[i * 2]);
    }

    return 0;
}