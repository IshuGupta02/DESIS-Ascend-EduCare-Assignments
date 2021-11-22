#include<bits/stdc++.h>
using namespace std;
// #include "enum.h"
enum Status{Selected, Rejected, Due, InProgress};//InProgress
enum ApplicationType{Internship,FullTime};

class Application{
  long ApplicationID;
  string Resume;
	int candidateID;
  int companyID;
  ApplicationType applicationType;
	Status currentStatus;

  Application(
    long ApplicationID,
    string Resume,
    int candidateID,
    int companyID,
    ApplicationType applicationType,
    Status currentStatus){
      this->ApplicationID= ApplicationID;
      this->Resume= Resume;
      this->candidateID= candidateID;
      this->companyID= companyID;
      this->applicationType= applicationType;
      this->currentStatus= currentStatus;

  }
  
  void change_status(Status newstatus){
    this->currentStatus=newstatus;
    
  }


  public:
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