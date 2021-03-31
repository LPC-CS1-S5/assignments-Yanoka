int main()
{
    srand(time(0));
    int preceding = -1;
    int num;
    const int N = 10;

    ofstream ofs;

    ofs.open("numbers.txt");
    if (ofs.fail())
    {
        cerr << "File open error " << endl;
        exit(-1);
    }

    for (int i = 0; i < N; i++)
    {
        int num = rand() % (50 - 1) + 1;

        if (isGreater(num))
        {
            ofs << num << " ";
        }        
				preceding = num;
    }

    ofs.close();
}