import java.util.*;

public class ArrivaloftheGeneral{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int num = scan.nextInt(),max=0,min=9999999,temp,ptr1=0,ptr2=0,count=0;
    Vector<Integer> vec = new Vector<Integer>(num);
    for(int itr=0;itr<num;itr++){
      temp = scan.nextInt();
      if(max<temp){
        max = temp;
        ptr1 = itr;
      }
      if(min>temp){
        min = temp;
        ptr2 = itr;
      }
      vec.add(temp);
      }
      while(true){
        if(vec.get(ptr2)<vec.get(ptr2+1) && ptr2>0){
          temp = vec.get(ptr1);
          vec.set(ptr2,vec.get(ptr2+1));
          vec.set(ptr2+1,temp);
        }
        if(vec.get(ptr1)>vec.get(ptr1-1) && ptr2<num){
          temp = vec.get(ptr1);
          vec.set(ptr1,vec.get(ptr1-1));
          vec.set(ptr1-1,temp);
        }
        if(ptr1 == num-1 && ptr2 == 0)
        break;
        ptr1--;ptr2++;count++;
      }

      System.out.println(vec);
      System.out.println(ptr1);
      System.out.println(count);
  }
}
