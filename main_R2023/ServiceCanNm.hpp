#pragma once
/******************************************************************************/
/* File   : ServiceCanNm.hpp                                                  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceCanNm_ServiceNvM_Types.hpp"
#include "CfgServiceCanNm.hpp"
#include "ServiceCanNm_core.hpp"
#include "infServiceCanNm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCanNm:
      INTERFACES_EXPORTED_SERVICECANNM
      public abstract_module
   ,  public class_ServiceCanNm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceCanNm;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICECANNM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICECANNM_CONST,       SERVICECANNM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICECANNM_CONFIG_DATA, SERVICECANNM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICECANNM_CODE) DeInitFunction (void);
      FUNC(void, SERVICECANNM_CODE) MainFunction   (void);
      SERVICECANNM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceCanNm, SERVICECANNM_VAR) ServiceCanNm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

