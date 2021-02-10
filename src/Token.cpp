#include "../include/Token.hpp"
#include "../include/TokenOrganizer.hpp"
#include "../include/Encrypty.hpp"
#include <iostream>

Token::Token()
{
    this->id = {};
    this->key = {};
    this->amount = {};
    this->deviceId = {};
    this->order = {};
};

Token::Token(char *id, char *key, char *amount, char *deviceId, char *order)
{
    this->id = id;
    this->key = key;
    this->amount = amount;
    this->deviceId = deviceId;
    this->order = order;
};

Token::~Token() {}

char *Token::getId()
{
    return this->id;
}

void Token::setId(char *id)
{
    this->id = id;
}

void Token::setKey(char *key)
{
    this->key = key;
}

void Token::setDeviceId(char *deviceId)
{
    this->deviceId = deviceId;
}

void Token::setAmount(char *amount)
{
    this->amount = amount;
}

void Token::setOrder(char *order)
{
    this->order = order;
}

char *Token::getKey()
{
    return this->key;
}

char *Token::getAmount()
{
    return this->amount;
};

char *Token::getDeviceId()
{
    return this->deviceId;
}

char *Token::getOrder()
{
    return this->order;
}

void Token::parse(char *token, char *idId, char *amountAmount, char *orderOrder, char *keyKey, char *deviceIdDevice)
{
    Encrypt encrypt;
    char descrypted[30] = {};
    encrypt.decrypt(token, descrypted);
    TokenOrganizer tokenOrganizer;
    tokenOrganizer.decode(descrypted, idId, amountAmount, orderOrder, keyKey, deviceIdDevice);
}

void Token::getString(char *result)
{
    Encrypt encrypt;
    encrypt.encrypt(*this, result);
}
