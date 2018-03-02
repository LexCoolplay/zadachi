/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;
import java.util.Scanner;
/**
 *
 * @author User
 */
public class JavaApplication2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner scan = new Scanner(System.in);
        int number_of_nodes = scan.nextInt();
        Queue queue = new Queue(number_of_nodes+1);
        Node nodes[] = new Node[number_of_nodes];
        int[][] matrix = new int[number_of_nodes][number_of_nodes];
        for(int i = 0;i<number_of_nodes; i++){
            nodes[i] = new Node(i);
            for(int j = 0;j<number_of_nodes; j++){
                matrix[i][j] = scan.nextInt();
            }
        }
        Graph graph = new Graph(matrix);
        queue.append(0);
        while(!queue.is_empty()){
            int node = queue.pop();
            nodes[node].set_visited(Boolean.TRUE);
            System.out.println(node+1);
            int[] contiguity = graph.get_node_contiguity(node);
            for(int current_node = 0; current_node<number_of_nodes; current_node++){
                if(contiguity[current_node] == 1 && !nodes[current_node].is_visited()){
                    queue.append(current_node);
                
                }
            }
        }
    }
    
}

class Node{
    private boolean visited;
    private final int number;
    Node(int number){
        this.number=number;
        this.visited = Boolean.FALSE;
    }
    int get_number(){
        return this.number;
    }
    boolean is_visited(){
        return this.visited;
    }
    void set_visited(boolean state){
        this.visited = state;
    }
    
}


class Graph {
    private int[][] matrix = new int[1][1];
    
    Graph(int[][] inp_matrix){
        this.matrix = inp_matrix;
    }
    int[] get_node_contiguity(int node){
        return this.matrix[node];
    }
    
}

class Stack {
    public int[] queue_array;
    int end;
    Stack(int number){
        this.queue_array = new int[number];
        for(int i = 0;i<number;i++){
            queue_array[i] = -1;
        }
        this.end=0;
    }
    void append(int node_number) {
        this.queue_array[end] = node_number;
        end++;
    }
    int pop() {
       end--;
       int result = this.queue_array[end];
       return result;
    }
    boolean is_empty(){
        return end==0;
    }
}

class Queue {
    public int[] queue_array;
    int end;
    int front;
    Queue(int number){
        this.queue_array = new int[number+1];
        for(int i = 0;i<number+1;i++){
            queue_array[i] = -1;
        }
        this.end=0;
        this.front = 0;
    }
    void append(int node_number) {
        this.queue_array[end] = node_number;
        end++;
    }
    int pop() {
       int result = this.queue_array[front];
       front++;
       return result;
    }
    boolean is_empty(){
        return end==front;
    }
}


/*
  ABCDEFGHI
A 011110000
B 100001000
C 100000000
D 100000100
E 100000000
F 010000010
G 000100001
H 000001000
I 000000100

0 1 1 1 1 0 0 0 0
1 0 0 0 0 1 0 0 0
1 0 0 0 0 0 0 0 0
1 0 0 0 0 0 1 0 0
1 0 0 0 0 0 0 0 0
0 1 0 0 0 0 0 1 0
0 0 0 1 0 0 0 0 1
0 0 0 0 0 1 0 0 0
0 0 0 0 0 0 1 0 0
*/