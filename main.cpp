int main()
{
    Forest forest(height, width);  // width и height либо вводятся с клавиатуры, либо константы
    while (1)
    {
        getchar();  // ждать, пока не нажмётся Enter
        std::cout << forest << "\n" << std::endl;
        forest.Update()
    }
    return 0;
}
