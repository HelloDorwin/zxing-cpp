#pragma once
/*
* Copyright 2016 Nu-book Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <memory>
#include <map>
#include <filesystem>

namespace fs = std::filesystem;

namespace ZXing {

class BinaryBitmap;

namespace Test {

class ImageLoader
{
public:
	static std::map<fs::path, std::unique_ptr<BinaryBitmap>> cache;

	static const BinaryBitmap& load(const fs::path& imgPath, bool isPure = false);
};


}} // ZXing::Test