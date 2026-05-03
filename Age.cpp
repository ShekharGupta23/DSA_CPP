#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >=18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }
    cout << "You are " << age << " years old." << endl;
    return 0;
}