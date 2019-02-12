import java.util.*;

public class Vectorexample{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    Vector<Integer> vec = new Vector<Integer>(2,5);
    for(int itr=0;itr<5;itr++){
      vec.add(scan.nextInt());
    }
    vec.set(1,23223);
    System.out.println(vec.indexOf(23223));
  }
}
