#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
    char name[100];
    int age;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};
class Professor: public Person{
    int publications;
    int cur_id;
    static int total;
    public:
    Professor(){
        this->total++;
        this->cur_id = this->total;
    }
    void getdata(){
        cin >> name >> age >> publications;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << this->cur_id << endl;
    }
};
class Student: public Person{
    int marks[6];
    int cur_id;
    static int total;
    public:
    Student(){
        this->total++;
        this->cur_id = this->total;
    }
    void getdata(){
        cin >> name >> age;
        for(int i=0;i<6;i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        cout << name << " " << age << " ";
        int sum = 0;
        for(int i=0;i<6;i++){
            sum = sum + marks[i];
        }
        cout << sum << " " << this->cur_id << endl;
    }
};
int Student::total;
int Professor::total;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
