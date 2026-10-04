class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if not matrix or not matrix[0]:
            return False

        rows = len(matrix)
        cols = len(matrix[0])

        # Step 1: Find the correct row using binary search on the first column
        rlow = 0
        rhigh = rows - 1
        rval = -1

        while rlow <= rhigh:
            rmid = (rlow + rhigh) // 2
            if matrix[rmid][0] <= target:
                rval = rmid  # This could be our row
                rlow = rmid + 1
            else:
                rhigh = rmid - 1

        # If rval is still -1, target is smaller than the smallest element in the matrix
        if rval == -1:
            return False

        # Step 2: Perform binary search on the identified row (rval)
        clow = 0
        chigh = cols - 1

        while clow <= chigh:
            cmid = (clow + chigh) // 2
            if matrix[rval][cmid] < target:
                clow = cmid + 1
            elif matrix[rval][cmid] > target:
                chigh = cmid - 1
            else:
                return True

        return False