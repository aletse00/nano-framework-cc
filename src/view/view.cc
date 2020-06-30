#include "view.h"

namespace ui {

    View::View(){}
    View::~View(){}
    
    void View::Clear(){ system("clear"); }
    
    void View::ShowTitle(const std::string & author,const std::string & version){ 
        std::cout << "\t\t::  Simple-Project-CC " << version << std::endl
                  << "\t\t:: By: " << author << std::endl
                  << std::endl;
    }

    void View::ShowMessage(const std::string & str ){ std::cout << str;  }

}  // end namespace ui
