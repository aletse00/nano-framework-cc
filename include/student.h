#ifndef PACKAGE_CC_STUDENT_H_
#define PACKAGE_CC_STUDENT_H_

#include <iostream>
#include <string>

#include "person.h"

namespace package {

    class Student : public Person {
    
        public:
             
            Student();
            Student(const std::string& name, int age, const std::string& subject, float grade);
            ~Student();

            void SetSubject(const std::string& subject);
            void SetGrade(float grade); 
            
            std::string GetSubject(); 
            float GetGrade();

            void displayInfo();
            
        private:
            std::string subject_;
            float grade_;
    };

}  // end namespace package

#endif  // PACKAGE_CC_STUDENT_H_
