Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.


We define a backtrack function named backtrack(first, curr) which takes the index of first element to add and a current combination as arguments.

If the current combination is done, we add the combination to the final output.

Otherwise, we iterate over the indexes i from first to the length of the entire sequence n.

Add integer nums[i] into the current combination curr.

Proceed to add more integers into the combination : backtrack(i + 1, curr).

Backtrack by removing nums[i] from curr.
