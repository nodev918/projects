from concurrent import futures
import logging

import grpc
import hello_pb2
import hello_pb2_grpc


class Greeter(hello_pb2_grpc.GreeterServicer):
    def SayHello(self, request, context):
        return hello_pb2.HelloReply(message='Hello, %s!' % request.name)

    def Test(self, request, context):
        print(request.name1)
        print(request.name2)
        return hello_pb2.TestReply(message1=f'Hello, {request.name1}!')


def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    hello_pb2_grpc.add_GreeterServicer_to_server(Greeter(), server)
    server.add_insecure_port('[::]:50052')
    server.start()
    server.wait_for_termination()


if __name__ == '__main__':
    logging.basicConfig()
    serve()
