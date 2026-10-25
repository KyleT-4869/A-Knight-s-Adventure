#pragma once
#include <string>
#include <string_view>

using string = std::string;
using string_view = std::string_view;

class Story {
    private:
        int act;
        string content;
    
    public:
        string getContent();
        void setContent(std::string content);
};