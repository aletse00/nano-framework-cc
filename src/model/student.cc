#include "student.h"

namespace package {

    // Constructors & destructosr
    Student::Student(){}
    Student::~Student(){}
    
    Student::Student(const std::string& name, int age, const std::string& subject, float grade): Person( name, age ){ 
        subject_ = subject; 
        grade_   = grade;
    }
    
    // Setters
    void Student::SetSubject(const std::string& subject){ subject_ = subject; }
    void Student::SetGrade(float grade){ grade_ = grade; }
    
    // Getters
    std::string Student::GetSubject(){ return subject_;}
    float Student::GetGrade(){ return grade_;}
    
    void Student::displayInfo(){
        Person::displayData();
        std::cout << std::endl << ":: Subject: " << subject_ << " :: Grade: " << grade_ << std::endl;
    }

}  // end namespace package
