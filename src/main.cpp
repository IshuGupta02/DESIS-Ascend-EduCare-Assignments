#include<bits/stdc++.h>
#include<string>
#include "placementManagement/User.h"
#include "placementManagement/College/college.h"
#include "placementManagement/company/company.h"
#include "placementManagement/interview/interview.h"

using namespace std;

int main() {
	cout << "Welcome to the Placement Cell!" <<endl;
  int option;
  inputDesignation:
    cout << "What is your designation?" <<endl;
    cout << "1 . Recruiter" <<endl;
    cout << "2 . Candidate" <<endl;
    cout << "3 . Coordinator" << endl;
    cin >> option;
    switch(option){
      case 1: Recruiter r = new Recruiter();
              break;
      case 2: Candidate c = new Candidate();
              break;
      case 3: Coordinator c = new Coordinator();
              break;
      default: goto inputDesignation;
    }
	return 0;
}
