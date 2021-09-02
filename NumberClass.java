import java.lang.Math;

class Number {
    public int dec;
    public String bin;
    
    public void decToBin() {
        int n = dec;
        bin = "";
        
        while (n >= 1) {
            bin = (n%2) + bin;
            n = n / 2;
        }
    }
    
    public void binToDec() {
        dec = 0;
        for(int i = 0; i < bin.length(); i++) {
            if (bin.charAt(bin.length() - i - 1) == '1') {
                dec += Math.pow(2, i);
            }
        }
    }
    
    public Number(int input) {
        dec = input;
        decToBin();
        
    }
    
    public Number(String input) {
        bin = input;
        binToDec();
    }
    
    @Override
    public String toString() {
        return "Decimal: " + dec + "\nBinary: " + bin;
    }
}

public class NumberClass {
    public static void main(String args[]) {
      Number n = new Number("1001011");
      System.out.println(n);
    }
}
