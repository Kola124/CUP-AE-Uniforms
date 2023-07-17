class CfgPatches
{
	class cupUaceext
	{
		units[]={""};
		weapons[]={""};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="CroarmyZG";
		version="0.0.1";
	};
};

class XtdGearModels
{
	class CamoBase;
	class SleevesBase;
	class CfgWeapons
	{
		class EXT_U_Paramilitary
		{
			label="Paramilitary [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"variation"
			};
			class variation{
				label="Variation";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"1",
					"2",
					"3",
					"4",
					"5",
					"6",
					"7",
					"8",
					"9",
					"10",
					"11",
					"12",
					"13",
					"14",
					"15"
				};
			};
		};
		class EXT_U_CDF{
			label="Chernarus Camo [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"slgo"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Desert",
					"Forest",
					"Mountian",
					"Winter"
				};
			};
			class slgo
			{
				alwaysSelectable = 1;
				label="Sleeves/Gloves"
				values[]=
				{
					"Full",
					"Rolled",
					"Gloves"
					
				};
			};
		};
		class EXT_U_CiviliansExt
		{
			label="Civilians [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"type",
				"variation"
			};
			class type
			{
				label="Type";
				alwaysSelectable = 1;
				values[]=
				{
					"Worker",
					"Citizen",
					"Woodlander",
					"Villager",
					"Tracksuit",
					"Rocker",
					"Racketeer",
					"Profiteer",
					"Suit",
					"Suit w/ Jacket",
					"Policeman",
					"Paramedic",
					"Labcoat",
					"Mechanic",
					"Pilot",
					"Priest",
					"Firefighter"
				};
			};
			class variation{
				label="Variation";
				alwaysSelectable = 1;
				changeingame=0;
				values[]=
				{
					"1",
					"2",
					"3",
					"4"	
				};
			};
		};
		class EXT_U_B_GER
		{
			label="Germany Camo [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"sleeves",
				"gloves",
				"kneepad",
				"type"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Flecktarn",
					"Tropentarn",
					"Black"
				};
				class Flecktran
				{
					label="Flecktran";
				};
				class Tropentran
				{
					label="Tropentran";
				};
			};
			class sleeves
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Full",
					"rolled",
				};
				class rolled
				{
					label="Rolled";
					actionLabel="Roll sleeves low";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
				};
			};
			class gloves
			{
				label="Gloves";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class kneepad
			{
				label="Kneepad";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class type{
				label="Uniform Type";
				alwaysSelectable = 1;
				values[]={
					"Normal",
					"Crye",
					"Tanker",
					"Pilot"
				};
			};
		};
		class EXT_U_I_RACS
		{
			label="RACS Camo [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"sleeves",
				"gloves"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Desert",
					"Jungle",
					"Urban",
					"Woodland",
					"Pilot"
				};
			};
			class sleeves
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Full",
					"rolled"
					
				};
				class rolled
				{
					label="Rolled";
					actionLabel="Roll sleeves low";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
				};
			};
			class gloves
			{
				label="Gloves";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_U_B_ACR{
			label="CZ Army[CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"upper",
				"sleeves"
			};
			class camo{
				alwaysSelectable = 1;
				values[]={
					"Desert",
					"Woodland"
				};

			};
			class upper{
				label="Upper Body";
				alwaysSelectable = 1;
				values[]={
					"Normal",
					"MOUT",
					"Pilot",
					"Ghillie"
				};
			};
			class sleeves{
				label="Sleeves";
				alwaysSelectable = 1;
				values[]={
				"Normal",
				"Rolled",
				"T-Shirt"
				};
			};
		};		
		class EXT_U_Khet{
			label="Khet [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"combo",
				"variation"
			};
			class combo
			{
				label="Combination";
				alwaysSelectable = 1;
				values[]=
				{
					"Khet/Jeans",
					"Khet Partug",
					"Khet Partug (Short)"
				};
			};
			class variation{
				label="Variation";
				alwaysSelectable = 1;
				values[]=
				{
					"1",
					"2",
					"3",
					"4"
				};
			};
		};
		class EXT_U_UBACS{
			label="British UBACS [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"sleeves",
				"gloves"
			};
			class camo{
				alwaysSelectable = 1;
				values[]={
					"MTP",
					"DDPM",
					"DPM"
				};
			};
			class sleeves
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Full",
					"rolled",
					"T-Shirt",
					"Ghillie"
				};
				class rolled
				{
					label="Rolled";
					actionLabel="Roll sleeves low";
					icon="\z\aceax\addons\gearinfo\data\ui\sleeves_quarter.paa";
				};
			};
			class gloves
			{
				label="Gloves/Kneepads";
				values[]=
				{
					"No",
					"Both",
					"Gloves",
					"Kneepads",
					"Diver"
				};
				alwaysSelectable = 1;
			};
		};				
		class EXT_U_Maska{
			label="Russia Masking Suit [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Autumn",
					"Beige Digital",
					"Pink Desert",
					"Pink Desert 2",
					"Summer",
					"Winter"
				};
			};
		};
		class EXT_U_Gorka{
			label="Russia Gorka [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"gloves"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Green",
					"Partizan Autumn",
					"Partizan Summer"
				};
			};
			class gloves{
				label="Gloves/Kneepads";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Gloves",
					"Both"
				};
			};
		};				
		class EXT_U_ChDKZ{
			label="ChDKZ [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"Bardak",
					"Lopotev",
					"Officer",
					"1",
					"2",
					"3",
					"4",
					"5",
					"6",
					"7",
					"8"
				};
			};
		};
		class EXT_U_ACU{
			label="ACU [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"sleeves",
				"kneepads",
				"gloves"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"CCE",
					"TTS",
					"OCP",
					"OEF-CP",
					"UCP"
				};
			};
			class sleeves
			{
				label="Sleeves";
				alwaysSelectable = 1;
				values[]=
				{
					"Full",
					"Rolled"
				};
			};
			class kneepads
			{
				label="Kneepads";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class gloves
			{
				label="Gloves";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_U_MCCUU{
			label="MCCUU [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"sleeves",
				"kneepads",
				"gloves"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"M81",
					"Woodland",
					"Desert",
					"M81/MARPAT",
					"MARPAT/M81",
				};
			};
			class sleeves
			{
				label="Sleeves";
				alwaysSelectable = 1;
				values[]=
				{
					"Full",
					"Rolled",
					"High Rolled"
				};
			};
			class kneepads
			{
				label="Kneepads";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class gloves
			{
				label="Gloves";
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_U_PMC{
			label="PMC [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"variation"
			};
			class variation{
				label="Variation";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"1",
					"2",
					"3",
					"4",
					"5",
					"6",
					"7",
					"8",
					"9",
					"10",
					"11",
					"12",
					"13",
					"14",
					"15",
					"16",
					"17",
					"18",
					"19",
					"20",
					"21",
					"22",
					"23",
					"24",
					"25",
					"26",
					"27",
					"28",
					"29",
					"30",
					"31",
					"32",
					"33",
					"34",
					"35",
					"36",
					"37",
					"38",
					"39",
					"40",
					"41",
					"42",
					"43"
				};
			};
		}
		class EXT_U_NAV{
			label="Carrier Crew [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Colour"
			};
			class colour{
				label="Colour";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Blue",
					"Brown",
					"Green",
					"Red",
					"Violet",
					"White",
					"Yellow"
				};
			};
		};
		class EXT_U_NAPA{
			label="NAPA [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"type",
				"variant"
			};
			class type{
				label="Type";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Uniform",
					"Fatigues",
					"Anorak",
					"Ghillie"
				};
			};
			class variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"1",
					"2",
					"3",
					"4",
					"5"
				};
			};
		};
		class EXT_U_RUS{
			label="Russia Camo [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"sleeves",
				"gloves",
				"kneepad",
				"branch",
				"wornout"
			};
			class camo
			{
				alwaysSelectable = 1;
				values[]=
				{
					"EMR",
					"TTsKO",
					"VSR-93",
					"VSR-98",
					"KSOR",
					"M-88",
					"Pink Desert",
					"Digital Beige",
					"Ghillie"
				};
			};
			class sleeves
			{			
				values[]=
				{
					"Full",
					"rolled"
				};
				class rolled
				{
					label="Rolled";
				};
				alwaysSelectable = 1;
			};
			class gloves
			{
				label="Gloves";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable = 1;
			};
			class kneepads
			{
				label="Kneepads";
				values[]=
				{
					"No",
					"Yes"
				};
				alwaysSelectable = 1;
			};
			class branch
			{
				label="Branch";
				values[]=
				{
					"Army",
					"VDV",
					"ODKB VDV",
					"VKPO",
					"VKPO VDV",
					"Commander"
				};
				alwaysSelectable = 1;
			};
			class wornout{
				alwaysSelectable = 1;
				label="Worn"
				values[]={
					"Yes",
					"No"
				};
			};
		};
		class EXT_U_FROG{
			label="FROG [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo",
				"version"

			};
			class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Woodland",
					"Desert"
				};
			};
			class version{
				label="Version";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Ver 1",
					"Ver 2",
					"Ver 3",
					"Ver 4"
				};
			};

		};
		class EXT_U_PAR{
			label="Partisan [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo"
			};
			class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"TTsKO",
					"TTsKO/SLA",
					"VSR Mix 1",
					"VSR Mix 2"
				};
			};
		};
		class EXT_U_SLA{
			label="SLA [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo"
			};
			class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Camo",
					"Desert",
					"Urban",
					"Militia",
					"Officer",
					"Tanker",
					"Pilot"
				};
			};
		};
		class EXT_U_TAK{
			label="Takistani [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"camo"
			};
			class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Green",
					"Mixed",
					"Colonel",
					"Ghillie"
				};
			};
		};
		class EXT_U_CRYE
		{
			label="Crye [CUP]";
			author="Community Upgrade Project";
			options[]={
				"camo",
				"sleeves",
				"flag"
			};
		class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"ATACS-AU",
					"ATACS-FG",
					"Black",
					"Tan",
					"Ranger Green",
					"Multicam 1",
					"Multicam 2",
					"Multicam 3",
					"Coyote",
					"Khaki"
				};
			};
		class sleeves{
				label="Sleeves";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Full",
					"Rolled",
				};
			};
		class flag{
				label="Flag";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"US",
					"RUS"
				};
			};
		};
		class EXT_U_CRYE3
		{
			label="Crye Gen 3 [CUP]";
			author="Community Upgrade Project";
			options[]={
				"camo"
			};
		class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"AOR1",
					"AOR2",
					"ATACS-AU",
					"ATACS-FG",
					"Black",
					"M81",
					"M81 MARSOC",
					"M81 v2 MARSOC",
					"M81 v3 MARSOC",
					"M81 RGR",
					"M81 RGR MARSOC",
					"M81 Tan",
					"M81 Tan MARSOC",
					"Ranger Green",
					"RGR MC US",
					"Tan MC US",
					"Multicam",
					"Multicam v2",
					"Multicam v3",
					"Multicam US",
					"Multicam v2 US"
				};
			};
		};
		class EXT_U_USAOST{
			label="USA Rest [CUP]";
			author="Community Upgrade Project";
			options[]={
				"camo",
			};
			class camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Flightsuit Green",
					"Flighsuit Tan",
					"Modern/ACU",
					"ACU/Knees",
					"Soft Shell",
					"UBACS/ACU"
				};
			};
		};
	};
};
class CfgWeapons{
		#include "\cupUaceext\paravojskaext.hpp"
		#include "\cupUaceext\cernarusext.hpp"
		#include "\cupUaceext\civiliext.hpp"
		#include "\cupUaceext\njemackaext.hpp"
		#include "\cupUaceext\saharaniext.hpp"
		#include "\cupUaceext\ceskaext.hpp"
		#include "\cupUaceext\talibaniext.hpp"
		#include "\cupUaceext\britanijaext.hpp"
		#include "\cupUaceext\rusijaext.hpp"
		#include "\cupUaceext\acuext.hpp"
		#include "\cupUaceext\mccuu.hpp"
		#include "\cupUaceext\pmcext.hpp"
		#include "\cupUaceext\carrierext.hpp"
		#include "\cupUaceext\napaext.hpp"
		#include "\cupUaceext\ostaliext.hpp"
		#include "\cupUaceext\cryeext.hpp"
};