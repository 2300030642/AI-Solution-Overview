package com.java;

class Sweet{
	static void  display() {
		System.out.println("aishu");
	}
}
class Flower{
	public void show() {
		System.out.println("mani");
	}
}

public class Demo {

	public static void main(String[] args) {
		Sweet.display();
		Flower obj2=new Flower();
		obj2.show();
	}

}
