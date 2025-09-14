#include <iostream>
using namespace std;

class BankingException
{
    int code;
    string message;
};
class InsufficientFundsException : private BankingException
{
};
class AccountNotFoundException : private BankingException
{
};
class AuthenticationException : private BankingException
{
};
class InvalidAmountException : private BankingException
{
};
class FileIOException : private BankingException
{
};
class DuplicateAccountException : private BankingException
{
};