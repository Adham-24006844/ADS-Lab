//Task1 create a student with id, name and email in a dynamic way
#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    string email;
};

int main()
{
    Student student[5];

    for (int i = 0; i < 5; i++) {
        cout<< "Student " << i+1 << "\nStudent id: ";
        cin >> student[i].id;
        cout<< "Student name: ";
        cin >> student[i].name;
        cout<< "Student email: ";
        cin >> student[i].email;
        cout<< "\n";
    }


    for (int i = 0; i < 5; i++) {
        cout << student[i].id << '\n' << student[i].name << '\n' << student[i].email << "\n\n";
    }

    return 0;
}
