package com.bank;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

@WebServlet("com/bank/InsertServlet")
public class InsertServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		int accno=Integer.parseInt(request.getParameter("accno"));
		String accname=request.getParameter("accname");
		int accbal=Integer.parseInt(request.getParameter("accbal"));
		
		PrintWriter pw=response.getWriter();
		pw.println(accno);
		pw.println(accname);
		pw.println(accbal);
		
		// database connectivity
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/bank","root","root");
			String sql="insert into bankaccount(accno,accname,accbal) values(?,?,?)";
			PreparedStatement ps=con.prepareStatement(sql);
			int index=ps.executeUpdate();
			if(index>0) {
				pw.println("inserted successfully");
			}else {
				pw.println("not inserted");
			}
		}catch(Exception e) {
			e.printStackTrace();
		}
		}

}
