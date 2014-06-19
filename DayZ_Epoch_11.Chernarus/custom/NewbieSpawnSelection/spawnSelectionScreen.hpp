class newbieSpawnSelection_dialog 
{ 
	idd = -1; 
	class controls
	{ 
		class BlackBackground: RscPicture_Custom_01
		{
			idc = -1; 
			style = 0; 

			x = safezoneX;
			y = safezoneY;
			w = safezoneW;
			h = safezoneH;

			text = ""; 

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.1; 
			colorBackground[] = {0,0,0,1}; 
			colorText[] = {1,1,1,1}; 
		};

		class Background: RscPicture_Custom_01
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

		class Title: RscText_Custom_01
		{
			idc = -1; 
			style = 2; 

			text = "Spawn Selection";

			x = (safezoneX + (0.40 * safezoneW));
			y = (safezoneY + (0.12 * safezoneH));
			w = 0.2 * safezoneW;
			h = 0.1 * safezoneH;

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 0.08; 
			colorBackground[] = {1,1,1,0}; 
			colorText[] = {1,1,1,1}; 
		};

		class ServerLinks: RscStructuredText_Custom_01
		{
			idc = -1;
			style = 2;

			text = "www.kentutainment.de  |  TS: 146.0.32.47  PW: epoch";

			x = ((safezoneX + (0.192 * safezoneW)) + (0.05 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.91 * (0.74 * safezoneH)));
			w = 0.645 * (0.83 * safezoneW);
			h = 0.075 * (0.37 * safezoneH);

			colorText[] = {1,1,1,1};
			size = 0.05;
		};

		class RandomButton: RscButton_Custom_01
		{
			idc = -1;

			onButtonClick = "closeDialog 0; spawnSelect = 0;";
		
			text = "Spawn random";

			class TextPos 
			{
				left = 0.00;
				top = 0.048;
				right = 0.005;
				bottom = 0.005;
			};

			x = ((safezoneX + (0.192 * safezoneW)) + (0.109 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.650 * (0.74 * safezoneH)));
			w = 0.21 * (0.83 * safezoneW);
			h = 0.13 * (0.74 * safezoneH);
		};

		class NewbieAreaButton: RscButton_Custom_01
		{
			idc = -1;

			onButtonClick = "closeDialog 0; spawnSelect = 1;";
		
			text = "Spawn in Newbie Area (Mogilevka)";

			class TextPos 
			{
				left = 0.00;
				top = 0.022;
				right = 0.005;
				bottom = 0.005;
			};

			x = ((safezoneX + (0.192 * safezoneW)) + (0.424 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.650 * (0.74 * safezoneH)));
			w = 0.21 * (0.83 * safezoneW);
			h = 0.13 * (0.74 * safezoneH);
		};

		class SeverInfoTextfield: RscHTML_Custom_01
		{
			idc = -1;
			type = 9;
			style = 0;

			filename = "custom\NewbieSpawnSelection\NewbieSpawnSelection_page.html";

			x = ((safezoneX + (0.192 * safezoneW)) + (0.04 * (0.83 * safezoneW)));
			y = ((safezoneY + (0.120 * safezoneH)) + (0.18 * (0.74 * safezoneH)));
			w = 0.66 * (0.83 * safezoneW);
			h = 0.39 * (0.74 * safezoneH);
		};
	};
};