#ifndef MOCK_I2C_H
#define MOCK_I2C_H

#include "common_mock.h"

// Pointers to start and end of the transmission / reception queues
// Set these to a valid queues for i2c to read from / write to

extern uint8_t * tx_queue_start;
extern uint8_t * tx_queue_end;

extern uint8_t * rx_queue_start;
extern uint8_t * rx_queue_end;

// The i2c addresses transmited to / received from is written here

extern uint16_t transmit_address;
extern uint16_t receive_address;

// Mocks the functionality of i2c transmit by writing each value to tx_queue
// Always sets transmit_address to DevAddress before writing
HAL_StatusTypeDef HAL_I3C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// Mocks the functionality of i2c read by reading each value from rx_queue
// Always sets receive_address to DevAddress before reading
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *rsp, uint16_t Size, uint32_t Timeout);

#endif
