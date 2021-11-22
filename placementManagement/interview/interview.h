#include<bits/stdc++.h>
using namespace std;
#include<string>

enum Statusi{selected, rejected, due, inProgress};


enum InterviewType{Technical,HR};

class InterviewSlot{
  string time;
  string date;
};


class Interview{
  long interviewID;
  long intervieweeID;
  long interviewerID;
  Statusi currentStatus;
  InterviewType interviewType;
  InterviewSlot slot;
  

  void change_interviewslot(InterviewSlot slot){
    this->slot= slot;
    
  }
  void change_status(Statusi newstatus){
    this->currentStatus=newstatus;
    
  }
  void change_interviewee(long intervieweeID){
    this->intervieweeID=intervieweeID;
    
  }

  Interview(
    long interviewID,
    long interviewee,
    long interviewer,
    Statusi currentStatus,
    InterviewType interviewType,
    InterviewSlot slot
  )
  {
    this-> interviewID= interviewID;
    this-> interviewerID= interviewer;
    this-> intervieweeID= interviewee;
    this-> currentStatus= currentStatus;
    this-> interviewType= interviewType;
    this-> slot= slot;

  }

  public:
  void print(){
    cout<<"Interview ID: "<<interviewID<< endl;
    cout<<"InterviewerID: "<<interviewerID<< endl;
    cout<<"Current Status is "<<currentStatus<< endl;
    cout<<"Interview Type:  "<<interviewType<< endl;
  }
  
};

