
package javaapplication1;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



import java.util.Scanner;

/**
 *
 * @author User
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Geometry ginter = new Geometry();
        Point p1=new Point(scan.nextDouble(),scan.nextDouble());
        Point p2=new Point(scan.nextDouble(),scan.nextDouble());
        Point p3=new Point(scan.nextDouble(),scan.nextDouble());
        Line l = new Line(p1,p2);
        System.out.print(ginter.solve(l, p3));
        } 
    }

