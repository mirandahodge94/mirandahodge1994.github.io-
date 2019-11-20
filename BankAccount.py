#Ever wanted to know how to create a bank account? :-)
import random

class Bankaccount:
    def __init__(self,nameIn, balanceIn, pinIn):#
        self.name=nameIn 
        self.balance=balanceIn
        self.pin=pinIn
        self.history=[]
        self.accountNumber=random.randrange(100000000,999999999)

    def deposit(self,account,pin):
        if self.pin==pinIn: 
            self.balance=account
            self.history.append("display",str(account))
            return True
        else:
            return False

    def displayAccount(self,pinIn):
        if pinIn==self.pin:
            print("Name", self.name)
            print("Account", self.accountNumber)
            print("pin", self.pin)
            print("Balance",self.balance)
            print ("History") 
                print(" ", transaction)
            print()
    

def main():
    account1=Bankaccount("Miranda Hodge",100,1234)
    account1.deposit(42,1234)
    account1.displayAccount(1234)
    account2=Bankaccount("Mike Myers",1000,2468)
    account2.deposit(32,2468)
    account2.displayAccount(2468)
main()
