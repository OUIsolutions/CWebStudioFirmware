local debian_static_build_done = false

function debian_static_build()
    if debian_static_build_done then
        return
    end
    debian_static_build_done = true
    amalgamation_build()
    os.execute("mkdir -p release")

    local image = darwin.ship.create_machine("debian:latest")
    image.provider = CONTANIZER
    image.add_comptime_command("apt update")
    image.add_comptime_command("apt add isntall gcc -y")

    image.start({
        volumes = {
            { "./release", "/release" },
            { "./dependencies",     "/dependencies" }

        },
        command = "gcc --static /release/"..PROJECT_NAME..".c  -o /release/debian_static_bin.out"

    })
end
