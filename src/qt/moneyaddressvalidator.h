#ifndef MONEYADDRESSVALIDATOR_H
#define MONEYADDRESSVALIDATOR_H

#include <QValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class MoneyAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MoneyAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // MONEYADDRESSVALIDATOR_H
