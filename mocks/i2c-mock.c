#include "unity.h"
#include "i2c.h"

// Pointers to start and end of the transmission / reception queues
// Set these to a valid queues for i2c to read from / write to
uint8_t * tx_queue_start  = NULL;
uint8_t * tx_queue_end    = NULL;

uint8_t * rx_queue_start  = NULL;
uint8_t * rx_queue_end    = NULL;

// Stores the i2c addresses transmited to / received from

uint16_t transmit_address;
uint16_t receive_address;

// Mocks the functionality of i2c transmit by writing each value to tx_queue
// Always sets transmit_address to DevAddress before writing
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout) {

  //printf(" A  %#x   ", DevAddress);
  
  transmit_address = DevAddress;
    
  //printf(" B  %#x   ", transmit_address);

  TEST_ASSERT_NOT_NULL_MESSAGE(tx_queue_start, "I2C Mock Failed: tx_queue's start wasn't initialized");
  TEST_ASSERT_NOT_NULL_MESSAGE(tx_queue_end, "I2C Mock Failed: tx_queue'end wasn't initialized");
  TEST_ASSERT_TRUE_MESSAGE(tx_queue_start < tx_queue_end, "I2C Mock Failed: tx_queue's start is after its end");

  for (int i = 0; i < Size; i++) {
    if(tx_queue_start >= tx_queue_end) TEST_FAIL_MESSAGE("I2C Mock Failed: tx_queue overflowed its end.");
    *(tx_queue_start) = *(pData + i);
    tx_queue_start++;
  }

  //printf(" C  %#x   ", transmit_address);

  return HAL_OK;

}

// Mocks the functionality of i2c read by reading each value from rx_queue
// Always sets receive_address to DevAddress before reading
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *rsp, uint16_t Size, uint32_t Timeout) {
  
  receive_address = DevAddress;

  TEST_ASSERT_NOT_NULL_MESSAGE(rx_queue_start, "I2C Mock Failed: rx_queue's start wasn't initialized");
  TEST_ASSERT_NOT_NULL_MESSAGE(rx_queue_end, "I2C Mock Failed: rx_queue's end wasn't initialized");
  TEST_ASSERT_TRUE_MESSAGE(rx_queue_start < rx_queue_end, "I2C Mock Failed: rx_queue's start is after its end");


  for (int i = 0; i < Size; i++) {
    if (rx_queue_start >= rx_queue_end) TEST_FAIL_MESSAGE("I2C Mock Failed: rx_queue overflowed its end.");
    *(rsp + i) = *rx_queue_start;
    rx_queue_start++;
  }

  return HAL_OK;

} 
