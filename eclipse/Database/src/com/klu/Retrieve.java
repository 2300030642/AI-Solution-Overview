package com.klu;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Retrieve {
	public static void main(String args[]) throws ClassNotFoundException, SQLException
	{
		//step1
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		
		//step2
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dtabaseconnection","root","root");
	
		//step3
		Statement stmt=con.createStatement();
		ResultSet rs=stmt.executeQuery("select * from student");
		
		while(rs.next())
		{
			System.out.println(rs.getInt(1)+":"+rs.getString(2));
		}
		
		con.close();
	}
}
