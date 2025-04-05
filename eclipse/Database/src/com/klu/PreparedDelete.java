package com.klu;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class PreparedDelete {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		// TODO Auto-generated method stub
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dtabaseconnection", "root", "root");
		String sql="DELETE FROM employee WHERE id=?";
		PreparedStatement ps=con.prepareStatement(sql);
		ps.setInt(1,2);
		int i=ps.executeUpdate();
		if(i>0) {
			System.out.println("record deleted successfully");
		}else {
			System.out.println("no record found");
		}
		con.close();
	}

}
