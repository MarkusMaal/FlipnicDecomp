#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a33f0
// Address: 0x1a33f0 - 0x1a3db4
void FUN_001a33f0_0x1a33f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a33f0_0x1a33f0");
#endif

    switch (ctx->pc) {
        case 0x1a33f0u: goto label_1a33f0;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a33f8u: goto label_1a33f8;
        case 0x1a33fcu: goto label_1a33fc;
        case 0x1a3400u: goto label_1a3400;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3408u: goto label_1a3408;
        case 0x1a340cu: goto label_1a340c;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a3414u: goto label_1a3414;
        case 0x1a3418u: goto label_1a3418;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a3420u: goto label_1a3420;
        case 0x1a3424u: goto label_1a3424;
        case 0x1a3428u: goto label_1a3428;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3430u: goto label_1a3430;
        case 0x1a3434u: goto label_1a3434;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a343cu: goto label_1a343c;
        case 0x1a3440u: goto label_1a3440;
        case 0x1a3444u: goto label_1a3444;
        case 0x1a3448u: goto label_1a3448;
        case 0x1a344cu: goto label_1a344c;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3454u: goto label_1a3454;
        case 0x1a3458u: goto label_1a3458;
        case 0x1a345cu: goto label_1a345c;
        case 0x1a3460u: goto label_1a3460;
        case 0x1a3464u: goto label_1a3464;
        case 0x1a3468u: goto label_1a3468;
        case 0x1a346cu: goto label_1a346c;
        case 0x1a3470u: goto label_1a3470;
        case 0x1a3474u: goto label_1a3474;
        case 0x1a3478u: goto label_1a3478;
        case 0x1a347cu: goto label_1a347c;
        case 0x1a3480u: goto label_1a3480;
        case 0x1a3484u: goto label_1a3484;
        case 0x1a3488u: goto label_1a3488;
        case 0x1a348cu: goto label_1a348c;
        case 0x1a3490u: goto label_1a3490;
        case 0x1a3494u: goto label_1a3494;
        case 0x1a3498u: goto label_1a3498;
        case 0x1a349cu: goto label_1a349c;
        case 0x1a34a0u: goto label_1a34a0;
        case 0x1a34a4u: goto label_1a34a4;
        case 0x1a34a8u: goto label_1a34a8;
        case 0x1a34acu: goto label_1a34ac;
        case 0x1a34b0u: goto label_1a34b0;
        case 0x1a34b4u: goto label_1a34b4;
        case 0x1a34b8u: goto label_1a34b8;
        case 0x1a34bcu: goto label_1a34bc;
        case 0x1a34c0u: goto label_1a34c0;
        case 0x1a34c4u: goto label_1a34c4;
        case 0x1a34c8u: goto label_1a34c8;
        case 0x1a34ccu: goto label_1a34cc;
        case 0x1a34d0u: goto label_1a34d0;
        case 0x1a34d4u: goto label_1a34d4;
        case 0x1a34d8u: goto label_1a34d8;
        case 0x1a34dcu: goto label_1a34dc;
        case 0x1a34e0u: goto label_1a34e0;
        case 0x1a34e4u: goto label_1a34e4;
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34ecu: goto label_1a34ec;
        case 0x1a34f0u: goto label_1a34f0;
        case 0x1a34f4u: goto label_1a34f4;
        case 0x1a34f8u: goto label_1a34f8;
        case 0x1a34fcu: goto label_1a34fc;
        case 0x1a3500u: goto label_1a3500;
        case 0x1a3504u: goto label_1a3504;
        case 0x1a3508u: goto label_1a3508;
        case 0x1a350cu: goto label_1a350c;
        case 0x1a3510u: goto label_1a3510;
        case 0x1a3514u: goto label_1a3514;
        case 0x1a3518u: goto label_1a3518;
        case 0x1a351cu: goto label_1a351c;
        case 0x1a3520u: goto label_1a3520;
        case 0x1a3524u: goto label_1a3524;
        case 0x1a3528u: goto label_1a3528;
        case 0x1a352cu: goto label_1a352c;
        case 0x1a3530u: goto label_1a3530;
        case 0x1a3534u: goto label_1a3534;
        case 0x1a3538u: goto label_1a3538;
        case 0x1a353cu: goto label_1a353c;
        case 0x1a3540u: goto label_1a3540;
        case 0x1a3544u: goto label_1a3544;
        case 0x1a3548u: goto label_1a3548;
        case 0x1a354cu: goto label_1a354c;
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        case 0x1a35f0u: goto label_1a35f0;
        case 0x1a35f4u: goto label_1a35f4;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a35fcu: goto label_1a35fc;
        case 0x1a3600u: goto label_1a3600;
        case 0x1a3604u: goto label_1a3604;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3610u: goto label_1a3610;
        case 0x1a3614u: goto label_1a3614;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a361cu: goto label_1a361c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3624u: goto label_1a3624;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3630u: goto label_1a3630;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3638u: goto label_1a3638;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3640u: goto label_1a3640;
        case 0x1a3644u: goto label_1a3644;
        case 0x1a3648u: goto label_1a3648;
        case 0x1a364cu: goto label_1a364c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3654u: goto label_1a3654;
        case 0x1a3658u: goto label_1a3658;
        case 0x1a365cu: goto label_1a365c;
        case 0x1a3660u: goto label_1a3660;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3668u: goto label_1a3668;
        case 0x1a366cu: goto label_1a366c;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3674u: goto label_1a3674;
        case 0x1a3678u: goto label_1a3678;
        case 0x1a367cu: goto label_1a367c;
        case 0x1a3680u: goto label_1a3680;
        case 0x1a3684u: goto label_1a3684;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a368cu: goto label_1a368c;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a3698u: goto label_1a3698;
        case 0x1a369cu: goto label_1a369c;
        case 0x1a36a0u: goto label_1a36a0;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36a8u: goto label_1a36a8;
        case 0x1a36acu: goto label_1a36ac;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b4u: goto label_1a36b4;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36bcu: goto label_1a36bc;
        case 0x1a36c0u: goto label_1a36c0;
        case 0x1a36c4u: goto label_1a36c4;
        case 0x1a36c8u: goto label_1a36c8;
        case 0x1a36ccu: goto label_1a36cc;
        case 0x1a36d0u: goto label_1a36d0;
        case 0x1a36d4u: goto label_1a36d4;
        case 0x1a36d8u: goto label_1a36d8;
        case 0x1a36dcu: goto label_1a36dc;
        case 0x1a36e0u: goto label_1a36e0;
        case 0x1a36e4u: goto label_1a36e4;
        case 0x1a36e8u: goto label_1a36e8;
        case 0x1a36ecu: goto label_1a36ec;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36f4u: goto label_1a36f4;
        case 0x1a36f8u: goto label_1a36f8;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3700u: goto label_1a3700;
        case 0x1a3704u: goto label_1a3704;
        case 0x1a3708u: goto label_1a3708;
        case 0x1a370cu: goto label_1a370c;
        case 0x1a3710u: goto label_1a3710;
        case 0x1a3714u: goto label_1a3714;
        case 0x1a3718u: goto label_1a3718;
        case 0x1a371cu: goto label_1a371c;
        case 0x1a3720u: goto label_1a3720;
        case 0x1a3724u: goto label_1a3724;
        case 0x1a3728u: goto label_1a3728;
        case 0x1a372cu: goto label_1a372c;
        case 0x1a3730u: goto label_1a3730;
        case 0x1a3734u: goto label_1a3734;
        case 0x1a3738u: goto label_1a3738;
        case 0x1a373cu: goto label_1a373c;
        case 0x1a3740u: goto label_1a3740;
        case 0x1a3744u: goto label_1a3744;
        case 0x1a3748u: goto label_1a3748;
        case 0x1a374cu: goto label_1a374c;
        case 0x1a3750u: goto label_1a3750;
        case 0x1a3754u: goto label_1a3754;
        case 0x1a3758u: goto label_1a3758;
        case 0x1a375cu: goto label_1a375c;
        case 0x1a3760u: goto label_1a3760;
        case 0x1a3764u: goto label_1a3764;
        case 0x1a3768u: goto label_1a3768;
        case 0x1a376cu: goto label_1a376c;
        case 0x1a3770u: goto label_1a3770;
        case 0x1a3774u: goto label_1a3774;
        case 0x1a3778u: goto label_1a3778;
        case 0x1a377cu: goto label_1a377c;
        case 0x1a3780u: goto label_1a3780;
        case 0x1a3784u: goto label_1a3784;
        case 0x1a3788u: goto label_1a3788;
        case 0x1a378cu: goto label_1a378c;
        case 0x1a3790u: goto label_1a3790;
        case 0x1a3794u: goto label_1a3794;
        case 0x1a3798u: goto label_1a3798;
        case 0x1a379cu: goto label_1a379c;
        case 0x1a37a0u: goto label_1a37a0;
        case 0x1a37a4u: goto label_1a37a4;
        case 0x1a37a8u: goto label_1a37a8;
        case 0x1a37acu: goto label_1a37ac;
        case 0x1a37b0u: goto label_1a37b0;
        case 0x1a37b4u: goto label_1a37b4;
        case 0x1a37b8u: goto label_1a37b8;
        case 0x1a37bcu: goto label_1a37bc;
        case 0x1a37c0u: goto label_1a37c0;
        case 0x1a37c4u: goto label_1a37c4;
        case 0x1a37c8u: goto label_1a37c8;
        case 0x1a37ccu: goto label_1a37cc;
        case 0x1a37d0u: goto label_1a37d0;
        case 0x1a37d4u: goto label_1a37d4;
        case 0x1a37d8u: goto label_1a37d8;
        case 0x1a37dcu: goto label_1a37dc;
        case 0x1a37e0u: goto label_1a37e0;
        case 0x1a37e4u: goto label_1a37e4;
        case 0x1a37e8u: goto label_1a37e8;
        case 0x1a37ecu: goto label_1a37ec;
        case 0x1a37f0u: goto label_1a37f0;
        case 0x1a37f4u: goto label_1a37f4;
        case 0x1a37f8u: goto label_1a37f8;
        case 0x1a37fcu: goto label_1a37fc;
        case 0x1a3800u: goto label_1a3800;
        case 0x1a3804u: goto label_1a3804;
        case 0x1a3808u: goto label_1a3808;
        case 0x1a380cu: goto label_1a380c;
        case 0x1a3810u: goto label_1a3810;
        case 0x1a3814u: goto label_1a3814;
        case 0x1a3818u: goto label_1a3818;
        case 0x1a381cu: goto label_1a381c;
        case 0x1a3820u: goto label_1a3820;
        case 0x1a3824u: goto label_1a3824;
        case 0x1a3828u: goto label_1a3828;
        case 0x1a382cu: goto label_1a382c;
        case 0x1a3830u: goto label_1a3830;
        case 0x1a3834u: goto label_1a3834;
        case 0x1a3838u: goto label_1a3838;
        case 0x1a383cu: goto label_1a383c;
        case 0x1a3840u: goto label_1a3840;
        case 0x1a3844u: goto label_1a3844;
        case 0x1a3848u: goto label_1a3848;
        case 0x1a384cu: goto label_1a384c;
        case 0x1a3850u: goto label_1a3850;
        case 0x1a3854u: goto label_1a3854;
        case 0x1a3858u: goto label_1a3858;
        case 0x1a385cu: goto label_1a385c;
        case 0x1a3860u: goto label_1a3860;
        case 0x1a3864u: goto label_1a3864;
        case 0x1a3868u: goto label_1a3868;
        case 0x1a386cu: goto label_1a386c;
        case 0x1a3870u: goto label_1a3870;
        case 0x1a3874u: goto label_1a3874;
        case 0x1a3878u: goto label_1a3878;
        case 0x1a387cu: goto label_1a387c;
        case 0x1a3880u: goto label_1a3880;
        case 0x1a3884u: goto label_1a3884;
        case 0x1a3888u: goto label_1a3888;
        case 0x1a388cu: goto label_1a388c;
        case 0x1a3890u: goto label_1a3890;
        case 0x1a3894u: goto label_1a3894;
        case 0x1a3898u: goto label_1a3898;
        case 0x1a389cu: goto label_1a389c;
        case 0x1a38a0u: goto label_1a38a0;
        case 0x1a38a4u: goto label_1a38a4;
        case 0x1a38a8u: goto label_1a38a8;
        case 0x1a38acu: goto label_1a38ac;
        case 0x1a38b0u: goto label_1a38b0;
        case 0x1a38b4u: goto label_1a38b4;
        case 0x1a38b8u: goto label_1a38b8;
        case 0x1a38bcu: goto label_1a38bc;
        case 0x1a38c0u: goto label_1a38c0;
        case 0x1a38c4u: goto label_1a38c4;
        case 0x1a38c8u: goto label_1a38c8;
        case 0x1a38ccu: goto label_1a38cc;
        case 0x1a38d0u: goto label_1a38d0;
        case 0x1a38d4u: goto label_1a38d4;
        case 0x1a38d8u: goto label_1a38d8;
        case 0x1a38dcu: goto label_1a38dc;
        case 0x1a38e0u: goto label_1a38e0;
        case 0x1a38e4u: goto label_1a38e4;
        case 0x1a38e8u: goto label_1a38e8;
        case 0x1a38ecu: goto label_1a38ec;
        case 0x1a38f0u: goto label_1a38f0;
        case 0x1a38f4u: goto label_1a38f4;
        case 0x1a38f8u: goto label_1a38f8;
        case 0x1a38fcu: goto label_1a38fc;
        case 0x1a3900u: goto label_1a3900;
        case 0x1a3904u: goto label_1a3904;
        case 0x1a3908u: goto label_1a3908;
        case 0x1a390cu: goto label_1a390c;
        case 0x1a3910u: goto label_1a3910;
        case 0x1a3914u: goto label_1a3914;
        case 0x1a3918u: goto label_1a3918;
        case 0x1a391cu: goto label_1a391c;
        case 0x1a3920u: goto label_1a3920;
        case 0x1a3924u: goto label_1a3924;
        case 0x1a3928u: goto label_1a3928;
        case 0x1a392cu: goto label_1a392c;
        case 0x1a3930u: goto label_1a3930;
        case 0x1a3934u: goto label_1a3934;
        case 0x1a3938u: goto label_1a3938;
        case 0x1a393cu: goto label_1a393c;
        case 0x1a3940u: goto label_1a3940;
        case 0x1a3944u: goto label_1a3944;
        case 0x1a3948u: goto label_1a3948;
        case 0x1a394cu: goto label_1a394c;
        case 0x1a3950u: goto label_1a3950;
        case 0x1a3954u: goto label_1a3954;
        case 0x1a3958u: goto label_1a3958;
        case 0x1a395cu: goto label_1a395c;
        case 0x1a3960u: goto label_1a3960;
        case 0x1a3964u: goto label_1a3964;
        case 0x1a3968u: goto label_1a3968;
        case 0x1a396cu: goto label_1a396c;
        case 0x1a3970u: goto label_1a3970;
        case 0x1a3974u: goto label_1a3974;
        case 0x1a3978u: goto label_1a3978;
        case 0x1a397cu: goto label_1a397c;
        case 0x1a3980u: goto label_1a3980;
        case 0x1a3984u: goto label_1a3984;
        case 0x1a3988u: goto label_1a3988;
        case 0x1a398cu: goto label_1a398c;
        case 0x1a3990u: goto label_1a3990;
        case 0x1a3994u: goto label_1a3994;
        case 0x1a3998u: goto label_1a3998;
        case 0x1a399cu: goto label_1a399c;
        case 0x1a39a0u: goto label_1a39a0;
        case 0x1a39a4u: goto label_1a39a4;
        case 0x1a39a8u: goto label_1a39a8;
        case 0x1a39acu: goto label_1a39ac;
        case 0x1a39b0u: goto label_1a39b0;
        case 0x1a39b4u: goto label_1a39b4;
        case 0x1a39b8u: goto label_1a39b8;
        case 0x1a39bcu: goto label_1a39bc;
        case 0x1a39c0u: goto label_1a39c0;
        case 0x1a39c4u: goto label_1a39c4;
        case 0x1a39c8u: goto label_1a39c8;
        case 0x1a39ccu: goto label_1a39cc;
        case 0x1a39d0u: goto label_1a39d0;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a39d8u: goto label_1a39d8;
        case 0x1a39dcu: goto label_1a39dc;
        case 0x1a39e0u: goto label_1a39e0;
        case 0x1a39e4u: goto label_1a39e4;
        case 0x1a39e8u: goto label_1a39e8;
        case 0x1a39ecu: goto label_1a39ec;
        case 0x1a39f0u: goto label_1a39f0;
        case 0x1a39f4u: goto label_1a39f4;
        case 0x1a39f8u: goto label_1a39f8;
        case 0x1a39fcu: goto label_1a39fc;
        case 0x1a3a00u: goto label_1a3a00;
        case 0x1a3a04u: goto label_1a3a04;
        case 0x1a3a08u: goto label_1a3a08;
        case 0x1a3a0cu: goto label_1a3a0c;
        case 0x1a3a10u: goto label_1a3a10;
        case 0x1a3a14u: goto label_1a3a14;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a1cu: goto label_1a3a1c;
        case 0x1a3a20u: goto label_1a3a20;
        case 0x1a3a24u: goto label_1a3a24;
        case 0x1a3a28u: goto label_1a3a28;
        case 0x1a3a2cu: goto label_1a3a2c;
        case 0x1a3a30u: goto label_1a3a30;
        case 0x1a3a34u: goto label_1a3a34;
        case 0x1a3a38u: goto label_1a3a38;
        case 0x1a3a3cu: goto label_1a3a3c;
        case 0x1a3a40u: goto label_1a3a40;
        case 0x1a3a44u: goto label_1a3a44;
        case 0x1a3a48u: goto label_1a3a48;
        case 0x1a3a4cu: goto label_1a3a4c;
        case 0x1a3a50u: goto label_1a3a50;
        case 0x1a3a54u: goto label_1a3a54;
        case 0x1a3a58u: goto label_1a3a58;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a60u: goto label_1a3a60;
        case 0x1a3a64u: goto label_1a3a64;
        case 0x1a3a68u: goto label_1a3a68;
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a74u: goto label_1a3a74;
        case 0x1a3a78u: goto label_1a3a78;
        case 0x1a3a7cu: goto label_1a3a7c;
        case 0x1a3a80u: goto label_1a3a80;
        case 0x1a3a84u: goto label_1a3a84;
        case 0x1a3a88u: goto label_1a3a88;
        case 0x1a3a8cu: goto label_1a3a8c;
        case 0x1a3a90u: goto label_1a3a90;
        case 0x1a3a94u: goto label_1a3a94;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3a9cu: goto label_1a3a9c;
        case 0x1a3aa0u: goto label_1a3aa0;
        case 0x1a3aa4u: goto label_1a3aa4;
        case 0x1a3aa8u: goto label_1a3aa8;
        case 0x1a3aacu: goto label_1a3aac;
        case 0x1a3ab0u: goto label_1a3ab0;
        case 0x1a3ab4u: goto label_1a3ab4;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ac4u: goto label_1a3ac4;
        case 0x1a3ac8u: goto label_1a3ac8;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3ad4u: goto label_1a3ad4;
        case 0x1a3ad8u: goto label_1a3ad8;
        case 0x1a3adcu: goto label_1a3adc;
        case 0x1a3ae0u: goto label_1a3ae0;
        case 0x1a3ae4u: goto label_1a3ae4;
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        default: break;
    }

    ctx->pc = 0x1a33f0u;

