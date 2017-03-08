#include "GameOfLife.h"
int readInFile(Grid grid) {
	{
		FILE * inFileHandle = NULL;
		int height;
		int width;
		int successful = 1;
		char fileName[FILENAME_MAX] = "";

		do {
			printf("\nPLease enter the file name: ");
			//read in the data from a file
			fgets(fileName, FILENAME_MAX, stdin);
			if (fileName[strlen(fileName) - 1] == '\n')
				fileName[strlen(fileName) - 1] = '\0';
			else
				while (getchar() != '\n');
			inFileHandle = fopen(fileName, "r");
			//check if it is empty or not
			if (inFileHandle == NULL)
				printf("The program could not open the %s file.\n"
					"Please try again!", fileName);
		} while (inFileHandle == NULL);
		//scan in the table from the file in to an array
		for (height = 0; height < HEIGHT; height++) {
			for (width = 0; width < WIDTH; width++) {
				fscanf(inFileHandle, "%d", &grid[CURRENT][height][width]);
			}
		}
		fclose(inFileHandle);
		return successful;
	}
}