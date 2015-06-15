
public class NameTest {

	public static void main(String[] args) {


		Name[] friends = new Name[4];

		Name n = new Name("Rehan","Abdullah");
		friends[0] = n;

		friends[1] = new Name("Joe","Fred");
		friends[2] = new Name("Kevin","Black");
		friends[3] = new Name("Matt","Smith");

		for(int i= 0; i < friends.length; i++) {
			System.out.println(friends[i].getFirstName());
		}

		System.out.println("======================");
		boolean exists = false;
		
		for (Name nm : friends) {
			
			if(nm.getFamilyName().equals("Smith")) {
				exists = true;
			}
		}
		
		
		if (exists ) {
			System.out.println("Family name with smith");
		} else {
			System.out.println("Family name with NOT smith");
		}

	}

}
