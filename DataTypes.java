public class DataTypes {
    public static String decToBin(int inputDecimal) {
        String binaryNumber = "";
        int a = inputDecimal;
        
        while(a >= 1) {
            binaryNumber = (a % 2) + binaryNumber;
            a /= 2;
        }
        return binaryNumber;
    }
    
    public static void main(String args[]) {
      int decimalNumber = 8;
      System.out.println(decimalNumber);
      System.out.println(decToBin(decimalNumber));
    }
}
