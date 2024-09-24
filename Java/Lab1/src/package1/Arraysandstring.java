package package1;

public class Arraysandstring {

	public static void main(String[] args) {
		//Array
		int[] a= {2,4,5,6};
		for (int i : a) {
		System.out.println(i);
		}
		
		System.out.println();
		
		//String
		String s="Swarup";
		System.out.println("My name is "+s);
		
		System.out.println();
		
		//Combining String and Arrays
		String[] grp= {"Swarup","Ram","Hari"};
		for (String i : grp) {
			System.out.println(i);
		}
	}

}
