#include "Converter.hpp"

Converter::Converter(std::string s1, std::string s2) : mStr1(s1), mStr2(s2) {} 

Converter::~Converter() {}

bool Converter::isDetected(std::string line) {
	if (line.find(mStr1) == std::string::npos)
		return false;
	return true;
}

std::string Converter::newString(std::string line) {
	std::string tmp = line;
	size_t	idx;

	idx = tmp.find(mStr1);
	while (idx != std::string::npos) {
		tmp.erase(idx, idx + mStr1.size());
		tmp.insert(idx, mStr2);
		idx = tmp.find(mStr1);
	}
	return tmp;
}