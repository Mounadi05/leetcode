function increasingTriplet(nums: number[]): boolean {
    let i:number = Number.MAX_VALUE;
    let j:number = Number.MAX_VALUE;
    for(let k of nums)
        if(k <= i) i = k;
        else if (k <= j) j = k;
        else return true;
    return false;
};