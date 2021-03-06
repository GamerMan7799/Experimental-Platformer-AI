#ifndef __VERSION_HEADER__
#define __VERSION_HEADER__
/*****************************************************************************/
/////////////////////////////////////////////////
/// @file version.h
/// @brief  This is the header which holds all of the defines related to
/// version information.
/////////////////////////////////////////////////
/*****************************************************************************/
/////////////////////////////////////////////////
/// @defgroup VersionInfo Version Information
/// @brief These are defines hold all the information that is related to
///        program version.
/// @{
/////////////////////////////////////////////////
/*****************************************************************************/
//Date Version Types
/** The day of the last build of the program, currently not used. */
#define DEFINED_VER_DATE "22"

/** The month of the last build of the program, currently not used. */
#define DEFINED_VER_MONTH "02"

/** The year of the last build of the program, currently not used. */
#define DEFINED_VER_YEAR "2017"

/** The Ubuntu style of the date of the last build. It is in YY.MM format. */
#define DEFINED_VER_UBUNTU_VERSION_STYLE  "17.02"
/*****************************************************************************/
/** The Major number of the version number */
#define DEFINED_VER_MAJOR  5

/** The Minor number of the version number */
#define DEFINED_VER_MINOR  1

/** The Patch number of the version number */
#define DEFINED_VER_PATCH  1
/*****************************************************************************/
/** The version number in a format used by Boilerplate.rc, It is in the following format
    [MAJOR].[MINOR].[PATCH].[BUILDNUMBER] */
#define DEFINED_VER_RC_FILEVERSION 5,1,1,0

/** Is the same as DEFINED_VER_RC_FILEVERSION but is a null terminated string */
#define DEFINED_VER_RC_FILEVERSION_STRING "5, 1, 1, 0\0"

/** A more specific string of the file version */
#define DEFINED_VER_FULLVERSION_STRING  "5.1.1-r\0"

//Software Status
/**
Software Status can be the following:
| Status | Short | Description |
|-------------------|-------|-------------------------------------------------------------------------------------------------------------------------------------------------|
| Release | r | The supported release of the program. |
| Release Candidate | rc | The next likely release version; usually only a few bugs / todos separate this from a release. It is pretty safe to use. |
| Beta | b | This version will compile and / or run but does not work as expected (or crashes often). |
| Alpha | a | This version does not work at all; it usually won't compile at all or crashes more times than it works; best not to use versions in this state. |
*/
#define DEFINED_VER_STATUS 	"Release"

/** See the table for DEFINED_VER_STATUS */
#define DEFINED_VER_STATUS_SHORT  "r"
/// @}
/*****************************************************************************/
#endif //__VERSION_HEADER__
