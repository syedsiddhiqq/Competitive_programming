import java.util.*;
public class evenodds{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    long num = scan.nextLong(),temp;
    long k = scan.nextLong();
    if(k<=num/2){
      temp = 1+(k-1)*2;
    }else{
      k=(num%2==0)?k-num/2:k-num/2- 1;
      temp = 2+(k-1)*2;
    }
    System.out.println(temp!=0?temp:num);
  }
}
