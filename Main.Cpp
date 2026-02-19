#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    std::string indexNumber;
    std::string name;
    Student(std::string idx, std::string n) : indexNumber(idx), name(n) {}
    void display() {
        std::cout << "Index: " << indexNumber << ", Name: " << name << "\n";
    }
};

std::vector<Student> students;

void addStudent() {
    std::string idx, name;
    std::cout << "Enter Index Number: ";
    std::cin >> idx;
    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    students.emplace_back(idx, name);
}

void viewStudents() {
    for (auto& s : students) s.display();
}

int main() {
    int choice;
    do {
        std::cout << "1. Add Student\n2. View Students\n3. Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
        }
    } while (choice != 3);
    return 0;
}
void addStudent() {
    std::string idx, name;
    std::cout << "Enter Index Number: ";
    std::cin >> idx;
    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    if (idx.empty() || name.empty()) {
        std::cout << "Invalid input. Please try again.\n";
        return;
    }
    students.emplace_back(idx, name);
}
int main() {
    int choice;
    do {
        std::cout << "1. Add Student\n2. View Students\n3. Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);
    return 0;
}

int main() {
    int choice;

    do {
        cout << "\n==== DIGITAL ATTENDANCE SYSTEM ====\n";
        cout << "1. Create Lecture Session\n";
        cout << "2. View Sessions\n";
        cout << "0. Exit\n";
        cout << "Select Option: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Create Session selected.\n";
                break;
            case 2:
                cout << "View Sessions selected.\n";
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid option!\n";
        }

    } while(choice != 0);

    return 0;
}
