#include <iostream>
#include <string>
using namespace std;
struct Student {
string name;
string nim;
int age;
};
int main() {
Student s1;
cout << "Enter name: ";
cin >> s1.name;
cout << "Enter NIM: ";
cin >> s1.nim;
cout << "Enter age: ";
cin >> s1.age;
cout << "\n--- Student Data ---\n";
cout << "Name: " << s1.name << endl;
cout << "NIM: " << s1.nim << endl;
cout << "Age: " << s1.age << endl;
return 0;
}
