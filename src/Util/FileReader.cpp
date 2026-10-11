#include <iostream>
#include <string>
#include <fstream>
#include "../../header/Util/FileReader.hpp"

Story *readScript() {
    std::fstream script{"../../script/ACT1/beginning.txt", std::ios::in};

    if(!script.is_open()) {
        return nullptr;
    }
    else {
        Story *story = new Story();
        std::string scriptContent;

        while(std::getline(script, scriptContent)) {
            story->addToContent(scriptContent);
        }

        script.close();
        return story;

        
    }
}
