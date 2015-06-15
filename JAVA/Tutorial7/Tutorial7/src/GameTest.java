
public class GameTest {

	public static void main(String[] args) {
	
		//TEST PROGRAM
		
		Game a = new Game("Rehan", 100);
		
		System.out.println("My name is " + a.getTitle() + "\n" + " My score is " + a.getScore());
		
		System.out.println(a.toString());

	}

}
