#include<stdio.h>

int main(){

	FILE *fp;								//Declaring a FILE pointer

	//Opening the file
	fp = fopen("FILE.txt", "w");			//Assigning FILE pointer an address(name) of our file and mode of use in double quotes.
	int x = 10;								//Here "w" stands for writting only. if file does not exist it will create it by itself.
											//		"r" stands for read only. file must be existing compulsary.
											//		"a" stands for append only(writes file without removing previuosly present content).  if file does not exist it will create it by itself.
											//		"r+" stands for read + Write. But when you complete your Writting/Reading part dont forget to use rewind(fp) function unless it won't work.
											//		"w+" stands for write + read. But when you complete your Writting/Reading part dont forget to use rewind(fp) function unless it won't work.
											//		"a+" stands for append + read.  But when you complete your Writting/Reading part dont forget to use rewind(fp) function unless it won't work.


	//Saving Data to FILE.txt
	fprintf(fp ,"Hello World %d", x); 		//Saving data to file by using fprintf( file_pointer ,"Format_specifiers" , Arguments);
	fclose(fp);								//Closing file by using fclose( file_pointer ) function.Closing file after use is considered as a good practice.


	//Opening the file
	fp = fopen("FILE.txt", "r");			//Using FILE.txt in "r"(read mode).


	int y;									//An integer buffer to save scanned(readed) value from file.
	char first[10];							//An character array buffer to save scanned(readed) value from file.
	char second[10];							//An character array buffer to save scanned(readed) value from file.

	//Reading Data from FILE.txt
	fscanf(fp, "%s%s%d", first, second, &y);	//Scaing(reading) two strings and one integer value from file using fscanf( file_pointer, "format_specifiers" ,Arguments);
	printf("%s %s %d", first, second, y);		//Printing the scanned files
	fclose(fp);									//Closing file by using fclose( file_pointer ) function.Closing file after use is considered as a good practice.


	return 0;
}
