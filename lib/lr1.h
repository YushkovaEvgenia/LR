#pragma once

#include <vector>
#include <string>

std::pair<int, int> countAndSum(const std::vector<int>& array);

struct result {
	std::vector<std::pair<int, int>> numMas;
	std::vector<std::pair<int, std::string>> errMas;

};

result findPairs(const std::vector<int>& array);