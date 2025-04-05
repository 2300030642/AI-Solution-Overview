package com.klu;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class PreparedInsert {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		// TODO Auto-generated method stub
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dtabaseconnection","root", "root");
		String sql="insert into employee(id,name,esal) values(?,?,?)";
		PreparedStatement ps=con.prepareStatement(sql);
		
		
		ps.setInt(1,1);
		ps.setString(2,"aishu");
		ps.setInt(3,10000);
		
		ps.setInt(1, 2);
		ps.setString(2,"teja");
		ps.setInt(3, 12000);
		
		
		int index=ps.executeUpdate();
		if(index>0) {
			System.out.println("record inserted successfully");
		}
		
	}

}
