def max_length(a,k):
    s = 0
    m_len = 0
    i,j=0,0
    l = len(a)
    while i<l:
        if s<=k and m_len<(j-i):
            m_len = j-i
        print i,j,s
        if s<=k and j<l:
            s+=a[j]
            j+=1
        else:
            s-=a[i]
            i+=1
    return m_len

a = [1,2,3]
k = 3
print max_length(a,k)