class Lega_Tablet_Notifications : Lega_Notification_RscControlsGroup
{
  idc = 9992;
  class controls
  {
    class Lega_RscNotificationBackground: Lega_Notification_Background
    {
      idc = 9993;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0.76};
    };
    class Lega_RscNotificationColorBar: Lega_Notification_Background
    {
      idc = 9994;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.004125 * safezoneW;
			h = 0.044 * safezoneH;
      colorBackground[] = {0,0,0,0.76};
    };
    class Lega_RscNotificationText: Lega_Notification_StructuredText
    {
      idc = 9995;
			x = 0.452564 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.14025 * safezoneW;
			h = 0.044 * safezoneH;
			text = "";
    };
  };
};
