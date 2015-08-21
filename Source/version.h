#ifndef __VERSION_HEADER__
#define __VERSION_HEADER__

//Initial was created using Code::Blocks' auto-versifying. However
//it kept really messing up the system I was using so I turned it off


//Date Version Types
#define DEFINED_VER_DATE "21"
#define DEFINED_VER_MONTH "08"
#define DEFINED_VER_YEAR "2015"
//I don't know what this is for, but I'll leave it for now.
#define DEFINED_VER_UBUNTU_VERSION_STYLE  "15.08" 

//Standard Version Type
#define DEFINED_VER_MAJOR  4
#define DEFINED_VER_MINOR  0
#define DEFINED_VER_PATCH  0

//Miscellaneous Version Types
//Don't forget to increment the build number before each build
#define DEFINED_VER_RC_FILEVERSION 4,0,0,146
#define DEFINED_VER_RC_FILEVERSION_STRING "4, 0, 0, 146\0"
#define DEFINED_VER_FULLVERSION_STRING  "4.0.0"

//If this is not commented out then the build is meant to be a private build
//as such it will be in debug mode.
//#define DEFINED_BUILD_MODE_PRIVATE

//Software Status
#define DEFINED_VER_STATUS 	"Release"
#define DEFINED_VER_STATUS_SHORT  "r"

/*
Software Status can be the following:
|===================|========|====================================================|
| Status            | Short  | Description                                        |
|===================|========|====================================================|
| Release           | r      | The supported release of the program               |
|===================|========|====================================================|
| Release Candidate | rc     | The next likely release verison;                   |
|					|	     | usually only a few bugs / todos seprate this from  |
|					|		 | a release. it is pretty safe to use.               |
|===================|========|====================================================|
| Beta				| b      | This verison will complie and / or run but does not|
|                   |        | work as expected (or crashes often)                |
|===================|========|====================================================|
| Alpha				| a		 | This verison does not work at all; it usually won't|
|                   |        | complie at all or crashes more times than it works |
|                   |        | best not to use verisons in this state             |
|===================|========|====================================================|
*/


#endif //__VERSION_HEADER__