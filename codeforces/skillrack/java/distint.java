import java.util.*;
public class distint{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int size1 = scan.nextInt(),count=0;
    int size2 = scan.nextInt();
    Vector<Integer> vec = new Vector(size1);
    Vector<Integer> vec1 = new Vector(size2);
    getArray(vec,size1);
    getArray(vec1,size2);
    count+=checkForPresence(vec,vec1);
    count+=checkForPresence(vec1,vec);
    System.out.print(count);
  }
  public static int checkForPresence(Vector<Integer> vec,Vector<Integer> vec1){
    int flag = 0,count=0;
    for(int itr:vec){
      flag = 0;
      for(int itr1:vec1){
        if(itr == itr1){
          flag = 1;
          break;
        }
      }
      if(flag == 0)
        count++;
    }
    return count;
  }
  public static void getArray(Vector<Integer> vec,int size){
    Scanner scan = new Scanner(System.in);
    for(int itr=0;itr<size;itr++)
      vec.add(scan.nextInt());
  }
}
