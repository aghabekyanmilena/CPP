#pragma once

#include <iostream>
#include <fstream>
#include <string>

int checkArgs(int argc, char **argv);
int searchandreplace(const std::string filename, const std::string s1, const std::string s2);