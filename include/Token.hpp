#include <string>

#ifndef TOKEN_H

#define TOKEN_H

class Token
{
    char *id, *key, *amount, *deviceId, *order;

public:
    Token();
    Token(char *, char *, char *, char *, char *);
    ~Token();

    char *getId();

    void setId(char *);
    void setKey(char *);
    void setDeviceId(char *);
    void setAmount(char *);
    void setOrder(char *);

    char *getKey();

    char *getAmount();

    char *getDeviceId();

    char *getOrder();

    void parse(char *, char *, char *, char *, char *, char *);

    void getString(char *);
};

struct TokenStructContainer
{
    Token token;
    const char *amount, *id, *device_id, *key, *order;
};
#endif //ENCRYPT_H