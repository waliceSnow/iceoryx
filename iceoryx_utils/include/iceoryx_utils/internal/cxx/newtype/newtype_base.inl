// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef IOX_UTILS_CXX_NEWTYPE_NEWTYPE_BASE_INL
#define IOX_UTILS_CXX_NEWTYPE_NEWTYPE_BASE_INL

namespace iox
{
namespace cxx
{
namespace newtype
{
template <typename T>
inline NewTypeBase<T>::NewTypeBase() noexcept
{
}

template <typename T>
inline NewTypeBase<T>::NewTypeBase(const T& rhs) noexcept
    : m_value(rhs)
{
}

template <typename T>
inline NewTypeBase<T>::NewTypeBase(const NewTypeBase& rhs) noexcept
    : m_value(rhs.m_value)
{
}

template <typename T>
inline NewTypeBase<T>::NewTypeBase(NewTypeBase&& rhs) noexcept
    : m_value(std::move(rhs.m_value))
{
}

template <typename T>
inline NewTypeBase<T>& NewTypeBase<T>::operator=(const NewTypeBase& rhs) noexcept
{
    m_value = rhs.m_value;
    return *this;
}

template <typename T>
inline NewTypeBase<T>& NewTypeBase<T>::operator=(NewTypeBase&& rhs) noexcept
{
    m_value = std::move(rhs.m_value);
    return *this;
}
} // namespace newtype
} // namespace cxx
} // namespace iox

#endif
