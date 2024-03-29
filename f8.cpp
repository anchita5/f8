#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct MyData
{
	int howMany;
	char theText[21];
	char directoryPath[21];
	char filename[21];
};
int main(int argc, char* argv[])
{
	if (argc != 5)
	{
		printf("Error");
		return -1;
	}

	if ((strlen(argv[2]) > 20))
	{
		printf("Error: Text input is longer than 20 characters");
		return -1;
	}
	else if ((strlen(argv[3]) > 20))
	{
		printf("Error: Destination path longer than 20 characters");
	}
	else if ((strlen(argv[4]) > 20))
	{
		printf("Error: File name greater than 20 characters");
	}

	return 0;
}