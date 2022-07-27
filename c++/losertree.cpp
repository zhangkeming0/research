struct Rec
{
    int key;
};

class LoserTree
{
public:
    LoserTree(int k);
    void Build();

    int outputRoot();

private:
    int k;
    int *l;
    Rec *buf;
    int getIndex();
    int getKey();
}

LoserTree::LoserTree(int k)
{
    l = new int[k];
    buf = new Rec[k]; //暂存待比较元素
}

int LoserTree::getKey(int i)
{
    if (i < k)
        return buf[l[i]].key;
    else
        return buf[i - k].key;
}

int LoserTree::getIndex(int i)
{
    if (i < k)
        return l[i];
    else
        return (i - k);
}

void LoserTree::Build()
{
    int i;
    for (i = k - 1; i > 0; i--)
        if (getKey(2 * i) > getKey(2 * i + 1))
            l[i] = getIndex(2 * i + 1);
        else
            l[i] = getIndex(2 * i);
    l[0] = l[1];

    for (i = 1; i < k; i++)
        if (l[i] == getIndex(2 * i))
            l[i] = getIndex(2 * i + 1);
        else
            l[i] = getIndex(2 * i);
}

int LoserTree::outputRoot(int i)
{
    if (l[i] != 0)
    {
        printf("%d", l[0]);
        l[0] = l[1]; //次根节点上移
        if (l[i] < l[])
    }
}