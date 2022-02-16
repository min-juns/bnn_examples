

#include "vta/runtime.h"
#include "VTABundle.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include "binarynet.h"
SymbolTableEntry symbolTableEntry_binarynet[2]={{"input",0,3072,'1'},{"output",12288,10,'1'}};
BundleConfig binarynet_config = {1387432, 12328, 0, 64, 2, symbolTableEntry_binarynet};
namespace namespace_binarynet {
int8_t* conv1_weight__1;
int8_t* conv1_bias;
int8_t* layer1_0_conv1_weight__1;
int8_t* layer1_0_conv1_bias;
int8_t* layer1_0_conv2_weight__1;
int8_t* layer1_0_conv2_bias;
int8_t* layer1_1_conv1_weight__1;
int8_t* layer1_1_conv1_bias;
int8_t* layer1_1_conv2_weight__1;
int8_t* layer1_1_conv2_bias;
int8_t* layer2_0_conv1_weight__1;
int8_t* layer2_0_conv1_bias;
int8_t* layer2_0_conv2_weight__1;
int8_t* layer2_0_conv2_bias;
int8_t* layer2_1_conv1_weight__1;
int8_t* layer2_1_conv1_bias;
int8_t* layer2_1_conv2_weight__1;
int8_t* layer2_1_conv2_bias;
int8_t* layer3_0_conv1_weight__1;
int8_t* layer3_0_conv1_bias;
int8_t* layer3_0_conv2_weight__1;
int8_t* layer3_0_conv2_bias;
int8_t* layer3_1_conv1_weight__1;
int8_t* layer3_1_conv1_bias;
int8_t* layer3_1_conv2_weight__1;
int8_t* layer3_1_conv2_bias;
int8_t* fc_weight__1;
int8_t* fc_bias;
}
using namespace namespace_binarynet;
extern VTACommandHandle vtaCmdH;

