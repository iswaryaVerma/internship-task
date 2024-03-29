#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string name;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskName) {
        Task newTask = {taskName, false};
        tasks.push_back(newTask);
        cout << "Task added successfully!\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks to display.\n";
            return;
        }

        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].name << " - " << (tasks[i].completed ? "Completed" : "Pending") << endl;
        }
    }

    void markTaskAsCompleted(size_t index) {
        if (index >= tasks.size()) {
            cout << "Invalid task index.\n";
            return;
        }
        tasks[index].completed = true;
        cout << "Task marked as completed.\n";
    }

    void removeTask(size_t index) {
        if (index >= tasks.size()) {
            cout << "Invalid task index.\n";
            return;
        }
        tasks.erase(tasks.begin() + index);
        cout << "Task removed successfully.\n";
    }
};

int main() {
    ToDoList toDoList;
    int choice;

    do {
        cout << "\nToDo List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskName;
                cout << "Enter task name: ";
                cin.ignore();
                getline(cin, taskName);
                toDoList.addTask(taskName);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
                size_t index;
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                toDoList.markTaskAsCompleted(index - 1);
                break;
            }
            case 4: {
                size_t index;
                cout << "Enter task index to remove: ";
                cin >> index;
                toDoList.removeTask(index - 1);
                break;
            }
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}