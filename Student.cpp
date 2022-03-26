#include "Student.h"
#include <iostream>
#include <cstring>

// Assign studentId and name
void Student::assignDetails(int pstudentId, const char pname[]) {
  studentId = pstudentId;
  strcpy(name, pname);
}

// Display StudentId and Name
void Student::display() {
  std::cout<<studentId<<std::endl;
  std::cout<<name<<std::endl;
}
