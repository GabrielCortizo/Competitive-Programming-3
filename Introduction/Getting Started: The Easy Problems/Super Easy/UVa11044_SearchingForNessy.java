import java.util.Scanner;
public class UVa11044_SearchingForNessy{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int a=0,b=0,n;
		int e;
		
		n = in.nextInt();
		
		for(int i = 0;i<n;i++){
			a = in.nextInt();
			b = in.nextInt();
			a = a/3;
			b = b/3;
			System.out.println(a*b);
		
		
		}
	}
}