label_1a33f0:
    // 0x1a33f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a33f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a33f4:
    // 0x1a33f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a33f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a33f8:
    // 0x1a33f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a33f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a33fc:
    // 0x1a33fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a3400:
    // 0x1a3400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3404:
    // 0x1a3404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3408:
    // 0x1a3408: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a340c:
    // 0x1a340c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a340cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3410:
    // 0x1a3410: 0xc063dd4  jal         func_18F750
label_1a3414:
    if (ctx->pc == 0x1A3414u) {
        ctx->pc = 0x1A3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3410u;
        // 0x1a3414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3418u;
        goto label_1a3418;
    }
    ctx->pc = 0x1A3410u;
    SET_GPR_U32(ctx, 31, 0x1A3418u);
    ctx->pc = 0x1A3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3410u;
    // 0x1a3414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A3410u, 0x1A3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3418u;
label_1a3418:
    // 0x1a3418: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a3418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a341c:
    // 0x1a341c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a341cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a3420:
    // 0x1a3420: 0x1044025d  beq         $v0, $a0, . + 4 + (0x25D << 2)
label_1a3424:
    if (ctx->pc == 0x1A3424u) {
        ctx->pc = 0x1A3428u;
        goto label_1a3428;
    }
    ctx->pc = 0x1A3420u;
    {
        const bool branch_taken_0x1a3420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a3420) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3428u;
label_1a3428:
    // 0x1a3428: 0x1043025b  beq         $v0, $v1, . + 4 + (0x25B << 2)
label_1a342c:
    if (ctx->pc == 0x1A342Cu) {
        ctx->pc = 0x1A3430u;
        goto label_1a3430;
    }
    ctx->pc = 0x1A3428u;
    {
        const bool branch_taken_0x1a3428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3428) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3430u;
label_1a3430:
    // 0x1a3430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3434:
    // 0x1a3434: 0x10430251  beq         $v0, $v1, . + 4 + (0x251 << 2)
label_1a3438:
    if (ctx->pc == 0x1A3438u) {
        ctx->pc = 0x1A343Cu;
        goto label_1a343c;
    }
    ctx->pc = 0x1A3434u;
    {
        const bool branch_taken_0x1a3434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3434) {
            ctx->pc = 0x1A3D7Cu;
            goto label_1a3d7c;
        }
    }
    ctx->pc = 0x1A343Cu;
label_1a343c:
    // 0x1a343c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3440:
    // 0x1a3440: 0x1043018c  beq         $v0, $v1, . + 4 + (0x18C << 2)
label_1a3444:
    if (ctx->pc == 0x1A3444u) {
        ctx->pc = 0x1A3448u;
        goto label_1a3448;
    }
    ctx->pc = 0x1A3440u;
    {
        const bool branch_taken_0x1a3440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3440) {
            ctx->pc = 0x1A3A74u;
            goto label_1a3a74;
        }
    }
    ctx->pc = 0x1A3448u;
label_1a3448:
    // 0x1a3448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a344c:
    // 0x1a344c: 0x10430091  beq         $v0, $v1, . + 4 + (0x91 << 2)
label_1a3450:
    if (ctx->pc == 0x1A3450u) {
        ctx->pc = 0x1A3454u;
        goto label_1a3454;
    }
    ctx->pc = 0x1A344Cu;
    {
        const bool branch_taken_0x1a344c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a344c) {
            ctx->pc = 0x1A3694u;
            goto label_1a3694;
        }
    }
    ctx->pc = 0x1A3454u;
label_1a3454:
    // 0x1a3454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a3458:
    if (ctx->pc == 0x1A3458u) {
        ctx->pc = 0x1A345Cu;
        goto label_1a345c;
    }
    ctx->pc = 0x1A3454u;
    {
        const bool branch_taken_0x1a3454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3454) {
            ctx->pc = 0x1A3464u;
            goto label_1a3464;
        }
    }
    ctx->pc = 0x1A345Cu;
label_1a345c:
    // 0x1a345c: 0x1000024f  b           . + 4 + (0x24F << 2)
label_1a3460:
    if (ctx->pc == 0x1A3460u) {
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3464u;
        goto label_1a3464;
    }
    ctx->pc = 0x1A345Cu;
    {
        const bool branch_taken_0x1a345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a345c) {
            ctx->pc = 0x1A3D9Cu;
            goto label_1a3d9c;
        }
    }
    ctx->pc = 0x1A3464u;
label_1a3464:
    // 0x1a3464: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1a3464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_1a3468:
    // 0x1a3468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a346c:
    // 0x1a346c: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a346cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_1a3470:
    // 0x1a3470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3474:
    // 0x1a3474: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x1a3474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
label_1a3478:
    // 0x1a3478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a347c:
    // 0x1a347c: 0xae20067c  sw          $zero, 0x67C($s1)
    ctx->pc = 0x1a347cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 0));
label_1a3480:
    // 0x1a3480: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x1a3480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
label_1a3484:
    // 0x1a3484: 0xae20068c  sw          $zero, 0x68C($s1)
    ctx->pc = 0x1a3484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 0));
label_1a3488:
    // 0x1a3488: 0x8e230664  lw          $v1, 0x664($s1)
    ctx->pc = 0x1a3488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a348c:
    // 0x1a348c: 0xae200790  sw          $zero, 0x790($s1)
    ctx->pc = 0x1a348cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
label_1a3490:
    // 0x1a3490: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1a3494:
    // 0x1a3494: 0xae220794  sw          $v0, 0x794($s1)
    ctx->pc = 0x1a3494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1940), GPR_U32(ctx, 2));
label_1a3498:
    // 0x1a3498: 0xae2007bc  sw          $zero, 0x7BC($s1)
    ctx->pc = 0x1a3498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1980), GPR_U32(ctx, 0));
label_1a349c:
    // 0x1a349c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1a349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1a34a0:
    // 0x1a34a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1a34a4:
    // 0x1a34a4: 0xac400798  sw          $zero, 0x798($v0)
    ctx->pc = 0x1a34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1944), GPR_U32(ctx, 0));
