.PHONY: clean All

All:
	@echo "----------Building project:[ W805_SDK - BuildSet ]----------"
	@
	@make -f "W805_SDK.mk" MakeIntermediateDirs && make -f "W805_SDK.mk" -j 4
	@echo Executing Post Build commands ...
	@export CDKPath="D:/software/CDK" ProjectPath="D:/work_svn/WM_FAE/trunk/FAE_001/project/W805_mcu/code/wm_sdk_w805/tools/w805/projects/SDK_Project/project/CDK_WS/W805_SDK" && ../../../../../../../tools/w805/utilities/cdk_aft_build.sh;../../../../../../../tools/w805/utilities/aft_build_project.sh
	@echo Done

clean:
	@echo "----------Cleaning project:[ W805_SDK - BuildSet ]----------"
	@make -f  "W805_SDK.mk" clean
