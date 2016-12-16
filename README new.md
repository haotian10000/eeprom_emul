# eeprom_emul
EEPROM emulator for STM32F100 and 20's 32 bit variables in 3 page of N25Q032A SPI serial flash memory

## �������

����� ����������� ������ �� ����� C. 
���������� ������� � ����������� �������� ������ ������
 
������: ������� 20 ���������� �������� 32 ����, ������� ������ ���� �������� ��� �������� ������� ��� ������ ����������. ������ ���������� ���������� � ������ ��������, �� ������� ���������� ��������� ���������� 3 ���� � ���.
������ ������ ����������������� ����� ������������ � ������ ������ �������� �����������. ��� ���������� ���������� �������� �� ����, ��� ������� ������� ����� ��������� � ����� ������.
� �������� ����������������� ������ ������������ ������, ��������, N25Q032A � �������� ������� 4������ � ����������� �������� 10 ���.
��� ��������� ��������� 3 ������� (�������� 4������)
���������� ����������� ��������� ������ �������� � ����������� ������ ������. 
��� ������ � ���� ������� ������������ ������, ������� ������������ ������ �� ����. ��������� ������ ����������� � ����� �� ��������.
 
������ ����� ����������� �� ����������������, ��������, STM32, ���� ����������, ����� �� ��� ����������� � �� PIC, AVR ������������ �����������.
������������ ������� �� ������������.
������� ������ � ����� ����� ���������� �� ��������� ���������� � ������� ������� ���������. 
������ ������ ����������� ����������� ������.
����� � ��� ������ ���� ������������ ����������� ����������.

���� ������ �������� ���
https://github.com/Mirn/eeprom_emul

## ��������
�.�. �� ��� �� ��������� �������� �������, �� ��� � ���������� ����������� ��� ��������� ������� �����������.
��� ����� �������������, ������������� � ��������� ������ ��� ��� ������������ � ���� �������� �������.
������������ � ������������ ����������� ����������� ������, ���� � ���� ������ �� ������.

## ����������� � ���������
* ������ ������ ��� STM32F100C8
* �� ���� makefile � IDE Eclipse Kepler
* ��� gcc 4.5+
* ������� ����� �99 
* ��� �� 

## ������ �������:
* **flash_module.c** - ���������� ������������ ����� �� ������ � ���� �������
* **flash_vars.c** - ������ ������ � 20 �����������, ������� ����������� � ���� ������ (���� �������)
* **mem.c** - �������������� ������� ������ ������ � ���� ������� ��� N25Q032A �� SPI (���� ����� ��������� � hw.h)
* **���� � ���������������� ������** - � ������ �� ���� ��� ������� ���� ��� ���� �����: ������������� � ������, ����� ��������� ��� �������� ����������
* **main.c** - �������� ������ ��� �������� � ������������ � �����
* **��������� ������** - ����� ������ �������, ���������� ���������, ��������� ��������� � ������������ �� ����������� ����������

## ������ �������
"������� 20 ���������� �������� 32 ����"
�.�. ���� �� �������, �� ����������� ���, ��� ��� ���������� ����������� 32 ������ �����
��� �� �����������, ��� ������ ���������� �� ������� ������� � ���������� � ����������, 
�������� ����������� ����������� 3� ������� ��������������� �������� ��. �������.

��� ���������� "������� ������ ���������� �� ��������� ������� ���������. ������ ������ ����������� ����������� ������." 
��������� ������� � ���� ���������� ������ � ���� volatile �������, ��������� �� ������ ������, � 
����� ����� ����� ��� ��������, ��� ��� ����������, �� ��������,
� �������������� �������������� ������� ��� ���������� �� ����������.

����� ������� ������� ����� ���� ���������� - ��� ���������� ��� ����, ����� ������, ����� ���������� ����������, � � ���������� ��������� ����������.

"����� � ��� ������ ���� ������������ ����������� ����������.". 
������ ����� ����������� � ������������������� � ��������� �������. 
�� ���������� �������������� ����������� ���. 
����� ���������� ���� �� 8 ��� 16 ���, ��������, ����� ������� ��������.
������ "pages_stat" ����� ���������� � �����-���� ������ �������, �� ��� �� ���� ������, �.�. 
��� �������, ������� ����� ����� ������ � ��������� ������� (� �� ����� ���� ������ �� �� ��� �� �� ���� �� ������).

"��� ������ � ���� ������� ������������ ������, ������� ������������ ������ �� ����. ��������� ������ �����������"
��������� � �����, ���� ������ ������ ��� ��������:
1. ��������� �������� ��������� ���-�� ������ ���� ���� ������ ������� ��� ��������� �������� (� ��� ��������� ������)
2. ������ ��������� ������� � ���� ������ - ������, ���� ���������� ���������� ���������� ���������� � ������ �������.

## ����������
�������� ���������� - ���������� ���������� ��� ����� ��������.

