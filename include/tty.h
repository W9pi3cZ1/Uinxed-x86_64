/*
 *
 *      tty.h
 *      Teletype header file
 *
 *      2025/4/12 By MicroFish
 *      Based on GPL-3.0 open source agreement
 *      Copyright © 2020 ViudiraTech, based on the GPLv3 agreement.
 *
 */

#ifndef INCLUDE_TTY_H_
#define INCLUDE_TTY_H_

/* Obtain the tty number provided at startup */
const char *get_boot_tty(void);

/* Print characters to tty */
void tty_print_ch(const char ch);

/* Print string to tty */
void tty_print_str(const char *str);

#endif // INCLUDE_TTY_H_
