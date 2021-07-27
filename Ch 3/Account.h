#ifndef CH_3_ACCOUNT_H
#define CH_3_ACCOUNT_H

class Account
{
public:
    explicit Account(int amount);
    void setBalance(int amount);
    void credit(int amount);
    int debit(int amount);
    int getBalance() const;

private:
    int balance;
};

#endif //CH_3_ACCOUNT_H
