#pragma once
#include <string>
#include <vector>
#include <string_view>

class Story {
    private:
        std::string content;
        std::vector<std::string_view> currentStory;
    
    public:
        Story();
        Story(std::string_view content);
        void addToContent(const std::string &moreContent);
};