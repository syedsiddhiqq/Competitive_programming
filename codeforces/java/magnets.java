import java.util.*;
public class magnets{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int num = scan.nextInt(),group=1;
    int n1 = scan.nextInt();
    for(int itr=0;itr<num-1;itr++){
      int n2 =scan.nextInt();
      if(n1 != n2){
        n1 = n2;
        group++;
      }
    }
    System.out.println(group);
  }
}
