package com.klu;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class InsertData {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		
		//step1
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		
		//step2
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dtabaseconnection", "root", "root");
		
		//step3
		Statement stmt=con.createStatement();
			
		//step4
		String sql="insert into employee values(103,'teja',12000)";
		
		stmt.executeUpdate(sql);
		
//		String sql1="insert into employee values(101,'rama',20000)";
//		stmt.executeUpdate(sql1);
		
		
		con.close();
	}

}
