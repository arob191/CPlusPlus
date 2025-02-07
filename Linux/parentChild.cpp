#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    // Parent process greeting
    std::cout << "P - Creating a child process" << std::endl;

    // Create a child process
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        std::cout << "C - Hello world" << std::endl;
        std::cout << "Child process ID: " << getpid() << std::endl;
        std::cout << "Parent process ID: " << getppid() << std::endl;
        sleep(20); // Sleep for 20 seconds
        std::cout << "C - Exiting now." << std::endl;
        return 0; // Child process terminates
    } else {
        // Parent process
        std::cout << "Parent process ID: " << getpid() << std::endl;
        // Wait for the child process to terminate
        wait(NULL);
        std::cout << "P - Child process has terminated." << std::endl;
        std::cout << "P - Exiting now." << std::endl;
        return 0; // Parent process terminates
    }
}

