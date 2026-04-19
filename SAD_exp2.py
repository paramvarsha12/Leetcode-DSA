from abc import ABC, abstractmethod

class Payment(ABC) :
    @abstractmethod
    def pay(self, amount: float):
        pass


class CreditCardPayment(Payment) :
    def pay(self, amount:float):
        print(f"Paid {amount} using credit card")

class UPIPayment(Payment):
    def pay(self, amount: float):
        print(f"Paid {amount} using UPI Payment")

class PaymentFactory:
    @staticmethod
    def create_payment(method:str) -> Payment:
        method = method.lower()

        if method == "creditcard" :
            return CreditCardPayment
        
        elif method == "upi":
            return UPIPayment
        
if __name__ == "__main__":
    methods = ["creditcard", "upi"]

    for m in methods:
        payment = PaymentFactory.create_payment(m) 
        payment.pay(100)