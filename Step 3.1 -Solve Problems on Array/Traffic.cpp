int traffic(int n, int k, vector<int> nums) {
	// Write your code here.
	int cnt_zeros = 0;
	int i =0;
	int j = 0;
	int len = 0;

	while(j<n)
	{
		if(nums[j] == 0)
		{
			cnt_zeros++;
		}

		while(cnt_zeros > k)
		{
			if(nums[i] == 0)
			{
				cnt_zeros--;
			}
			i++;
		}
		len = max(len,j-i+1);
		j++;
	}
	return len;
}
