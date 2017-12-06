//
// Created by lngo9 on 11/24/2017.
//

#ifndef PAYROLL_TRANSACTION_H
#define PAYROLL_TRANSACTION_H


class Transaction {
    public:
        virtual ~Transaction();
        virtual void Execute() = 0;
};


#endif //PAYROLL_TRANSACTION_H
