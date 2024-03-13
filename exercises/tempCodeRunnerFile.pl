# Declara métodos
sub s1;
sub s2;

sub big{

    my $x = 3;
    s1;

    sub s1{
        my $x = 7; # escopo variável
        s2;
        print "$x   ";
    }

    sub s2{
        my $y = x;
    }
}

big
