// PaymetricApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 7)
	{
		cout << "Not enough parameters provided" << endl;
		return 0;
	}

	int w, h;
	string traversal;
	if (string(argv[1]) == "-width")
		w = atoi(argv[2]);
	else
	{
		cout << "Width is required as a parameter" << endl;
		return 0;
	}

	if (string(argv[3]) == "-height")
		h = atoi(argv[4]);
	else
	{
		cout << "Height is required as a parameter" << endl;
		return 0;
	}

	if (string(argv[5]) == "-traverse")
		traversal = string(argv[6]);
	else
	{
		cout << "Traversal order is a required parameter" << endl;
		return 0;
	}

	if (traversal != "toptobottom")
	{
		cout << "Traversal order can only have a value of \"toptobottom\" " << endl;
		return 0;
	}

	vector<vector<char>> m;
	

	if (w*h > 26)
		cout << "w*h cannot be greater than 26";
	else
	{
		for (int i = 0; i < h; i++)
		{
			vector<char> row;
			for (int j = 0; j < w; j++)
			{
				int value = 65 + i*w + j;				
				row.push_back(char(value));
				cout << row[j] << " ";
			}
			m.push_back(row);
		}
	}
	return 1;
}

