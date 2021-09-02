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
            if self.bin[len(self.bin) - i] == '1':
                self.dec += 2**i
                
        
    def __init__(self, decimal=None, binary=None):
        if decimal != None or binary != None:
            if decimal != None:
                self.dec = decimal
                self.decToBin()
                return
            if binary != None:
                self.bin = binary
                self.binToDec()
                return
        else:
            self.bin = "0"
            self.dec = 0
    
    def __str__(self):
        return "Decimal: " + str(self.dec) + "\nBinary: " + self.bin
            
n = number(1000)
print(n)
