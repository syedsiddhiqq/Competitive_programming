import java.util.*;
public class Gravityflip{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    Vector<Integer> vec = new Vector<Integer>(n);
    for(int itr=0;itr<n;itr++)
      vec.add( scan.nextInt());
    Collections.sort(vec);
    for(int itr=0;itr<n;itr++)
      System.out.print(vec.get(itr)+" ");
  }
}
