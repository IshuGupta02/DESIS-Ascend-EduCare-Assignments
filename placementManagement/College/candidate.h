#include<bits/stdc++.h>
#include<string>
#include "student.h"
#include "../interview/application.h"
#include "../interview/interview.h"


using namespace std;

class Candidate : protected Student{
  
  private:
  double GPA;
  vector<Application> applications;
  vector<Interview> interviews;
  
  
  Candidate(double gpa, 
  long studentId,Course course,Department department, 
  string email, long ContactNumber, Gender gender, string name
  ): Student( studentId, course, department,
   email, ContactNumber ,  gender,  name  ) {
    
    this->GPA=gpa;
   // Application application;

  }

  public:
   void setGpa(double gpa){
     GPA=gpa;
   }
   int getGpa(double gpa){
    return GPA; 
   }
  void Add_application(Application application)
  {
    this->applications.push_back(application);
    
    
  };

  void remove_application(Application application){
    for(auto i=this->applications.begin();i!=this->applications.end();++i){
      if(*i==application){
        this->applications.erase(i);
        break;
      }
    }
  };

  void print_applications(){
    for(int i=0;i<applications.size();i++){
      cout<<"application "<<i<<endl;
      applications[i].print();
    }
  }

  void show_interviews(){
    for(int i=0;i<interviews.size();i++){
      cout<<"interview "<<i<<endl;
      interviews[i].print();
      
    }
  }

  
  

};