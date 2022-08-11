proto:
	python3 -m grpc_tools.protoc -I./pb/proto --python_out=./pb --grpc_python_out=./pb ./pb/proto/validator.proto