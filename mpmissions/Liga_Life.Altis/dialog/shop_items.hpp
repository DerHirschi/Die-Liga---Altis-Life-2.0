class shops_menu {
	idd = 2400;
	name= "shops_menu";
	movingEnable = false;
	enableSimulation = true;
	//onLoad = "['guns'] execVM 'gear\switch.sqf'";
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {0, 0.15, 0, 0.6};	
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (22 / 250);
		};
		
		class vasText : Life_RscText
		{
			idc = -1;
			colorBackground[] = {0, 0.17, 0, 0.7};
			text = "$STR_VS_SI";
			sizeEx = 0.04;
			x = 0.12; y = 0.27;
			w = 0.376; h = 0.04;
		};
		
		class vasgText : Life_RscText
		{
			idc = -1;
			colorBackground[] = {0, 0.17, 0, 0.7};
			text = "$STR_VS_PI";
			sizeEx = 0.04;
			
			x = 0.52; y = 0.27;
			w = 0.356; h = 0.04;
		};
	};
	
	class controls {

		class itemList : Life_RscListBox 
		{
			idc = 2401;
			text = "";
			sizeEx = 0.035;
			//onLBSelChanged = "[] call fnc_selection";
			
			x = 0.12; y = 0.31;
			w = 0.376; h = 0.340;
		};
		
		class pItemlist : Life_RscListBox 
		{
			idc = 2402;
			text = "";
			sizeEx = 0.035;
			//onLBSelChanged = "[2502] execVM 'gear\selection.sqf'";
			
			x = 0.52; y = 0.31;
			w = 0.356; h = 0.340;
		};
			
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 2403;
			text = "";
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		class PlayersName : Title {
			idc = 601;
			style = 1;
			text = "";
		};
		
		class buyEdit : Life_RscEdit 
		{
			idc = 2404;
			
			text = "1";
			sizeEx = 0.032;
			x = 0.12; y = 0.66;
			w = 0.27; h = 0.03;
		};
	
		class ButtonAddG : Life_RscButtonMenu
		{
			idc = 2408;
			text = "$STR_VS_BuyItem";
			colorBackground[] = {0, 0.25, 0, 0.9};
			onButtonClick = "";
			
			x = 0.16;
			y = 0.70;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class sellEdit : Life_RscEdit 
		{
			idc = 2405;
			
			text = "1";
			sizeEx = 0.032;
			x = 0.60; 
			y = 0.66;
			w = 0.27; 
			h = 0.03;
		};
		class ButtonRemoveG : Life_RscButtonMenu
		{
			idc = 2406;
			text = "$STR_VS_SellItem";
			colorBackground[] = {0, 0.25, 0, 0.9};
			onButtonClick = "0 call life_fnc_virt_sell";
			
			x = 0.67;
			y = 0.70;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonRemoveAll : Life_RscButtonMenu
		{
			idc = 2407;
			text = "Alles verkaufen";
			colorBackground[] = {0.25, 0.25, 0, 0.9};
			onButtonClick = "1 call life_fnc_virt_sell";
			
			x = 0.385;
			y = 0.70;
			w = (8.6 / 40);
			h = (1 / 25);
		};		
		
		class ButtonClose : Life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_Global_Close";
			colorBackground[] ={0.17, 0, 0, 0.9};
			onButtonClick = "closeDialog 0;";
			x = 0.1;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};