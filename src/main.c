#include <stdio.h>
#include <stdlib.h>
#include "dbf.h"

int main()
{
    FILE *dbf;
    char fp[256];
    unsigned char header[32];

    // Get the filepath
    printf("Enter the path of the file: ");
    scanf("%s", fp);

    // Open the filepath
    dbf = fopen(fp, "rb");

    // Check for errors
    if (dbf == NULL)
    {
        printf("Error: File not found\n");
        exit(1);
    }

    printf("File opened successfully\n");

    // Read the header, which is 32 bytes long
    fread(header, 1, 32, dbf);

    /* Extracting helpful information from the DBF */
    // Get the length of each record (row) in the table
    unsigned int row_buffer = header[10] + (header[11] << 8);
    // Creating a buffer to store records (rows)
    unsigned char record[row_buffer];
    // Extracting the filetype indicator byte
    DBF_FileType file_type = header[0];
    // Get the number of records, stored in little-endian format in bytes header[4] through header[7]
    unsigned int num_records = header[4] + (header[5] << 8) + (header[6] << 16) + (header[7] << 24);

    // Print some basic information about the DBF file
    printDBFFileType(file_type);
    printf("Num Records: %d\n", num_records);
    printf("Record length: %d bytes\n", row_buffer);

    // while (fread(record, 1, row_buffer, dbf) == row_buffer)
    // {
    //     // Print the row to the console, decoded in ASCII
    //     for (int i = 0; i < row_buffer; i++)
    //     {
    //         printf("%c", record[i]);
    //     }
    //     // After each row, print a newling character
    //     printf("\n");
    // }

    fclose(dbf);
}