label_1a34a8:
    // 0x1a34a8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1a34ac:
    // 0x1a34ac: 0xac40079c  sw          $zero, 0x79C($v0)
    ctx->pc = 0x1a34acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1948), GPR_U32(ctx, 0));
label_1a34b0:
    // 0x1a34b0: 0xac4007a0  sw          $zero, 0x7A0($v0)
    ctx->pc = 0x1a34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1952), GPR_U32(ctx, 0));
label_1a34b4:
    // 0x1a34b4: 0xac4007a4  sw          $zero, 0x7A4($v0)
    ctx->pc = 0x1a34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1956), GPR_U32(ctx, 0));
label_1a34b8:
    // 0x1a34b8: 0xac4007a8  sw          $zero, 0x7A8($v0)
    ctx->pc = 0x1a34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1960), GPR_U32(ctx, 0));
label_1a34bc:
    // 0x1a34bc: 0xac4007ac  sw          $zero, 0x7AC($v0)
    ctx->pc = 0x1a34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1964), GPR_U32(ctx, 0));
label_1a34c0:
    // 0x1a34c0: 0xac4007b0  sw          $zero, 0x7B0($v0)
    ctx->pc = 0x1a34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1968), GPR_U32(ctx, 0));
label_1a34c4:
    // 0x1a34c4: 0x1880fff5  blez        $a0, . + 4 + (-0xB << 2)
label_1a34c8:
    if (ctx->pc == 0x1A34C8u) {
        ctx->pc = 0x1A34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C4u;
        // 0x1a34c8: 0xac4007b4  sw          $zero, 0x7B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34CCu;
        goto label_1a34cc;
    }
    ctx->pc = 0x1A34C4u;
    {
        const bool branch_taken_0x1a34c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C4u;
        // 0x1a34c8: 0xac4007b4  sw          $zero, 0x7B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34c4) {
            ctx->pc = 0x1A349Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a349c;
        }
    }
    ctx->pc = 0x1A34CCu;
label_1a34cc:
    // 0x1a34cc: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1a34ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a34d0:
    // 0x1a34d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1a34d4:
    if (ctx->pc == 0x1A34D4u) {
        ctx->pc = 0x1A34D8u;
        goto label_1a34d8;
    }
    ctx->pc = 0x1A34D0u;
    {
        const bool branch_taken_0x1a34d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34d0) {
            ctx->pc = 0x1A34F8u;
            goto label_1a34f8;
        }
    }
    ctx->pc = 0x1A34D8u;
label_1a34d8:
    // 0x1a34d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a34dc:
    // 0x1a34dc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1a34e0:
    // 0x1a34e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a34e4:
    // 0x1a34e4: 0xac400798  sw          $zero, 0x798($v0)
    ctx->pc = 0x1a34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1944), GPR_U32(ctx, 0));
label_1a34e8:
    // 0x1a34e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1a34ec:
    // 0x1a34ec: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x1a34ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a34f0:
    // 0x1a34f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a34f4:
    if (ctx->pc == 0x1A34F4u) {
        ctx->pc = 0x1A34F8u;
        goto label_1a34f8;
    }
    ctx->pc = 0x1A34F0u;
    {
        const bool branch_taken_0x1a34f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a34f0) {
            ctx->pc = 0x1A34DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a34dc;
        }
    }
    ctx->pc = 0x1A34F8u;
label_1a34f8:
    // 0x1a34f8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a34fc:
    // 0x1a34fc: 0x244410c8  addiu       $a0, $v0, 0x10C8
    ctx->pc = 0x1a34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
label_1a3500:
    // 0x1a3500: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a3504:
    if (ctx->pc == 0x1A3504u) {
        ctx->pc = 0x1A3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3500u;
        // 0x1a3504: 0xae2007c0  sw          $zero, 0x7C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3508u;
        goto label_1a3508;
    }
    ctx->pc = 0x1A3500u;
    {
        const bool branch_taken_0x1a3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3500u;
        // 0x1a3504: 0xae2007c0  sw          $zero, 0x7C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3500) {
            ctx->pc = 0x1A3530u;
            goto label_1a3530;
        }
    }
    ctx->pc = 0x1A3508u;
label_1a3508:
    // 0x1a3508: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a350c:
    // 0x1a350c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a3510:
    // 0x1a3510: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3514:
    // 0x1a3514: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a3518:
    // 0x1a3518: 0x84632828  lh          $v1, 0x2828($v1)
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10280)));
label_1a351c:
    // 0x1a351c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1a3520:
    if (ctx->pc == 0x1A3520u) {
        ctx->pc = 0x1A3524u;
        goto label_1a3524;
    }
    ctx->pc = 0x1A351Cu;
    {
        const bool branch_taken_0x1a351c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a351c) {
            ctx->pc = 0x1A3544u;
            goto label_1a3544;
        }
    }
    ctx->pc = 0x1A3524u;
label_1a3524:
    // 0x1a3524: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x1a3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_1a3528:
    // 0x1a3528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a352c:
    // 0x1a352c: 0xae2207c0  sw          $v0, 0x7C0($s1)
    ctx->pc = 0x1a352cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
label_1a3530:
    // 0x1a3530: 0x8e2307c0  lw          $v1, 0x7C0($s1)
    ctx->pc = 0x1a3530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_1a3534:
    // 0x1a3534: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3538:
    // 0x1a3538: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a3538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a353c:
    // 0x1a353c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1a3540:
    if (ctx->pc == 0x1A3540u) {
        ctx->pc = 0x1A3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A353Cu;
        // 0x1a3540: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3544u;
        goto label_1a3544;
    }
    ctx->pc = 0x1A353Cu;
    {
        const bool branch_taken_0x1a353c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A353Cu;
        // 0x1a3540: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a353c) {
            ctx->pc = 0x1A350Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a350c;
        }
    }
    ctx->pc = 0x1A3544u;
label_1a3544:
    // 0x1a3544: 0x0  nop
    ctx->pc = 0x1a3544u;
    // NOP
label_1a3548:
    // 0x1a3548: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x1a3548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1a354c:
    // 0x1a354c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x1a354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1a3550:
    // 0x1a3550: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
label_1a3554:
    if (ctx->pc == 0x1A3554u) {
        ctx->pc = 0x1A3558u;
        goto label_1a3558;
    }
    ctx->pc = 0x1A3550u;
    {
        const bool branch_taken_0x1a3550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3550) {
            ctx->pc = 0x1A3668u;
            goto label_1a3668;
        }
    }
    ctx->pc = 0x1A3558u;
label_1a3558:
    // 0x1a3558: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1a355c:
    // 0x1a355c: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_1a3560:
    if (ctx->pc == 0x1A3560u) {
        ctx->pc = 0x1A3564u;
        goto label_1a3564;
    }
    ctx->pc = 0x1A355Cu;
    {
        const bool branch_taken_0x1a355c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a355c) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A3564u;
label_1a3564:
    // 0x1a3564: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a3564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1a3568:
    // 0x1a3568: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_1a356c:
    if (ctx->pc == 0x1A356Cu) {
        ctx->pc = 0x1A3570u;
        goto label_1a3570;
    }
    ctx->pc = 0x1A3568u;
    {
        const bool branch_taken_0x1a3568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3568) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A3570u;
label_1a3570:
    // 0x1a3570: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1a3574:
    // 0x1a3574: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
label_1a3578:
    if (ctx->pc == 0x1A3578u) {
        ctx->pc = 0x1A357Cu;
        goto label_1a357c;
    }
    ctx->pc = 0x1A3574u;
    {
        const bool branch_taken_0x1a3574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3574) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A357Cu;
label_1a357c:
    // 0x1a357c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1a357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1a3580:
    // 0x1a3580: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_1a3584:
    if (ctx->pc == 0x1A3584u) {
        ctx->pc = 0x1A3588u;
        goto label_1a3588;
    }
    ctx->pc = 0x1A3580u;
    {
        const bool branch_taken_0x1a3580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3580) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A3588u;
label_1a3588:
    // 0x1a3588: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1a3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1a358c:
    // 0x1a358c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_1a3590:
    if (ctx->pc == 0x1A3590u) {
        ctx->pc = 0x1A3594u;
        goto label_1a3594;
    }
    ctx->pc = 0x1A358Cu;
    {
        const bool branch_taken_0x1a358c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a358c) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A3594u;
label_1a3594:
    // 0x1a3594: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a3594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1a3598:
    // 0x1a3598: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_1a359c:
    if (ctx->pc == 0x1A359Cu) {
        ctx->pc = 0x1A35A0u;
        goto label_1a35a0;
    }
    ctx->pc = 0x1A3598u;
    {
        const bool branch_taken_0x1a3598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3598) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A35A0u;
label_1a35a0:
    // 0x1a35a0: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1a35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1a35a4:
    // 0x1a35a4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_1a35a8:
    if (ctx->pc == 0x1A35A8u) {
        ctx->pc = 0x1A35ACu;
        goto label_1a35ac;
    }
    ctx->pc = 0x1A35A4u;
    {
        const bool branch_taken_0x1a35a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35a4) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A35ACu;
label_1a35ac:
    // 0x1a35ac: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a35b0:
    // 0x1a35b0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_1a35b4:
    if (ctx->pc == 0x1A35B4u) {
        ctx->pc = 0x1A35B8u;
        goto label_1a35b8;
    }
    ctx->pc = 0x1A35B0u;
    {
        const bool branch_taken_0x1a35b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35b0) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A35B8u;
label_1a35b8:
    // 0x1a35b8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1a35bc:
    // 0x1a35bc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1a35c0:
    if (ctx->pc == 0x1A35C0u) {
        ctx->pc = 0x1A35C4u;
        goto label_1a35c4;
    }
    ctx->pc = 0x1A35BCu;
    {
        const bool branch_taken_0x1a35bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35bc) {
            ctx->pc = 0x1A3640u;
            goto label_1a3640;
        }
    }
    ctx->pc = 0x1A35C4u;
label_1a35c4:
    // 0x1a35c4: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1a35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1a35c8:
    // 0x1a35c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1a35cc:
    if (ctx->pc == 0x1A35CCu) {
        ctx->pc = 0x1A35D0u;
        goto label_1a35d0;
    }
    ctx->pc = 0x1A35C8u;
    {
        const bool branch_taken_0x1a35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35c8) {
            ctx->pc = 0x1A3600u;
            goto label_1a3600;
        }
    }
    ctx->pc = 0x1A35D0u;
label_1a35d0:
    // 0x1a35d0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1a35d4:
    // 0x1a35d4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a35d8:
    if (ctx->pc == 0x1A35D8u) {
        ctx->pc = 0x1A35DCu;
        goto label_1a35dc;
    }
    ctx->pc = 0x1A35D4u;
    {
        const bool branch_taken_0x1a35d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35d4) {
            ctx->pc = 0x1A35F8u;
            goto label_1a35f8;
        }
    }
    ctx->pc = 0x1A35DCu;
label_1a35dc:
    // 0x1a35dc: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1a35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1a35e0:
    // 0x1a35e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a35e4:
    if (ctx->pc == 0x1A35E4u) {
        ctx->pc = 0x1A35E8u;
        goto label_1a35e8;
    }
    ctx->pc = 0x1A35E0u;
    {
        const bool branch_taken_0x1a35e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35e0) {
            ctx->pc = 0x1A35F0u;
            goto label_1a35f0;
        }
    }
    ctx->pc = 0x1A35E8u;
label_1a35e8:
    // 0x1a35e8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1a35ec:
    if (ctx->pc == 0x1A35ECu) {
        ctx->pc = 0x1A35F0u;
        goto label_1a35f0;
    }
    ctx->pc = 0x1A35E8u;
    {
        const bool branch_taken_0x1a35e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a35e8) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A35F0u;
label_1a35f0:
    // 0x1a35f0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a35f4:
    if (ctx->pc == 0x1A35F4u) {
        ctx->pc = 0x1A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F0u;
        // 0x1a35f4: 0xae320684  sw          $s2, 0x684($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35F8u;
        goto label_1a35f8;
    }
    ctx->pc = 0x1A35F0u;
    {
        const bool branch_taken_0x1a35f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F0u;
        // 0x1a35f4: 0xae320684  sw          $s2, 0x684($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35f0) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A35F8u;
label_1a35f8:
    // 0x1a35f8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a35fc:
    if (ctx->pc == 0x1A35FCu) {
        ctx->pc = 0x1A35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F8u;
        // 0x1a35fc: 0xae320688  sw          $s2, 0x688($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3600u;
        goto label_1a3600;
    }
    ctx->pc = 0x1A35F8u;
    {
        const bool branch_taken_0x1a35f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F8u;
        // 0x1a35fc: 0xae320688  sw          $s2, 0x688($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35f8) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A3600u;
label_1a3600:
    // 0x1a3600: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1a3604:
    // 0x1a3604: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1a3604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1a3608:
    // 0x1a3608: 0xc057040  jal         func_15C100
label_1a360c:
    if (ctx->pc == 0x1A360Cu) {
        ctx->pc = 0x1A360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3608u;
        // 0x1a360c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3610u;
        goto label_1a3610;
    }
    ctx->pc = 0x1A3608u;
    SET_GPR_U32(ctx, 31, 0x1A3610u);
    ctx->pc = 0x1A360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3608u;
    // 0x1a360c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A3608u, 0x1A3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3610u;
label_1a3610:
    // 0x1a3610: 0x8e23068c  lw          $v1, 0x68C($s1)
    ctx->pc = 0x1a3610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a3614:
    // 0x1a3614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3618:
    // 0x1a3618: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1a361c:
    // 0x1a361c: 0xac620690  sw          $v0, 0x690($v1)
    ctx->pc = 0x1a361cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 2));
