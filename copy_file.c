#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    printf("===== Copy File Contents =====\n");

    source = fopen("source.txt", "r");

    if (source == NULL)
    {
        printf("Unable to open source.txt!\n");
        return 1;
    }

    destination = fopen("destination.txt", "w");

    if (destination == NULL)
    {
        printf("Unable to create destination.txt!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("\nFile contents copied successfully!\n");
    printf("Source File: source.txt\n");
    printf("Destination File: destination.txt\n");

    return 0;
}
