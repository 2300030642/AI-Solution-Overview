package com.klu;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class DeleteData {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dtabaseconnection","root", "root");
		String sql="DELETE FROM employee WHERE id=1";
		Statement stmt=con.createStatement();
		stmt.executeUpdate(sql);
		con.close();
	}

}
