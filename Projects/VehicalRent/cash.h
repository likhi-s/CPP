#ifndef CASH_H
#define CASH_H
#include <iostream>
using namespace std;
#include "paymentmode.h"

class Cash:public PaymentMode
{
public:
    Cash();
    ~Cash();
    Cash(string UpiId, float amount, float balance,string paymentStatus, int transactionId);

    string getUPIid();
    int getTransactionId();
    float getAmount();
    float getBalance();
    string getPaymentStatus();
};

#endif // CASH_H
