#include<bits/stdc++.h>
#include<string>
using namespace std;

enum Gender {Male,Female,Other};

class User{

  protected:

  static int totalUsers;
  int userId; //How to allocate User ID?? //static variable count increment in constructor
  string userEmailID; // put checks for email id
  long userContactNumber; // put checks for phone number
  
  public:
  
  string userName;
  Gender gender;

  void change_contactnum(long user_new_num){
    this->userContactNumber=user_new_num;
    
  }

  void print_details(){
    cout<<"UserID: "<<userID<<endl;
    cout<<"UserName: "<<userName<<endl;
    cout<<"Email: "<<userEmailID<<endl;
    cout<<"ContactNumber: "<<userContactNumber<<endl;


    
  }

};