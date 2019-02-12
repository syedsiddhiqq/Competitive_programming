import java.util.*;
public class AntonandLetter{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    HashSet<Character> se = new HashSet<>();
    String s = scan.next();
    char ss[] = s.toCharArray();
    for(char i:ss){
      if(i>='a' && i<='z')
      se.add(i);
    }
    System.out.println(se.size());
  }
}
