// Copyright 2021-2021 The jdh99 Authors. All rights reserved.
// ble�����
// Authors: jdh99 <jdh821@163.com>

#ifndef BLESERVER_H
#define BLESERVER_H

#include "tztype.h"

// ����UUID
#define BLE_SERVER_SERVICE_UUID 0xABF0
// ����UUID
#define BLE_SERVER_TX_UUID 0xABF1
// ����UUID
#define BLE_SERVER_RX_UUID 0xABF2

// ���յ�����ֽ���.���ܴ���500
#define BLE_SERVER_RX_LEN_MAX 500

// ����״̬��
enum {
    IDX_SVC,

    IDX_CHAR_TX,
    IDX_CHAR_VAL_TX,
    IDX_CHAR_CFG_TX,

    IDX_CHAR_RX,
    IDX_CHAR_VAL_RX,

    HRS_IDX_NB,
};

// BleServerLoad ģ������.deviceName�������豸����
// ����֮ǰ���ʼ��nvs_flash_init
bool BleServerLoad(char* deviceName);

// BleServerIsConnect �Ƿ�������
bool BleServerIsConnect(void);

// BleServerRegisterObserver ע����չ۲���
// callback�ǻص�����,���յ����ݻ�ص��˺���
bool BleServerRegisterObserver(TZDataFunc callback);

// BleTx ��������
bool BleTx(uint8_t* bytes, int size);

#endif
