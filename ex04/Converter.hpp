#ifndef CONVERTER_H
# define CONVERTER_H
# include <iostream>
# include <string>

class Converter
{
	private :
		std::string mStr1;
		std::string mStr2;
	public :
		Converter(std::string s1, std::string s2);
		~Converter();

		bool isDetected(std::string line);
		std::string newString(std::string line);

};

#endif