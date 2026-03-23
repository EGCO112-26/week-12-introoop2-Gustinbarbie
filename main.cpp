#include <iostream>
#include <cstdlib>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  if (argc < 2*N + 1) {
    cout << "Usage: " << argv[0] << " name1 age1 name2 age2 name3 age3" << endl;
    return 1;
  }

  student a[N];
  // Set age and set name for all N ppl using argv
  for(int i = 0; i < N; i++) {
    string name = argv[2*i + 1];
    int age = atoi(argv[2*i + 2]);
    a[i].set_name(name);
    a[i].set_age(age);
  }
 
  //2. Print name and age of all N ppl
  cout << "All students:" << endl;
  for(int i = 0; i < N; i++) {
    a[i].display();
  }
  
  //3. Find the youngest person
  int min_age = a[0].get_age();
  for(int i = 1; i < N; i++) {
    if(a[i].get_age() < min_age) {
      min_age = a[i].get_age();
    }
  }
  
  // Collect youngest students
  cout << "Youngest student(s) (age " << min_age << "):" << endl;
  for(int i = 0; i < N; i++) {
    if(a[i].get_age() == min_age) {
      a[i].display();
    }
  }
  
 return 0;
}
  
  


