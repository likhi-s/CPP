#include "cash.h"

Cash::Cash()
{
    cout<<"Cash Constructor Called"<<endl;
}

Cash::Cash(string UpiId,  float amount, float balance, string paymentStatus, int transactionId)
{
    m_UPIid = UpiId;
    m_amount = amount;
    m_balance = balance;
    m_paymentStatus = paymentStatus;
    m_transactionId = transactionId;

}

string Cash::getUPIid()
{
    return m_UPIid;
}

int Cash::getTransactionId()
{
    return m_transactionId;
}

float Cash::getAmount()
{
    return m_amount;
}
float Cash::getBalance()
{
    return m_balance;
}

string Cash::getPaymentStatus()
{
    return m_paymentStatus;
}
