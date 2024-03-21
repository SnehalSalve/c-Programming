//input output
//A file is a container in computer storage devices used for storing data.

//syntax of creating file
// ptr = fopen("fileopen","mode");
//fopen()

#include <stdio.h>
#include <stdlib.h>

int main()
{

	// pointer demo to FILE
	FILE* demo;

	// Creates a file "demo_file"
	// with file access as write-plus mode
	demo = fopen("demo_file.txt", "w+"); // w+ is for Open both reading and writing

	// adds content to the file
	fprintf(demo, "%s", "c learning");

	// closes the file pointed by demo
	fclose(demo);

    //to delete a file
    // if (remove("demo_file.txt") == 0)
    //     printf("Deleted successfully");
    // else
    //     printf("Unable to delete the file");

	return 0;
}
