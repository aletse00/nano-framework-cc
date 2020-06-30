#ifndef UI_CC_VIEW_H_
#define UI_CC_VIEW_H_

#include <iostream>
#include <iomanip>    
#include <sstream>
#include <string>

namespace ui {

    class View {
        public:
            View();
            ~View();
            void Clear();
            void ShowTitle(const std::string & author,const std::string & version);
            void ShowMessage(const std::string & str );
    };

}  // end namespace ui

#endif  // UI_CC_VIEW_H_
