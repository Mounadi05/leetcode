 bool checkStraightLine(int** coords, int size, int* coordinatesColSize){
    int x1 = 0,x2 = 0,y1 =0 ,y2 =0, i = 1;
    y1 = coords[1][0] - coords[0][0];
    y2 =coords[1][1] - coords[0][1];
    while(++i<size)
    {
        x1 = coords[i][0] - coords[0][0];
        x2 = coords[i][1] - coords[0][1];
             if(x1*y2 != x2*y1)
                return false;
    }
    return true;
}