label_1a3620:
    // 0x1a3620: 0x8e22068c  lw          $v0, 0x68C($s1)
    ctx->pc = 0x1a3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a3624:
    // 0x1a3624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a3628:
    // 0x1a3628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a3628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a362c:
    // 0x1a362c: 0xac520710  sw          $s2, 0x710($v0)
    ctx->pc = 0x1a362cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 18));
label_1a3630:
    // 0x1a3630: 0x8e22068c  lw          $v0, 0x68C($s1)
    ctx->pc = 0x1a3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a3634:
    // 0x1a3634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a3638:
    // 0x1a3638: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a363c:
    if (ctx->pc == 0x1A363Cu) {
        ctx->pc = 0x1A363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3638u;
        // 0x1a363c: 0xae22068c  sw          $v0, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3640u;
        goto label_1a3640;
    }
    ctx->pc = 0x1A3638u;
    {
        const bool branch_taken_0x1a3638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3638u;
        // 0x1a363c: 0xae22068c  sw          $v0, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3638) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A3640u;
label_1a3640:
    // 0x1a3640: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1a3640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1a3644:
    // 0x1a3644: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a3644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3648:
    // 0x1a3648: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a364c:
    // 0x1a364c: 0xac520798  sw          $s2, 0x798($v0)
    ctx->pc = 0x1a364cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1944), GPR_U32(ctx, 18));
label_1a3650:
    // 0x1a3650: 0x8e220794  lw          $v0, 0x794($s1)
    ctx->pc = 0x1a3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1940)));
label_1a3654:
    // 0x1a3654: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a3654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3658:
    // 0x1a3658: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1a365c:
    if (ctx->pc == 0x1A365Cu) {
        ctx->pc = 0x1A3660u;
        goto label_1a3660;
    }
    ctx->pc = 0x1A3658u;
    {
        const bool branch_taken_0x1a3658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3658) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A3660u;
label_1a3660:
    // 0x1a3660: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a3664:
    if (ctx->pc == 0x1A3664u) {
        ctx->pc = 0x1A3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3660u;
        // 0x1a3664: 0xae230794  sw          $v1, 0x794($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1940), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3668u;
        goto label_1a3668;
    }
    ctx->pc = 0x1A3660u;
    {
        const bool branch_taken_0x1a3660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3660u;
        // 0x1a3664: 0xae230794  sw          $v1, 0x794($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1940), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3660) {
            ctx->pc = 0x1A366Cu;
            goto label_1a366c;
        }
    }
    ctx->pc = 0x1A3668u;
label_1a3668:
    // 0x1a3668: 0xae3207bc  sw          $s2, 0x7BC($s1)
    ctx->pc = 0x1a3668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1980), GPR_U32(ctx, 18));
label_1a366c:
    // 0x1a366c: 0x0  nop
    ctx->pc = 0x1a366cu;
    // NOP
label_1a3670:
    // 0x1a3670: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1a3674:
    // 0x1a3674: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a3678:
    // 0x1a3678: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a367c:
    // 0x1a367c: 0x1062ffb1  beq         $v1, $v0, . + 4 + (-0x4F << 2)
label_1a3680:
    if (ctx->pc == 0x1A3680u) {
        ctx->pc = 0x1A3684u;
        goto label_1a3684;
    }
    ctx->pc = 0x1A367Cu;
    {
        const bool branch_taken_0x1a367c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a367c) {
            ctx->pc = 0x1A3544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3544;
        }
    }
    ctx->pc = 0x1A3684u;
label_1a3684:
    // 0x1a3684: 0xc063e14  jal         func_18F850
label_1a3688:
    if (ctx->pc == 0x1A3688u) {
        ctx->pc = 0x1A3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3684u;
        // 0x1a3688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A368Cu;
        goto label_1a368c;
    }
    ctx->pc = 0x1A3684u;
    SET_GPR_U32(ctx, 31, 0x1A368Cu);
    ctx->pc = 0x1A3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3684u;
    // 0x1a3688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A3684u, 0x1A368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A368Cu;
label_1a368c:
    // 0x1a368c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_1a3690:
    if (ctx->pc == 0x1A3690u) {
        ctx->pc = 0x1A3694u;
        goto label_1a3694;
    }
    ctx->pc = 0x1A368Cu;
    {
        const bool branch_taken_0x1a368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a368c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3694u;
label_1a3694:
    // 0x1a3694: 0x8e2a068c  lw          $t2, 0x68C($s1)
    ctx->pc = 0x1a3694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a3698:
    // 0x1a3698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a3698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a369c:
    // 0x1a369c: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x1a369cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1a36a0:
    // 0x1a36a0: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_1a36a4:
    if (ctx->pc == 0x1A36A4u) {
        ctx->pc = 0x1A36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A0u;
        // 0x1a36a4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36A8u;
        goto label_1a36a8;
    }
    ctx->pc = 0x1A36A0u;
    {
        const bool branch_taken_0x1a36a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A0u;
        // 0x1a36a4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36a0) {
            ctx->pc = 0x1A37D4u;
            goto label_1a37d4;
        }
    }
    ctx->pc = 0x1A36A8u;
label_1a36a8:
    // 0x1a36a8: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x1a36a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a36ac:
    // 0x1a36ac: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
label_1a36b0:
    if (ctx->pc == 0x1A36B0u) {
        ctx->pc = 0x1A36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36ACu;
        // 0x1a36b0: 0x2548fff8  addiu       $t0, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36B4u;
        goto label_1a36b4;
    }
    ctx->pc = 0x1A36ACu;
    {
        const bool branch_taken_0x1a36ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36ACu;
        // 0x1a36b0: 0x2548fff8  addiu       $t0, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36ac) {
            ctx->pc = 0x1A3794u;
            goto label_1a3794;
        }
    }
    ctx->pc = 0x1A36B4u;
label_1a36b4:
    // 0x1a36b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a36b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a36b8:
    // 0x1a36b8: 0x8f8b85f4  lw          $t3, -0x7A0C($gp)
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a36bc:
    // 0x1a36bc: 0x0  nop
    ctx->pc = 0x1a36bcu;
    // NOP
label_1a36c0:
    // 0x1a36c0: 0x2296021  addu        $t4, $s1, $t1
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_1a36c4:
    // 0x1a36c4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1a36c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1a36c8:
    // 0x1a36c8: 0x8d83069c  lw          $v1, 0x69C($t4)
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1692)));
label_1a36cc:
    // 0x1a36cc: 0x1a8702a  slt         $t6, $t5, $t0
    ctx->pc = 0x1a36ccu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1a36d0:
    // 0x1a36d0: 0x8d840698  lw          $a0, 0x698($t4)
    ctx->pc = 0x1a36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1688)));
label_1a36d4:
    // 0x1a36d4: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1a36d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_1a36d8:
    // 0x1a36d8: 0x8d860690  lw          $a2, 0x690($t4)
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1680)));
label_1a36dc:
    // 0x1a36dc: 0x8d850694  lw          $a1, 0x694($t4)
    ctx->pc = 0x1a36dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1684)));
label_1a36e0:
    // 0x1a36e0: 0x8d9806a0  lw          $t8, 0x6A0($t4)
    ctx->pc = 0x1a36e0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1696)));
label_1a36e4:
    // 0x1a36e4: 0x8d9206a4  lw          $s2, 0x6A4($t4)
    ctx->pc = 0x1a36e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1700)));
label_1a36e8:
    // 0x1a36e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a36ec:
    // 0x1a36ec: 0x8d8f06a8  lw          $t7, 0x6A8($t4)
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1704)));
label_1a36f0:
    // 0x1a36f0: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1a36f4:
    // 0x1a36f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a36f8:
    // 0x1a36f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a36fc:
    // 0x1a36fc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1a36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1a3700:
    // 0x1a3700: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1a3704:
    // 0x1a3704: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a3704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1a3708:
    // 0x1a3708: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1a3708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_1a370c:
    // 0x1a370c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a3710:
    // 0x1a3710: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x1a3710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_1a3714:
    // 0x1a3714: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_1a3718:
    // 0x1a3718: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a3718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_1a371c:
    // 0x1a371c: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x1a371cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_1a3720:
    // 0x1a3720: 0x178c021  addu        $t8, $t3, $t8
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
label_1a3724:
    // 0x1a3724: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1a3724u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a3728:
    // 0x1a3728: 0x8c7301fc  lw          $s3, 0x1FC($v1)
    ctx->pc = 0x1a3728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a372c:
    // 0x1a372c: 0x1729021  addu        $s2, $t3, $s2
    ctx->pc = 0x1a372cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
label_1a3730:
    // 0x1a3730: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1a3730u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_1a3734:
    // 0x1a3734: 0x8c9901fc  lw          $t9, 0x1FC($a0)
    ctx->pc = 0x1a3734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_1a3738:
    // 0x1a3738: 0x16f7821  addu        $t7, $t3, $t7
    ctx->pc = 0x1a3738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
label_1a373c:
    // 0x1a373c: 0x8f182cd8  lw          $t8, 0x2CD8($t8)
    ctx->pc = 0x1a373cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
label_1a3740:
    // 0x1a3740: 0x8cc601fc  lw          $a2, 0x1FC($a2)
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
label_1a3744:
    // 0x1a3744: 0x8ca501fc  lw          $a1, 0x1FC($a1)
    ctx->pc = 0x1a3744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
label_1a3748:
    // 0x1a3748: 0x8e522cd8  lw          $s2, 0x2CD8($s2)
    ctx->pc = 0x1a3748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11480)));
label_1a374c:
    // 0x1a374c: 0x8d8306ac  lw          $v1, 0x6AC($t4)
    ctx->pc = 0x1a374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1708)));
label_1a3750:
    // 0x1a3750: 0x8de42cd8  lw          $a0, 0x2CD8($t7)
    ctx->pc = 0x1a3750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 11480)));
label_1a3754:
    // 0x1a3754: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1a3754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1a3758:
    // 0x1a3758: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1a3758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1a375c:
    // 0x1a375c: 0x8f0601fc  lw          $a2, 0x1FC($t8)
    ctx->pc = 0x1a375cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 508)));
label_1a3760:
    // 0x1a3760: 0xf93821  addu        $a3, $a3, $t9
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
label_1a3764:
    // 0x1a3764: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x1a3764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_1a3768:
    // 0x1a3768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a376c:
    // 0x1a376c: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x1a376cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1a3770:
    // 0x1a3770: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1a3774:
    // 0x1a3774: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x1a3774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_1a3778:
    // 0x1a3778: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a377c:
    // 0x1a377c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1a377cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1a3780:
    // 0x1a3780: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1a3780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1a3784:
    // 0x1a3784: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1a3784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1a3788:
    // 0x1a3788: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a378c:
    // 0x1a378c: 0x15c0ffcc  bnez        $t6, . + 4 + (-0x34 << 2)
label_1a3790:
    if (ctx->pc == 0x1A3790u) {
        ctx->pc = 0x1A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A378Cu;
        // 0x1a3790: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3794u;
        goto label_1a3794;
    }
    ctx->pc = 0x1A378Cu;
    {
        const bool branch_taken_0x1a378c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A378Cu;
        // 0x1a3790: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a378c) {
            ctx->pc = 0x1A36C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a36c0;
        }
    }
    ctx->pc = 0x1A3794u;
label_1a3794:
    // 0x1a3794: 0x0  nop
    ctx->pc = 0x1a3794u;
    // NOP
label_1a3798:
    // 0x1a3798: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a3798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a379c:
    // 0x1a379c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a37a0:
    if (ctx->pc == 0x1A37A0u) {
        ctx->pc = 0x1A37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A379Cu;
        // 0x1a37a0: 0xd2880  sll         $a1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37A4u;
        goto label_1a37a4;
    }
    ctx->pc = 0x1A379Cu;
    {
        const bool branch_taken_0x1a379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A379Cu;
        // 0x1a37a0: 0xd2880  sll         $a1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a379c) {
            ctx->pc = 0x1A37C8u;
            goto label_1a37c8;
        }
    }
    ctx->pc = 0x1A37A4u;