void binarynet_load_module(uint8_t *constantWeight){
  conv1_weight__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 0), 0, conv1_weight__1, 0, 3456, 1);
  conv1_bias = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 3456), 0, conv1_bias, 0, 512, 1);
  layer1_0_conv1_weight__1 = (int8_t *)VTABufferAlloc(18432);
  VTABufferCopy((int8_t *)(constantWeight + 3968), 0, layer1_0_conv1_weight__1, 0, 18432, 1);
  layer1_0_conv1_bias = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 22400), 0, layer1_0_conv1_bias, 0, 512, 1);
  layer1_0_conv2_weight__1 = (int8_t *)VTABufferAlloc(18432);
  VTABufferCopy((int8_t *)(constantWeight + 22912), 0, layer1_0_conv2_weight__1, 0, 18432, 1);
  layer1_0_conv2_bias = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 41344), 0, layer1_0_conv2_bias, 0, 512, 1);
  layer1_1_conv1_weight__1 = (int8_t *)VTABufferAlloc(18432);
  VTABufferCopy((int8_t *)(constantWeight + 41856), 0, layer1_1_conv1_weight__1, 0, 18432, 1);
  layer1_1_conv1_bias = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 60288), 0, layer1_1_conv1_bias, 0, 512, 1);
  layer1_1_conv2_weight__1 = (int8_t *)VTABufferAlloc(18432);
  VTABufferCopy((int8_t *)(constantWeight + 60800), 0, layer1_1_conv2_weight__1, 0, 18432, 1);
  layer1_1_conv2_bias = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 79232), 0, layer1_1_conv2_bias, 0, 512, 1);
  layer2_0_conv1_weight__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 79744), 0, layer2_0_conv1_weight__1, 0, 36864, 1);
  layer2_0_conv1_bias = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 116608), 0, layer2_0_conv1_bias, 0, 1024, 1);
  layer2_0_conv2_weight__1 = (int8_t *)VTABufferAlloc(73728);
  VTABufferCopy((int8_t *)(constantWeight + 117632), 0, layer2_0_conv2_weight__1, 0, 73728, 1);
  layer2_0_conv2_bias = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 191360), 0, layer2_0_conv2_bias, 0, 1024, 1);
  layer2_1_conv1_weight__1 = (int8_t *)VTABufferAlloc(73728);
  VTABufferCopy((int8_t *)(constantWeight + 192384), 0, layer2_1_conv1_weight__1, 0, 73728, 1);
  layer2_1_conv1_bias = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 266112), 0, layer2_1_conv1_bias, 0, 1024, 1);
  layer2_1_conv2_weight__1 = (int8_t *)VTABufferAlloc(73728);
  VTABufferCopy((int8_t *)(constantWeight + 267136), 0, layer2_1_conv2_weight__1, 0, 73728, 1);
  layer2_1_conv2_bias = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 340864), 0, layer2_1_conv2_bias, 0, 1024, 1);
  layer3_0_conv1_weight__1 = (int8_t *)VTABufferAlloc(147456);
  VTABufferCopy((int8_t *)(constantWeight + 341888), 0, layer3_0_conv1_weight__1, 0, 147456, 1);
  layer3_0_conv1_bias = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 489344), 0, layer3_0_conv1_bias, 0, 2048, 1);
  layer3_0_conv2_weight__1 = (int8_t *)VTABufferAlloc(294912);
  VTABufferCopy((int8_t *)(constantWeight + 491392), 0, layer3_0_conv2_weight__1, 0, 294912, 1);
  layer3_0_conv2_bias = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 786304), 0, layer3_0_conv2_bias, 0, 2048, 1);
  layer3_1_conv1_weight__1 = (int8_t *)VTABufferAlloc(294912);
  VTABufferCopy((int8_t *)(constantWeight + 788352), 0, layer3_1_conv1_weight__1, 0, 294912, 1);
  layer3_1_conv1_bias = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 1083264), 0, layer3_1_conv1_bias, 0, 2048, 1);
  layer3_1_conv2_weight__1 = (int8_t *)VTABufferAlloc(294912);
  VTABufferCopy((int8_t *)(constantWeight + 1085312), 0, layer3_1_conv2_weight__1, 0, 294912, 1);
  layer3_1_conv2_bias = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 1380224), 0, layer3_1_conv2_bias, 0, 2048, 1);
  fc_weight__1 = (int8_t *)VTABufferAlloc(5120);
  VTABufferCopy((int8_t *)(constantWeight + 1382272), 0, fc_weight__1, 0, 5120, 1);
  fc_bias = (int8_t *)VTABufferAlloc(40);
  VTABufferCopy((int8_t *)(constantWeight + 1387392), 0, fc_bias, 0, 40, 1);
}

