from __future__ import print_function

import logging

import grpc
import hello_pb2
import hello_pb2_grpc


def run():
    with grpc.insecure_channel('localhost:50052') as channel:
        stub = hello_pb2_grpc.GreeterStub(channel)
        response = stub.SayHello(hello_pb2.HelloRequest(name='yale'))
    print("Greeter client received: "+response.message)


def run1():
    with grpc.insecure_channel('localhost:50052') as channel:
        stub = hello_pb2_grpc.GreeterStub(channel)
        response = stub.Test(hello_pb2.TestRequest(name1='1', name2=2))
    print("Greeter client received: "+response.message1)


if __name__ == '__main__':
    logging.basicConfig()
    run()
    run1()
