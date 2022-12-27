/******************************************************************************/
/* File   : ServiceCanNm.cpp                                                  */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceCanNm.hpp"
#include "infServiceCanNm_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICECANNM_AR_RELEASE_VERSION_MAJOR                                  4
#define SERVICECANNM_AR_RELEASE_VERSION_MINOR                                  3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICECANNM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICECANNM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICECANNM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICECANNM_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_ServiceCanNm, SERVICECANNM_VAR) ServiceCanNm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICECANNM_CODE) module_ServiceCanNm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICECANNM_CONST,       SERVICECANNM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECANNM_CONFIG_DATA, SERVICECANNM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceCanNm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceCanNm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceCanNm_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceCanNm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceCanNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECANNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECANNM_CODE) module_ServiceCanNm::DeInitFunction(
   void
){
#if(STD_ON == ServiceCanNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceCanNm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceCanNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECANNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECANNM_CODE) module_ServiceCanNm::MainFunction(
   void
){
#if(STD_ON == ServiceCanNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceCanNm_InitCheck)
   }
   else{
#if(STD_ON == ServiceCanNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICECANNM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICECANNM_CODE) module_ServiceCanNm::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

