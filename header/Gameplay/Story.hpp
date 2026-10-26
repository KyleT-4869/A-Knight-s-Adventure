#pragma once
#include <string>
#include <string_view>

using string = std::string;
using string_view = std::string_view;

class Story {
    private:
        int act;
        int currentLocation;
        string content;
    
    public:
        Story();
        string getContent();
        void setContent(string &content);
};