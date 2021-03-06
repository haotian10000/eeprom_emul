/*
 * flash_vars.h
 *
 *  Created on: 11 ���. 2016 �.
 *      Author: �������
 */

#ifndef FLASH_VARS_H_
#define FLASH_VARS_H_

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#define FLASH_VARS_COUNT 20
#if (FLASH_VARS_COUNT > 255)
#error "FLASH_VARS_COUNT must be less than 255"
#endif

#define FLASH_VARS_PAGES_COUNT 3
#if (FLASH_VARS_PAGES_COUNT < 3)
#error "FLASH_VARS_PAGES_COUNT must be a greather or equal to 3"
#endif

#define FLASH_VARS_PAGE_0_ADDR 0x30000
#define FLASH_VARS_PAGE_1_ADDR 0x40000
#define FLASH_VARS_PAGE_2_ADDR 0x50000
#define FLASH_VARS_PAGE_3_ADDR 0x60000
#define FLASH_VARS_PAGE_4_ADDR 0x70000

#define FLASH_VARS_PAGE_0_SEC_NUM 3
#define FLASH_VARS_PAGE_1_SEC_NUM 4
#define FLASH_VARS_PAGE_2_SEC_NUM 5
#define FLASH_VARS_PAGE_3_SEC_NUM 6
#define FLASH_VARS_PAGE_4_SEC_NUM 7

#define FLASH_VARS_PAGE_SIZE 4096
#if ((FLASH_VARS_PAGE_SIZE % 8) != 0)
#error "FLASH_VARS_PAGE_SIZE It must be a multiple of 8"
#endif

//WARNING! flash_vars not valid until flash_vars_read_init_done return true
extern volatile uint32_t flash_vars[FLASH_VARS_COUNT];

void flash_vars_init(bool first_start);
bool flash_vars_read_init_done(void);
bool flash_vars_read_init_error(void);

void flash_vars_proc(void);

#endif /* FLASH_VARS_H_ */
