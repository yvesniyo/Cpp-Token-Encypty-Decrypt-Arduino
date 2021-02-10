#include "../include/StringClass.hpp"

void StringClass::append(char *string, char data)
{
    int len = strlen(string);
    string[len] = data;
    string[len + 1] = '\0';
};

void StringClass::append(char *string, char *data)
{
    int loopSize = length(data);
    for (int i = 0; i < loopSize; i++)
    {
        append(string, data[i]);
    }
};

int StringClass::length(char s[])
{
    return strlen(s);
};

void StringClass::equal(char *first, char *sec, bool *result)
{
    if (strcmp(first, sec))
    {
        *result = false;
    }
    else
    {
        *result = true;
    }
};

void StringClass::substring(char *source, char *destination, int beg, int n)
{
    while (n > 0)
    {
        *destination = *(source + beg);

        destination++;
        source++;
        n--;
    }
    *destination = '\0';
}