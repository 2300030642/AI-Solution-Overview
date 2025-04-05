package database;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class RetrieveData {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		// TODO Auto-generated method stub
		Class.forName("");
		Connection con=DriverManager.getConnection("","root","root");
		Statement stmt=con.createStatement();
		ResultSet rs=stmt.executeQuery("");
		while(rs.next()) {
			System.out.println(rs.getInt(1)+","+rs.getString(2)+","+rs.getInt(3));
		}
		stmt.close();
		con.close();
	}

}
