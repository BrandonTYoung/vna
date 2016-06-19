/*
 * Copyright 2012 Jared Boone
 * Copyright 2013 Benjamin Vernoux
 *
 * This file is part of HackRF.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __USB_API_REGISTER_H__
#define __USB_API_REGISTER_H__

#include <usb_type.h>
#include <usb_request.h>

usb_request_status_t usb_vendor_request_write_source(
	usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_write_lo(
	usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_set_rx_ch(
	usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_set_filter(
	usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_set_tx_port(
	usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_write_att(
	usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_set_gpio(
    usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_clear_gpio(
    usb_endpoint_t* const endpoint,
	const usb_transfer_stage_t stage
);

usb_request_status_t usb_vendor_request_read_mcp3021(
	usb_endpoint_t* const endpoint, const usb_transfer_stage_t stage
);

#endif /* end of include guard: __USB_API_REGISTER_H__ */
