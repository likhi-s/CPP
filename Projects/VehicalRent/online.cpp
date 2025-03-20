#include "online.h"

Online::Online()
{
    cout<<"Online Constructor Called"<<endl;
}

Online::~Online()
{
    cout<<"Online Destructor Called"<<endl;

}

Online::Online(string UpiId,  float amount, float balance, string paymentStatus, int transactionId)
{
    m_UPIid = UpiId;
    m_amount = amount;
    m_balance = balance;
    m_paymentStatus = paymentStatus;
    m_transactionId =transactionId;

}

string Online::getUPIid()
{
    return m_UPIid;
}

float Online::getAmount()
{
    return m_amount;
}

float Online::getBalance()
{
    return m_balance;
}
string Online::getPaymentStatus()
{
    return m_paymentStatus;
}
int Online::getTransactionId()
{
    return m_transactionId;
}
