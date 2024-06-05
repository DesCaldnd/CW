//
// Created by Des Caldnd on 6/3/2024.
//
#include "../launcher/launcher.h"
#include "heart.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>
#include <string>
#include <filesystem>

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cerr << "Please provide the path to the executable as an argument" << std::endl;
		return 1;
	}

	std::string path(argv[1]); // maybe need an absolute path?

	process::launchProcess(path, "");

	return 0;
}


/*
int main() {
    process proc;

    std::string command1 = "ls";
    char * arg[] = {"-l"};

    pid_t pid1 = proc.launchProcess(command1, arg);

    if (pid1 > 0) {
        std::cout << "Child process ID for test 1: " << pid1 << std::endl;

        int exit_status1 = proc.waitForProcess(pid1);
        if (exit_status1 >= 0) {
            std::cout << "Test 1 child process exited with status: " << exit_status1 << std::endl;
        } else {
            std::cerr << "Error waiting for test 1 child process" << std::endl;
        }
    } else if (pid1 == 0) {
        std::cerr << "Unexpected behavior: main function is running in the child process" << std::endl;
        exit(EXIT_FAILURE);
    } else {
        std::cerr << "Failed to launch child process in test 1" << std::endl;
    }


    return 0;
}
*/
