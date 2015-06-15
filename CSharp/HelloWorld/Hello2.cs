// Hello2.cs
// arguments A B C D

using System;

public class Hello2
{
	public static void Main(string[] args)
	{
		Console.WriteLine ("Hello World!");
		Console.WriteLine ("You have entered the following {0} command line arguments:",
			args.Length	);
		for (int i =0; i < args.Length; i++)
		{
			Console.WriteLine ("{0}", args [i]);

		}
	}
}