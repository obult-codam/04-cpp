#include <iostream>
#include <string>
#include <fstream>

bool	replace_first_in_string(std::string &target, std::string to_replace, std::string replace_with)
{
	size_t	found;

	found = target.find(to_replace);
	if (found == std::string::npos)
		return false;
	
	target.erase(found, to_replace.length());
	target.insert(found, replace_with);
	return true;
}

int main(int argc, char **argv)
{
	std::fstream	file;
	std::fstream	result;
	char		tmp;
	std::string		target;
	std::string		file_name;

	if (argc != 4)
		return 1;
	file_name.append(argv[1]);
	file.open(file_name, std::ios::in);
	if (!file)
		return 1;

	while (!file.eof())
	{
		file.get(tmp);
		if (!file.eof())
			target.append(&tmp);
	}

	while (replace_first_in_string(target, argv[2], argv[3]));

	result.open(file_name + ".replace", std::ios::out);

	result << target;

	result.close();
	file.close();
	return 0;
}
