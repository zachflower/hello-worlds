# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure(2) do |config|
  config.vm.box = "precise32"

  config.vm.provision "shell", inline: <<-SHELL
    sudo apt-get update
    sudo apt-get install -y php5-cli ruby nodejs gcc g++ make perl golang open-cobol gfortran haskell-platform python lua5.2 bwbasic curl gnat erlang scala mono-dmcs gobjc ikarus nasm

    test -e /usr/local/bin/rustc || curl -sf -L https://static.rust-lang.org/rustup.sh | sh
  SHELL
end
