#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    // create the child process using the fork() function
    pid_t pid = fork();

    if (pid == 0) {
        // Child process. Add the sum of odd numbers from 1 - 1000
        int sum_odd = 0;
        for (int i = 1; i <= 1000; ++i) {
            if (i % 2 != 0) {
                sum_odd += i;
            }
        }
        std::cout << "C - Sum of odd numbers: " << sum_odd << std::endl;
        return 0; // Child process terminates
    } else {
        // Parent process. Add the sum of even number from 1 - 1000
        int sum_even = 0;
        for (int i = 2; i <= 1000; ++i) {
            if (i % 2 == 0) {
                sum_even += i;
            }
        }

        std::cout << "P - Sum of even numbers: " << sum_even << std::endl;
        wait(NULL);
        return 0;
    }
}