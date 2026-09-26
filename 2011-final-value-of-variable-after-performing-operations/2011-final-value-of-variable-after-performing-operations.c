int finalValueAfterOperations(char** operations, int operationsSize) {
    int count=0;
    for(int i=0;i<operationsSize;i++)
    {

        if(operations[i][1]=='+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return count;
}