import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int x;
		int tmp;
		String val;
		char c;

		x  = input.nextInt();
		String trash = input.nextLine();

		for (int i = 0;i < x; i++) {
			
			tmp = 0;
			val = input.nextLine();

			for(int j = 0; j < val.length(); j++){

				c = val.charAt(j);

				if(c == '0' || c == '9' || c == '6'){
					tmp = tmp + 6;
				}else if(c == '1'){
					tmp = tmp + 2;
				}else if(c == '2' || c == '3' || c == '5'){
					tmp = tmp + 5;
				}else if(c == '4'){
					tmp = tmp + 4;
				}else if(c == '7'){
					tmp = tmp + 3;
				}else{
					tmp = tmp + 7;
				}
			}

			System.out.println(tmp + " leds");
		}
	}
}