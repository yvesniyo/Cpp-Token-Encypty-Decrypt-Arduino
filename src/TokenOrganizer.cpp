#include "../include/TokenOrganizer.hpp"
#include "../include/Token.hpp"
#include "../include/StringClass.hpp"
#include <string.h>
#include <iostream>

const char *TokenOrganizer::OrderKey = "order";
const char *TokenOrganizer::DeviceIdKey = "device_id";
const char *TokenOrganizer::AmountKey = "amount";
const char *TokenOrganizer::KeyKey = "key";
const char *TokenOrganizer::IdKey = "id";

TokenOrganizer::TokenOrganizer() {}

void TokenOrganizer::decode(char *token,
                            char *id, char *amount, char *order, char *key, char *device_id)
{
    StringClass::substring(token, order, 0, 2);
    struct StepOrderStruct stepOrderStruct;
    TokenOrganizer tokenOrganizer;
    stepOrderStruct = tokenOrganizer.stepOrders(order);
    int next = 0;
    for (int i = 0; i < 5; i++)
    {
        const char *step = stepOrderStruct.array[i];

        if (!strcmp(step, IdKey))
        {
            StringClass::substring(token, id, next, LENGTH_ID);
            next += LENGTH_ID;
        }
        else if (!strcmp(step, OrderKey))
        {
            StringClass::substring(token, order, next, LENGTH_ORDER);
            next += LENGTH_ORDER;
        }
        else if (!strcmp(step, AmountKey))
        {
            StringClass::substring(token, amount, next, LENGTH_AMOUNT);
            next += LENGTH_AMOUNT;
        }
        else if (!strcmp(step, DeviceIdKey))
        {
            StringClass::substring(token, device_id, next, LENGTH_DEVICE_ID);
            next += LENGTH_DEVICE_ID;
        }
        else if (!strcmp(step, KeyKey))
        {
            StringClass::substring(token, key, next, LENGTH_KEY);
            next += LENGTH_KEY;
        }
    }
}

char *TokenOrganizer::encode(Token token)
{
    char result[22];
    return getArray(token, result);
}

char *TokenOrganizer::getArray(Token token, char *result)
{
    char *order = token.getOrder();
    struct StepOrderStruct stepOrderStruct;
    TokenOrganizer tokenOrganizer;
    stepOrderStruct = tokenOrganizer.stepOrders(order);

    for (int i = 0; i < 5; i++)
    {
        const char *step = stepOrderStruct.array[i];

        if (!strcmp(step, IdKey))
        {
            StringClass::append(result, token.getId());
        }
        else if (!strcmp(step, OrderKey))
        {
            StringClass::append(result, token.getOrder());
        }
        else if (!strcmp(step, AmountKey))
        {
            StringClass::append(result, token.getAmount());
        }
        else if (!strcmp(step, DeviceIdKey))
        {
            StringClass::append(result, token.getDeviceId());
        }
        else if (!strcmp(step, KeyKey))
        {
            StringClass::append(result, token.getKey());
        }
    }

    return result;
}

struct StepOrderStruct TokenOrganizer::stepOrders(char *order)
{
    struct StepOrderStruct stp;

    if (!strcmp(order, "01"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = DeviceIdKey;
        stp.array[2] = AmountKey;
        stp.array[3] = KeyKey;
        stp.array[4] = IdKey;
    }
    else if (!strcmp(order, "02"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = AmountKey;
        stp.array[2] = DeviceIdKey;
        stp.array[3] = KeyKey;
        stp.array[4] = IdKey;
    }
    else if (!strcmp(order, "03"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = AmountKey;
        stp.array[2] = DeviceIdKey;
        stp.array[3] = IdKey;
        stp.array[4] = KeyKey;
    }
    else if (!strcmp(order, "04"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = AmountKey;
        stp.array[2] = IdKey;
        stp.array[3] = DeviceIdKey;
        stp.array[4] = KeyKey;
    }
    else if (!strcmp(order, "05"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = AmountKey;
        stp.array[2] = IdKey;
        stp.array[3] = KeyKey;
        stp.array[4] = DeviceIdKey;
    }
    else if (!strcmp(order, "06"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = IdKey;
        stp.array[2] = AmountKey;
        stp.array[3] = KeyKey;
        stp.array[4] = DeviceIdKey;
    }
    else if (!strcmp(order, "07"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = IdKey;
        stp.array[2] = KeyKey;
        stp.array[3] = AmountKey;
        stp.array[4] = DeviceIdKey;
    }
    else if (!strcmp(order, "08"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = IdKey;
        stp.array[2] = DeviceIdKey;
        stp.array[3] = KeyKey;
        stp.array[4] = AmountKey;
    }
    else if (!strcmp(order, "09"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = IdKey;
        stp.array[2] = DeviceIdKey;
        stp.array[3] = AmountKey;
        stp.array[4] = KeyKey;
    }
    else if (!strcmp(order, "10"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = DeviceIdKey;
        stp.array[2] = AmountKey;
        stp.array[3] = IdKey;
        stp.array[4] = KeyKey;
    }
    else if (!strcmp(order, "11"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = DeviceIdKey;
        stp.array[2] = IdKey;
        stp.array[3] = AmountKey;
        stp.array[4] = KeyKey;
    }
    else if (!strcmp(order, "12"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = DeviceIdKey;
        stp.array[2] = KeyKey;
        stp.array[3] = IdKey;
        stp.array[4] = AmountKey;
    }
    else if (!strcmp(order, "13"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = KeyKey;
        stp.array[2] = IdKey;
        stp.array[3] = AmountKey;
        stp.array[4] = DeviceIdKey;
    }
    else if (!strcmp(order, "14"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = KeyKey;
        stp.array[2] = IdKey;
        stp.array[3] = DeviceIdKey;
        stp.array[4] = AmountKey;
    }
    else if (!strcmp(order, "15"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = KeyKey;
        stp.array[2] = AmountKey;
        stp.array[3] = IdKey;
        stp.array[4] = DeviceIdKey;
    }
    else if (!strcmp(order, "16"))
    {
        stp.array[0] = OrderKey;
        stp.array[1] = KeyKey;
        stp.array[2] = DeviceIdKey;
        stp.array[3] = AmountKey;
        stp.array[4] = IdKey;
    }

    return stp;
}
