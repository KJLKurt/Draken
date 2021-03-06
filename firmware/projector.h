#ifndef PROJECTOR_H
#define PROJECTOR_H

#ifdef PROJECTOR_CTRL
#if PROJECTOR == 1 //for ViewSonic PJD7820HD
  #define PJ_CMD_BAUDRATE 115200
  const uint8_t PJ_CMD_ON[] = {0x06, 0x14, 0x00, 0x04, 0x00, 0x34, 0x11, 0x00, 0x00, 0x5D};
  const uint8_t PJ_CMD_OFF[] = {0x06, 0x14, 0x00, 0x04, 0x00, 0x34, 0x11, 0x01, 0x00, 0x5E};
#endif
#if PROJECTOR == 2 //for Acer H6510BD
  #define PJ_CMD_BAUDRATE 9600
  const uint8_t PJ_CMD_ON[] = {0x4F, 0x4B, 0x4F, 0x4B, 0x4F, 0x4B, 0x4F, 0x4B, 0x4F, 0x4B, 0x0D};
  const uint8_t PJ_CMD_OFF[] = {0x2A, 0x20, 0x30, 0x20, 0x49, 0x52, 0x20, 0x30, 0x30, 0x32,0x0D};
#endif

#endif //PROJECTOR_CTRL
#endif //PROJECTOR_H
