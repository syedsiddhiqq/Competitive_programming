  import java.util.*;
  public class Sticks{
    public static void main(String args[]){
      Scanner scan = new Scanner(System.in);
      int num = scan.nextInt();
      int num2 = scan.nextInt();
      if(num == 1|| num2 == 1){
        System.out.println("Akshat");
        System.exit(0);
      }
      int tot = num+num2,count=1;
      while(tot>1){
        tot = tot-2;
        count++;
      }
      System.out.println(count%2==0?"Akshat":"Malvika");
    }
  }
