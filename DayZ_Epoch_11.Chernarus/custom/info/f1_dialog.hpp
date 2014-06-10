class f1_DialogScreen 
{ 
	idd = -1; 
	class controls
	{ 
		class Background: RscPicture_Infoscreen
		{
			idc = -1; 
			style = 2096; 

			x = (safezoneX + (0.192 * safezoneW));
			y = (safezoneY + (0.124 * safezoneH));
			w = 0.83 * safezoneW;
			h = 0.74 * safezoneH;

			text = "\ca\ui\data\ui_background_controlers_ca.paa"; 

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.1; 
			colorBackground[] = {0,0,0,1}; 
			colorText[] = {1,1,1,1}; 
		};

		class Title: RscText_Infoscreen
		{
			idc = -1; 
			style = 2; 

			text = "Server Information";

			x = (safezoneX + (0.40 * safezoneW));
			y = (safezoneY + (0.12 * safezoneH));
			w = 0.2 * safezoneW;
			h = 0.1 * safezoneH;

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.08; 
			colorBackground[] = {1,1,1,0}; 
			colorText[] = {1,1,1,1}; 
		};

		class ServerLinks: RscStructuredText_Infoscreen
		{
			idc = -1;
			style = 2;

			text = "www.kentutainment.de  |  TS: 146.0.32.47  PW: epoch";

			x = ((safezoneX + (0.192 * safezoneW)) + (0.05 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.91 * (0.74 * safezoneH)));
			w = 0.470 * (0.83 * safezoneW);
			h = 0.075 * (0.37 * safezoneH);

			colorText[] = {1,1,1,1};
			size = 0.05;
		};

		class CloseButton: RscButton_Infoscreen
		{
			idc = -1;

			onButtonClick = "closeDialog 0;";
		
			text = "Close";

			x = ((safezoneX + (0.192 * safezoneW)) + (0.56 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.90 * (0.74 * safezoneH)));
			w = 0.13 * (0.83 * safezoneW);
			h = 0.07 * (0.74 * safezoneH);
		};

		class SeverInfoTextfield: RscHTML_Infoscreen
		{
			idc = -1;
			type = 9;
			style = 0;

			filename = "custom\InfoScreen\f1_page.html";

			x = ((safezoneX + (0.192 * safezoneW)) + (0.04 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.15 * (0.74 * safezoneH)));
			w = 0.66 * (0.83 * safezoneW);
			h = 0.67 * (0.74 * safezoneH);
		};
	}; 
}; 