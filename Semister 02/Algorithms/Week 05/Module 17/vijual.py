weight = [2,5,3]
value = [4,5,2]
def fn(n, w):
  if(n == 0 or w == 0):
    return 0
  if(weight[n-1] <= w):
    op1 = fn(n-1,w-weight[n-1])+value[n-1]
    op2 = fn(n-1,w)
    return max(op1,op2)
  else:
    return fn(n-1,w)