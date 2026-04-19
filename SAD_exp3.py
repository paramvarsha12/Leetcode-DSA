from abc import ABC, abstractmethod

# Step 1: Component Interface
class Coffee(ABC):
    @abstractmethod
    def cost(self):
        pass

    @abstractmethod
    def description(self):
        pass

# Step 2: Concrete Component
class BasicCoffee(Coffee):
    def cost(self):
        return 50  # base price

    def description(self):
        return "Basic Coffee"

# Step 3: Decorator Base Class
class CoffeeDecorator(Coffee):
    def __init__(self, coffee):
        self._coffee = coffee

# Step 4: Concrete Decorators
class MilkDecorator(CoffeeDecorator):
    def cost(self):
        return self._coffee.cost() + 20

    def description(self):
        return self._coffee.description() + ", Milk"

class SugarDecorator(CoffeeDecorator):
    def cost(self):
        return self._coffee.cost() + 10

    def description(self):
        return self._coffee.description() + ", Sugar"

class CreamDecorator(CoffeeDecorator):
    def cost(self):
        return self._coffee.cost() + 30

    def description(self):
        return self._coffee.description() + ", Cream"

# Step 5: Client Code
if __name__ == "__main__":
    coffee = BasicCoffee()

    # Add Milk and Sugar dynamically
    coffee = MilkDecorator(coffee)
    coffee = SugarDecorator(coffee)
    coffee = CreamDecorator(coffee)

    print("Order:", coffee.description())
    print("Total Cost:", coffee.cost())