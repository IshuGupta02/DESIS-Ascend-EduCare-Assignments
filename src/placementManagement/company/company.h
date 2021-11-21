#include<bits/stdc++.h>
#include<string>
#include "../User.h"
#include "../interview/interview.h"
using namespace std;

enum TypeOfInterviewer{Technical,HR};

class Recruiter : protected User {
  long companyId; 
  // vector<Application> applications;
  vector<Interview> interviews;
  
  public:

  string companyName;
  TypeOfInterviewer typeOfInterviewer;
  
  Recruiter(){
    setDataMembers();
    
  }

  void setDataMembers();

  void show_interviews(){
    for(int i=0;i<interviews.size();i++){
      cout<<"interview "<<i<<endl;
      interviews[i].print();
      
    }
  }
  
};

void Recruiter::setDataMembers(){

}
class Company{
  string company_name;
  vector<Recruiter> rec;
  vector<Application> applications;

  void print(){
    cout<<company_name<<endl;
  }

  void print_applications(){
    for(int i=0;i<applications.size();i++){
      cout<<"application "<<i<<endl;
      applications[i].print();
    }
  }
   
};