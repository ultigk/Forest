int main()
{
    Forest forest(height, width);  // width � height ���� �������� � ����������, ���� ���������
    while (1)
    {
        getchar();  // �����, ���� �� ������� Enter
        std::cout << forest << "\n" << std::endl;
        forest.Update()
    }
    return 0;
}
