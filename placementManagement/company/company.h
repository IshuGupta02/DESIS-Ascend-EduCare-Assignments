#include<bits/stdc++.h>
#include<string>
#include "../interview/application.h"
#include "recruiter.h"
using namespace std;

class Company{
  long companyId;
  string company_name;
  vector<Recruiter> rec;
  vector<Application> applications;
  Company(long companyId, string name){
    this->companyId=companyId;
    this->company_name=name;
    

  }

  public:

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