���������� ����������� ���������� � ��������� �������.

��������� ������ ����� ����������:

1. ���� ���������� 32 ���� = 4 �����.
2. � ������ ���������� ����������� ����� ����������. 8 ��� = 1 ����.
3. ������������� ����������� ����� ���������� ������������������.  8 ��� = 1 ����. ��� �����, ����� ����� ���� ��������� �� ���������� ������ �� ����������, ���� ���� ����������, � ����� � crc ��� ���� ����� ��������. ��� �����������, ��� � ������ ����� ������� ����.
4. ���16 ��� 16 ��� = 2 ����� - �����, ����� �������� ����� � ��������� ���������� � ������ �����. � ���-�� �� �� ����� ������ ������� - � ��� ������ �����.

�����: 8 ���� �� ������. 

**��������� "state_write_check"**
���� ������ ����� �������� ��� ��������, �� ��������� ������� ����� ������ ��������� - � ��������� ������ ��������������� � ���� ������������ ��������.
������ ������ �� ���� ���������� ����������� ������� ����������� � ������������

**��������� "state_newpage"**
��� ������ ������� �������� ����������, �� ���������� ������ ���������:

1. ������� ��������� �� ����� ��������
2. � ��������� �������� ���������� ������ �� ���� �������� ����������
3. ������� ������� ��������
4. ������� �������� ������ ���������.

### ��������� �������������:
**��������� "state_erase_all"** ��� ������ ��������� ��� �������� ���������.

### ������������� � ��������������� ���������:
1. **_��������� "state_read_stat"**
��� ����������� ������������� ���������� ��������� ������ �� ���� ���������, ��������� ��� ����������, � �������� ����������, ���������� �����, ����� � ������ �������.

2. **������ � ������� "stat_process"**
�������� �� �������� �������� ������������ - ��� ���� �����, ���� �� �� ����� �����
�������� ��� ������� ����.
�������������� ��������� ������������ �� ����� ��������, ���� �� �������� �����������, ���� ��� ���-�� ������� ������ ��� ����� ���-�� ����������, ����� �� ����������.
���� �� �������� ��������� ����������� ��������� �� ������� ����������, ������� �������� �������� �� ����� ������� � ������. 

3. **��������� "state_read_restore"**
�������������� ����������� �� ����� ��������� �������� �� ���� 2 

4. � ������ ������ ���������� ������� � state_erase_all � ��������� ���� ����������.

## ������� �������������
��� ������������� ����� �����, � ����� ����� ��������� (������� ��� ���)
��� �����, ��������������, ��������� ���� ������� 
`bool flash_vars_read_init_done(void); //������ ����������`
`bool flash_vars_read_init_error(void); //������ ����� ������`

����� �� ����� ������������� ���������� �������� ����� `flash_module_proc` � `flash_vars_proc`
�� ��� ���, ���� `flash_vars_read_init_done` �� ������ ������, �� ����� ������� ��� 20 ���������� ���������� � �� ������ ���������� �����

��� ������ `flash_vars.�` ������� `flash_module_proc`  �� ��������, ���� �� ������� ������� ������, �������� ����������� � �� ����������� ����� �������, ��� ������ �����.
�.�. � ������� ���� ������ ��������� ����� �������� ������ ������.

## ���������
- ���������� ���������� ����� �������� �� 1 �� 255
- ���������� ������� �� 3 �� 255
- ����� ������ ������ ��������, �� �� �����, ��� ���-�� ����������, ���������� 8
- ������ � ������ ������ ���� ������ ����� ������ �����, �� �� ������, ��� ������ ��������, ������� �� �����.

## ��� ��������
����� � ���� ������� � ������ ���� �������; ����� ����, ��� ���� ����� ����� � �����.
�������� �� ���� ���������� �������, ������� ����� ������ (������� ������, ���������� � ����������� �������� �������).
��� ���� ������� ���� ������ � �� ������� ��������������� ������ �� ������� �����������. 
� � �����, ��� ������ �������� �� �� ����� ���������.
����� ��������, ��� � ������ ��������������� ���� ��� �������� ����������� �� �����������, ������� � ��������� �����. 
��������, ��� �������� � ����������� ��������������� ����� ������ ������� ���� � ������ ����� �������� ������������ ������.
��������, ��� �����������������, ���� ����� � ����� ��� ����� ������ �������, � �� ����������. 

� �������� ������� main ��� ������:
���� � �������� ����� � ������ ��� ����������: ���� ����� ������, ������ ����� ��������.
������ ����� - �� ���������� ���������� �������, ���������� ��������� ����������.
��� ���������� ������������� �� +1, ��� ������, ����� ��������� ��������� � �� ���������� ����� �������� ������� � ��.


## ����������� ��������:
��� -O2, �� �������:
* .text + .rodata:  ~2100 ����
* .data: 0 ����
* .bss: ~250 ����
* .stack: ~100 ����