#ifndef STRING_CLASS_H
#define STRING_CLASS_H

class StringClass
{
public:
    static void append(char *, char);
    static void append(char *, char *);
    static int length(char s[]);
    static void equal(char *, char *, bool *);
    static void substring(char *, char *, int, int);
};

#endif //STRING_CLASS_H