#ifndef __HARDWARE_H__
#define __HARDWARE_H__
#define HARDWARE_MAX_ITEM_LONGTH		64
enum{
	HARDWARE_LCD = 0,
	HARDWARE_TP,
	HARDWARE_FLASH,
	HARDWARE_FRONT_CAM,
	HARDWARE_BACK_CAM,
	HARDWARE_BACK_WIDE_CAM,
	HARDWARE_BACK_SUBCAM,
	HARDWARE_BACK_MACRO_CAM,
	HARDWARE_BT,
	HARDWARE_WIFI,
	HARDWARE_ACCELEROMETER,
	HARDWARE_ALSPS,
	HARDWARE_GYROSCOPE,
	HARDWARE_MAGNETOMETER,
	HARDWARE_SAR,
	HARDWARE_GPS,
	HARDWARE_FM,
	HARDWARE_NFC,
	HARDWARE_SMARTPA,
	HARDWARE_BATTERY_ID,
	HARDWARE_BACK_CAM_MOUDULE_ID,
	HARDWARE_BACK_WIDE_CAM_MOUDULE_ID,
	HARDWARE_BACK_SUBCAM_MODULEID,
	HARDWARE_FRONT_CAM_MOUDULE_ID,
	HARDWARE_BACK_MACRO_CAM_MOUDULE_ID,
	HARDWARE_BOARD_ID,
	HARDWARE_HARDWARE_ID,
	HARDWARE_CHARGER_IC,
	HARDWARE_BMS_GAUGE,
	HARDWARE_SUB_CHARGER_MASTER,
	HARDWARE_SUB_CHARGER_SLAVE,
	HARDWARE_USB_PD,
	HARDWARE_MAX_ITEM
};
#define HARDWARE_ID                               'H'
#define HARDWARE_LCD_GET                          _IOWR(HARDWARE_ID, 0x01, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_TP_GET                           _IOWR(HARDWARE_ID, 0x02, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FLASH_GET                        _IOWR(HARDWARE_ID, 0x03, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_CAM_GET                    _IOWR(HARDWARE_ID, 0x04, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_CAM_GET                     _IOWR(HARDWARE_ID, 0x05, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_ACCELEROMETER_GET                _IOWR(HARDWARE_ID, 0x06, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_ALSPS_GET                        _IOWR(HARDWARE_ID, 0x07, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_GYROSCOPE_GET                    _IOWR(HARDWARE_ID, 0x08, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_MAGNETOMETER_GET                 _IOWR(HARDWARE_ID, 0x09, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BT_GET                           _IOWR(HARDWARE_ID, 0x10, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_WIFI_GET                         _IOWR(HARDWARE_ID, 0x11, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_GPS_GET                          _IOWR(HARDWARE_ID, 0x12, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FM_GET                           _IOWR(HARDWARE_ID, 0x13, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BATTERY_ID_GET                   _IOWR(HARDWARE_ID, 0x15, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_CAM_MOUDULE_ID_GET          _IOWR(HARDWARE_ID, 0x16, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_CAM_MODULE_ID_GET          _IOWR(HARDWARE_ID, 0x17, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BOARD_ID_GET                     _IOWR(HARDWARE_ID, 0x18, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_FISH_CAM_GET               _IOWR(HARDWARE_ID, 0x19, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_FISH_CAM_GET                _IOWR(HARDWARE_ID, 0x1A, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_HALL_GET                         _IOWR(HARDWARE_ID, 0x1B, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_PRESSURE_GET                     _IOWR(HARDWARE_ID, 0x1C, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_NFC_GET                          _IOWR(HARDWARE_ID, 0x1D, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_SUBCAM_GET                 _IOWR(HARDWARE_ID, 0x1E, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_SUBCAM_GET                  _IOWR(HARDWARE_ID, 0x1F, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_FISH_CAM_MOUDULE_ID_GET    _IOWR(HARDWARE_ID, 0x20, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_FISH_CAM_MOUDULE_ID_GET     _IOWR(HARDWARE_ID, 0x21, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_HARDWARE_ID_GET                  _IOWR(HARDWARE_ID, 0x22, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_SUBCAM_MODULEID_GET        _IOWR(HARDWARE_ID, 0x23, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_SUBCAM_MODULEID_GET         _IOWR(HARDWARE_ID, 0x24, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_CAM_EFUSEID_GET             _IOWR(HARDWARE_ID, 0x25, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BCAK_SUBCAM_EFUSEID_GET          _IOWR(HARDWARE_ID, 0x26, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_CAME_EFUSEID_GET           _IOWR(HARDWARE_ID, 0x27, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_SUBCAME_EFUSEID_GET        _IOWR(HARDWARE_ID, 0x28, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_CAM_SENSORID_GET            _IOWR(HARDWARE_ID, 0x29, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_SUBCAM_SENSORID_GET         _IOWR(HARDWARE_ID, 0x30, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_CAM_SENSORID_GET           _IOWR(HARDWARE_ID, 0x31, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_SUBCAM_SENSORID_GET        _IOWR(HARDWARE_ID, 0x32, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SAR_GET                          _IOWR(HARDWARE_ID, 0x33, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_WIDE_CAM_GET                                _IOWR(HARDWARE_ID, 0x34, char[HARDWARE_MAX_ITEM_LONGTH]) 
#define HARDWARE_BACK_WIDE_CAM_MOUDULE_ID_GET          _IOWR(HARDWARE_ID, 0x35, char[HARDWARE_MAX_ITEM_LONGTH])  
#define HARDWARE_BACK_WIDE_CAM_EFUSEID_GET                  _IOWR(HARDWARE_ID, 0x36, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_WIDE_CAM_SENSORID_GET               _IOWR(HARDWARE_ID, 0x37, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_MACRO_CAM_GET                _IOWR(HARDWARE_ID, 0x3C, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_MACRO_CAM_MOUDULE_ID_GET     _IOWR(HARDWARE_ID, 0x3D, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_MACRO_CAM_EFUSEID_GET        _IOWR(HARDWARE_ID, 0x3E, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_MACRO_CAM_SENSORID_GET       _IOWR(HARDWARE_ID, 0x3F, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SMARTPA_IC_GET                    _IOWR(HARDWARE_ID, 0x40, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BACK_CAM_MOUDULE_ID_SET          _IOWR(HARDWARE_ID, 0x81, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FRONT_CAM_MODULE_ID_SET          _IOWR(HARDWARE_ID, 0x82, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SDCARD_STATUS                    _IOWR(HARDWARE_ID, 0x83, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_FINGER_GET                       _IOWR(HARDWARE_ID, 0x84, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SKU_INFO_GET                     _IOWR(HARDWARE_ID, 0x85, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_CHARGER_IC_INFO_GET              _IOWR(HARDWARE_ID, 0x86, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SECURE_INFO_GET                  _IOWR(HARDWARE_ID, 0x87, char[HARDWARE_MAX_ITEM_LONGTH])
#define SOFTWARE_SECURE_INFO_GET                  _IOWR(HARDWARE_ID, 0x88, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_BMS_GAUGE_GET     	     		  _IOWR(HARDWARE_ID, 0x41, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SUB_CHARGER_MASTER_GET     	     		  _IOWR(HARDWARE_ID, 0x89, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_SUB_CHARGER_SLAVE_GET     	     		  _IOWR(HARDWARE_ID, 0x8A, char[HARDWARE_MAX_ITEM_LONGTH])
#define HARDWARE_USB_PD_GET     	     		  _IOWR(HARDWARE_ID, 0x8B, char[HARDWARE_MAX_ITEM_LONGTH])
int hardwareinfo_set_prop(int cmd, const char *name);
#endif //__HARDWARE_H__


