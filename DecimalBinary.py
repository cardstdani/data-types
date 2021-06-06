def decimalToBinary(n):
    binaryNumber = ""
    while (n >= 2):
        n = n // 2
        binaryNumber = str(n % 2) + binaryNumber
    binaryNumber = binaryNumber + str(n % 2)
    return binaryNumber

print(decimalToBinary(511))
