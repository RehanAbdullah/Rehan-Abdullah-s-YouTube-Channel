
public class Game {
	
	//fields
	private String title;
	private int score;
	
	//constructors
	public Game() {
		title = "";
		score = 0;
	}
	public Game(String a, int b) {
		title = a;
		score = b;
	}
	//methods
	public String getTitle() {
		return title;
	}
	
	public void setTitle(String a) {
		title = a;
	}
	public int getScore() {
		return score;
	}
	public void setScore(int b) {
		score = b;
	}
	
	public String toString() {
		return "Game: [ title =" + title + " score = " + score + "]";
	}
}
