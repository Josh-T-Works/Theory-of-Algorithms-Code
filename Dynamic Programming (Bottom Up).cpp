int climbStairs(int n) { 
        int moves[46];
        moves[1] = 1;
        moves[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            moves[i] = (moves[i-1] + moves[i-2]);
        }
        return moves[n];  
    }
