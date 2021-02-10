#include "Token.hpp"

#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt
{
public:
    void encrypt(Token, char *);
    void decrypt(char *, char *);
    void exchange(char *, char *);
};

#endif // ENCRYPT_H