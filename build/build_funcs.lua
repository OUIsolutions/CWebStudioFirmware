
function create_build_funcs()
return {
    amalgamation_build = amalgamation_build,
    debian_static_build = debian_static_build,
    rpm_static_build = rpm_static_build,
    windowsi32_build = windowsi32_build,
    windowsi64_build = windowsi64_build,
    debian_deb_build = debian_deb_build,
    local_build = local_build,
    zip_build=zip_build
}
end 