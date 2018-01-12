/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

public class Geometry {
    public Boolean solve(Line line, Point point){
        if((point.getX()*line.getA()+point.getY()*line.getB()+line.getC())==0)
            return Boolean.TRUE;
        else
            return Boolean.FALSE;
    }
}
