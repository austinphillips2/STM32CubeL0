/**
  ******************************************************************************
  * @file    usbdevice_res.c
  * @author  MCD Application Team   
  * @brief   USB Device ressources
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2016 STMicroelectronics International N.V. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup USB_DEVICE_MODULE
  * @{
  */

/** @defgroup USB_DEVICE_RES
  * @brief usb device ressources 
  * @{
  */

//#define x_width 28
//#define x_height 146
static uint8_t FullSlider_pic[] = {
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
};

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
