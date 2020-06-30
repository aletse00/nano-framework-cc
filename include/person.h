#ifndef PACKAGE_CC_PERSON_H_
#define PACKAGE_CC_PERSON_H_

#include <iostream>
#include <string>

namespace package {

    class Person {
    
        public:
             
            Person();
            Person(const std::string& name, int age);
            ~Person();

            void SetName(const std::string& name);
            void SetAge(int age); 
            
            std::string GetName(); 
            int GetAge();
            
            void displayData();            
            
        private:
            std::string name_;
            int age_;
    };


}  // end namespace package

#endif  // PACKAGE_CC_PERSON_H_