label_1a37a4:
    // 0x1a37a4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1a37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1a37a8:
    // 0x1a37a8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1a37ac:
    // 0x1a37ac: 0x8c630690  lw          $v1, 0x690($v1)
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
label_1a37b0:
    // 0x1a37b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1a37b4:
    // 0x1a37b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a37b8:
    // 0x1a37b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a37bc:
    // 0x1a37bc: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a37c0:
    // 0x1a37c0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a37c4:
    // 0x1a37c4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1a37c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1a37c8:
    // 0x1a37c8: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x1a37c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1a37cc:
    // 0x1a37cc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1a37d0:
    if (ctx->pc == 0x1A37D0u) {
        ctx->pc = 0x1A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37CCu;
        // 0x1a37d0: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37D4u;
        goto label_1a37d4;
    }
    ctx->pc = 0x1A37CCu;
    {
        const bool branch_taken_0x1a37cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37CCu;
        // 0x1a37d0: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37cc) {
            ctx->pc = 0x1A37A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a37a8;
        }
    }
    ctx->pc = 0x1A37D4u;
label_1a37d4:
    // 0x1a37d4: 0x0  nop
    ctx->pc = 0x1a37d4u;
    // NOP
label_1a37d8:
    // 0x1a37d8: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1a37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a37dc:
    // 0x1a37dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1a37e0:
    // 0x1a37e0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1a37e4:
    if (ctx->pc == 0x1A37E4u) {
        ctx->pc = 0x1A37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E0u;
        // 0x1a37e4: 0xae230670  sw          $v1, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37E8u;
        goto label_1a37e8;
    }
    ctx->pc = 0x1A37E0u;
    {
        const bool branch_taken_0x1a37e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E0u;
        // 0x1a37e4: 0xae230670  sw          $v1, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37e0) {
            ctx->pc = 0x1A37F0u;
            goto label_1a37f0;
        }
    }
    ctx->pc = 0x1A37E8u;
label_1a37e8:
    // 0x1a37e8: 0x10000059  b           . + 4 + (0x59 << 2)
label_1a37ec:
    if (ctx->pc == 0x1A37ECu) {
        ctx->pc = 0x1A37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E8u;
        // 0x1a37ec: 0xae200674  sw          $zero, 0x674($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37F0u;
        goto label_1a37f0;
    }
    ctx->pc = 0x1A37E8u;
    {
        const bool branch_taken_0x1a37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E8u;
        // 0x1a37ec: 0xae200674  sw          $zero, 0x674($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37e8) {
            ctx->pc = 0x1A3950u;
            goto label_1a3950;
        }
    }
    ctx->pc = 0x1A37F0u;
label_1a37f0:
    // 0x1a37f0: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_1a37f4:
    // 0x1a37f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a37f8:
    // 0x1a37f8: 0xae230674  sw          $v1, 0x674($s1)
    ctx->pc = 0x1a37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 3));
label_1a37fc:
    // 0x1a37fc: 0x8e230684  lw          $v1, 0x684($s1)
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a3800:
    // 0x1a3800: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3804:
    // 0x1a3804: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1a3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3808:
    // 0x1a3808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a380c:
    // 0x1a380c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a380cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a3810:
    // 0x1a3810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a3814:
    // 0x1a3814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a3814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a3818:
    // 0x1a3818: 0x0  nop
    ctx->pc = 0x1a3818u;
    // NOP
label_1a381c:
    // 0x1a381c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_1a3820:
    if (ctx->pc == 0x1A3820u) {
        ctx->pc = 0x1A3824u;
        goto label_1a3824;
    }
    ctx->pc = 0x1A381Cu;
    {
        const bool branch_taken_0x1a381c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a381c) {
            ctx->pc = 0x1A3828u;
            goto label_1a3828;
        }
    }
    ctx->pc = 0x1A3824u;
label_1a3824:
    // 0x1a3824: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a3828:
    // 0x1a3828: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x1a3828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_1a382c:
    // 0x1a382c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a382cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3830:
    // 0x1a3830: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
label_1a3834:
    if (ctx->pc == 0x1A3834u) {
        ctx->pc = 0x1A3838u;
        goto label_1a3838;
    }
    ctx->pc = 0x1A3830u;
    {
        const bool branch_taken_0x1a3830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3830) {
            ctx->pc = 0x1A3950u;
            goto label_1a3950;
        }
    }
    ctx->pc = 0x1A3838u;
label_1a3838:
    // 0x1a3838: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1a3838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a383c:
    // 0x1a383c: 0x8e230794  lw          $v1, 0x794($s1)
    ctx->pc = 0x1a383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1940)));
label_1a3840:
    // 0x1a3840: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a3840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a3844:
    // 0x1a3844: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_1a3848:
    if (ctx->pc == 0x1A3848u) {
        ctx->pc = 0x1A384Cu;
        goto label_1a384c;
    }
    ctx->pc = 0x1A3844u;
    {
        const bool branch_taken_0x1a3844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3844) {
            ctx->pc = 0x1A38B0u;
            goto label_1a38b0;
        }
    }
    ctx->pc = 0x1A384Cu;
label_1a384c:
    // 0x1a384c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a384cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a3850:
    // 0x1a3850: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a3854:
    // 0x1a3854: 0x8c650798  lw          $a1, 0x798($v1)
    ctx->pc = 0x1a3854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1944)));
label_1a3858:
    // 0x1a3858: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_1a385c:
    if (ctx->pc == 0x1A385Cu) {
        ctx->pc = 0x1A3860u;
        goto label_1a3860;
    }
    ctx->pc = 0x1A3858u;
    {
        const bool branch_taken_0x1a3858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3858) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A3860u;
label_1a3860:
    // 0x1a3860: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_1a3864:
    // 0x1a3864: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_1a3868:
    if (ctx->pc == 0x1A3868u) {
        ctx->pc = 0x1A386Cu;
        goto label_1a386c;
    }
    ctx->pc = 0x1A3864u;
    {
        const bool branch_taken_0x1a3864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3864) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A386Cu;
label_1a386c:
    // 0x1a386c: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_1a3870:
    // 0x1a3870: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1a3874:
    if (ctx->pc == 0x1A3874u) {
        ctx->pc = 0x1A3878u;
        goto label_1a3878;
    }
    ctx->pc = 0x1A3870u;
    {
        const bool branch_taken_0x1a3870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3870) {
            ctx->pc = 0x1A389Cu;
            goto label_1a389c;
        }
    }
    ctx->pc = 0x1A3878u;
label_1a3878:
    // 0x1a3878: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1a387c:
    // 0x1a387c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a3880:
    // 0x1a3880: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_1a3884:
    if (ctx->pc == 0x1A3884u) {
        ctx->pc = 0x1A3888u;
        goto label_1a3888;
    }
    ctx->pc = 0x1A3880u;
    {
        const bool branch_taken_0x1a3880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3880) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A3888u;
label_1a3888:
    // 0x1a3888: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a388c:
    // 0x1a388c: 0xc064fb8  jal         func_193EE0
label_1a3890:
    if (ctx->pc == 0x1A3890u) {
        ctx->pc = 0x1A3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A388Cu;
        // 0x1a3890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3894u;
        goto label_1a3894;
    }
    ctx->pc = 0x1A388Cu;
    SET_GPR_U32(ctx, 31, 0x1A3894u);
    ctx->pc = 0x1A3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A388Cu;
    // 0x1a3890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A388Cu, 0x1A3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3894u;
label_1a3894:
    // 0x1a3894: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a3898:
    if (ctx->pc == 0x1A3898u) {
        ctx->pc = 0x1A3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3894u;
        // 0x1a3898: 0x8e230678  lw          $v1, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A389Cu;
        goto label_1a389c;
    }
    ctx->pc = 0x1A3894u;
    {
        const bool branch_taken_0x1a3894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3894u;
        // 0x1a3898: 0x8e230678  lw          $v1, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3894) {
            ctx->pc = 0x1A3908u;
            goto label_1a3908;
        }
    }
    ctx->pc = 0x1A389Cu;
label_1a389c:
    // 0x1a389c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a38a0:
    // 0x1a38a0: 0xc064fb8  jal         func_193EE0
label_1a38a4:
    if (ctx->pc == 0x1A38A4u) {
        ctx->pc = 0x1A38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38A0u;
        // 0x1a38a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38A8u;
        goto label_1a38a8;
    }
    ctx->pc = 0x1A38A0u;
    SET_GPR_U32(ctx, 31, 0x1A38A8u);
    ctx->pc = 0x1A38A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38A0u;
    // 0x1a38a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A38A0u, 0x1A38A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38A8u;
label_1a38a8:
    // 0x1a38a8: 0x10000016  b           . + 4 + (0x16 << 2)
label_1a38ac:
    if (ctx->pc == 0x1A38ACu) {
        ctx->pc = 0x1A38B0u;
        goto label_1a38b0;
    }
    ctx->pc = 0x1A38A8u;
    {
        const bool branch_taken_0x1a38a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38a8) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A38B0u;
label_1a38b0:
    // 0x1a38b0: 0x8e2507bc  lw          $a1, 0x7BC($s1)
    ctx->pc = 0x1a38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1980)));
label_1a38b4:
    // 0x1a38b4: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_1a38b8:
    if (ctx->pc == 0x1A38B8u) {
        ctx->pc = 0x1A38BCu;
        goto label_1a38bc;
    }
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A38BCu;
label_1a38bc:
    // 0x1a38bc: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_1a38c0:
    // 0x1a38c0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1a38c4:
    if (ctx->pc == 0x1A38C4u) {
        ctx->pc = 0x1A38C8u;
        goto label_1a38c8;
    }
    ctx->pc = 0x1A38C0u;
    {
        const bool branch_taken_0x1a38c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a38c0) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A38C8u;
label_1a38c8:
    // 0x1a38c8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_1a38cc:
    // 0x1a38cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1a38d0:
    if (ctx->pc == 0x1A38D0u) {
        ctx->pc = 0x1A38D4u;
        goto label_1a38d4;
    }
    ctx->pc = 0x1A38CCu;
    {
        const bool branch_taken_0x1a38cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38cc) {
            ctx->pc = 0x1A38F8u;
            goto label_1a38f8;
        }
    }
    ctx->pc = 0x1A38D4u;
label_1a38d4:
    // 0x1a38d4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1a38d8:
    // 0x1a38d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a38dc:
    // 0x1a38dc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1a38e0:
    if (ctx->pc == 0x1A38E0u) {
        ctx->pc = 0x1A38E4u;
        goto label_1a38e4;
    }
    ctx->pc = 0x1A38DCu;
    {
        const bool branch_taken_0x1a38dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a38dc) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A38E4u;
label_1a38e4:
    // 0x1a38e4: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a38e8:
    // 0x1a38e8: 0xc064fb8  jal         func_193EE0
label_1a38ec:
    if (ctx->pc == 0x1A38ECu) {
        ctx->pc = 0x1A38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38E8u;
        // 0x1a38ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38F0u;
        goto label_1a38f0;
    }
    ctx->pc = 0x1A38E8u;
    SET_GPR_U32(ctx, 31, 0x1A38F0u);
    ctx->pc = 0x1A38ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38E8u;
    // 0x1a38ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A38E8u, 0x1A38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38F0u;
label_1a38f0:
    // 0x1a38f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a38f4:
    if (ctx->pc == 0x1A38F4u) {
        ctx->pc = 0x1A38F8u;
        goto label_1a38f8;
    }
    ctx->pc = 0x1A38F0u;
    {
        const bool branch_taken_0x1a38f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38f0) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A38F8u;
label_1a38f8:
    // 0x1a38f8: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a38fc:
    // 0x1a38fc: 0xc064fb8  jal         func_193EE0
label_1a3900:
    if (ctx->pc == 0x1A3900u) {
        ctx->pc = 0x1A3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38FCu;
        // 0x1a3900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3904u;
        goto label_1a3904;
    }
    ctx->pc = 0x1A38FCu;
    SET_GPR_U32(ctx, 31, 0x1A3904u);
    ctx->pc = 0x1A3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38FCu;
    // 0x1a3900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A38FCu, 0x1A3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3904u;
label_1a3904:
    // 0x1a3904: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x1a3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a3908:
    // 0x1a3908: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1a3908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a390c:
    // 0x1a390c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1a3910:
    if (ctx->pc == 0x1A3910u) {
        ctx->pc = 0x1A3914u;
        goto label_1a3914;
    }
    ctx->pc = 0x1A390Cu;
    {
        const bool branch_taken_0x1a390c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a390c) {
            ctx->pc = 0x1A3930u;
            goto label_1a3930;
        }
    }
    ctx->pc = 0x1A3914u;
