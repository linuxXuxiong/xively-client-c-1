/* Copyright (c) 2003-2016, LogMeIn, Inc. All rights reserved.
 *
 * This is part of the Xively C Client library,
 * it is licensed under the BSD 3-Clause license.
 */

#ifndef __XI_MQTT_LOGIC_LAYER_H__
#define __XI_MQTT_LOGIC_LAYER_H__

#include "xi_layer.h"
#include "xi_common.h"

#ifdef __cplusplus
extern "C" {
#endif

xi_state_t xi_mqtt_logic_layer_push( void* context, void* data, xi_state_t state );

xi_state_t xi_mqtt_logic_layer_pull( void* context, void* data, xi_state_t state );

xi_state_t xi_mqtt_logic_layer_init( void* context, void* data, xi_state_t state );

xi_state_t xi_mqtt_logic_layer_connect( void* context, void* data, xi_state_t state );

xi_state_t
xi_mqtt_logic_layer_post_connect( void* context, void* data, xi_state_t state );

xi_state_t xi_mqtt_logic_layer_close( void* context, void* data, xi_state_t state );

xi_state_t
xi_mqtt_logic_layer_close_externally( void* context, void* data, xi_state_t state );

#ifdef __cplusplus
}
#endif

#endif /* __XI_MQTT_LOGIC_LAYER_H__ */
