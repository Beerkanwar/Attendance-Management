#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    string email;
    string address;
    string dob;
    bool gender;
    Person();
    Person(string name, string email, string address, string dob, bool gender);
};

class Student : public Person{
public:
    string rollNo;
    string classSection;
    string password;
    vector<string> subjectsEnrolled;
    Student();
    Student(string name, string email, string address, string dob, bool gender, string rollNo, string classSection, string password);
    Student(Person p, string rollNo, string classSection, string password);
};

class Faculty : public Person{
public:
    string empId;
    string password;
    int accessLevel;
    vector<string> subjectsTaught;
    Faculty();
    Faculty(string name, string email, string address, string dob, bool gender, string empId, string password,/*vector<string> subjectsTaught*/ int accessLevel);
    Faculty(Person p, string empId, string password,/*vector<string> subjectsTaught*/ int accessLevel);
};