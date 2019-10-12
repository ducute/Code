from django.shortcuts import render
from django.http import HttpResponse


def index(request):
    return HttpResponse("hello, my master")

# Create your views here.
