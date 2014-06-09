class f1_DialogScreen 
{ 
	idd = -1; 
	class controls
	{ 
		class Background 
		{ 
			idc = -1; 
			type = 0; 
			style = 2096; 
			x = (safezoneX + (0.192 * safezoneW));
			y = (safezoneY + (0.124 * safezoneH));
			w = 0.83 * safezoneW;
			h = 0.74 * safezoneH;
			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.1; 
			colorBackground[] = {0,0,0,1}; 
			colorText[] = {1,1,1,1}; 
			text = "\ca\ui\data\ui_background_controlers_ca.paa"; 
		}; 
		
		class Title 
		{ 
			idc = -1; 
			type = 0; 
			style = 2; 
			x = (safezoneX + (0.40 * safezoneW));
			y = (safezoneY + (0.12 * safezoneH));
			w = 0.2 * safezoneW;
			h = 0.1 * safezoneH;
			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.08; 
			colorBackground[] = {1,1,1,0}; 
			colorText[] = {1,1,1,1}; 
			text = "Server Information"; 
		}; 
		
		class CloseButton 
		{ 
			idc = -1; 
			type = 0; 
			style = 2; 
			x = (safezoneX + (0.40 * safezoneW));
			y = (safezoneY + (0.12 * safezoneH));
			w = 0.2 * safezoneW;
			h = 0.1 * safezoneH;
			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.08; 
			colorBackground[] = {1,1,1,0}; 
			colorText[] = {1,1,1,1}; 
			text = "Server Information"; 
		}; 
	}; 
}; 