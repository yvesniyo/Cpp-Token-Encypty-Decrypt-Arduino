#include <string>
#include "Token.hpp"

#ifndef TOKEN_ORGANIZER_H
#define TOKEN_ORGANIZER_H

struct StepOrderStruct
{
    const char *array[5];
};

class TokenOrganizer
{
public:
    TokenOrganizer();
    static const int LENGTH_DEVICE_ID = 7;
    static const int LENGTH_AMOUNT = 6;
    static const int LENGTH_ID = 4;
    static const int LENGTH_ORDER = 2;
    static const int LENGTH_KEY = 1;

    static const char *OrderKey;
    static const char *DeviceIdKey;
    static const char *AmountKey;
    static const char *KeyKey;
    static const char *IdKey;

    void decode(char *, char *,
                char *, char *, char *, char *);
    static char *encode(Token);
    static char *getArray(Token, char *);

    struct StepOrderStruct stepOrders(char *);
};

#endif //TOKEN_ORGANIZER_H