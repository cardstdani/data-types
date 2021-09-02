class number():
    def decToBin(self):
        n = self.dec
        self.bin = ""
        while n >= 1:
            self.bin = str(n%2) + self.bin
            n = n // 2
    
    def binToDec(self):
        self.dec = 0
        for i in range(len(self.bin)):
            if self.bin[len(self.bin) - i - 1] == '1':
                self.dec += 2**i
                
        
    def __init__(self, input=None):
        if input == None:
            self.dec = 0
            self.bin = "0"
            return
        elif type(input) == int:
            self.dec = input
            self.decToBin()
        elif type(input) == str:
            self.bin = input
            self.binToDec()
    
    def __str__(self):
        return "Decimal: " + str(self.dec) + "\nBinary: " + self.bin
            
n = number("1001011")
print(n)
