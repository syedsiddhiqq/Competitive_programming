import java.util.*;
public class Iqtest{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt(),even=0,odd=0;
    int arr[] = new int[n];
    for(int itr=0;itr<3;itr++){
      arr[itr] = scan.nextInt();
      if(arr[itr]%2==0)even++;
      else odd++;
    }
    if(odd == 3 || even == 3){
      if(odd<even){
        for(int itr=3;itr<n;itr++){
          int temp = scan.nextInt();
          if(temp%2!=0)
            System.out.println(itr+1);
        }
      }else{
        for(int itr=3;itr<n;itr++){
          int temp = scan.nextInt();
          if(temp%2==0)
            System.out.println(itr+1);
        }
      }
    }else{
      if(odd<even){
        for(int itr=0;itr<3;itr++){
          if(arr[itr]%2!=0)
            System.out.println(itr+1);
        }
      }else{
        for(int itr=0;itr<3;itr++){
          if(arr[itr]%2==0)
            System.out.println(itr+1);
        }
      }

    }
  }
}
