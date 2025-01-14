#include"Classes.h"

// Consturctors for Person, Student and Faculty classes
Person::Person(){
    this->name = "";
    this->email = "";
    this->address = "";
    this->dob = "";
    this->gender = false;
}
Person::Person(string name, string email, string address, string dob, bool gender){
    this->name = name;
    this->email = email;
    this->address = address;
    this->dob = dob;
    this->gender = gender;
}

Student::Student(){
    this->name = "";
    this->email = "";
    this->address = "";
    this->dob = "";
}
Student::Student(string name, string email, string address, string dob, bool gender, string rollNo, string classSection, string password){
    this->name = name;
    this->email = email;
    this->address = address;
    this->dob = dob;
    this->gender = gender;
    this->rollNo = rollNo;
    this->classSection = classSection;
    this->password = password;
}
Student::Student(Person p, string rollNo, string classSection, string password){
    this->name = p.name;
    this->email = p.email;
    this->address = p.address;
    this->dob = p.dob;
    this->gender = p.gender;
    this->rollNo = rollNo;
    this->classSection = classSection;
    this->password = password;
}

Faculty::Faculty(){
    this->name = "";
    this->email = "";
    this->address = "";
    this->dob = "";
}
Faculty::Faculty(string name, string email, string address, string dob, bool gender, string empId, string password,/*vector<string> subjectsTaught*/ int accessLevel){
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
Faculty::Faculty(Person p, string empId, string password,/*vector<string> subjectsTaught*/ int accessLevel){
    this->name = p.name;
    this->email = p.email;
    this->address = p.address;
    this->dob = p.dob;
    this->gender = p.gender;
    this->empId = empId;
    this->password = password;
    this->accessLevel = accessLevel;
    // this->subjectsTaught = subjectsTaught;
}