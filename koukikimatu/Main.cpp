#include <stdio.h>
#include <list>
#include <vector>

// ��1��(10�_)
// �ȉ��̃N���X�ɃR���X�g���N�^�A�f�X�g���N�^��ǉ����Ă��������B
// �R���X�g���N�^�A�f�X�g���N�^�̏����̓��e�͂Ȃ�ł��\���܂���

/*
class Point
{
    Point()
    {
        int x;
        int y;
    }

    ~Point()
    {
       x;
       y;
    }

    private:
        int x;
        int y;
};
*/


// ��2��(10�_)
// int�^�̕ϐ���new���g���m�ۂ��Ă��������B
// �܂��Achar�^�̔z���new���g���m�ۂ��Ă��������B
// �ǂ����delete���Ăяo���悤�ɂ��Ă��������B

/*
int main()
{
    int* newInt = new int(2);
    char* newChar = new char[2];

    delete newInt;
    newInt = nullptr;

    delete[] newChar;
    newChar = nullptr;
}
*/


// ��3��(15�_)
// �ȉ��̌p����N���X�̃f�X�g���N�^���������Ăяo�����悤�ɁA
// �N���X���C�����Ă��������B

/*
class Test
{
public:
    Test()
    {
        printf("Test\n");
    }
    virtual ~Test()
    {
        printf("~Test\n");
    }
};
class Test2 : public Test
{
public:
    Test2()
    {
        printf("Test2\n");
    }
    ~Test2()
    {
        printf("~Test2\n");
    }
};
int main()
{
    Test* t;
    t = new Test2();

    delete t;
    return 0;
}
*/


// ��4��(25�_)
// �ȉ��̊֐����e���v���[�g�����āA
// �l�X�Ȍ^�Ōv�Z�ł���悤�ɂ��Ă��������B

/*
template <typename T>
T Calc(T a, T b, T type)
{
    T ans = 0;
    switch (type)
    {
    case 0:
        ans = a + b;
        break;
    case 1:
        ans = a - b;
        break;
    case 2:
        ans = a * b;
        break;
    case 3:
        ans = a / b;
        break;
    }

    return ans;
}

int main()
{
    int ans1;
    float ans2;
    char ans3;

    ans1 = Calc<int>(2, 5, 0);
    ans2 = Calc<float>(10.0f, 2.5f, 3);
    ans3 = Calc<char>(10, 4, 2);

    printf("ans1 = %d\n ans2 = %f\n ans3 = %d\n", ans1, ans2, ans3);

    return 0;
}
*/


// ��5��(25�_)
// ���̃v���O�������C�����A�ȉ��̂悤�ȕ\���ɂȂ�悤�Ƀv���O�������쐬���Ă��������B
// num = 50
// num = 40
// num = 30
// num = 20
// num = 10
// �܂��A���X�g�̃f�[�^��30�����Ȃ���Ԃɂ��Ă��������B���̍ە\���͈ȉ��̂ɂȂ�܂��B
// num = 30

/*
int main()
{
    std::list<int> lst;
    for (int i = 0; i < 5; ++i)
    {
        lst.push_front((i + 1) * 10);
    }

    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
}
*/


// ��6��(25�_)
// ��5��Ɠ����\���ɂȂ�悤��std::vector���g���ăv���O�������L�q���Ă��������B


int main()
{
    std::vector<int> lst;
    for (int i = 0; i < 5; ++i)
    {
       
    }

    for (std::vector<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
}

