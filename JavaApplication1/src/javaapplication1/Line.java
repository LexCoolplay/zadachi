/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

public class Line {
    private double A,B,C;
    public Line(Point P1, Point P2){
        this.A=P2.getY()-P1.getY();
        this.B=P1.getX()-P2.getX();
        this.C=P1.getY()*P2.getY()-P1.getX()*P2.getX();
    }
    public double getA(){
        return this.A;
    }
    public double getB(){
        return this.B;
    }
    public double getC(){
        return this.C;
    }
}
