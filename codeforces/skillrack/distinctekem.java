import java.util.*;
public class distinctekem{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int size1 = scan.nextInt();
    int flag = 0,count=0;
    int size2 = scan.nextInt();
    Set<Integer> se = new HashSet();
    Set<Integer> se1 = new HashSet();
    for(int itr=0;itr<size1;itr++){
      se.add(scan.nextInt());
    }
    for(int itr=0;itr<size2;itr++){
      se1.add(scan.nextInt());
    }
    for(int t:se){
      for(int r:se1){
        if(t == r){
          flag = 1;
        }
      }
      if(flag == 0)
        count++;
    }
  }
}
