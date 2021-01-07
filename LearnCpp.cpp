#include <iostream>  //Preprocessor Command
#include <string>    // To Use String Functions
using namespace std; // If this is not used, Use std::cout

// LoremIpsum.cpp
void LoremIpsum()
{
    cout << "Lorem Ipsum" << endl; // cout: Console/Character Output;;endl:endline
    std::cout << "Lorem2";         // If using namespace std; is not declared earlier
}

void DataTypes()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}

void UserInput()
{
    int a, b;
    cout << "Enter First Number: " << endl;
    cin >> a;
    cout << "Enter Second Number: " << endl;
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << (float)a / b << endl; // Typecasted to Float DataType
}

void conditionals()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can Drive as well Vote!";
    }
    else if (age < 18 & age >= 16)
    {
        cout << "You cannot Vote but can apply for Learners License!";
    }
    else
    {
        cout << "You can neither Vote nor Drive!";
    }
}

void usingSwitch()
{
    int age;
    cout << "Enter You Age:" << endl;
    cin >> age;
    switch (age)
    {
    case 17:
        cout << "Wait till You get 18 Years Old";
        break;
    case 18:
        cout << "You Can Vote";
        break;
    case 19:
        cout << "Apply for Voter ID if You Haven't Yet";
        break;

    default:
        cout << "You are not of 17, 18 or 19 Years";
        break; // Break statement not required in Default Switch
    }
}

void whileloop()
{
    int count;
    count = 10;
    while (count >= 0)
    {
        cout << "Count: " << count << endl;
        count--;
    }
}

void dowhileloop()
{
    int count = 0;
    do
    {
        cout << "Although Given Condition is False, Do is being Executed";
    } while (count != 0);
}

void forloop()
{
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        cout << "Count: " << i << endl;
    }
}

void arrays()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array Size Undeclared
    cout << "Array element of arr1 at Index 2 is " << arr1[2] << endl;
    cout << "Array element of array2 at Index 9 is " << array2[9] << endl;
    // Taking Input from User using For Loop
    int marks[6];
    for (int i = 1; i < 6; i++)
    {
        cout << "Enter Marks of " << i << "th Student: " << endl;
        cin >> marks[i];
    }
    // Printing Arrays Values taking from User using For Loop
    for (int i = 1; i < 6; i++)
    {
        cout << "Marks of " << i << "th Student: " << marks[i] << endl;
    }
}

void dimensional_array()
{
    int arr2d[2][3] = {//[row][column]
                       {1, 2, 3},
                       {4, 5, 6}};
    // Printing 2 Dimensional Array using For Loop
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The Value at " << i << ", " << j << " is " << arr2d[i][j] << endl;
        }
    }
}

void string_datatype()
{
    string name = "Name"; // Declaring String DataType
    cout << "String function has printed: " << name << endl;
    cout << "The Length of String " << name << "is: " << name.length() << endl; // Printing Length of Characters in String Variable osing length()
    cout << "The SubString of " << name << "is " << name.substr(0, 3) << endl;  // Printing First 3 Characters of String Variable Value
    cout << "" << endl;
}

void pointer()
{
    // A pointer is a variable that stores the memory address as its value.
    int a = 10;
    // Pointers are declared using an Asterisk (*)
    int *ptra; //Declaring Pointer of Variable using *
    ptra = &a;
    cout << "The Value of a is " << a << endl;
    cout << "The Value of a is " << *ptra << endl;
    cout << "The Address of a is " << &a << endl;
    cout << "The Address of a is " << ptra << endl;
}

class Employee
{
public: // Access Specifier: Anyone can Access even Outside of the Class;; Other Options: Private Protected
    string name;
    int salary;
    // Constructor::Whenever class Employee is called, function Employee will also be called
    Employee(string ename, int esalary, int esecret_pass)
    {
        this->name = ename;
        this->salary = esalary;
        this->secret_pass = esecret_pass;
    }

    void displayDetails() // Object
    {
        // this.attribute is used to write class at the place of attribute
        cout << "The Name of First Employee is " << this->name << " and his Salary is: " << this->salary << " Dollars" << endl;
    }
    void get_secret_pass()
    {
        cout<<"The Secret Pass of Employee is "<<this->secret_pass;
    }

private:
int secret_pass;

    /*
    // Write the Below Code under int main() to call class Employee
    int main()
    {
        Employee user("user_name by constructor", 999, 12345); // (name,salary,secret)
        // user.name = "user_name";
        // user.salary = 10000;
        user.displayDetails();
        user.get_secret_pass();
        // cout<<"The Name of First Employee is "<< user.name <<" and his Salary is: "<< user.salary << endl;
        
        
        return 0;
    */
}; // Semi-colon required when ending class


int main()
{
    return 0;
}
