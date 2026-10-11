#include "../../header/Gameplay/Story.hpp"

Story::Story() {}

Story::Story(std::string_view value) : content{value} {}

void Story::addToContent(const std::string &moreContent) {
    this->content += moreContent;
    this->content += "\n";
}