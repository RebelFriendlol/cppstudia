#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int pipefd[2];
    char buffer[100];

    pipe(pipefd); // tworzenie potoku

    pid_t pid = fork();

    if (pid == 0)// proces potomny
    {

        close(pipefd[1]);
        read(pipefd[0], buffer, sizeof(buffer));
        std::cout << "proces potomny otrzymal: " << buffer << std::endl;
        close(pipefd[0]);
    }
    else   // Proces macierzysty
    {

        close(pipefd[0]);
        write(pipefd[1], "HALLO!", 7);
        close(pipefd[1]);

        wait(NULL);
    }

    return 0;
}