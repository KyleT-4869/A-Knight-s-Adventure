#include <iostream>
#include "../../header/InputHandler/InputHandler.hpp"

string_view validateInput(string_view input, int limit, vector<string_view> allowedInput) {
    if(input.size() > limit) {
        return "Not match";
    }
    else {
        for(int i = 0; i = allowedInput.size(); i++) {
            if(input == allowedInput[i]) {
                return input;
            }
        }

        return "Command not match";
    }
}