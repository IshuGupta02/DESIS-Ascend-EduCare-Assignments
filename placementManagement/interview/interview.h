#include<bits/stdc++.h>
#include<string>
#include "../College/college.h"
#include "../comapny/company.h"
using namespace std;

enum Status{Selected, Rejected, Due};
enum ApplicationType{Internship,FullTime};
enum InterviewType{Technical,HR};

class Application{
  long ApplicationID;
  string Resume;
	int candidateID;
  int companyID;
  ApplicationType applicationType;
	Status currentStatus;
  
  void change_status(Status newstatus){
    this->currentStatus=newstatus;
    
  }

  void print(){
    cout<<"Application ID is "<<ApplicationID<< endl;
    cout<<"Resume link "<<Resume<< endl;
    cout<<"Candidate ID is "<<candidateID<< endl;
    cout<<"Company ID is "<<companyID<< endl;
    cout<<"Current Status is "<<currentStatus<< endl;
    cout<<"Application Type:  "<<applicationType<< endl;

  }
  	//change TotalAccepted field of corresponding company if applicable
};

class Interview{
  long interviewID;
  Candidate interviewer;
  Recruiter interviewee;
  Status currentStatus;
  InterviewType interviewType;
  
  class InterviewSlot{
    string time;
    string date;
  };

  void change_time(string t){
    this->time=t;
    
  }
  void change_date(string d){
    this->date=d;
    
  }
  void change_status(Status newstatus){
    this->currentStatus=newstatus;
    
  }
  void change_interviewee(Recruiter new_recruiter){
    this->interviewee=new_recruiter;
    
  }

  void print(){
    cout<<"Interview ID: "<<interviewID<< endl;
    cout<<"Interviewer: "<<interviewer.userName<< endl;
    cout<<"Interviewer: "<<interviewee.userName<< endl;
    cout<<"Current Status is "<<currentStatus<< endl;
    cout<<"Interview Type:  "<<interviewType<< endl;

  }
  
  
};