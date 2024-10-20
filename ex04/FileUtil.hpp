#ifndef FILEUTIL_H
# define FILEUTIL_H
# include <fstream>
# include <iostream>

class FileUtil
{
	private :
		std::ifstream mInputFile;
		std::ofstream mOutputFile;

	public :
		FileUtil();
		// FileUtil(std::string fileName);
		~FileUtil();

		void		openFile(std::string fileName);
		std::string readFile();
		void		writeFile(std::string str);
};

#endif