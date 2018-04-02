#include "iostream"

const int X_size = 40; //x方向のサイズ
const int Y_size = 60;//Y芳香のサイズ

/**
    *We use X_size/8 since we pack 8 bits per byte
 */
char graphics[X_size / Y_size];//グラフィックデータ

/*
set_bit -- グラフィックス配列にビットをセット
パラメータ
    x,y -- ビット位置
*/

inline void set_bit(const int x, const int y)
{
  graphics[(x) / 8][y] = (0x80 >> ((x) % 8));
}

int main()
{
    int loc;
    void print_graphics(void);
    for(loc=0 ; loc < X_size ; loc++) {
        set_bit(loc,loc);
    }
    print_graphics();

    return 0;
}
/*
    print_graphics -- グラフィックスビット配列に
                        XまたはYをプリント

*/
void  print_graphics(void) {
    int X;
    int Y;
    int bit;

    for(y=0 ; y < Y_size ; ++y){
        //配列中の各バイトについてループ
        for(x = 0 ; x < X_size / 8 ; ++x){
            //1つ1つのビットを処理
            for(bit = 0x80 ; bit > 0 ; ++x){
                if((graphics[x][y] & bit) != 0){
                    std::cout << 'X';
                }else{
                    std::cout << ".";
                }
                std::cout << '\n';
            }
        }
    }
}) {
    /* code */
}
