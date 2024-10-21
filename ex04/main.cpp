#include "FileUtil.hpp"
#include "Converter.hpp"

int main(int argc, char *argv[]) {
	
	if (argc != 4)
	{
		std::cerr << "Error : invalid arguments" << std::endl;
		return -1;
	}
	FileUtil fileHandler;
	try {
		fileHandler.openFile(argv[1]);
	} catch (const std::runtime_error& e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	Converter converter = Converter(argv[2], argv[3]);

	while (true) {
		std::string line;
		if (!fileHandler.readFile(line))
			break ;
		if (converter.isDetected(line))
			line = converter.newString(line);
		fileHandler.writeFile(line);
	}
}