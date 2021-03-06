/*
 * Copyright 2016 Google Inc. All rights reserved.
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

#ifndef FONTDIFF_FONT_LOADER_H_
#define FONTDIFF_FONT_LOADER_H_

#include <map>
#include <string>
#include <vector>

namespace fontdiff {

class Font;
class FontCollection;

class FontLoader {
 public:
  FontLoader();
  ~FontLoader();
  FontCollection* LoadCollection(const std::vector<std::string>& paths);

 private:
  static std::string GetSHA1(const std::string& filepath);
  std::vector<Font*>* Load(const std::string& path);
  std::map<std::string, std::vector<Font*>*> fonts_;
};

}  // namespace fontdiff

#endif  // FONTDIFF_FONT_LOADER_H_
