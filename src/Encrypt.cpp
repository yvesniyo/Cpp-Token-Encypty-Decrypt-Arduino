#include "../include/Encrypty.hpp"
#include <string.h>
#include "StringClass.hpp"
#include "../include/TokenOrganizer.hpp"
#include "../include/Token.hpp"

void Encrypt::encrypt(Token token, char *result)
{
    char *tokenString = TokenOrganizer::encode(token);
    exchange(tokenString, result);
}

void Encrypt::decrypt(char *token, char *result)
{
    exchange(token, result);
}

void Encrypt::exchange(char *token, char *result)
{
    int tokenSize = strlen(token);
    for (int i = 0; i < tokenSize; i++)
    {

        char x = token[i];

        switch (x)
        {
        case '0':
            StringClass::append(result, '9');
            break;
        case '1':
            StringClass::append(result, '8');
            break;
        case '2':
            StringClass::append(result, '7');
            break;
        case '3':
            StringClass::append(result, '6');
            break;
        case '4':
            StringClass::append(result, '4');
            break;
        case '5':
            StringClass::append(result, '5');
            break;
        case '6':
            StringClass::append(result, '3');
            break;
        case '7':
            StringClass::append(result, '2');
            break;
        case '8':
            StringClass::append(result, '1');
            break;
        case '9':
            StringClass::append(result, '0');
            break;

        default:
            break;
        }
    }
}