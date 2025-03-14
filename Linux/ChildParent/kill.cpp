#include <iostream>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

// Signal handlers for the child process
void sighup(int sig) {
    std::cout << "I have received SIGHUP" << std::endl;
}

void sigint(int sig) {
    std::cout << "I have received SIGINT" << std::endl;
}

void sigquit(int sig) {
    std::cout << "I have received SIGQUIT" << std::endl;
    exit(0);
}

int main() {
    pid_t pid = fork();

    if (pid == 0) { // Child process
        // Register signal handlers
        signal(SIGHUP, sighup);
        signal(SIGINT, sigint);
        signal(SIGQUIT, sigquit);

        // Wait for signals indefinitely
        while (true) {
            pause();
        }
    } else { // Parent process
        // Give child process some time to set up signal handlers
        sleep(1);

        // Send SIGHUP
        kill(pid, SIGHUP);
        sleep(5);
:wq
        // Send SIGINT
        kill(pid, SIGINT);
        sleep(5);

        // Send SIGQUIT
        kill(pid, SIGQUIT);

        // Wait for child process to terminate
        wait(nullptr);
    }

    return 0;
}
