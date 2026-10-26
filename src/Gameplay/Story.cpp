#include "../../header/Gameplay/Story.hpp"

Story::Story() {}

string Story::getContent() {
    return this->content;
}

void Story::setContent(string &content) {
    this->content = content;
}