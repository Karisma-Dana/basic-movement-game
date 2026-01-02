


class animal :
    def __init__(self,name, age):
        self.age = age
        self.name = name

    def info(self):
        print(f"animal name : {self.name}")


class dog(animal):
    def __init__(self, type,name,):
        super().__init__(name)
        self.type = type
        
    def bark(self):
        print(f"{self.name} say guk guk ")



dogy = dog("chino","golden")
dogy.info()
dogy.bark()
        