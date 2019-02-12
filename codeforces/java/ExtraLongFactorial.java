import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class ExtraLongFactorial{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int temp,max=0,count=0;
        for(int itr=0;itr<num;itr++){
            temp = scan.nextInt();
            if(max>temp){
                max = temp;
                count=1;
            }else if(max == temp){
                count++;
            }
        }
        System.out.println(count);
    }
}
