#include<bits/stdc++.h>
#include "../College/student.h"
#include "../interview/interview.h"
#include<string>
using namespace std;

enum TypeOfInterviewer{technical,hr};

class Recruiter : protected User {
  long companyId; 
  vector<Interview> interviews;
  
  public:

  TypeOfInterviewer typeOfInterviewer;
  
  Recruiter(long companyId ,TypeOfInterviewer typeOfInterviewer,
  string email, long ContactNumber, Gender gender, string name
  ): User(email, ContactNumber, gender, name) {
    this-> companyId= companyId;
    this-> typeOfInterviewer= typeOfInterviewer;
  }

  void show_interviews(){
    for(int i=0;i<interviews.size();i++){
      cout<<"interview "<<i<<endl;
      interviews[i].print();
      
    }
  }
  
};
