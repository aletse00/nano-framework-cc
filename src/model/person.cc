#include "person.h"

namespace package {
    
    Person::Person(){}
    Person::~Person(){}
    
    Person::Person(const std::string& name,int age){
        name_ = name;
        age_ = age;
   }
   
    // setter
    void Person::SetName(const std::string& name){ name_ = name; }
    void Person::SetAge(int age){ age_ = age; }
    // getters 
    std::string Person::GetName(){ return name_; } 
    int Person::GetAge(){ return age_; }

    void Person::displayData(){
        std::cout << std::endl << ":: Name: " << name_ << " :: Age: " << age_ << std::endl;
    }

}  // end namespace package
