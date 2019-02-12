import java.util.*;
public class Horseshoe{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    Set<Integer> se = new HashSet<>();
    for(int itr=0;itr<4;itr++)
      se.add(scan.nextInt());
    System.out.println(4-sizeOfSet(se));
  }
  public static int sizeOfSet(Set<Integer> se){
    int size=0;
    for(Integer i:se){
      size++;
    }
    return size;
  }
}