label_1a3914:
    // 0x1a3914: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a3918:
    // 0x1a3918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a391c:
    // 0x1a391c: 0x8e270680  lw          $a3, 0x680($s1)
    ctx->pc = 0x1a391cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
label_1a3920:
    // 0x1a3920: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a3920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a3924:
    // 0x1a3924: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a3924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a3928:
    // 0x1a3928: 0xc064f7c  jal         func_193DF0
label_1a392c:
    if (ctx->pc == 0x1A392Cu) {
        ctx->pc = 0x1A392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3928u;
        // 0x1a392c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3930u;
        goto label_1a3930;
    }
    ctx->pc = 0x1A3928u;
    SET_GPR_U32(ctx, 31, 0x1A3930u);
    ctx->pc = 0x1A392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3928u;
    // 0x1a392c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A3928u, 0x1A3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3930u;
label_1a3930:
    // 0x1a3930: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a3934:
    // 0x1a3934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a3934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3938:
    // 0x1a3938: 0xac6428e0  sw          $a0, 0x28E0($v1)
    ctx->pc = 0x1a3938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10464), GPR_U32(ctx, 4));
label_1a393c:
    // 0x1a393c: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1a393cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_1a3940:
    // 0x1a3940: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_1a3944:
    // 0x1a3944: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x1a3944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
label_1a3948:
    // 0x1a3948: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x1a3948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
label_1a394c:
    // 0x1a394c: 0xae200790  sw          $zero, 0x790($s1)
    ctx->pc = 0x1a394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
label_1a3950:
    // 0x1a3950: 0x8e320684  lw          $s2, 0x684($s1)
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a3954:
    // 0x1a3954: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x1a3954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a3958:
    // 0x1a3958: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1a3958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1a395c:
    // 0x1a395c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1a395cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3960:
    // 0x1a3960: 0x1460010d  bnez        $v1, . + 4 + (0x10D << 2)
label_1a3964:
    if (ctx->pc == 0x1A3964u) {
        ctx->pc = 0x1A3968u;
        goto label_1a3968;
    }
    ctx->pc = 0x1A3960u;
    {
        const bool branch_taken_0x1a3960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3960) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3968u;
label_1a3968:
    // 0x1a3968: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a396c:
    // 0x1a396c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a3970:
    if (ctx->pc == 0x1A3970u) {
        ctx->pc = 0x1A3974u;
        goto label_1a3974;
    }
    ctx->pc = 0x1A396Cu;
    {
        const bool branch_taken_0x1a396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a396c) {
            ctx->pc = 0x1A397Cu;
            goto label_1a397c;
        }
    }
    ctx->pc = 0x1A3974u;
label_1a3974:
    // 0x1a3974: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a3978:
    if (ctx->pc == 0x1A3978u) {
        ctx->pc = 0x1A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3974u;
        // 0x1a3978: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A397Cu;
        goto label_1a397c;
    }
    ctx->pc = 0x1A3974u;
    {
        const bool branch_taken_0x1a3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3974u;
        // 0x1a3978: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3974) {
            ctx->pc = 0x1A3988u;
            goto label_1a3988;
        }
    }
    ctx->pc = 0x1A397Cu;
label_1a397c:
    // 0x1a397c: 0x8e320688  lw          $s2, 0x688($s1)
    ctx->pc = 0x1a397cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
label_1a3980:
    // 0x1a3980: 0x0  nop
    ctx->pc = 0x1a3980u;
    // NOP
label_1a3984:
    // 0x1a3984: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a3988:
    // 0x1a3988: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a398c:
    // 0x1a398c: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x1a398cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
label_1a3990:
    // 0x1a3990: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a3994:
    // 0x1a3994: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x1a3994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_1a3998:
    // 0x1a3998: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1a399c:
    if (ctx->pc == 0x1A399Cu) {
        ctx->pc = 0x1A39A0u;
        goto label_1a39a0;
    }
    ctx->pc = 0x1A3998u;
    {
        const bool branch_taken_0x1a3998 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3998) {
            ctx->pc = 0x1A39A8u;
            goto label_1a39a8;
        }
    }
    ctx->pc = 0x1A39A0u;
label_1a39a0:
    // 0x1a39a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a39a4:
    // 0x1a39a4: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x1a39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
label_1a39a8:
    // 0x1a39a8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a39ac:
    // 0x1a39ac: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x1a39acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a39b0:
    // 0x1a39b0: 0x24442834  addiu       $a0, $v0, 0x2834
    ctx->pc = 0x1a39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10292));
label_1a39b4:
    // 0x1a39b4: 0x8c422834  lw          $v0, 0x2834($v0)
    ctx->pc = 0x1a39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10292)));
label_1a39b8:
    // 0x1a39b8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a39b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a39bc:
    // 0x1a39bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1a39c0:
    if (ctx->pc == 0x1A39C0u) {
        ctx->pc = 0x1A39C4u;
        goto label_1a39c4;
    }
    ctx->pc = 0x1A39BCu;
    {
        const bool branch_taken_0x1a39bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a39bc) {
            ctx->pc = 0x1A39C8u;
            goto label_1a39c8;
        }
    }
    ctx->pc = 0x1A39C4u;
label_1a39c4:
    // 0x1a39c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a39c8:
    // 0x1a39c8: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x1a39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a39cc:
    // 0x1a39cc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1a39ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_1a39d0:
    // 0x1a39d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1a39d4:
    if (ctx->pc == 0x1A39D4u) {
        ctx->pc = 0x1A39D8u;
        goto label_1a39d8;
    }
    ctx->pc = 0x1A39D0u;
    {
        const bool branch_taken_0x1a39d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a39d0) {
            ctx->pc = 0x1A39E4u;
            goto label_1a39e4;
        }
    }
    ctx->pc = 0x1A39D8u;
label_1a39d8:
    // 0x1a39d8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1a39dc:
    // 0x1a39dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a39e0:
    if (ctx->pc == 0x1A39E0u) {
        ctx->pc = 0x1A39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39DCu;
        // 0x1a39e0: 0x439818  mult        $s3, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39E4u;
        goto label_1a39e4;
    }
    ctx->pc = 0x1A39DCu;
    {
        const bool branch_taken_0x1a39dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39DCu;
        // 0x1a39e0: 0x439818  mult        $s3, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39dc) {
            ctx->pc = 0x1A39F0u;
            goto label_1a39f0;
        }
    }
    ctx->pc = 0x1A39E4u;
label_1a39e4:
    // 0x1a39e4: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1a39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1a39e8:
    // 0x1a39e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a39ec:
    // 0x1a39ec: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1a39ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a39f0:
    // 0x1a39f0: 0x8e220680  lw          $v0, 0x680($s1)
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
label_1a39f4:
    // 0x1a39f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1a39f8:
    // 0x1a39f8: 0xae220680  sw          $v0, 0x680($s1)
    ctx->pc = 0x1a39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
label_1a39fc:
    // 0x1a39fc: 0xc04bde8  jal         func_12F7A0
label_1a3a00:
    if (ctx->pc == 0x1A3A00u) {
        ctx->pc = 0x1A3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39FCu;
        // 0x1a3a00: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A04u;
        goto label_1a3a04;
    }
    ctx->pc = 0x1A39FCu;
    SET_GPR_U32(ctx, 31, 0x1A3A04u);
    ctx->pc = 0x1A3A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39FCu;
    // 0x1a3a00: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F7A0u, 0x1A39FCu, 0x1A3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A04u;
label_1a3a04:
    // 0x1a3a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a3a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a08:
    // 0x1a3a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a0c:
    // 0x1a3a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a10:
    // 0x1a3a10: 0xc064b08  jal         func_192C20
label_1a3a14:
    if (ctx->pc == 0x1A3A14u) {
        ctx->pc = 0x1A3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A10u;
        // 0x1a3a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A18u;
        goto label_1a3a18;
    }
    ctx->pc = 0x1A3A10u;
    SET_GPR_U32(ctx, 31, 0x1A3A18u);
    ctx->pc = 0x1A3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A10u;
    // 0x1a3a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1A3A10u, 0x1A3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A18u;
label_1a3a18:
    // 0x1a3a18: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1a3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1a3a1c:
    // 0x1a3a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a20:
    // 0x1a3a20: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1a3a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1a3a24:
    // 0x1a3a24: 0x8e270678  lw          $a3, 0x678($s1)
    ctx->pc = 0x1a3a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a3a28:
    // 0x1a3a28: 0xc064f7c  jal         func_193DF0
label_1a3a2c:
    if (ctx->pc == 0x1A3A2Cu) {
        ctx->pc = 0x1A3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A28u;
        // 0x1a3a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A30u;
        goto label_1a3a30;
    }
    ctx->pc = 0x1A3A28u;
    SET_GPR_U32(ctx, 31, 0x1A3A30u);
    ctx->pc = 0x1A3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A28u;
    // 0x1a3a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A3A28u, 0x1A3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A30u;
label_1a3a30:
    // 0x1a3a30: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a3a34:
    // 0x1a3a34: 0xc064ee0  jal         func_193B80
label_1a3a38:
    if (ctx->pc == 0x1A3A38u) {
        ctx->pc = 0x1A3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A34u;
        // 0x1a3a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A3Cu;
        goto label_1a3a3c;
    }
    ctx->pc = 0x1A3A34u;
    SET_GPR_U32(ctx, 31, 0x1A3A3Cu);
    ctx->pc = 0x1A3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A34u;
    // 0x1a3a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A3A34u, 0x1A3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A3Cu;
label_1a3a3c:
    // 0x1a3a3c: 0x8e240684  lw          $a0, 0x684($s1)
    ctx->pc = 0x1a3a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a3a40:
    // 0x1a3a40: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1a3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a3a44:
    // 0x1a3a44: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x1a3a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1a3a48:
    // 0x1a3a48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a3a4c:
    // 0x1a3a4c: 0xae230670  sw          $v1, 0x670($s1)
    ctx->pc = 0x1a3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
label_1a3a50:
    // 0x1a3a50: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1a3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a3a54:
    // 0x1a3a54: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
label_1a3a58:
    if (ctx->pc == 0x1A3A58u) {
        ctx->pc = 0x1A3A5Cu;
        goto label_1a3a5c;
    }
    ctx->pc = 0x1A3A54u;
    {
        const bool branch_taken_0x1a3a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a54) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3A5Cu;
label_1a3a5c:
    // 0x1a3a5c: 0xae20067c  sw          $zero, 0x67C($s1)
    ctx->pc = 0x1a3a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 0));
label_1a3a60:
    // 0x1a3a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a64:
    // 0x1a3a64: 0xc063e14  jal         func_18F850
label_1a3a68:
    if (ctx->pc == 0x1A3A68u) {
        ctx->pc = 0x1A3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A64u;
        // 0x1a3a68: 0xae200790  sw          $zero, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A6Cu;
        goto label_1a3a6c;
    }
    ctx->pc = 0x1A3A64u;
    SET_GPR_U32(ctx, 31, 0x1A3A6Cu);
    ctx->pc = 0x1A3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A64u;
    // 0x1a3a68: 0xae200790  sw          $zero, 0x790($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A3A64u, 0x1A3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A6Cu;
label_1a3a6c:
    // 0x1a3a6c: 0x100000ca  b           . + 4 + (0xCA << 2)
label_1a3a70:
    if (ctx->pc == 0x1A3A70u) {
        ctx->pc = 0x1A3A74u;
        goto label_1a3a74;
    }
    ctx->pc = 0x1A3A6Cu;
    {
        const bool branch_taken_0x1a3a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a6c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3A74u;
label_1a3a74:
    // 0x1a3a74: 0x8e29068c  lw          $t1, 0x68C($s1)
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a3a78:
    // 0x1a3a78: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a3a78u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a7c:
    // 0x1a3a7c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1a3a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1a3a80:
    // 0x1a3a80: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_1a3a84:
    if (ctx->pc == 0x1A3A84u) {
        ctx->pc = 0x1A3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A80u;
        // 0x1a3a84: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A88u;
        goto label_1a3a88;
    }
    ctx->pc = 0x1A3A80u;
    {
        const bool branch_taken_0x1a3a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A80u;
        // 0x1a3a84: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a80) {
            ctx->pc = 0x1A3BB4u;
            goto label_1a3bb4;
        }
    }
    ctx->pc = 0x1A3A88u;
label_1a3a88:
    // 0x1a3a88: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x1a3a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a3a8c:
    // 0x1a3a8c: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
