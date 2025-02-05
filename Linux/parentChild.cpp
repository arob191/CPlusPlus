#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    // Parent process greeting
    std::cout << "Parent: Creating a child process..." << std::endl;

    // Create a child process
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        std::cerr << "Fork failed" << std::endl;
        return 1;
    } else if (pid == 0) {
        // Child process
        std::cout << "Child: Hello, I'm the child process!" << std::endl;
        sleep(20); // Sleep for 20 seconds
        std::cout << "Child: Exiting now." << std::endl;
    } else {
        // Parent process
        // Wait for the child process to terminate
        wait(NULL);
        std::cout << "Parent: Child process has terminated." << std::endl;
    }

    // Parent process terminates
    std::cout << "Parent: Exiting now." << std::endl;
    return 0;
}
