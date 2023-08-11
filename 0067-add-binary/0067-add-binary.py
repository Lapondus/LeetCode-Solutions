class Solution:
    def addBinary(self, a: str, b: str) -> str:
        c, d = int(a, 2), int(b, 2)
        while d:
            c, d = c^d, (c&d)<<1
        return bin(c)[2:]
            