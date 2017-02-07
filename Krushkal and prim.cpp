#include <iostream>
#include <new>
using namespace std;
#define MAX 20

class Prims {
private:
    int matrix[MAX][MAX];
    int vertex;
    int finalAns[MAX][3];
    int finalCount;
    int visited[MAX];

public:
    Prims(int v = 0) {
        vertex = v;
        finalCount = 0;

        for(int i=0;i<v;i++) {
            for(int j=0;j<v;j++) {
                matrix[i][j] = 9999;
            }
        }
    }

    bool insertEdge(int a,int b,int weight) {
        if((a < 0 || a > vertex-1) || (b<0 || b > vertex-1))
            return false;
        if(a != b && (matrix[a][b] == 0 || matrix[a][b] > weight)) {
                matrix[a][b] = weight;
                matrix[b][a] = weight;
        }
        return true;
    }

    void printMatrix() {
        int i,j;
        cout << endl;
        for(i=0;i<vertex;i++) {
            for(j=0;j<vertex;j++) {
                cout.width(4);
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void getMST();
};

class Kruskals {
private:
    int matrix[MAX*MAX][3];
    int vertex;
    int edges;
    int completed[MAX];
    int finalAns[MAX][3];
    int finalCount;
    int dfs_matrix[MAX][MAX];

    bool isCompleted() {
        int n = 1,i;
        for(i=0;i<vertex;i++) {
            n *= completed[i];
        }
        if(n == 1)
            return true;
        return false;
    }

    bool isCyclic(int current,int visited[],int parent) {
        visited[current] = 1;
        int i;
        for(i=0;i<finalCount;i++) {
            if(dfs_matrix[current][i] == 1) {
                if(visited[i] == 0) {
                    if(isCyclic(i,visited,current)) {
                        return true;
                    }
                }
                else {
                    if(i != parent) {
                        return true;
                    }
                }
            }
        }
        return false;
    }



    bool willNotBeCylic(int a,int b) {
        int i,j,visited[finalCount];
        for(i=0;i<finalCount;i++) {
            visited[i] = 0;
        }
        if(finalCount < 3) {
            return true;
        }

        for(i=0;i<vertex;i++) {
            for(j=0;j<vertex;j++) {
                dfs_matrix[i][j] = 0;
            }
        }

        for(i=0;i<finalCount;i++) {
            dfs_matrix[finalAns[i][0]][finalAns[i][1]] = 1;
        }

        dfs_matrix[a][b] = dfs_matrix[b][a] = 1;

        for(i=0;i<finalCount;i++) {
            if(isCyclic(i,visited,-1))
                return false;
        }
        return true;
    }

    bool addToCompleted(int a,int b) {
        if(willNotBeCylic(a,b)) {
            completed[a] = completed[b] = 1;
            return true;
        }
        return false;
    }

public:
    Kruskals(int v=0) {
        vertex = v;
        edges = 0;
        finalCount = 0;
    }

    bool insertEdge(int a,int b,int weight) {
        if((a < 0 || a > vertex-1) || (b<0 || b > vertex-1))
            return false;
        int i = 0;
        while(i < edges && weight > matrix[i][2]) {i++;}

        for(int j = edges;j>i;j--) {
            matrix[j][0] = matrix[j-1][0];
            matrix[j][1] = matrix[j-1][1];
            matrix[j][2] = matrix[j-1][2];
        }

        matrix[i][0] = a;
        matrix[i][1] = b;
        matrix[i][2] = weight;
        edges++;
        return true;
    }

    void getMST();
};

int main() {
    int num,a,b,w,DEBUG = 1;
    cout << "Enter Number of Vertex: ";
    cin >> num;
    Prims prims = Prims(num);
    Kruskals kruskals = Kruskals(num);

    cout << "Enter Graph [VERTEX_A VARTEX_B WEIGHT] (-1 to quit) \n \t >> ";
    while((cin >> a) && a != -1) {
        cin >> b;
        cin >> w;
        if(prims.insertEdge(a,b,w) && kruskals.insertEdge(a,b,w)) {
            cout << "EDGE INSERTED \n \t >> ";
        }else {
            cout << "\t\t >> INVALID ENTRY... INSERTION FAILED .. \n \t >>";
        }
    }

    cout << "\nGRAPH ACCEPTED..\n";

    cout << "Processing...\n";

    cout << "Using Prims \n-------------\n";
    prims.getMST();
    cout << "\n Using Kruskals \n----------------\n";
    kruskals.getMST();
    cout << "\n";

    return 0;
}

void Prims::getMST() {
    visited[0] = 1;
    int node = 0,u,v,a,b;
        int i,j,min;
    while(node < (vertex-1)) {
        for(i=0,min=9999;i<vertex;i++) {
            for(j=0;j<vertex;j++) {
                if(matrix[i][j] < min) {
                    if(visited[i] != 0) {
                        min = matrix[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if(visited[a] == 0 || visited[b] == 0) {
            finalAns[finalCount][0] = a;
            finalAns[finalCount][1] = b;
            finalAns[finalCount][2] = min;
            finalCount++;
            node++;
            visited[b] = 1;
        }
        matrix[a][b] = matrix[b][a] = 9999;
    }
    int weight = 0;
    for(i=0;i<finalCount;i++) {
        cout.width(4);
        cout << finalAns[i][0];
        cout.width(4);
        cout << finalAns[i][1];
        cout.width(4);
        cout << finalAns[i][2];
        cout << endl;
        weight = weight + finalAns[i][2];
    }

    cout << "TOTAL WEIGHT: " << weight << " \n\n";
}

void Kruskals::getMST() {
    int i,j,weight = 0;
    for (i=0;i<vertex;i++) {
        completed[i] = 0;
    }
    int edgeCount = 0;
    while(!isCompleted()) {
        if(addToCompleted(matrix[edgeCount][0],matrix[edgeCount][1])) {
            finalAns[finalCount][0] = matrix[edgeCount][0];
            finalAns[finalCount][1] = matrix[edgeCount][1];
            finalAns[finalCount][2] = matrix[edgeCount][2];
            finalCount++;
        }
        edgeCount++;
    }
    for(i=0;i<finalCount;i++) {
        cout.width(4);
        cout << finalAns[i][0];
        cout.width(4);
        cout << finalAns[i][1];
        cout.width(4);
        cout << finalAns[i][2];
        cout << endl;
        weight = weight + finalAns[i][2];
    }

    cout << "TOTAL WEIGHT: " << weight << " \n\n";

}
