#include "replace.hpp"

Replace::Replace(const std::string &filename, const std::string &s1, const std::string &s2):
	filename(filename), s1(s1), s2(s2) {}

int		Replace::readFile()
{
	std::ifstream File(filename.c_str());
	if (!File.good())
    {
        std::cerr << "Error: The file '" << filename << "' does not exist." << std::endl;
        return 1;
    }
	if (!File.is_open())
	{
		std::cerr << "Error: cannot open file '" << filename << "'." << std::endl;
		return (1);
	}
	content.assign(std::istreambuf_iterator<char>(File), std::istreambuf_iterator<char>());
	File.close();
	return (0);
}


void	Replace::replaceStrings()
{
	size_t	pos;

	if (s1.empty())
	{
		std::cerr <<  "Error: s1 cannot be empty." << std::endl;
		return ;
	}
	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
        pos += s2.length();
    }
}

int		Replace::writeFile() const
{
	std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile.is_open())
	{
        std::cerr << "Error: cannot open replaced file!" << std::endl;
        return 1;
	}
	outFile << content;
	outFile.close();
    return 0;
}