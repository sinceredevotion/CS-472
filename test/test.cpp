#include <tuple>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>


bool splitString(std::string filePath, std::string delimiter, std::vector<std::string>& v)
{
	std::ifstream infile(filePath);
	bool retVal = true;
	size_t pos = 0;
	std::string token;
	int count = 0;

	try
	{
		for (std::string line; std::getline(infile, line); )
		{
			count = 0;
			while ((pos = line.find(delimiter)) != std::string::npos) 
			{
				count++;
				token = line.substr(0, pos);
				v.push_back(token);
				line.erase(0, pos + delimiter.length());
			}
			if(count == 0)
				throw("");
			v.push_back(line);
		}
	}
	catch(...)
	{
		printf("Error");
		retVal = false;
		v.clear();
	}
	
    
	return retVal;
}

int main()
{
    std::vector<std::string> arr;
    splitString("include/config.cfg", "=", arr);
    int num = 0;
    for (int i = 0; i < arr.size(); i++)
        {
            const char* char_array = arr[i].c_str();
            printf(char_array);
            printf("\n");
        }
}