package ekoz.tarea1wad;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * @author lml_3
 */
public class Servlet0 extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet Servlet0</title>");            
            out.println("</head>");
            out.println("<body>");
            out.println("<section>");
            out.println("<p>The results are: '++'</p>");
            out.println("</section>");
            out.println("</body>");
            out.println("</html>");
        }
    }


}
