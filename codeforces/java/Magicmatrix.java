import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Magicmatrix {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int a[][] = new int[3][3],count=0,cost=0,sum=0;
        for(int itr=0;itr<3;itr++)
            for(int itr1=0;itr1<3;itr1++)
                a[itr][itr1] = scan.nextInt();

        for(int itr=0;itr<3;itr++){
            for(int itr1=0;itr1<3;itr1++){
                sum += a[itr][itr1];
              //  System.out.println(sum);
                count++;
                if(count == 3){
                  count = 0;
                  cost += 15 - sum;
                //  System.out.println(cost);
                  sum=0;

                }
            }
        }

        for(int itr=0;itr<3;itr++){
          for(int itr1=0;itr1<3;itr1++){
            sum += a[itr1][itr];
          //  System.out.println(sum);
            count++;
            if(count == 3){
              count = 0;
              cost += 15 - sum;
              System.out.println(cost);
              sum=0;
          }
        }
      }
        System.out.println(cost);
    }
}
