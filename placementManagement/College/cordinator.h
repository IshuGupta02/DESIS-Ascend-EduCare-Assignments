#include<bits/stdc++.h>
#include<string>
#include "../company/company.h"
#include "candidate.h"
using namespace std;

enum Position{Senior,Junior};

class Coordinator : public Student{
  
  Position position;//enum 
  
  vector <Company> companies;
  Coordinator(Position pos,
    long studentId,Course course,Department department, 
    string email, long ContactNumber, Gender gender, string name):
    Student( studentId, course, department,email, ContactNumber ,  gender,  name  ){
    this->position=pos;
  }
	  
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
  void changepos(Position newpos){
    this->position = newpos;
    
  };
  void change_candidate_gpa(Candidate candidate, double new_gpa){
    candidate.setGpa(new_gpa);
    
  };

  void print_companies(){
    for(int i=0;i<companies.size();i++){
      cout<<"company "<<i<<endl;
      companies[i].print();
    }
  }
  void add_interview(Interview interview, Candidate c, Recruiter r)
  {
    c.interviews.push_back(interview);//to avoid dot operators we should use get and set methods
    r.interviews.push_back(interview);
    
  };

  void remove_interview(Interview interview, Candidate c, Recruiter r){
    for(auto i=r.interviews.begin();i!=r.interviews.end();++i){
      if(*i==interview){
        r.interviews.erase(i);//to avoid dot operators we should use get and set methods
        break;
      }
    }

    for(auto i=c.interviews.begin();i!=c.interviews.end();++i){
      if(*i==interview){
        c.interviews.erase(i);//to avoid dot operators we should use get and set methods
        break;
      }
    }


  };
  
};