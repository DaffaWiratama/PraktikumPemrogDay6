#include <iostream>
#include <string>
using namespace std;
struct Student {
string name;
string nim;
int age;
};
int main() {
Student students[3];
for(int i=0; i<3; i++){
cout << "Enter name: ";
cin >> students[i].name;
cout << "Enter NIM: ";
cin >> students[i].nim;
cout << "Enter age: ";
cin >> students[i].age;
}
cout << "\n--- Student List ---\n";
for(int i=0; i<3; i++){
cout << students[i].name << " ("
<< students[i].nim << "), age: "
<< students[i].age << endl;
}
return 0;
}
