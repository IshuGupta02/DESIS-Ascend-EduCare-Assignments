#include<bits/stdc++.h>
#include<string>
#include "../User.h"
#include "../company/company.h"
#include "../interview/interview.h"


using namespace std;

enum Course{BTech,MTech};
enum Department{CSE,IT,ECE,MAE};

class Student : protected User{
  protected:
  long studentId;

  public:
  Course course;
  Department department;

  void print_details(){
    User::print_details();
    cout<< "Student ID: "<< studentId<<endl;
    cout<< "Course "<<course<<endl;
    cout<< "Department: "<<department<<endl; 
    
  }

};


class Candidate : protected Student{
  
  public:
  double GPA;
  vector<Application> applications;
  vector<Interview> interviews;
  
  Candidate(){
    setDataMembers();
  }

  Candidate(double gpa){
    setDataMembers(gpa);
  }

  void setDataMembers();
  
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

void Candidate::setDataMembers(){

}


class Coordinator : public Student{
  
  string position;
  
  vector <Company> companies;
	  
  void addCompany(Company company){
    this->companies.push_back(company);

  };
  void removeCompany(Company company){
      for(auto i=this->companies.begin();i!=this->companies.end();++i){
        if(*i==company){
          this->companies.erase(i);
          break;
        }

      }
  };
  void changepos(string newpos){
    this->position = newpos;
    
  };
  void change_candidate_gpa(Candidate candidate, double new_gpa){
    candidate.GPA=new_gpa;
    
  };

  void print_companies(){
    for(int i=0;i<companies.size();i++){
      cout<<"company "<<i<<endl;
      companies[i].print();
    }
  }

  void Add_interview(Interview interview)
  {
    interview.interviewer.interviews.push_back(interview);
    interview.interviewee.interviews.push_back(interview);   
    
  };

  void remove_interview(Interview interview){
    for(auto i=interview.interviewer.interviews.begin();i!=interview.interviewer.interviews.end();++i){
      if(*i==interview){
        interview.interviewer.interviews.erase(i);
        break;
      }
    }

    for(auto i=interview.interviewee.interviews.begin();i!=interview.interviewee.interviews.end();++i){
      if(*i==interview){
        interview.interviewee.interviews.erase(i);
        break;
      }
    }


  };
  
};