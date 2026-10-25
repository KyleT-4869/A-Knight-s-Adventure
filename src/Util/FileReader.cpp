#include "../../header/Util/FileReader.hpp"
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>


void readScript(Story *story, const char* file) {
    std::ifstream f(file, std::ios::in); 
    
    if(!f.is_open()) {
        throw std::runtime_error("Failed to load scripts");
    }

    std::ostringstream buffer;

    buffer << f.rdbuf();

    story->setContent(buffer.str());

}
