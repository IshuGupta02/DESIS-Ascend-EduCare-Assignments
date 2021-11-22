#include<bits/stdc++.h>
#include<string>
#include "../User.h"
using namespace std;
enum Course{BTech,MTech};
enum Department{CSE,IT,ECE,MAE};


class Student : protected User{
  protected:
  long studentId;

  public:
  Course course;
  Department department;
  
  Student(long studentId,Course course,Department department,
  string email, long ContactNumber, Gender gender, string name
  ): User(email, ContactNumber, gender, name){
    
    this->studentId=studentId;
    this->course=course;
    this->department = department;
    

  }

  void print_details(){
    User::print_details();
    cout<< "Student ID: "<< studentId<<endl;
    cout<< "Course "<<course<<endl;
    cout<< "Department: "<<department<<endl; 
    
  }

};

