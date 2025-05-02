#include <iostream>
#include <string>
using namespace std;

// Class definition with encapsulation
class Person {
private:
    string name;

public:
    
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Method to input name from user
    void inputName() {
        cout << "Enter your name: ";
        cin >> name;
    }

    // Method to greet
    void greet() {
        cout << "Hello, " << name << "!" << endl;
    }
};

// Derived class using inheritance
class Student : public Person {
private:
    int rollNumber;

public:
    void setRollNumber(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

    void showDetails() {
        cout << "Name: " << getName() << ", Roll Number: " << rollNumber << endl;
    }
};

class MyClass {
    public:
        virtual void display();  // Matches: VIRTUAL type_specifier IDENTIFIER '(' parameter_list_opt ')' ';'
    };
    
 class MyClass {
    public:
        virtual void show() {
            cout<<"test"<<endl;
        }  // Matches: VIRTUAL type_specifier IDENTIFIER '(' parameter_list_opt ')' compound_stmt
        };
        
// Function declarations
void greetUser();
int add(int a, int b);
int factorial(int n);

int main() {
    Student user;

    int num1, num2;
    greetUser(); // Call void function

    user.inputName();  // Inherited input
    user.greet();      // Inherited greeting

    // Demonstrate Student-specific functionality
    int roll;
    cout << "Enter your roll number: ";
    cin >> roll;
    user.setRollNumber(roll);
    user.showDetails();

    /* Simple addition
    of num1 and num2*/
    cout << "Enter two integers to add: ";
    cin >> num1 >> num2;
    int result = add(num1, num2);
    cout << "Sum = " << result << endl;

    // Factorial using function
    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    // Array and loop
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    //Implementing try block
    try {
        cout << "Trying risky operation..." << endl;
        throw 5;
    } catch (int e) {
        cout << "Caught exception: " << e << endl;
    }


    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definitions

void greetUser() {
    cout << "Welcome to the basic C++ program!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
