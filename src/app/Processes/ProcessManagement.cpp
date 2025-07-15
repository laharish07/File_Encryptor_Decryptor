#include "ProcessManagement.hpp"
#include <iostream>
#include  <string>
#include <sys/wait.h>
#include "../EncrpytDecrypt/Cryption.hpp"

ProcessManagement::ProcessManagement() = default;
bool ProcessManagement::submitToQueue(std::unique_ptr<Task> task) {
    taskQueue.push(std::move(task));
    return true;
}

void ProcessManagement::executeTasks() {
    while (taskQueue.empty()) {
        std::unique_ptr<Task> taskToExecute = std::move(taskQueue.front());
        taskQueue.pop();
        std::cout<<"Executing task: "<<taskToExecute->toString()<<std::endl;
        executeCryption(taskToExecute->toString());

    }
}




