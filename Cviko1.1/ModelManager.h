#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include <vector>
#include <string>
#include "AssetDetail.h"
#include "Model.h"
#include "FactoryModel.h"

class ModelManager
{
private:
	static ModelManager* instance;
	std::vector<AssetDetail> models;
	ModelManager();
	
public:
	static ModelManager* getInstance();
	bool saveModel(Model* model, std::string name);
	Model* getModel(std::string name);


};

