# Copyright (c) 2003-2016, LogMeIn, Inc. All rights reserved.
#
# This is part of the Xively C Client library,
# it is licensed under the BSD 3-Clause license.
XI_EXAMPLE_NAME := firmware_update_example

XI_EXAMPLE_SRCS += $(wildcard $(CURDIR)/src/cbor/*.c)
XI_EXAMPLE_SRCS += $(wildcard $(CURDIR)/src/sha256/*.c)
XI_EXAMPLE_SRCS += xi_sft_client.c

XI_CLIENT_INC_PATH += $(CURDIR)/src/cbor 
XI_CLIENT_INC_PATH += $(CURDIR)/src/sha256 

include ../common/rules.mk
include ../common/targets.mk
