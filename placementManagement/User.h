#include<bits/stdc++.h>
#include<string>
using namespace std;

enum Gender {Male,Female,Other};

class User{

  protected:

  static int totalUsers;
  int userId; 
  string userEmailID;
  long userContactNumber;
  
  public:
  
  string userName;
  Gender gender;

  User(string email, long ContactNumber, Gender gender, string name){

    totalUsers++;
    this->userId= totalUsers;
    this->userContactNumber= ContactNumber;
    this->gender= gender;
    this->userName= name;
  }

  void change_contactnum(long user_new_num){
    this->userContactNumber=user_new_num;
    
  }

  void print_details(){
    cout<<"UserID: "<<userId<<endl;
    cout<<"UserName: "<<userName<<endl;
    cout<<"Email: "<<userEmailID<<endl;
    cout<<"ContactNumber: "<<userContactNumber<<endl;
  }

};