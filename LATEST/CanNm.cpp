/******************************************************************************/
/* File   : CanNm.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CanNm.hpp"
#include "infCanNm_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CANNM_AR_RELEASE_VERSION_MAJOR                                         4
#define CANNM_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CANNM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CANNM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CANNM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CANNM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_CanNm, CANNM_VAR) CanNm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, CANNM_CODE) module_CanNm::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, CANNM_CONFIG_DATA, CANNM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == CanNm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == CanNm_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == CanNm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == CanNm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  CANNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, CANNM_CODE) module_CanNm::DeInitFunction(
   void
){
#if(STD_ON == CanNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == CanNm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == CanNm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  CANNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, CANNM_CODE) module_CanNm::MainFunction(
   void
){
#if(STD_ON == CanNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == CanNm_InitCheck)
   }
   else{
#if(STD_ON == CanNm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  CANNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, CANNM_CODE) module_CanNm::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

