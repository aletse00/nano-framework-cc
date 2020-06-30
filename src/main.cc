// Includes
#include <iostream>
#include <string>

// custom includes
#include "student.h"
#include "view.h"

// namespaces to use
using namespace std; 
using namespace package;
using namespace ui;

int main( int argc, char* argv[] ){ 

    View view;
    view.ShowTitle("Michani M. De La Calleja E. ", "V1.0.0");
    view.ShowMessage("\n\t\t Welcome to Simple-project-cc a simple implementation poo in cpp \n");
    Student student("d4rk6h05t",23,"file structure",100.0);
    student.displayInfo();
    return 0;  
}
