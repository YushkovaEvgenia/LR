#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <ctime>

struct result {
	std::vector<std::pair<int, int>> numMas;
	std::vector<int> errMas;
};

struct test {
	std::string testname;
	std::vector<int> array;
	result waitingResult;
	result realResult;
};

std::vector<int> generate(int n);


result findPairs(const std::vector<int>& array);

bool check(result waitingResult, result realResult);

std::vector<std::string> split(std::string line, char c);

void writeInFile(std::string file, std::vector<int> input, result waitingResult);

void writeInFile(test testdata);

test readFromFile(std::string file);

result findPairs2(const std::vector<int>& array);

