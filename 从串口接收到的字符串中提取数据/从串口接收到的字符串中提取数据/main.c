#include <stdio.h>
#include <string.h>

void printData(const char* data);

int main()
{
    const char* receivedData = "AA 75 C2 00 06 00 11 10 25 16 36 34 2B AA 75 C2 00 06 00 11 10 25 16 36 41 5E AA 75 C2 00 06 00 11 10 25 16 36 49 56";

    const char* frameHeader = "AA 75 C2";
    const char* currentFrame = receivedData;
    const char* lastFrame = NULL;

    while ((currentFrame = strstr(currentFrame, frameHeader)) != NULL)
    {
        lastFrame = currentFrame;
        currentFrame += strlen(frameHeader);
    }

    if (lastFrame != NULL)
    {
        const char* dataStart = lastFrame + strlen(frameHeader) + 1; // Skip frame header and space

        printData(dataStart);
    }

    return 0;
}

void printData(const char* data)
{
    char byte[3];
    byte[2] = '\0';

    memcpy(byte, &data[9], 2);
    printf("%s ", byte);
    memcpy(byte, &data[12], 2);
    printf("%s ", byte);
    memcpy(byte, &data[15], 2);
    printf("%s ", byte);
    memcpy(byte, &data[18], 2);
    printf("%s ", byte);
    memcpy(byte, &data[21], 2);
    printf("%s ", byte);
    memcpy(byte, &data[24], 2);
    printf("%s\n", byte);
}
