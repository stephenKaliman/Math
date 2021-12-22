use std::vec;

fn valid(A: Vec<Vec<i32>>, B: Vec<Vec<i32>>) -> bool
{
    if A.len() > 0 && B.len() > 0 && A[0].len() > 0 && B[0].len() > 0 && A[0].len() == B.len()
    {
        return true;
    }
    else
    {
        return false;
    }
}


fn multiply(A: Vec<Vec<i32>>, B: Vec<Vec<i32>>) -> Vec<Vec<i32>>
{
    if !(valid(A,B))
    {
        return vec![];
    }

    let m = A.len();
    let n = A[0].len();
    let p = B[0].len();

    let mut C = vec![vec![0; m]; p];

    for i in 0..m
    {
        for k in 0..p
        {
            for j in 0..n
            {
                C[i][k] += A[i][j]*B[j][k];
            }
        }
    }
    return C;
}
