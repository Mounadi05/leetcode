function maxOperations(nums: number[], k: number): number {
    let operation:number = 0;
    let pairs:object = {};
    for(let num of nums)
    {
        if (pairs[k - num] > 0)
        {
            operation++;
            pairs[k - num]--;
        }
        else 
            pairs[num] = (pairs[num] | 0) + 1;
    }
    return operation;
};