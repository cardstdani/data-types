import java.lang.Math;

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
    
    public static int binToDec(String inputBinary) {
        String a = inputBinary;
        int dec = 0;
        for(int i = 0; i < a.length(); i++) {
            if(a.charAt(a.length() - 1 - i) == '1') {
                dec += Math.pow(2, i);
            }
        }
        return dec;
    }
    
    public static void main(String args[]) {
      int decimalNumber = 45;
      System.out.println(decimalNumber);
      System.out.println(decToBin(decimalNumber));
      System.out.println(binToDec("111"));
    }
}
