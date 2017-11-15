import java.util.Scanner;
public class UVa11364_Parking{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int a,b,n,soma;
		int t = in.nextInt();
		for(int i = 0;i<t;i++){
			soma = 0;
			a = 100000;
			b = -1;
			n = in.nextInt();
			int vet[] = new int[n];
			
			for(int j = 0;j<n;j++){
				vet[j] = in.nextInt();
				if(vet[j]>b)
					b = vet[j];
				if(vet[j] <a)
					a = vet[j];
			}
			System.out.println(Math.abs(a-b)*2);
			
		}
	
	}
}