label_1a3a90:
    if (ctx->pc == 0x1A3A90u) {
        ctx->pc = 0x1A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A8Cu;
        // 0x1a3a90: 0x2527fff8  addiu       $a3, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A94u;
        goto label_1a3a94;
    }
    ctx->pc = 0x1A3A8Cu;
    {
        const bool branch_taken_0x1a3a8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A8Cu;
        // 0x1a3a90: 0x2527fff8  addiu       $a3, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a8c) {
            ctx->pc = 0x1A3B74u;
            goto label_1a3b74;
        }
    }
    ctx->pc = 0x1A3A94u;
label_1a3a94:
    // 0x1a3a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a3a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a98:
    // 0x1a3a98: 0x8f8a85f4  lw          $t2, -0x7A0C($gp)
    ctx->pc = 0x1a3a98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a3a9c:
    // 0x1a3a9c: 0x0  nop
    ctx->pc = 0x1a3a9cu;
    // NOP
label_1a3aa0:
    // 0x1a3aa0: 0x2285821  addu        $t3, $s1, $t0
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_1a3aa4:
    // 0x1a3aa4: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x1a3aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_1a3aa8:
    // 0x1a3aa8: 0x8d63069c  lw          $v1, 0x69C($t3)
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1692)));
label_1a3aac:
    // 0x1a3aac: 0x187702a  slt         $t6, $t4, $a3
    ctx->pc = 0x1a3aacu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1a3ab0:
    // 0x1a3ab0: 0x8d640698  lw          $a0, 0x698($t3)
    ctx->pc = 0x1a3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1688)));
label_1a3ab4:
    // 0x1a3ab4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1a3ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1a3ab8:
    // 0x1a3ab8: 0x8d660690  lw          $a2, 0x690($t3)
    ctx->pc = 0x1a3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1680)));
label_1a3abc:
    // 0x1a3abc: 0x8d650694  lw          $a1, 0x694($t3)
    ctx->pc = 0x1a3abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1684)));
label_1a3ac0:
    // 0x1a3ac0: 0x8d7806a0  lw          $t8, 0x6A0($t3)
    ctx->pc = 0x1a3ac0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1696)));
label_1a3ac4:
    // 0x1a3ac4: 0x8d7206a4  lw          $s2, 0x6A4($t3)
    ctx->pc = 0x1a3ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1700)));
label_1a3ac8:
    // 0x1a3ac8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3acc:
    // 0x1a3acc: 0x8d6f06a8  lw          $t7, 0x6A8($t3)
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1704)));
label_1a3ad0:
    // 0x1a3ad0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1a3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_1a3ad4:
    // 0x1a3ad4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a3ad8:
    // 0x1a3ad8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a3adc:
    // 0x1a3adc: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1a3adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1a3ae0:
    // 0x1a3ae0: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x1a3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1a3ae4:
    // 0x1a3ae4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a3ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1a3ae8:
    // 0x1a3ae8: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_1a3aec:
    // 0x1a3aec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a3aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a3af0:
    // 0x1a3af0: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_1a3af4:
    // 0x1a3af4: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1a3af8:
    // 0x1a3af8: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a3af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_1a3afc:
    // 0x1a3afc: 0x18c080  sll         $t8, $t8, 2
    ctx->pc = 0x1a3afcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_1a3b00:
    // 0x1a3b00: 0x158c021  addu        $t8, $t2, $t8
    ctx->pc = 0x1a3b00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
label_1a3b04:
    // 0x1a3b04: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a3b08:
    // 0x1a3b08: 0x8c7301fc  lw          $s3, 0x1FC($v1)
    ctx->pc = 0x1a3b08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a3b0c:
    // 0x1a3b0c: 0x1529021  addu        $s2, $t2, $s2
    ctx->pc = 0x1a3b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
label_1a3b10:
    // 0x1a3b10: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1a3b10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_1a3b14:
    // 0x1a3b14: 0x8c9901fc  lw          $t9, 0x1FC($a0)
    ctx->pc = 0x1a3b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_1a3b18:
    // 0x1a3b18: 0x14f7821  addu        $t7, $t2, $t7
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
label_1a3b1c:
    // 0x1a3b1c: 0x8f182cd8  lw          $t8, 0x2CD8($t8)
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11480)));
label_1a3b20:
    // 0x1a3b20: 0x8cc601fc  lw          $a2, 0x1FC($a2)
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 508)));
label_1a3b24:
    // 0x1a3b24: 0x8ca501fc  lw          $a1, 0x1FC($a1)
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
label_1a3b28:
    // 0x1a3b28: 0x8e522cd8  lw          $s2, 0x2CD8($s2)
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11480)));
label_1a3b2c:
    // 0x1a3b2c: 0x8d6306ac  lw          $v1, 0x6AC($t3)
    ctx->pc = 0x1a3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1708)));
label_1a3b30:
    // 0x1a3b30: 0x8de42cd8  lw          $a0, 0x2CD8($t7)
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 11480)));
label_1a3b34:
    // 0x1a3b34: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
label_1a3b38:
    // 0x1a3b38: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x1a3b38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
label_1a3b3c:
    // 0x1a3b3c: 0x8f0601fc  lw          $a2, 0x1FC($t8)
    ctx->pc = 0x1a3b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 508)));
label_1a3b40:
    // 0x1a3b40: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x1a3b40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
label_1a3b44:
    // 0x1a3b44: 0x8e4501fc  lw          $a1, 0x1FC($s2)
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_1a3b48:
    // 0x1a3b48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3b4c:
    // 0x1a3b4c: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x1a3b4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
label_1a3b50:
    // 0x1a3b50: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_1a3b54:
    // 0x1a3b54: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x1a3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_1a3b58:
    // 0x1a3b58: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a3b5c:
    // 0x1a3b5c: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x1a3b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
label_1a3b60:
    // 0x1a3b60: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x1a3b60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
label_1a3b64:
    // 0x1a3b64: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1a3b64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_1a3b68:
    // 0x1a3b68: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a3b6c:
    // 0x1a3b6c: 0x15c0ffcc  bnez        $t6, . + 4 + (-0x34 << 2)
label_1a3b70:
    if (ctx->pc == 0x1A3B70u) {
        ctx->pc = 0x1A3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B6Cu;
        // 0x1a3b70: 0x1a36821  addu        $t5, $t5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B74u;
        goto label_1a3b74;
    }
    ctx->pc = 0x1A3B6Cu;
    {
        const bool branch_taken_0x1a3b6c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B6Cu;
        // 0x1a3b70: 0x1a36821  addu        $t5, $t5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b6c) {
            ctx->pc = 0x1A3AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3aa0;
        }
    }
    ctx->pc = 0x1A3B74u;
label_1a3b74:
    // 0x1a3b74: 0x0  nop
    ctx->pc = 0x1a3b74u;
    // NOP
label_1a3b78:
    // 0x1a3b78: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a3b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a3b7c:
    // 0x1a3b7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a3b80:
    if (ctx->pc == 0x1A3B80u) {
        ctx->pc = 0x1A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B7Cu;
        // 0x1a3b80: 0xc2880  sll         $a1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B84u;
        goto label_1a3b84;
    }
    ctx->pc = 0x1A3B7Cu;
    {
        const bool branch_taken_0x1a3b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B7Cu;
        // 0x1a3b80: 0xc2880  sll         $a1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b7c) {
            ctx->pc = 0x1A3BA8u;
            goto label_1a3ba8;
        }
    }
    ctx->pc = 0x1A3B84u;
label_1a3b84:
    // 0x1a3b84: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1a3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1a3b88:
    // 0x1a3b88: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1a3b88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1a3b8c:
    // 0x1a3b8c: 0x8c630690  lw          $v1, 0x690($v1)
    ctx->pc = 0x1a3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
label_1a3b90:
    // 0x1a3b90: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1a3b94:
    // 0x1a3b94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3b98:
    // 0x1a3b98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a3b9c:
    // 0x1a3b9c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a3ba0:
    // 0x1a3ba0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a3ba4:
    // 0x1a3ba4: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x1a3ba4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_1a3ba8:
    // 0x1a3ba8: 0x189182a  slt         $v1, $t4, $t1
    ctx->pc = 0x1a3ba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1a3bac:
    // 0x1a3bac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1a3bb0:
    if (ctx->pc == 0x1A3BB0u) {
        ctx->pc = 0x1A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BACu;
        // 0x1a3bb0: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BB4u;
        goto label_1a3bb4;
    }
    ctx->pc = 0x1A3BACu;
    {
        const bool branch_taken_0x1a3bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BACu;
        // 0x1a3bb0: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3bac) {
            ctx->pc = 0x1A3B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3b88;
        }
    }
    ctx->pc = 0x1A3BB4u;
label_1a3bb4:
    // 0x1a3bb4: 0x0  nop
    ctx->pc = 0x1a3bb4u;
    // NOP
label_1a3bb8:
    // 0x1a3bb8: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
label_1a3bbc:
    if (ctx->pc == 0x1A3BBCu) {
        ctx->pc = 0x1A3BC0u;
        goto label_1a3bc0;
    }
    ctx->pc = 0x1A3BB8u;
    {
        const bool branch_taken_0x1a3bb8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3bb8) {
            ctx->pc = 0x1A3BE4u;
            goto label_1a3be4;
        }
    }
    ctx->pc = 0x1A3BC0u;
label_1a3bc0:
    // 0x1a3bc0: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_1a3bc4:
    // 0x1a3bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bc8:
    // 0x1a3bc8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a3bcc:
    // 0x1a3bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3bd0:
    // 0x1a3bd0: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_1a3bd4:
    // 0x1a3bd4: 0xc063e08  jal         func_18F820
label_1a3bd8:
    if (ctx->pc == 0x1A3BD8u) {
        ctx->pc = 0x1A3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BD4u;
        // 0x1a3bd8: 0xae220670  sw          $v0, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BDCu;
        goto label_1a3bdc;
    }
    ctx->pc = 0x1A3BD4u;
    SET_GPR_U32(ctx, 31, 0x1A3BDCu);
    ctx->pc = 0x1A3BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BD4u;
    // 0x1a3bd8: 0xae220670  sw          $v0, 0x670($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A3BD4u, 0x1A3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BDCu;
label_1a3bdc:
    // 0x1a3bdc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1a3be0:
    if (ctx->pc == 0x1A3BE0u) {
        ctx->pc = 0x1A3BE4u;
        goto label_1a3be4;
    }
    ctx->pc = 0x1A3BDCu;
    {
        const bool branch_taken_0x1a3bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3bdc) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3BE4u;
label_1a3be4:
    // 0x1a3be4: 0x8e23067c  lw          $v1, 0x67C($s1)
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a3be8:
    // 0x1a3be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a3bec:
    // 0x1a3bec: 0xae23067c  sw          $v1, 0x67C($s1)
    ctx->pc = 0x1a3becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 3));
label_1a3bf0:
    // 0x1a3bf0: 0x8e230688  lw          $v1, 0x688($s1)
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
label_1a3bf4:
    // 0x1a3bf4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3bf8:
    // 0x1a3bf8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1a3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3bfc:
    // 0x1a3bfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a3c00:
    // 0x1a3c00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a3c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a3c04:
    // 0x1a3c04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a3c08:
    // 0x1a3c08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a3c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a3c0c:
    // 0x1a3c0c: 0x0  nop
    ctx->pc = 0x1a3c0cu;
    // NOP
label_1a3c10:
    // 0x1a3c10: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1a3c14:
    if (ctx->pc == 0x1A3C14u) {
        ctx->pc = 0x1A3C18u;
        goto label_1a3c18;
    }
    ctx->pc = 0x1A3C10u;
    {
        const bool branch_taken_0x1a3c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c10) {
            ctx->pc = 0x1A3C1Cu;
            goto label_1a3c1c;
        }
    }
    ctx->pc = 0x1A3C18u;
label_1a3c18:
    // 0x1a3c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a3c1c:
    // 0x1a3c1c: 0x8e24067c  lw          $a0, 0x67C($s1)
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a3c20:
    // 0x1a3c20: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a3c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a3c24:
    // 0x1a3c24: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1a3c28:
    if (ctx->pc == 0x1A3C28u) {
        ctx->pc = 0x1A3C2Cu;
        goto label_1a3c2c;
    }
    ctx->pc = 0x1A3C24u;
    {
        const bool branch_taken_0x1a3c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c24) {
            ctx->pc = 0x1A3C84u;
            goto label_1a3c84;
        }
    }
    ctx->pc = 0x1A3C2Cu;
label_1a3c2c:
    // 0x1a3c2c: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a3c30:
    // 0x1a3c30: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1a3c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a3c34:
    // 0x1a3c34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a3c38:
    if (ctx->pc == 0x1A3C38u) {
        ctx->pc = 0x1A3C3Cu;
        goto label_1a3c3c;
    }
    ctx->pc = 0x1A3C34u;
    {
        const bool branch_taken_0x1a3c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c34) {
            ctx->pc = 0x1A3C58u;
            goto label_1a3c58;
        }
    }
    ctx->pc = 0x1A3C3Cu;
