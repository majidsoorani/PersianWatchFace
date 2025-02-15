/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * Licensed under the Flora License, Version 1.1 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://floralicense.org/license/
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if !defined(_WEATHER_CLOCK_H)
#define _WEATHER_CLOCK_H

#if !defined(PACKAGE)
#define PACKAGE "org.example.persianweatherwatch"
#endif

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "persianweatherwatch"

#define INDICATOR_MODULE_BATTERY 0
#define INDICATOR_MODULE_AIR_POLLUTION 1

/* Angle */
#define HOUR_ANGLE 30
#define MIN_ANGLE 6
#define SEC_ANGLE 6

/* Layout */
#define BASE_WIDTH 360
#define BASE_HEIGHT 360

#define HANDS_SEC_WIDTH 13
#define HANDS_SEC_HEIGHT 13
#define HANDS_MIN_WIDTH 6
#define HANDS_MIN_HEIGHT 115
#define HANDS_HOUR_WIDTH 6
#define HANDS_HOUR_HEIGHT 87
#define HANDS_PIN_WIDTH 20
#define HANDS_PIN_HEIGHT 20

#define DATA_KEY_AP_INFO_TYPE "__AP_INFO_TYPE__"
#define DATA_KEY_BATTYER_INFO_TYPE "__BATTERY_INFO_TYPE__"
#define DATA_KEY_HANDS_SEC "__HANDS_SEC__"
#define DATA_KEY_HANDS_MIN "__HANDS_MIN__"
#define DATA_KEY_HANDS_HOUR "__HANDS_HOUR__"

#define WEATHER_ICON_STR_CLEAR_SKY_DAY "01d"
#define WEATHER_ICON_STR_FEW_CLOUDS_DAY "02d"
#define WEATHER_ICON_STR_SCATTERED_CLOUDS_DAY "03d"
#define WEATHER_ICON_STR_BROKEN_CLOUDS_DAY "04d"
#define WEATHER_ICON_STR_SHOWER_RAIN_DAY "09d"
#define WEATHER_ICON_STR_RAIN_DAY "10d"
#define WEATHER_ICON_STR_THUNDERSTORM_DAY "11d"
#define WEATHER_ICON_STR_SNOW_DAY "13d"
#define WEATHER_ICON_STR_MIST_DAY "50d"
#define WEATHER_ICON_STR_CLEAR_SKY_NIGHT "01n"
#define WEATHER_ICON_STR_FEW_CLOUDS_NIGHT "02n"
#define WEATHER_ICON_STR_SCATTERED_CLOUDS_NIGHT "03n"
#define WEATHER_ICON_STR_BROKEN_CLOUDS_NIGHT "04n"
#define WEATHER_ICON_STR_SHOWER_RAIN_NIGHT "09n"
#define WEATHER_ICON_STR_RAIN_NIGHT "10n"
#define WEATHER_ICON_STR_THUNDERSTORM_NIGHT "11n"
#define WEATHER_ICON_STR_SNOW_NIGHT "13n"
#define WEATHER_ICON_STR_MIST_NIGHT "50n"

typedef enum {
	WEATHER_STATE_CLEAR_SKY_DAY = 0,
	WEATHER_STATE_FEW_CLOUDS_DAY,
	WEATHER_STATE_SCATTERED_CLOUDS_DAY,
	WEATHER_STATE_BROKEN_CLOUDS_DAY,
	WEATHER_STATE_SHOWER_RAIN_DAY,
	WEATHER_STATE_RAIN_DAY,
	WEATHER_STATE_THUNDERSTORM_DAY,
	WEATHER_STATE_SNOW_DAY,
	WEATHER_STATE_MIST_DAY,
	WEATHER_STATE_CLEAR_SKY_NIGHT,
	WEATHER_STATE_FEW_CLOUDS_NIGHT,
	WEATHER_STATE_SCATTERED_CLOUDS_NIGHT,
	WEATHER_STATE_BROKEN_CLOUDS_NIGHT,
	WEATHER_STATE_SHOWER_RAIN_NIGHT,
	WEATHER_STATE_RAIN_NIGHT,
	WEATHER_STATE_THUNDERSTORM_NIGHT,
	WEATHER_STATE_SNOW_NIGHT,
	WEATHER_STATE_MIST_NIGHT,
	WEATHER_STATE_MAX,
} weather_state_e;

typedef enum {
	INDICATOR_INFO_TYPE_ICON = 0,
	INDICATOR_INFO_TYPE_TEXT = 1,
	INDICATOR_INFO_TYPE_MAX,
} indicator_info_type_e;
#endif
