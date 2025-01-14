#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    string email;
    string address;
    string dob;
    bool gender;
    Person(){}
    Person(string name, string email, string address, string dob, bool gender){
        this->name = name;
        this->email = email;
        this->address = address;
        this->dob = dob;
        this->gender = gender;
    }
};

class Student : public Person{
public:
    string rollNo;
    string classSection;
    string password;
    vector<string> subjectsEnrolled;
    Student(string name, string email, string address, string dob, bool gender, string rollNo, string classSection, string password){
        this->name = name;
        this->email = email;
        this->address = address;
        this->dob = dob;
        this->gender = gender;
        this->rollNo = rollNo;
        this->classSection = classSection;
        this->password = password;
    }
};

class Faculty : public Person{
public:
    string empId;
    string password;
    int accessLevel;
    vector<string> subjectsTaught;
    Faculty(string name, string email, string address, string dob, bool gender, string empId, string password,/*vector<string> subjectsTaught*/ int accessLevel){
        this->name = name;
        this->email = email;
        this->address = address;
        this->dob = dob;
        this->gender = gender;
        this->empId = empId;
        this->password = password;
        this->accessLevel = accessLevel;
        // this->subjectsTaught = subjectsTaught;
    }
};