#include "../rpi-rgb-led-matrix/include/led-matrix.h"

int main(int argc, char *argv[]){
    //create the RGBMatrix options that will be used to create the matrix and fill
    //the important fields with information about our matrix
    rgb_matrix::RGBMatrix::Options options;
    options.hardware_mapping = "adafruit-hat-pwm";
    options.rows = 64;
    options.cols = 64;
    options.chain_length = 1;
    options.parallel = 1;
    options.show_refresh_rate = true;

    //now create our canvas
    rgb_matrix::Canvas *canvas = RGBMatrix::CreateFromFlags(&argc, &argv, &options);

    //now paint the canvas
    canvas->SetPixel(0, 0, 255, 0, 0);
    

    //erase the contents from the canvas
    canvas->Clear();

    return 0;
}