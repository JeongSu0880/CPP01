#include "FileUtil.hpp"
#include "Converter.hpp"

int main(int argc, char *argv[]) {
	
	if (argc != 4)
		return -1;
	FileUtil fileHandler;
	try {
		fileHandler.openFile(argv[1]);
	} catch (const std::runtime_error& e) {
		std::cerr << "Error : " << e.what() << std::endl;
	}
	Converter converter = Converter(argv[2], argv[3]);

	while (true) {
		std::string line = fileHandler.readFile();
		if (line == NULL) 
			break ;
	}
}