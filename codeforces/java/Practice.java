import java.util.*;
public class Practice{
  public static void main(String args[]){
    Scanner scan =  new Scanner(System.in);
    int n = scan.nextInt();int k = scan.nextInt(),sum=0,count=0,temp=k;
    Vector<Integer> vec= new Vector<Integer>(n);
    for(int itr=0;itr<n;itr++){
      vec.add(scan.nextInt());
    }
    Collections.sort(vec);
    for(int itr=n-1;count!=k;itr--){
      count++;
      sum+=vec.get(itr);
    }
    System.out.println(sum);
    if(k!=1){
    for(int itr=0;itr<n/k;itr++)
      System.out.print(k+" ");
    if(n%k!=0)
      System.out.print(n%k);
    }
    else
      System.out.print(n);
  }
}
