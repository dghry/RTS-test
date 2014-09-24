#include"ResourceModel.h"

static ResourceModel* _getinstancs = NULL;
ResourceModel* ResourceModel::getInstance()
{
	if (_getinstancs == NULL)
	{
		_getinstancs = new ResourceModel();

	}
	return _getinstancs;
}

bool ResourceModel::preloadResources()
{
	bool bRet = false;
	do
	{
		bRet = true;
	
	} while (0);
	return bRet;
}

bool ResourceModel::dynamicLoad()
{
	bool bRet = false;
	do
	{

		bRet = true;

	} while (0);
	return bRet;
}

ResourceModel::ResourceModel()
{
	
}