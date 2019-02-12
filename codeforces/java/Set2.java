import java.util.*;
public class Set2{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int length = 0,itr=0;
    String s = scan.nextLine();
    Set<Character> se = new HashSet();
    try{
      for(itr=0;;itr++){
        se.add(s.charAt(itr));
      }
    }catch (StringIndexOutOfBoundsException e) {
        if(sizeOfSet(se)%2==0)System.out.println("CHAT WITH HER!");
        else System.out.println("IGNORE HIM!");
      }
  }
   static int sizeOfSet(Set<Character> se){
    Iterator<Character> it = se.iterator();
    int size = 0;
    while (it.hasNext()){
      it.next();
     size++;
    }
    return size;
  }

}
