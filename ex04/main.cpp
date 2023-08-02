#include <fstream>
#include <iostream>

void	replace(char **av, std::string str)
{
	std::ofstream	outfile;
	std::string		newAv2 = av[2];
	std::string		newAv3 = av[3];
	size_t			pos;

	if (newAv2.empty() || newAv3.empty())
	{
		std::cerr << "ERROR: Cannot replace empty string" << std::endl;
		return ;
	}
	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		std::cerr << "ERROR: Cannot create outfile" << std::endl;
		return ;
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		pos = str.find(newAv2, i);
		if (pos != 18446744073709551615UL && pos == i)
		{
			outfile << newAv3;
			i += newAv2.length() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
}

int	main(int ac, char **av)
{
	char			c;
	std::ifstream	file;
	std::string		str;

	if (ac != 4)
	{
		std::cerr << "USAGE: replace <file> word_to_replace new_word" << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (file.fail())
	{
		std::cerr << "ERROR: " << av[1] << " : " << "Cannot open the file." << std::endl;
		return (1);
	}
	while(!file.eof() && file >> std::noskipws >> c)
		str += c;
	file.close();
	replace(av, str);
	return (0);
}