label_1a3c3c:
    // 0x1a3c3c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a3c40:
    // 0x1a3c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c44:
    // 0x1a3c44: 0x8e270680  lw          $a3, 0x680($s1)
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
label_1a3c48:
    // 0x1a3c48: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a3c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a3c4c:
    // 0x1a3c4c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a3c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a3c50:
    // 0x1a3c50: 0xc064f7c  jal         func_193DF0
label_1a3c54:
    if (ctx->pc == 0x1A3C54u) {
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C58u;
        goto label_1a3c58;
    }
    ctx->pc = 0x1A3C50u;
    SET_GPR_U32(ctx, 31, 0x1A3C58u);
    ctx->pc = 0x1A3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C50u;
    // 0x1a3c54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A3C50u, 0x1A3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C58u;
label_1a3c58:
    // 0x1a3c58: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a3c5c:
    // 0x1a3c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3c60:
    // 0x1a3c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c64:
    // 0x1a3c64: 0xac4528e0  sw          $a1, 0x28E0($v0)
    ctx->pc = 0x1a3c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10464), GPR_U32(ctx, 5));
label_1a3c68:
    // 0x1a3c68: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1a3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_1a3c6c:
    // 0x1a3c6c: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_1a3c70:
    // 0x1a3c70: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x1a3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
label_1a3c74:
    // 0x1a3c74: 0xc063e08  jal         func_18F820
label_1a3c78:
    if (ctx->pc == 0x1A3C78u) {
        ctx->pc = 0x1A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C74u;
        // 0x1a3c78: 0xae200680  sw          $zero, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C7Cu;
        goto label_1a3c7c;
    }
    ctx->pc = 0x1A3C74u;
    SET_GPR_U32(ctx, 31, 0x1A3C7Cu);
    ctx->pc = 0x1A3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C74u;
    // 0x1a3c78: 0xae200680  sw          $zero, 0x680($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A3C74u, 0x1A3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C7Cu;
label_1a3c7c:
    // 0x1a3c7c: 0x10000046  b           . + 4 + (0x46 << 2)
label_1a3c80:
    if (ctx->pc == 0x1A3C80u) {
        ctx->pc = 0x1A3C84u;
        goto label_1a3c84;
    }
    ctx->pc = 0x1A3C7Cu;
    {
        const bool branch_taken_0x1a3c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3c7c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3C84u;
label_1a3c84:
    // 0x1a3c84: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a3c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3c88:
    // 0x1a3c88: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1a3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1a3c8c:
    // 0x1a3c8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3c90:
    // 0x1a3c90: 0x0  nop
    ctx->pc = 0x1a3c90u;
    // NOP
label_1a3c94:
    // 0x1a3c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3c98:
    // 0x1a3c98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a3c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a3c9c:
    // 0x1a3c9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a3ca0:
    // 0x1a3ca0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a3ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a3ca4:
    // 0x1a3ca4: 0x0  nop
    ctx->pc = 0x1a3ca4u;
    // NOP
label_1a3ca8:
    // 0x1a3ca8: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
label_1a3cac:
    if (ctx->pc == 0x1A3CACu) {
        ctx->pc = 0x1A3CB0u;
        goto label_1a3cb0;
    }
    ctx->pc = 0x1A3CA8u;
    {
        const bool branch_taken_0x1a3ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3ca8) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3CB0u;
label_1a3cb0:
    // 0x1a3cb0: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1a3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1a3cb4:
    // 0x1a3cb4: 0x8e230794  lw          $v1, 0x794($s1)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1940)));
label_1a3cb8:
    // 0x1a3cb8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a3cbc:
    // 0x1a3cbc: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
label_1a3cc0:
    if (ctx->pc == 0x1A3CC0u) {
        ctx->pc = 0x1A3CC4u;
        goto label_1a3cc4;
    }
    ctx->pc = 0x1A3CBCu;
    {
        const bool branch_taken_0x1a3cbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cbc) {
            ctx->pc = 0x1A3D24u;
            goto label_1a3d24;
        }
    }
    ctx->pc = 0x1A3CC4u;
label_1a3cc4:
    // 0x1a3cc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a3cc8:
    // 0x1a3cc8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a3ccc:
    // 0x1a3ccc: 0x8c650798  lw          $a1, 0x798($v1)
    ctx->pc = 0x1a3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1944)));
label_1a3cd0:
    // 0x1a3cd0: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
label_1a3cd4:
    if (ctx->pc == 0x1A3CD4u) {
        ctx->pc = 0x1A3CD8u;
        goto label_1a3cd8;
    }
    ctx->pc = 0x1A3CD0u;
    {
        const bool branch_taken_0x1a3cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cd0) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3CD8u;
label_1a3cd8:
    // 0x1a3cd8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_1a3cdc:
    // 0x1a3cdc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1a3ce0:
    if (ctx->pc == 0x1A3CE0u) {
        ctx->pc = 0x1A3CE4u;
        goto label_1a3ce4;
    }
    ctx->pc = 0x1A3CDCu;
    {
        const bool branch_taken_0x1a3cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cdc) {
            ctx->pc = 0x1A3D0Cu;
            goto label_1a3d0c;
        }
    }
    ctx->pc = 0x1A3CE4u;
label_1a3ce4:
    // 0x1a3ce4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1a3ce8:
    // 0x1a3ce8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a3cec:
    // 0x1a3cec: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
label_1a3cf0:
    if (ctx->pc == 0x1A3CF0u) {
        ctx->pc = 0x1A3CF4u;
        goto label_1a3cf4;
    }
    ctx->pc = 0x1A3CECu;
    {
        const bool branch_taken_0x1a3cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3cec) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3CF4u;
label_1a3cf4:
    // 0x1a3cf4: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a3cf8:
    // 0x1a3cf8: 0xc064fb8  jal         func_193EE0
label_1a3cfc:
    if (ctx->pc == 0x1A3CFCu) {
        ctx->pc = 0x1A3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF8u;
        // 0x1a3cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D00u;
        goto label_1a3d00;
    }
    ctx->pc = 0x1A3CF8u;
    SET_GPR_U32(ctx, 31, 0x1A3D00u);
    ctx->pc = 0x1A3CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CF8u;
    // 0x1a3cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3CF8u, 0x1A3D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D00u;
label_1a3d00:
    // 0x1a3d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3d04:
    // 0x1a3d04: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a3d08:
    if (ctx->pc == 0x1A3D08u) {
        ctx->pc = 0x1A3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D04u;
        // 0x1a3d08: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D0Cu;
        goto label_1a3d0c;
    }
    ctx->pc = 0x1A3D04u;
    {
        const bool branch_taken_0x1a3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D04u;
        // 0x1a3d08: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d04) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D0Cu;
label_1a3d0c:
    // 0x1a3d0c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a3d10:
    // 0x1a3d10: 0xc064fb8  jal         func_193EE0
label_1a3d14:
    if (ctx->pc == 0x1A3D14u) {
        ctx->pc = 0x1A3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D10u;
        // 0x1a3d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D18u;
        goto label_1a3d18;
    }
    ctx->pc = 0x1A3D10u;
    SET_GPR_U32(ctx, 31, 0x1A3D18u);
    ctx->pc = 0x1A3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D10u;
    // 0x1a3d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3D10u, 0x1A3D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D18u;
label_1a3d18:
    // 0x1a3d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3d1c:
    // 0x1a3d1c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a3d20:
    if (ctx->pc == 0x1A3D20u) {
        ctx->pc = 0x1A3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D1Cu;
        // 0x1a3d20: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D24u;
        goto label_1a3d24;
    }
    ctx->pc = 0x1A3D1Cu;
    {
        const bool branch_taken_0x1a3d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D1Cu;
        // 0x1a3d20: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d1c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D24u;
label_1a3d24:
    // 0x1a3d24: 0x8e2507bc  lw          $a1, 0x7BC($s1)
    ctx->pc = 0x1a3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1980)));
label_1a3d28:
    // 0x1a3d28: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_1a3d2c:
    if (ctx->pc == 0x1A3D2Cu) {
        ctx->pc = 0x1A3D30u;
        goto label_1a3d30;
    }
    ctx->pc = 0x1A3D28u;
    {
        const bool branch_taken_0x1a3d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d28) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D30u;
label_1a3d30:
    // 0x1a3d30: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_1a3d34:
    // 0x1a3d34: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1a3d38:
    if (ctx->pc == 0x1A3D38u) {
        ctx->pc = 0x1A3D3Cu;
        goto label_1a3d3c;
    }
    ctx->pc = 0x1A3D34u;
    {
        const bool branch_taken_0x1a3d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d34) {
            ctx->pc = 0x1A3D64u;
            goto label_1a3d64;
        }
    }
    ctx->pc = 0x1A3D3Cu;
label_1a3d3c:
    // 0x1a3d3c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1a3d40:
    // 0x1a3d40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a3d44:
    // 0x1a3d44: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_1a3d48:
    if (ctx->pc == 0x1A3D48u) {
        ctx->pc = 0x1A3D4Cu;
        goto label_1a3d4c;
    }
    ctx->pc = 0x1A3D44u;
    {
        const bool branch_taken_0x1a3d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3d44) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D4Cu;
label_1a3d4c:
    // 0x1a3d4c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a3d50:
    // 0x1a3d50: 0xc064fb8  jal         func_193EE0
label_1a3d54:
    if (ctx->pc == 0x1A3D54u) {
        ctx->pc = 0x1A3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D50u;
        // 0x1a3d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D58u;
        goto label_1a3d58;
    }
    ctx->pc = 0x1A3D50u;
    SET_GPR_U32(ctx, 31, 0x1A3D58u);
    ctx->pc = 0x1A3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D50u;
    // 0x1a3d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3D50u, 0x1A3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D58u;
label_1a3d58:
    // 0x1a3d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3d5c:
    // 0x1a3d5c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a3d60:
    if (ctx->pc == 0x1A3D60u) {
        ctx->pc = 0x1A3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D5Cu;
        // 0x1a3d60: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D64u;
        goto label_1a3d64;
    }
    ctx->pc = 0x1A3D5Cu;
    {
        const bool branch_taken_0x1a3d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D5Cu;
        // 0x1a3d60: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d5c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D64u;
label_1a3d64:
    // 0x1a3d64: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a3d68:
    // 0x1a3d68: 0xc064fb8  jal         func_193EE0
label_1a3d6c:
    if (ctx->pc == 0x1A3D6Cu) {
        ctx->pc = 0x1A3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D68u;
        // 0x1a3d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D70u;
        goto label_1a3d70;
    }
    ctx->pc = 0x1A3D68u;
    SET_GPR_U32(ctx, 31, 0x1A3D70u);
    ctx->pc = 0x1A3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D68u;
    // 0x1a3d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3D68u, 0x1A3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D70u;
label_1a3d70:
    // 0x1a3d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3d74:
    // 0x1a3d74: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a3d78:
    if (ctx->pc == 0x1A3D78u) {
        ctx->pc = 0x1A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D74u;
        // 0x1a3d78: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D7Cu;
        goto label_1a3d7c;
    }
    ctx->pc = 0x1A3D74u;
    {
        const bool branch_taken_0x1a3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D74u;
        // 0x1a3d78: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d74) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D7Cu;
label_1a3d7c:
    // 0x1a3d7c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1a3d80:
    if (ctx->pc == 0x1A3D80u) {
        ctx->pc = 0x1A3D84u;
        goto label_1a3d84;
    }
    ctx->pc = 0x1A3D7Cu;
    {
        const bool branch_taken_0x1a3d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d7c) {
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3D84u;
label_1a3d84:
    // 0x1a3d84: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a3d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a3d88:
    // 0x1a3d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d8c:
    // 0x1a3d8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3d90:
    // 0x1a3d90: 0x320f809  jalr        $t9
label_1a3d94:
    if (ctx->pc == 0x1A3D94u) {
        ctx->pc = 0x1A3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D90u;
        // 0x1a3d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D98u;
        goto label_1a3d98;
    }
    ctx->pc = 0x1A3D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3D98u);
        ctx->pc = 0x1A3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D90u;
        // 0x1a3d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D90u, 0x1A3D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3D98u;
label_1a3d98:
    // 0x1a3d98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3d9c:
    // 0x1a3d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a3d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3da0:
    // 0x1a3da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3da4:
    // 0x1a3da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3da8:
    // 0x1a3da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3dac:
    // 0x1a3dac: 0x3e00008  jr          $ra
label_1a3db0:
    if (ctx->pc == 0x1A3DB0u) {
        ctx->pc = 0x1A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DACu;
        // 0x1a3db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DB4u;
        goto label_fallthrough_0x1a3dac;
    }
    ctx->pc = 0x1A3DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DACu;
        // 0x1a3db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3dac:
    ctx->pc = 0x1A3DB4u;
}
