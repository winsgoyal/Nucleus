 /*
 * Copyright 2020-present, Infosys Limited.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __SessionContextManager__
#define __SessionContextManager__
/******************************************************
* sessionContextManager.h
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/ctxtManagerTmpls/blockPoolManager.h.tt>
 ***************************************/
#include "memPoolManager.h"

namespace mme
{
	class SessionContext;
	class SessionContextManager
	{
		public:
			/****************************************
			* SessionContextManager
			*  constructor
			****************************************/
			SessionContextManager(int numOfBlocks);
			
			/****************************************
			* SessionContextManager
			*    Destructor
			****************************************/
			~SessionContextManager();
			
			/******************************************
			 * allocateSessionContext
			 * allocate SessionContext data block
			 ******************************************/
			SessionContext* allocateSessionContext();
			
			/******************************************
			 * deallocateSessionContext
			 * deallocate a SessionContext data block
			 ******************************************/
			void deallocateSessionContext(SessionContext* SessionContextp );
	
		private:
			cmn::memPool::MemPoolManager<SessionContext> poolManager_m;
	};
};

#endif
		
		
