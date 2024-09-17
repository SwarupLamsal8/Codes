class vehicle:
    def __init__(self,make,model):
        self.make=make
        self.model=model
        
    def moves(self):
        print("Moves Along..")

my_car=vehicle('Tesla','Model 3')
print(my_car.make)
print(my_car.model)

my_car.moves()