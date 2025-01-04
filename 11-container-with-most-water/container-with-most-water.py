class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxresult = 0
        i =0
        j = len(height)-1
        while i<j:
            if height[i] <= height[j]:
                length = height[i] if height[i]<=height[j] else height[j]
                bredth = (j+1) - (i+1)
                area = length * bredth
                if maxresult <= area:
                    maxresult = area
                i +=1
            else:
                length = height[j] if height[i]>=height[j] else height[i]
                bredth = (j+1) - (i+1)
                area = length * bredth
                if maxresult <= area:
                    maxresult = area
                j -=1
        return maxresult

    
            





        