void binarynet_destroy_module(){
  VTABufferFree(conv1_weight__1);
  VTABufferFree(conv1_bias);
  VTABufferFree(layer1_0_conv1_weight__1);
  VTABufferFree(layer1_0_conv1_bias);
  VTABufferFree(layer1_0_conv2_weight__1);
  VTABufferFree(layer1_0_conv2_bias);
  VTABufferFree(layer1_1_conv1_weight__1);
  VTABufferFree(layer1_1_conv1_bias);
  VTABufferFree(layer1_1_conv2_weight__1);
  VTABufferFree(layer1_1_conv2_bias);
  VTABufferFree(layer2_0_conv1_weight__1);
  VTABufferFree(layer2_0_conv1_bias);
  VTABufferFree(layer2_0_conv2_weight__1);
  VTABufferFree(layer2_0_conv2_bias);
  VTABufferFree(layer2_1_conv1_weight__1);
  VTABufferFree(layer2_1_conv1_bias);
  VTABufferFree(layer2_1_conv2_weight__1);
  VTABufferFree(layer2_1_conv2_bias);
  VTABufferFree(layer3_0_conv1_weight__1);
  VTABufferFree(layer3_0_conv1_bias);
  VTABufferFree(layer3_0_conv2_weight__1);
  VTABufferFree(layer3_0_conv2_bias);
  VTABufferFree(layer3_1_conv1_weight__1);
  VTABufferFree(layer3_1_conv1_bias);
  VTABufferFree(layer3_1_conv2_weight__1);
  VTABufferFree(layer3_1_conv2_bias);
  VTABufferFree(fc_weight__1);
  VTABufferFree(fc_bias);
}
int binarynet(uint8_t *constantWeight, uint8_t *mutableWeight, uint8_t *activations){

  //Run allocactivation : Conv_0__1_quantize_res
  int8_t *Conv_0__1_quantize_res = (int8_t *)malloc(3072);

  //Run quantize : Conv_0__1_quantize
  int8_t* input = (int8_t*)mutableWeight + 0;
  typecast(input, Conv_0__1_quantize_res, 3072, 1/1.000000, 0 );

  //Run allocactivation : Conv_0__13_res
  int8_t *Conv_0__13_res = (int8_t *)malloc(3072);

  //Run transpose : Conv_0__13
  transpose(Conv_0__1_quantize_res, Conv_0__13_res, 1, 3, 32, 32, 1, 32, 32, 3, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_0__1_quantize_res
  free(Conv_0__1_quantize_res);

  //Run allocactivation : Conv_0__2_res
  int8_t *Conv_0__2_res = (int8_t *)malloc(131072);

  //Run convolution : Conv_0__2
  bnn_nonvtaconvolution(Conv_0__13_res, (int8_t *)VTABufferGetVirtAddr(conv1_weight__1), (int32_t *)VTABufferGetVirtAddr(conv1_bias), Conv_0__2_res, 1, 32, 32, 3, 128, 3, 3, 1, 1, 1, 1, 0, 1, 32, 32 );

  //Run deallocactivation : dealloc_Conv_0__13_res
  free(Conv_0__13_res);

  //Run allocactivation : Conv_0__12_res
  int8_t *Conv_0__12_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_0__12
  transpose(Conv_0__2_res, Conv_0__12_res, 1, 32, 32, 128, 1, 128, 32, 32, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_0__2_res
  free(Conv_0__2_res);

  //Run elementsign : Sign_1
  elemsign(Conv_0__12_res, Conv_0__12_res, 131072);
 
  //Run allocactivation : Conv_2__13_res
  int8_t *Conv_2__13_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_2__13
  transpose(Conv_0__12_res, Conv_2__13_res, 1, 128, 32, 32, 1, 32, 32, 128, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_0__12_res
  free(Conv_0__12_res);

  //Run allocactivation : Conv_2__2_res
  int8_t *Conv_2__2_res = (int8_t *)malloc(131072);

  //Run convolution : Conv_2__2
  int8_t* Conv_2__2_input_transpose = (int8_t *)VTABufferAlloc(16384);
  transpose_nhwc2vtaio_pack(Conv_2__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_2__2_input_transpose), 1, 32, 32, 16);
  int8_t* Conv_2__2_output_bef_transpose = (int8_t *)VTABufferAlloc(131072);
  convolution_wo_tr(Conv_2__2_input_transpose, layer1_0_conv1_weight__1, (int32_t *)layer1_0_conv1_bias, Conv_2__2_output_bef_transpose, 1, 32, 32, 16, 128, 3, 3, 1, 1, 0, 1, 7, 32, 32, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_2__2_output_bef_transpose), Conv_2__2_res, 1, 32, 32, 128 );
  VTABufferFree(Conv_2__2_input_transpose);
  VTABufferFree(Conv_2__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_2__13_res
  free(Conv_2__13_res);

  //Run allocactivation : Conv_2__12_res
  int8_t *Conv_2__12_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_2__12
  transpose(Conv_2__2_res, Conv_2__12_res, 1, 32, 32, 128, 1, 128, 32, 32, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_2__2_res
  free(Conv_2__2_res);

  //Run elementsign : Sign_3
  elemsign(Conv_2__12_res, Conv_2__12_res, 131072);
 
  //Run allocactivation : Conv_4__13_res
  int8_t *Conv_4__13_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_4__13
  transpose(Conv_2__12_res, Conv_4__13_res, 1, 128, 32, 32, 1, 32, 32, 128, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_2__12_res
  free(Conv_2__12_res);

  //Run allocactivation : Conv_4__2_res
  int8_t *Conv_4__2_res = (int8_t *)malloc(131072);

  //Run convolution : Conv_4__2
  int8_t* Conv_4__2_input_transpose = (int8_t *)VTABufferAlloc(16384);
  transpose_nhwc2vtaio_pack(Conv_4__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_4__2_input_transpose), 1, 32, 32, 16);
  int8_t* Conv_4__2_output_bef_transpose = (int8_t *)VTABufferAlloc(131072);
  convolution_wo_tr(Conv_4__2_input_transpose, layer1_0_conv2_weight__1, (int32_t *)layer1_0_conv2_bias, Conv_4__2_output_bef_transpose, 1, 32, 32, 16, 128, 3, 3, 1, 1, 0, 1, 7, 32, 32, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_4__2_output_bef_transpose), Conv_4__2_res, 1, 32, 32, 128 );
  VTABufferFree(Conv_4__2_input_transpose);
  VTABufferFree(Conv_4__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_4__13_res
  free(Conv_4__13_res);

  //Run allocactivation : Conv_4__12_res
  int8_t *Conv_4__12_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_4__12
  transpose(Conv_4__2_res, Conv_4__12_res, 1, 32, 32, 128, 1, 128, 32, 32, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_4__2_res
  free(Conv_4__2_res);

  //Run elementsign : Sign_5
  elemsign(Conv_4__12_res, Conv_4__12_res, 131072);
 
  //Run allocactivation : Conv_6__13_res
  int8_t *Conv_6__13_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_6__13
  transpose(Conv_4__12_res, Conv_6__13_res, 1, 128, 32, 32, 1, 32, 32, 128, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_4__12_res
  free(Conv_4__12_res);

  //Run allocactivation : Conv_6__2_res
  int8_t *Conv_6__2_res = (int8_t *)malloc(131072);

  //Run convolution : Conv_6__2
  int8_t* Conv_6__2_input_transpose = (int8_t *)VTABufferAlloc(16384);
  transpose_nhwc2vtaio_pack(Conv_6__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_6__2_input_transpose), 1, 32, 32, 16);
  int8_t* Conv_6__2_output_bef_transpose = (int8_t *)VTABufferAlloc(131072);
  convolution_wo_tr(Conv_6__2_input_transpose, layer1_1_conv1_weight__1, (int32_t *)layer1_1_conv1_bias, Conv_6__2_output_bef_transpose, 1, 32, 32, 16, 128, 3, 3, 1, 1, 0, 1, 7, 32, 32, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_6__2_output_bef_transpose), Conv_6__2_res, 1, 32, 32, 128 );
  VTABufferFree(Conv_6__2_input_transpose);
  VTABufferFree(Conv_6__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_6__13_res
  free(Conv_6__13_res);

  //Run allocactivation : Conv_6__12_res
  int8_t *Conv_6__12_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_6__12
  transpose(Conv_6__2_res, Conv_6__12_res, 1, 32, 32, 128, 1, 128, 32, 32, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_6__2_res
  free(Conv_6__2_res);

  //Run elementsign : Sign_7
  elemsign(Conv_6__12_res, Conv_6__12_res, 131072);
 
  //Run allocactivation : Conv_8__13_res
  int8_t *Conv_8__13_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_8__13
  transpose(Conv_6__12_res, Conv_8__13_res, 1, 128, 32, 32, 1, 32, 32, 128, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_6__12_res
  free(Conv_6__12_res);

  //Run allocactivation : Conv_8__2_res
  int8_t *Conv_8__2_res = (int8_t *)malloc(131072);

  //Run convolution : Conv_8__2
  int8_t* Conv_8__2_input_transpose = (int8_t *)VTABufferAlloc(16384);
  transpose_nhwc2vtaio_pack(Conv_8__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_8__2_input_transpose), 1, 32, 32, 16);
  int8_t* Conv_8__2_output_bef_transpose = (int8_t *)VTABufferAlloc(131072);
  convolution_wo_tr(Conv_8__2_input_transpose, layer1_1_conv2_weight__1, (int32_t *)layer1_1_conv2_bias, Conv_8__2_output_bef_transpose, 1, 32, 32, 16, 128, 3, 3, 1, 1, 0, 1, 7, 32, 32, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_8__2_output_bef_transpose), Conv_8__2_res, 1, 32, 32, 128 );
  VTABufferFree(Conv_8__2_input_transpose);
  VTABufferFree(Conv_8__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_8__13_res
  free(Conv_8__13_res);

  //Run allocactivation : Conv_8__12_res
  int8_t *Conv_8__12_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_8__12
  transpose(Conv_8__2_res, Conv_8__12_res, 1, 32, 32, 128, 1, 128, 32, 32, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_8__2_res
  free(Conv_8__2_res);

  //Run elementsign : Sign_9
  elemsign(Conv_8__12_res, Conv_8__12_res, 131072);
 
  //Run allocactivation : Conv_10__13_res
  int8_t *Conv_10__13_res = (int8_t *)malloc(131072);

  //Run transpose : Conv_10__13
  transpose(Conv_8__12_res, Conv_10__13_res, 1, 128, 32, 32, 1, 32, 32, 128, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_8__12_res
  free(Conv_8__12_res);

  //Run allocactivation : Conv_10__2_res
  int8_t *Conv_10__2_res = (int8_t *)malloc(65536);

  //Run convolution : Conv_10__2
  int8_t* Conv_10__2_input_transpose = (int8_t *)VTABufferAlloc(16384);
  transpose_nhwc2vtaio_pack(Conv_10__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_10__2_input_transpose), 1, 32, 32, 16);
  int8_t* Conv_10__2_output_bef_transpose = (int8_t *)VTABufferAlloc(65536);
  convolution_wo_tr(Conv_10__2_input_transpose, layer2_0_conv1_weight__1, (int32_t *)layer2_0_conv1_bias, Conv_10__2_output_bef_transpose, 1, 32, 32, 16, 256, 3, 3, 1, 2, 0, 1, 7, 16, 16, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_10__2_output_bef_transpose), Conv_10__2_res, 1, 16, 16, 256 );
  VTABufferFree(Conv_10__2_input_transpose);
  VTABufferFree(Conv_10__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_10__13_res
  free(Conv_10__13_res);

  //Run allocactivation : Conv_10__12_res
  int8_t *Conv_10__12_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_10__12
  transpose(Conv_10__2_res, Conv_10__12_res, 1, 16, 16, 256, 1, 256, 16, 16, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_10__2_res
  free(Conv_10__2_res);

  //Run elementsign : Sign_11
  elemsign(Conv_10__12_res, Conv_10__12_res, 65536);
 
  //Run allocactivation : Conv_12__13_res
  int8_t *Conv_12__13_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_12__13
  transpose(Conv_10__12_res, Conv_12__13_res, 1, 256, 16, 16, 1, 16, 16, 256, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_10__12_res
  free(Conv_10__12_res);

  //Run allocactivation : Conv_12__2_res
  int8_t *Conv_12__2_res = (int8_t *)malloc(65536);

  //Run convolution : Conv_12__2
  int8_t* Conv_12__2_input_transpose = (int8_t *)VTABufferAlloc(8192);
  transpose_nhwc2vtaio_pack(Conv_12__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_12__2_input_transpose), 1, 16, 16, 32);
  int8_t* Conv_12__2_output_bef_transpose = (int8_t *)VTABufferAlloc(65536);
  convolution_wo_tr(Conv_12__2_input_transpose, layer2_0_conv2_weight__1, (int32_t *)layer2_0_conv2_bias, Conv_12__2_output_bef_transpose, 1, 16, 16, 32, 256, 3, 3, 1, 1, 0, 1, 7, 16, 16, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_12__2_output_bef_transpose), Conv_12__2_res, 1, 16, 16, 256 );
  VTABufferFree(Conv_12__2_input_transpose);
  VTABufferFree(Conv_12__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_12__13_res
  free(Conv_12__13_res);

  //Run allocactivation : Conv_12__12_res
  int8_t *Conv_12__12_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_12__12
  transpose(Conv_12__2_res, Conv_12__12_res, 1, 16, 16, 256, 1, 256, 16, 16, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_12__2_res
  free(Conv_12__2_res);

  //Run elementsign : Sign_13
  elemsign(Conv_12__12_res, Conv_12__12_res, 65536);
 
  //Run allocactivation : Conv_14__13_res
  int8_t *Conv_14__13_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_14__13
  transpose(Conv_12__12_res, Conv_14__13_res, 1, 256, 16, 16, 1, 16, 16, 256, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_12__12_res
  free(Conv_12__12_res);

  //Run allocactivation : Conv_14__2_res
  int8_t *Conv_14__2_res = (int8_t *)malloc(65536);

  //Run convolution : Conv_14__2
  int8_t* Conv_14__2_input_transpose = (int8_t *)VTABufferAlloc(8192);
  transpose_nhwc2vtaio_pack(Conv_14__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_14__2_input_transpose), 1, 16, 16, 32);
  int8_t* Conv_14__2_output_bef_transpose = (int8_t *)VTABufferAlloc(65536);
  convolution_wo_tr(Conv_14__2_input_transpose, layer2_1_conv1_weight__1, (int32_t *)layer2_1_conv1_bias, Conv_14__2_output_bef_transpose, 1, 16, 16, 32, 256, 3, 3, 1, 1, 0, 1, 7, 16, 16, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_14__2_output_bef_transpose), Conv_14__2_res, 1, 16, 16, 256 );
  VTABufferFree(Conv_14__2_input_transpose);
  VTABufferFree(Conv_14__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_14__13_res
  free(Conv_14__13_res);

  //Run allocactivation : Conv_14__12_res
  int8_t *Conv_14__12_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_14__12
  transpose(Conv_14__2_res, Conv_14__12_res, 1, 16, 16, 256, 1, 256, 16, 16, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_14__2_res
  free(Conv_14__2_res);

  //Run elementsign : Sign_15
  elemsign(Conv_14__12_res, Conv_14__12_res, 65536);
 
  //Run allocactivation : Conv_16__13_res
  int8_t *Conv_16__13_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_16__13
  transpose(Conv_14__12_res, Conv_16__13_res, 1, 256, 16, 16, 1, 16, 16, 256, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_14__12_res
  free(Conv_14__12_res);

  //Run allocactivation : Conv_16__2_res
  int8_t *Conv_16__2_res = (int8_t *)malloc(65536);

  //Run convolution : Conv_16__2
  int8_t* Conv_16__2_input_transpose = (int8_t *)VTABufferAlloc(8192);
  transpose_nhwc2vtaio_pack(Conv_16__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_16__2_input_transpose), 1, 16, 16, 32);
  int8_t* Conv_16__2_output_bef_transpose = (int8_t *)VTABufferAlloc(65536);
  convolution_wo_tr(Conv_16__2_input_transpose, layer2_1_conv2_weight__1, (int32_t *)layer2_1_conv2_bias, Conv_16__2_output_bef_transpose, 1, 16, 16, 32, 256, 3, 3, 1, 1, 0, 1, 7, 16, 16, vtaCmdH, 1, 8, 8, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_16__2_output_bef_transpose), Conv_16__2_res, 1, 16, 16, 256 );
  VTABufferFree(Conv_16__2_input_transpose);
  VTABufferFree(Conv_16__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_16__13_res
  free(Conv_16__13_res);

  //Run allocactivation : Conv_16__12_res
  int8_t *Conv_16__12_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_16__12
  transpose(Conv_16__2_res, Conv_16__12_res, 1, 16, 16, 256, 1, 256, 16, 16, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_16__2_res
  free(Conv_16__2_res);

  //Run elementsign : Sign_17
  elemsign(Conv_16__12_res, Conv_16__12_res, 65536);
 
  //Run allocactivation : Conv_18__13_res
  int8_t *Conv_18__13_res = (int8_t *)malloc(65536);

  //Run transpose : Conv_18__13
  transpose(Conv_16__12_res, Conv_18__13_res, 1, 256, 16, 16, 1, 16, 16, 256, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_16__12_res
  free(Conv_16__12_res);

  //Run allocactivation : Conv_18__2_res
  int8_t *Conv_18__2_res = (int8_t *)malloc(32768);

  //Run convolution : Conv_18__2
  int8_t* Conv_18__2_input_transpose = (int8_t *)VTABufferAlloc(8192);
  transpose_nhwc2vtaio_pack(Conv_18__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_18__2_input_transpose), 1, 16, 16, 32);
  int8_t* Conv_18__2_output_bef_transpose = (int8_t *)VTABufferAlloc(32768);
  convolution_wo_tr(Conv_18__2_input_transpose, layer3_0_conv1_weight__1, (int32_t *)layer3_0_conv1_bias, Conv_18__2_output_bef_transpose, 1, 16, 16, 32, 512, 3, 3, 1, 2, 0, 1, 7, 8, 8, vtaCmdH, 1, 8, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_18__2_output_bef_transpose), Conv_18__2_res, 1, 8, 8, 512 );
  VTABufferFree(Conv_18__2_input_transpose);
  VTABufferFree(Conv_18__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_18__13_res
  free(Conv_18__13_res);

  //Run allocactivation : Conv_18__12_res
  int8_t *Conv_18__12_res = (int8_t *)malloc(32768);

  //Run transpose : Conv_18__12
  transpose(Conv_18__2_res, Conv_18__12_res, 1, 8, 8, 512, 1, 512, 8, 8, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_18__2_res
  free(Conv_18__2_res);

  //Run elementsign : Sign_19
  elemsign(Conv_18__12_res, Conv_18__12_res, 32768);
 
  //Run allocactivation : Conv_20__13_res
  int8_t *Conv_20__13_res = (int8_t *)malloc(32768);

  //Run transpose : Conv_20__13
  transpose(Conv_18__12_res, Conv_20__13_res, 1, 512, 8, 8, 1, 8, 8, 512, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_18__12_res
  free(Conv_18__12_res);

  //Run allocactivation : Conv_20__2_res
  int8_t *Conv_20__2_res = (int8_t *)malloc(32768);

  //Run convolution : Conv_20__2
  int8_t* Conv_20__2_input_transpose = (int8_t *)VTABufferAlloc(4096);
  transpose_nhwc2vtaio_pack(Conv_20__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_20__2_input_transpose), 1, 8, 8, 64);
  int8_t* Conv_20__2_output_bef_transpose = (int8_t *)VTABufferAlloc(32768);
  convolution_wo_tr(Conv_20__2_input_transpose, layer3_0_conv2_weight__1, (int32_t *)layer3_0_conv2_bias, Conv_20__2_output_bef_transpose, 1, 8, 8, 64, 512, 3, 3, 1, 1, 0, 1, 7, 8, 8, vtaCmdH, 1, 8, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_20__2_output_bef_transpose), Conv_20__2_res, 1, 8, 8, 512 );
  VTABufferFree(Conv_20__2_input_transpose);
  VTABufferFree(Conv_20__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_20__13_res
  free(Conv_20__13_res);

  //Run allocactivation : Conv_20__12_res
  int8_t *Conv_20__12_res = (int8_t *)malloc(32768);

  //Run transpose : Conv_20__12
  transpose(Conv_20__2_res, Conv_20__12_res, 1, 8, 8, 512, 1, 512, 8, 8, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_20__2_res
  free(Conv_20__2_res);

  //Run elementsign : Sign_21
  elemsign(Conv_20__12_res, Conv_20__12_res, 32768);
 
  //Run allocactivation : Conv_22__13_res
  int8_t *Conv_22__13_res = (int8_t *)malloc(32768);

  //Run transpose : Conv_22__13
  transpose(Conv_20__12_res, Conv_22__13_res, 1, 512, 8, 8, 1, 8, 8, 512, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_20__12_res
  free(Conv_20__12_res);

  //Run allocactivation : Conv_22__2_res
  int8_t *Conv_22__2_res = (int8_t *)malloc(32768);

  //Run convolution : Conv_22__2
  int8_t* Conv_22__2_input_transpose = (int8_t *)VTABufferAlloc(4096);
  transpose_nhwc2vtaio_pack(Conv_22__13_res, (int8_t* )VTABufferGetVirtAddr(Conv_22__2_input_transpose), 1, 8, 8, 64);
  int8_t* Conv_22__2_output_bef_transpose = (int8_t *)VTABufferAlloc(32768);
  convolution_wo_tr(Conv_22__2_input_transpose, layer3_1_conv1_weight__1, (int32_t *)layer3_1_conv1_bias, Conv_22__2_output_bef_transpose, 1, 8, 8, 64, 512, 3, 3, 1, 1, 0, 1, 7, 8, 8, vtaCmdH, 1, 8, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_22__2_output_bef_transpose), Conv_22__2_res, 1, 8, 8, 512 );
  VTABufferFree(Conv_22__2_input_transpose);
  VTABufferFree(Conv_22__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_22__13_res
  free(Conv_22__13_res);

  //Run allocactivation : Conv_22__12_res
  int8_t *Conv_22__12_res = (int8_t *)malloc(32768);

  //Run transpose : Conv_22__12
  transpose(Conv_22__2_res, Conv_22__12_res, 1, 8, 8, 512, 1, 512, 8, 8, 0, 3, 1, 2 );

  //Run deallocactivation : dealloc_Conv_22__2_res
  free(Conv_22__2_res);

  //Run elementsign : Sign_23
  elemsign(Conv_22__12_res, Conv_22__12_res, 32768);
 
  //Run allocactivation : Conv_24__8_res
  int8_t *Conv_24__8_res = (int8_t *)malloc(32768);

  //Run transpose : Conv_24__8
  transpose(Conv_22__12_res, Conv_24__8_res, 1, 512, 8, 8, 1, 8, 8, 512, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_22__12_res
  free(Conv_22__12_res);

  //Run allocactivation : Conv_24__2_res
  int8_t *Conv_24__2_res = (int8_t *)malloc(32768);

  //Run convolution : Conv_24__2
  int8_t* Conv_24__2_input_transpose = (int8_t *)VTABufferAlloc(4096);
  transpose_nhwc2vtaio_pack(Conv_24__8_res, (int8_t* )VTABufferGetVirtAddr(Conv_24__2_input_transpose), 1, 8, 8, 64);
  int8_t* Conv_24__2_output_bef_transpose = (int8_t *)VTABufferAlloc(32768);
  convolution_wo_tr(Conv_24__2_input_transpose, layer3_1_conv2_weight__1, (int32_t *)layer3_1_conv2_bias, Conv_24__2_output_bef_transpose, 1, 8, 8, 64, 512, 3, 3, 1, 1, 0, 1, 7, 8, 8, vtaCmdH, 1, 8, 7, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_24__2_output_bef_transpose), Conv_24__2_res, 1, 8, 8, 512 );
  VTABufferFree(Conv_24__2_input_transpose);
  VTABufferFree(Conv_24__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_24__8_res
  free(Conv_24__8_res);

  //Run allocactivation : Reshape_32__1_res
  int8_t *Reshape_32__1_res = (int8_t *)malloc(512);

  //Run tensorview : Reshape_32__1_res__1
  int8_t* Reshape_32__1_res__1 = Reshape_32__1_res;

  //Run avgpool : AveragePool_26__1
  avgpool(Conv_24__2_res, 1.0/1.000000, 0, Reshape_32__1_res__1, 1.0/1.000000, 0, 1, 8, 8, 512, 1, 1, 1, 512, 8, 8, 0, 8 );

  //Run deallocactivation : dealloc_Conv_24__2_res
  free(Conv_24__2_res);

  //Run elementsign : Sign_33
  elemsign(Reshape_32__1_res, Reshape_32__1_res, 512);
 
  //Run allocactivation : Gemm_34__1_res
  int8_t *Gemm_34__1_res = (int8_t *)malloc(10);

  //Run fullyconnected : Gemm_34__1
  bnn_fullyconnected(Reshape_32__1_res, 1.0/1.000000, 0, (int8_t *)VTABufferGetVirtAddr(fc_weight__1), 1.0/1.000000, 0, (int32_t *)VTABufferGetVirtAddr(fc_bias), 1.0/1.000000, 0, Gemm_34__1_res, 1.0/1.000000, 0, 1, 512, 512, 10, 1, 10, 1 );

  //Run deallocactivation : dealloc_Reshape_32__1_res
  free(Reshape_32__1_res);

  //Run dequantize : Gemm_34__1_dequantize
  int8_t* output = (int8_t*)mutableWeight + 12288;
  typecast(Gemm_34__1_res, output, 10, 1/1.000000, 0 );

  //Run deallocactivation : dealloc_Gemm_34__1_res
  free(Gemm_34__1_res);
  return 0;
}