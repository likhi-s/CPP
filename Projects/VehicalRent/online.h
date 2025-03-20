#ifndef ONLINE_H
#define ONLINE_H
#include <iostream>
using namespace std;
#include "paymentmode.h"

class Online:public PaymentMode
{
public:
    Online();
    ~Online();
    Online(string UpiId, float amount, float balance,string paymentStatus, int transactionId);

    string getUPIid();
    int getTransactionId();
    float getAmount();
    float getBalance();
    string getPaymentStatus();
};

#endif // ONLINE_H
