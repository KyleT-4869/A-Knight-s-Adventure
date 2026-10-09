#pragma once
#include <string_view>
#include <vector>


using string_view = std::string_view;

template<typename T>
using vector = std::vector<T>;

string_view validateInput(string_view input, int limit, vector<string_view> allowedInput);