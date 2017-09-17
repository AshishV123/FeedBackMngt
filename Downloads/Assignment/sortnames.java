package p1;
import java.util.*;
public class sortnames {
	 public static void main(String args[]){
		 ArrayList <String> alg=new ArrayList();
		 Scanner obj=new Scanner(System.in);
		 System.out.println("Enter the count of names");
		 int nam=obj.nextInt();
		 for(int i=0;i<nam;i++){
			 System.out.println("Enter name  "+(i+1));
			 String s=obj.next();
			 alg.add(s);
		 }
		 Collections.sort(alg);
		 Iterator it=alg.iterator();
		 System.out.println("Sorted List  ");
		 while(it.hasNext()){ 
			System.out.println(it.next());
		 }
	 }
}
