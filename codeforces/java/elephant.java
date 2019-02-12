import java.util.*;

public class elephant{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int num = scan.nextInt(),count=0;
    while(num>0){
      if(num>=5){
        num = num-5;
        count++;
      }else if(num>=4){
        num = num-4;  
        count++;
      }else if(num>=3){
        num = num-3;
        count++;
      }else if(num>=2){
        num = num-2;
        count++;
      }else{
        num = num-1;
        count++;
      }
    }
    System.out.println(count);
  }
}
