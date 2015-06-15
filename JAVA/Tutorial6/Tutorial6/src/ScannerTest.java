import java.util.Scanner;


public class ScannerTest {

	public static void main(String[] args) {


		//create a Scanner
		Scanner sc = new Scanner(System.in);

		System.out.println("Type your 1st name, and then press ENTER");

		String name = sc.nextLine(); //read next token as String

		System.out.println("Hello " + name);

		System.out.println("Type your address and then press ENTER");
		String address = sc.nextLine();

		System.out.println("You live at " + address);

		sc.close(); //close the Scanner

	}

}
