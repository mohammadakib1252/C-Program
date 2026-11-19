#include <iostream>
#include <string> 
using namespace std;

int main(){
    int age;
    string name;
    int totalmarks, chemistry, physics, hindi, english, maths;
    double percentage;

    cout << "enter student name:" << endl;
    cin >> name;

    cout << "enter student age:" << endl;
    cin >> age;

    cout << "enter marks in physics:" << endl;
    cin >> physics;

    cout << "enter marks in chemistry:" << endl;
    cin >> chemistry;

    cout << "enter marks in hindi:" << endl;
    cin >> hindi;

    cout << "enter marks in english:" << endl;
    cin >> english;

    cout << "enter marks in maths:" << endl;
    cin >> maths;

    totalmarks = physics + chemistry + hindi + english + maths;

    int value = totalmarks;
    double number = (int) value;

    percentage = (totalmarks/500.0)*100;

    cout << "student name:" << name << endl;
    cout << "student age:" << age << endl;
    cout << "total marks out of 500: " << totalmarks << endl;
    cout << "percentage: " << percentage << "%" << endl;

    if(percentage>=90){
        cout << "grades = A+" << endl; 
    }
    else if(percentage>=75){
        cout << "grades = A" << endl;
    }
    else if(percentage>=60){
        cout << "grades = b" << endl;
    }
    else if(percentage>=40){
        cout << "grades = c" << endl;
    }
    else {
        cout << "grades = f" << endl;
    }

    if(physics>=33 && chemistry>=33 && hindi>=33 && english>=33 && maths>=33){
        cout << "pass" << endl;
    }
    else{
        cout << "fail" << endl;
    }
    return 0;
}