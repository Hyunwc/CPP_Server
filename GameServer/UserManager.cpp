#include "pch.h"
#include "UserManager.h"
#include "AccountManager.h"

void UserManager::ProcessSave()
{
	Account* account = AccountManager::Instance()->GetAccount(100);

	// userLock
	lock_guard<mutex> guard(_mutex);

	// TODO
}
