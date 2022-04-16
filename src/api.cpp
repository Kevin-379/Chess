#include "../include/board.hpp"
#include <napi.h>

Napi::Array Method(const Napi::CallbackInfo &info) {
	auto env = info.Env();
	auto arr = Napi::Array::New(env, 64);
	for (int i = 0; i < 64; i++) { arr.Set(i, Napi::String::New(env, &initBoard[i])); }
	return arr;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
	exports.Set(Napi::String::New(env, "api"),
				Napi::Function::New(env, Method));
	return exports;
}

NODE_API_MODULE(api, Init)