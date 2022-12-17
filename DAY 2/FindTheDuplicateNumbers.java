int majorityElement(int *arr,int n)
{
    int voter=arr[0];
    int votecount=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==voter)
        {
            ++votecount;
        }
        else
        {
            --votecount;
        }
        if(votecount==0)
        {
            voter=arr[i];
            votecount=1;
        }
    }
    return voter;
}
