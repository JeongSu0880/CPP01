#include "FileUtil.hpp"

FileUtil::FileUtil() {}

FileUtil::~FileUtil() {
	mInputFile.close();
	mOutputFile.close();
}

void	FileUtil::openFile(std::string fileName) {
	const char *file = fileName.c_str();
	mInputFile.open(file);
	if (!mInputFile) {
		throw std::runtime_error("Unable to open file: " + fileName);
	} 
	std::string tmp = fileName + ".replace";
	const char *replaceFile = tmp.c_str();
	mOutputFile.open(replaceFile);
}

// FileUtil::FileUtil(std::string fileName) {
// 	mInputFile.open(fileName);
// 	if (!mInputFile) {
// 		throw std::runtime_error("Unable to open file: " + fileName);
// 	} 
// 	mOutputFile.open(fileName + ".replace");
// }

bool FileUtil::readFile(std::string &line) {

	if (std::getline(mInputFile, line))
		return true;
	return false;
}

void	FileUtil::writeFile(std::string newLine) {
	mOutputFile << newLine << '\n';
}