int finalValueAfterOperations(char** operations, int operationsSize) {
    int count=0;
    for(int i=0;i<operationsSize;i++)
    {

        if(strcmp(operations[i],"X++")==0|| strcmp(operations[i],"++X")==0)
        {
            count++;
        }
        else if(strcmp(operations[i],"X--")==0||strcmp(operations[i],"--X")==0)
        {
            count--;
        }
    }
    return count;
}