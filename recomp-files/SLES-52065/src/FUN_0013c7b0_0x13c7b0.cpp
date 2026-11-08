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

// Function: FUN_0013c7b0
// Address: 0x13c7b0 - 0x13cb20
void FUN_0013c7b0_0x13c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c7b0_0x13c7b0");
#endif

    switch (ctx->pc) {
        case 0x13c7b0u: goto label_13c7b0;
        case 0x13c7b4u: goto label_13c7b4;
        case 0x13c7b8u: goto label_13c7b8;
        case 0x13c7bcu: goto label_13c7bc;
        case 0x13c7c0u: goto label_13c7c0;
        case 0x13c7c4u: goto label_13c7c4;
        case 0x13c7c8u: goto label_13c7c8;
        case 0x13c7ccu: goto label_13c7cc;
        case 0x13c7d0u: goto label_13c7d0;
        case 0x13c7d4u: goto label_13c7d4;
        case 0x13c7d8u: goto label_13c7d8;
        case 0x13c7dcu: goto label_13c7dc;
        case 0x13c7e0u: goto label_13c7e0;
        case 0x13c7e4u: goto label_13c7e4;
        case 0x13c7e8u: goto label_13c7e8;
        case 0x13c7ecu: goto label_13c7ec;
        case 0x13c7f0u: goto label_13c7f0;
        case 0x13c7f4u: goto label_13c7f4;
        case 0x13c7f8u: goto label_13c7f8;
        case 0x13c7fcu: goto label_13c7fc;
        case 0x13c800u: goto label_13c800;
        case 0x13c804u: goto label_13c804;
        case 0x13c808u: goto label_13c808;
        case 0x13c80cu: goto label_13c80c;
        case 0x13c810u: goto label_13c810;
        case 0x13c814u: goto label_13c814;
        case 0x13c818u: goto label_13c818;
        case 0x13c81cu: goto label_13c81c;
        case 0x13c820u: goto label_13c820;
        case 0x13c824u: goto label_13c824;
        case 0x13c828u: goto label_13c828;
        case 0x13c82cu: goto label_13c82c;
        case 0x13c830u: goto label_13c830;
        case 0x13c834u: goto label_13c834;
        case 0x13c838u: goto label_13c838;
        case 0x13c83cu: goto label_13c83c;
        case 0x13c840u: goto label_13c840;
        case 0x13c844u: goto label_13c844;
        case 0x13c848u: goto label_13c848;
        case 0x13c84cu: goto label_13c84c;
        case 0x13c850u: goto label_13c850;
        case 0x13c854u: goto label_13c854;
        case 0x13c858u: goto label_13c858;
        case 0x13c85cu: goto label_13c85c;
        case 0x13c860u: goto label_13c860;
        case 0x13c864u: goto label_13c864;
        case 0x13c868u: goto label_13c868;
        case 0x13c86cu: goto label_13c86c;
        case 0x13c870u: goto label_13c870;
        case 0x13c874u: goto label_13c874;
        case 0x13c878u: goto label_13c878;
        case 0x13c87cu: goto label_13c87c;
        case 0x13c880u: goto label_13c880;
        case 0x13c884u: goto label_13c884;
        case 0x13c888u: goto label_13c888;
        case 0x13c88cu: goto label_13c88c;
        case 0x13c890u: goto label_13c890;
        case 0x13c894u: goto label_13c894;
        case 0x13c898u: goto label_13c898;
        case 0x13c89cu: goto label_13c89c;
        case 0x13c8a0u: goto label_13c8a0;
        case 0x13c8a4u: goto label_13c8a4;
        case 0x13c8a8u: goto label_13c8a8;
        case 0x13c8acu: goto label_13c8ac;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8b4u: goto label_13c8b4;
        case 0x13c8b8u: goto label_13c8b8;
        case 0x13c8bcu: goto label_13c8bc;
        case 0x13c8c0u: goto label_13c8c0;
        case 0x13c8c4u: goto label_13c8c4;
        case 0x13c8c8u: goto label_13c8c8;
        case 0x13c8ccu: goto label_13c8cc;
        case 0x13c8d0u: goto label_13c8d0;
        case 0x13c8d4u: goto label_13c8d4;
        case 0x13c8d8u: goto label_13c8d8;
        case 0x13c8dcu: goto label_13c8dc;
        case 0x13c8e0u: goto label_13c8e0;
        case 0x13c8e4u: goto label_13c8e4;
        case 0x13c8e8u: goto label_13c8e8;
        case 0x13c8ecu: goto label_13c8ec;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c8f4u: goto label_13c8f4;
        case 0x13c8f8u: goto label_13c8f8;
        case 0x13c8fcu: goto label_13c8fc;
        case 0x13c900u: goto label_13c900;
        case 0x13c904u: goto label_13c904;
        case 0x13c908u: goto label_13c908;
        case 0x13c90cu: goto label_13c90c;
        case 0x13c910u: goto label_13c910;
        case 0x13c914u: goto label_13c914;
        case 0x13c918u: goto label_13c918;
        case 0x13c91cu: goto label_13c91c;
        case 0x13c920u: goto label_13c920;
        case 0x13c924u: goto label_13c924;
        case 0x13c928u: goto label_13c928;
        case 0x13c92cu: goto label_13c92c;
        case 0x13c930u: goto label_13c930;
        case 0x13c934u: goto label_13c934;
        case 0x13c938u: goto label_13c938;
        case 0x13c93cu: goto label_13c93c;
        case 0x13c940u: goto label_13c940;
        case 0x13c944u: goto label_13c944;
        case 0x13c948u: goto label_13c948;
        case 0x13c94cu: goto label_13c94c;
        case 0x13c950u: goto label_13c950;
        case 0x13c954u: goto label_13c954;
        case 0x13c958u: goto label_13c958;
        case 0x13c95cu: goto label_13c95c;
        case 0x13c960u: goto label_13c960;
        case 0x13c964u: goto label_13c964;
        case 0x13c968u: goto label_13c968;
        case 0x13c96cu: goto label_13c96c;
        case 0x13c970u: goto label_13c970;
        case 0x13c974u: goto label_13c974;
        case 0x13c978u: goto label_13c978;
        case 0x13c97cu: goto label_13c97c;
        case 0x13c980u: goto label_13c980;
        case 0x13c984u: goto label_13c984;
        case 0x13c988u: goto label_13c988;
        case 0x13c98cu: goto label_13c98c;
        case 0x13c990u: goto label_13c990;
        case 0x13c994u: goto label_13c994;
        case 0x13c998u: goto label_13c998;
        case 0x13c99cu: goto label_13c99c;
        case 0x13c9a0u: goto label_13c9a0;
        case 0x13c9a4u: goto label_13c9a4;
        case 0x13c9a8u: goto label_13c9a8;
        case 0x13c9acu: goto label_13c9ac;
        case 0x13c9b0u: goto label_13c9b0;
        case 0x13c9b4u: goto label_13c9b4;
        case 0x13c9b8u: goto label_13c9b8;
        case 0x13c9bcu: goto label_13c9bc;
        case 0x13c9c0u: goto label_13c9c0;
        case 0x13c9c4u: goto label_13c9c4;
        case 0x13c9c8u: goto label_13c9c8;
        case 0x13c9ccu: goto label_13c9cc;
        case 0x13c9d0u: goto label_13c9d0;
        case 0x13c9d4u: goto label_13c9d4;
        case 0x13c9d8u: goto label_13c9d8;
        case 0x13c9dcu: goto label_13c9dc;
        case 0x13c9e0u: goto label_13c9e0;
        case 0x13c9e4u: goto label_13c9e4;
        case 0x13c9e8u: goto label_13c9e8;
        case 0x13c9ecu: goto label_13c9ec;
        case 0x13c9f0u: goto label_13c9f0;
        case 0x13c9f4u: goto label_13c9f4;
        case 0x13c9f8u: goto label_13c9f8;
        case 0x13c9fcu: goto label_13c9fc;
        case 0x13ca00u: goto label_13ca00;
        case 0x13ca04u: goto label_13ca04;
        case 0x13ca08u: goto label_13ca08;
        case 0x13ca0cu: goto label_13ca0c;
        case 0x13ca10u: goto label_13ca10;
        case 0x13ca14u: goto label_13ca14;
        case 0x13ca18u: goto label_13ca18;
        case 0x13ca1cu: goto label_13ca1c;
        case 0x13ca20u: goto label_13ca20;
        case 0x13ca24u: goto label_13ca24;
        case 0x13ca28u: goto label_13ca28;
        case 0x13ca2cu: goto label_13ca2c;
        case 0x13ca30u: goto label_13ca30;
        case 0x13ca34u: goto label_13ca34;
        case 0x13ca38u: goto label_13ca38;
        case 0x13ca3cu: goto label_13ca3c;
        case 0x13ca40u: goto label_13ca40;
        case 0x13ca44u: goto label_13ca44;
        case 0x13ca48u: goto label_13ca48;
        case 0x13ca4cu: goto label_13ca4c;
        case 0x13ca50u: goto label_13ca50;
        case 0x13ca54u: goto label_13ca54;
        case 0x13ca58u: goto label_13ca58;
        case 0x13ca5cu: goto label_13ca5c;
        case 0x13ca60u: goto label_13ca60;
        case 0x13ca64u: goto label_13ca64;
        case 0x13ca68u: goto label_13ca68;
        case 0x13ca6cu: goto label_13ca6c;
        case 0x13ca70u: goto label_13ca70;
        case 0x13ca74u: goto label_13ca74;
        case 0x13ca78u: goto label_13ca78;
        case 0x13ca7cu: goto label_13ca7c;
        case 0x13ca80u: goto label_13ca80;
        case 0x13ca84u: goto label_13ca84;
        case 0x13ca88u: goto label_13ca88;
        case 0x13ca8cu: goto label_13ca8c;
        case 0x13ca90u: goto label_13ca90;
        case 0x13ca94u: goto label_13ca94;
        case 0x13ca98u: goto label_13ca98;
        case 0x13ca9cu: goto label_13ca9c;
        case 0x13caa0u: goto label_13caa0;
        case 0x13caa4u: goto label_13caa4;
        case 0x13caa8u: goto label_13caa8;
        case 0x13caacu: goto label_13caac;
        case 0x13cab0u: goto label_13cab0;
        case 0x13cab4u: goto label_13cab4;
        case 0x13cab8u: goto label_13cab8;
        case 0x13cabcu: goto label_13cabc;
        case 0x13cac0u: goto label_13cac0;
        case 0x13cac4u: goto label_13cac4;
        case 0x13cac8u: goto label_13cac8;
        case 0x13caccu: goto label_13cacc;
        case 0x13cad0u: goto label_13cad0;
        case 0x13cad4u: goto label_13cad4;
        case 0x13cad8u: goto label_13cad8;
        case 0x13cadcu: goto label_13cadc;
        case 0x13cae0u: goto label_13cae0;
        case 0x13cae4u: goto label_13cae4;
        case 0x13cae8u: goto label_13cae8;
        case 0x13caecu: goto label_13caec;
        case 0x13caf0u: goto label_13caf0;
        case 0x13caf4u: goto label_13caf4;
        case 0x13caf8u: goto label_13caf8;
        case 0x13cafcu: goto label_13cafc;
        case 0x13cb00u: goto label_13cb00;
        case 0x13cb04u: goto label_13cb04;
        case 0x13cb08u: goto label_13cb08;
        case 0x13cb0cu: goto label_13cb0c;
        case 0x13cb10u: goto label_13cb10;
        case 0x13cb14u: goto label_13cb14;
        case 0x13cb18u: goto label_13cb18;
        case 0x13cb1cu: goto label_13cb1c;
        default: break;
    }

    ctx->pc = 0x13c7b0u;

label_13c7b0:
    // 0x13c7b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_13c7b4:
    // 0x13c7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c7b8:
    // 0x13c7b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13c7bc:
    // 0x13c7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13c7c0:
    // 0x13c7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13c7c4:
    // 0x13c7c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13c7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13c7c8:
    // 0x13c7c8: 0x90850055  lbu         $a1, 0x55($a0)
    ctx->pc = 0x13c7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_13c7cc:
    // 0x13c7cc: 0x14a300cf  bne         $a1, $v1, . + 4 + (0xCF << 2)
label_13c7d0:
    if (ctx->pc == 0x13C7D0u) {
        ctx->pc = 0x13C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7CCu;
        // 0x13c7d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7D4u;
        goto label_13c7d4;
    }
    ctx->pc = 0x13C7CCu;
    {
        const bool branch_taken_0x13c7cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x13C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7CCu;
        // 0x13c7d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7cc) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13C7D4u;
label_13c7d4:
    // 0x13c7d4: 0x8e250174  lw          $a1, 0x174($s1)
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_13c7d8:
    // 0x13c7d8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_13c7dc:
    if (ctx->pc == 0x13C7DCu) {
        ctx->pc = 0x13C7E0u;
        goto label_13c7e0;
    }
    ctx->pc = 0x13C7D8u;
    {
        const bool branch_taken_0x13c7d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c7d8) {
            ctx->pc = 0x13C80Cu;
            goto label_13c80c;
        }
    }
    ctx->pc = 0x13C7E0u;
label_13c7e0:
    // 0x13c7e0: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x13c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13c7e4:
    // 0x13c7e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13c7e8:
    // 0x13c7e8: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x13c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13c7ec:
    // 0x13c7ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13c7ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13c7f0:
    // 0x13c7f0: 0x0  nop
    ctx->pc = 0x13c7f0u;
    // NOP
label_13c7f4:
    // 0x13c7f4: 0x450100c5  bc1t        . + 4 + (0xC5 << 2)
label_13c7f8:
    if (ctx->pc == 0x13C7F8u) {
        ctx->pc = 0x13C7FCu;
        goto label_13c7fc;
    }
    ctx->pc = 0x13C7F4u;
    {
        const bool branch_taken_0x13c7f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c7f4) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13C7FCu;
label_13c7fc:
    // 0x13c7fc: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_13c800:
    // 0x13c800: 0xae230174  sw          $v1, 0x174($s1)
    ctx->pc = 0x13c800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 3));
label_13c804:
    // 0x13c804: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_13c808:
    if (ctx->pc == 0x13C808u) {
        ctx->pc = 0x13C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C804u;
        // 0x13c808: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C80Cu;
        goto label_13c80c;
    }
    ctx->pc = 0x13C804u;
    {
        const bool branch_taken_0x13c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C804u;
        // 0x13c808: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c804) {
            ctx->pc = 0x13CB10u;
            goto label_13cb10;
        }
    }
    ctx->pc = 0x13C80Cu;
label_13c80c:
    // 0x13c80c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13c810:
    // 0x13c810: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x13c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13c814:
    // 0x13c814: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x13c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13c818:
    // 0x13c818: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13c818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13c81c:
    // 0x13c81c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x13c81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_13c820:
    // 0x13c820: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13c824:
    // 0x13c824: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x13c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13c828:
    // 0x13c828: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x13c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13c82c:
    // 0x13c82c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13c82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13c830:
    // 0x13c830: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x13c830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_13c834:
    // 0x13c834: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x13c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13c838:
    // 0x13c838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_13c83c:
    if (ctx->pc == 0x13C83Cu) {
        ctx->pc = 0x13C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C838u;
        // 0x13c83c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C840u;
        goto label_13c840;
    }
    ctx->pc = 0x13C838u;
    {
        const bool branch_taken_0x13c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C838u;
        // 0x13c83c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c838) {
            ctx->pc = 0x13C868u;
            goto label_13c868;
        }
    }
    ctx->pc = 0x13C840u;
label_13c840:
    // 0x13c840: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_13c844:
    // 0x13c844: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13c848:
    if (ctx->pc == 0x13C848u) {
        ctx->pc = 0x13C84Cu;
        goto label_13c84c;
    }
    ctx->pc = 0x13C844u;
    {
        const bool branch_taken_0x13c844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c844) {
            ctx->pc = 0x13C864u;
            goto label_13c864;
        }
    }
    ctx->pc = 0x13C84Cu;
label_13c84c:
    // 0x13c84c: 0x8e23017c  lw          $v1, 0x17C($s1)
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_13c850:
    // 0x13c850: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13c854:
    // 0x13c854: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_13c858:
    if (ctx->pc == 0x13C858u) {
        ctx->pc = 0x13C85Cu;
        goto label_13c85c;
    }
    ctx->pc = 0x13C854u;
    {
        const bool branch_taken_0x13c854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c854) {
            ctx->pc = 0x13C864u;
            goto label_13c864;
        }
    }
    ctx->pc = 0x13C85Cu;
label_13c85c:
    // 0x13c85c: 0xc04f9c0  jal         func_13E700
label_13c860:
    if (ctx->pc == 0x13C860u) {
        ctx->pc = 0x13C864u;
        goto label_13c864;
    }
    ctx->pc = 0x13C85Cu;
    SET_GPR_U32(ctx, 31, 0x13C864u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13C85Cu, 0x13C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C864u;
label_13c864:
    // 0x13c864: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x13c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_13c868:
    // 0x13c868: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x13c868u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13c86c:
    // 0x13c86c: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x13c86cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_13c870:
    // 0x13c870: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x13c870u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_13c874:
    // 0x13c874: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x13c874u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_13c878:
    // 0x13c878: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x13c878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c87c:
    // 0x13c87c: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x13c87cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c880:
    // 0x13c880: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x13c880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c884:
    // 0x13c884: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x13c884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_13c888:
    // 0x13c888: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x13c888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c88c:
    // 0x13c88c: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x13c88cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c890:
    // 0x13c890: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x13c890u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c894:
    // 0x13c894: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x13c894u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_13c898:
    // 0x13c898: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x13c898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c89c:
    // 0x13c89c: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x13c89cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c8a0:
    // 0x13c8a0: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x13c8a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c8a4:
    // 0x13c8a4: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x13c8a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_13c8a8:
    // 0x13c8a8: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x13c8a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c8ac:
    // 0x13c8ac: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x13c8acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c8b0:
    // 0x13c8b0: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x13c8b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13c8b4:
    // 0x13c8b4: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x13c8b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_13c8b8:
    // 0x13c8b8: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x13c8b8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_13c8bc:
    // 0x13c8bc: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x13c8bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_13c8c0:
    // 0x13c8c0: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x13c8c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_13c8c4:
    // 0x13c8c4: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x13c8c4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_13c8c8:
    // 0x13c8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c8cc:
    // 0x13c8cc: 0xa222018c  sb          $v0, 0x18C($s1)
    ctx->pc = 0x13c8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 396), (uint8_t)GPR_U32(ctx, 2));
label_13c8d0:
    // 0x13c8d0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_13c8d4:
    // 0x13c8d4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_13c8d8:
    if (ctx->pc == 0x13C8D8u) {
        ctx->pc = 0x13C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D4u;
        // 0x13c8d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8DCu;
        goto label_13c8dc;
    }
    ctx->pc = 0x13C8D4u;
    {
        const bool branch_taken_0x13c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D4u;
        // 0x13c8d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8d4) {
            ctx->pc = 0x13C9ACu;
            goto label_13c9ac;
        }
    }
    ctx->pc = 0x13C8DCu;
label_13c8dc:
    // 0x13c8dc: 0xc061bf0  jal         func_186FC0
label_13c8e0:
    if (ctx->pc == 0x13C8E0u) {
        ctx->pc = 0x13C8E4u;
        goto label_13c8e4;
    }
    ctx->pc = 0x13C8DCu;
    SET_GPR_U32(ctx, 31, 0x13C8E4u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x13C8DCu, 0x13C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8E4u;
label_13c8e4:
    // 0x13c8e4: 0xc061b50  jal         func_186D40
label_13c8e8:
    if (ctx->pc == 0x13C8E8u) {
        ctx->pc = 0x13C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8E4u;
        // 0x13c8e8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8ECu;
        goto label_13c8ec;
    }
    ctx->pc = 0x13C8E4u;
    SET_GPR_U32(ctx, 31, 0x13C8ECu);
    ctx->pc = 0x13C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8E4u;
    // 0x13c8e8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13C8E4u, 0x13C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8ECu;
label_13c8ec:
    // 0x13c8ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13c8f0:
    // 0x13c8f0: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_13c8f4:
    if (ctx->pc == 0x13C8F4u) {
        ctx->pc = 0x13C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F0u;
        // 0x13c8f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8F8u;
        goto label_13c8f8;
    }
    ctx->pc = 0x13C8F0u;
    {
        const bool branch_taken_0x13c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F0u;
        // 0x13c8f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8f0) {
            ctx->pc = 0x13C95Cu;
            goto label_13c95c;
        }
    }
    ctx->pc = 0x13C8F8u;
label_13c8f8:
    // 0x13c8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c8fc:
    // 0x13c8fc: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_13c900:
    if (ctx->pc == 0x13C900u) {
        ctx->pc = 0x13C904u;
        goto label_13c904;
    }
    ctx->pc = 0x13C8FCu;
    {
        const bool branch_taken_0x13c8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c8fc) {
            ctx->pc = 0x13C950u;
            goto label_13c950;
        }
    }
    ctx->pc = 0x13C904u;
label_13c904:
    // 0x13c904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13c908:
    if (ctx->pc == 0x13C908u) {
        ctx->pc = 0x13C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C904u;
        // 0x13c908: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C90Cu;
        goto label_13c90c;
    }
    ctx->pc = 0x13C904u;
    {
        const bool branch_taken_0x13c904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C904u;
        // 0x13c908: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c904) {
            ctx->pc = 0x13C918u;
            goto label_13c918;
        }
    }
    ctx->pc = 0x13C90Cu;
label_13c90c:
    // 0x13c90c: 0x10000029  b           . + 4 + (0x29 << 2)
label_13c910:
    if (ctx->pc == 0x13C910u) {
        ctx->pc = 0x13C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C90Cu;
        // 0x13c910: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C914u;
        goto label_13c914;
    }
    ctx->pc = 0x13C90Cu;
    {
        const bool branch_taken_0x13c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C90Cu;
        // 0x13c910: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c90c) {
            ctx->pc = 0x13C9B4u;
            goto label_13c9b4;
        }
    }
    ctx->pc = 0x13C914u;
label_13c914:
    // 0x13c914: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x13c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_13c918:
    // 0x13c918: 0xc05068c  jal         func_141A30
label_13c91c:
    if (ctx->pc == 0x13C91Cu) {
        ctx->pc = 0x13C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C918u;
        // 0x13c91c: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C920u;
        goto label_13c920;
    }
    ctx->pc = 0x13C918u;
    SET_GPR_U32(ctx, 31, 0x13C920u);
    ctx->pc = 0x13C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C918u;
    // 0x13c91c: 0xae200184  sw          $zero, 0x184($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A30u, 0x13C918u, 0x13C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C920u;
label_13c920:
    // 0x13c920: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_13c924:
    // 0x13c924: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_13c928:
    if (ctx->pc == 0x13C928u) {
        ctx->pc = 0x13C92Cu;
        goto label_13c92c;
    }
    ctx->pc = 0x13C924u;
    {
        const bool branch_taken_0x13c924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c924) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13C92Cu;
label_13c92c:
    // 0x13c92c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13c92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c930:
    // 0x13c930: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13c930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13c934:
    // 0x13c934: 0x320f809  jalr        $t9
label_13c938:
    if (ctx->pc == 0x13C938u) {
        ctx->pc = 0x13C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C934u;
        // 0x13c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C93Cu;
        goto label_13c93c;
    }
    ctx->pc = 0x13C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C93Cu);
        ctx->pc = 0x13C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C934u;
        // 0x13c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C934u, 0x13C93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C93Cu;
label_13c93c:
    // 0x13c93c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_13c940:
    if (ctx->pc == 0x13C940u) {
        ctx->pc = 0x13C944u;
        goto label_13c944;
    }
    ctx->pc = 0x13C93Cu;
    {
        const bool branch_taken_0x13c93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c93c) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13C944u;
label_13c944:
    // 0x13c944: 0xa2200055  sb          $zero, 0x55($s1)
    ctx->pc = 0x13c944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 0));
label_13c948:
    // 0x13c948: 0x10000070  b           . + 4 + (0x70 << 2)
label_13c94c:
    if (ctx->pc == 0x13C94Cu) {
        ctx->pc = 0x13C950u;
        goto label_13c950;
    }
    ctx->pc = 0x13C948u;
    {
        const bool branch_taken_0x13c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c948) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13C950u;
label_13c950:
    // 0x13c950: 0x10000017  b           . + 4 + (0x17 << 2)
label_13c954:
    if (ctx->pc == 0x13C954u) {
        ctx->pc = 0x13C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C950u;
        // 0x13c954: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C958u;
        goto label_13c958;
    }
    ctx->pc = 0x13C950u;
    {
        const bool branch_taken_0x13c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C950u;
        // 0x13c954: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c950) {
            ctx->pc = 0x13C9B0u;
            goto label_13c9b0;
        }
    }
    ctx->pc = 0x13C958u;
label_13c958:
    // 0x13c958: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13c95c:
    // 0x13c95c: 0xc061bd0  jal         func_186F40
label_13c960:
    if (ctx->pc == 0x13C960u) {
        ctx->pc = 0x13C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C95Cu;
        // 0x13c960: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C964u;
        goto label_13c964;
    }
    ctx->pc = 0x13C95Cu;
    SET_GPR_U32(ctx, 31, 0x13C964u);
    ctx->pc = 0x13C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C95Cu;
    // 0x13c960: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x13C95Cu, 0x13C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C964u;
label_13c964:
    // 0x13c964: 0xc061b50  jal         func_186D40
label_13c968:
    if (ctx->pc == 0x13C968u) {
        ctx->pc = 0x13C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C964u;
        // 0x13c968: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C96Cu;
        goto label_13c96c;
    }
    ctx->pc = 0x13C964u;
    SET_GPR_U32(ctx, 31, 0x13C96Cu);
    ctx->pc = 0x13C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C964u;
    // 0x13c968: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13C964u, 0x13C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C96Cu;
label_13c96c:
    // 0x13c96c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13c970:
    // 0x13c970: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_13c974:
    if (ctx->pc == 0x13C974u) {
        ctx->pc = 0x13C978u;
        goto label_13c978;
    }
    ctx->pc = 0x13C970u;
    {
        const bool branch_taken_0x13c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13c970) {
            ctx->pc = 0x13C994u;
            goto label_13c994;
        }
    }
    ctx->pc = 0x13C978u;
label_13c978:
    // 0x13c978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c97c:
    // 0x13c97c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_13c980:
    if (ctx->pc == 0x13C980u) {
        ctx->pc = 0x13C984u;
        goto label_13c984;
    }
    ctx->pc = 0x13C97Cu;
    {
        const bool branch_taken_0x13c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c97c) {
            ctx->pc = 0x13C98Cu;
            goto label_13c98c;
        }
    }
    ctx->pc = 0x13C984u;
label_13c984:
    // 0x13c984: 0x10000006  b           . + 4 + (0x6 << 2)
label_13c988:
    if (ctx->pc == 0x13C988u) {
        ctx->pc = 0x13C98Cu;
        goto label_13c98c;
    }
    ctx->pc = 0x13C984u;
    {
        const bool branch_taken_0x13c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c984) {
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C98Cu;
label_13c98c:
    // 0x13c98c: 0x10000008  b           . + 4 + (0x8 << 2)
label_13c990:
    if (ctx->pc == 0x13C990u) {
        ctx->pc = 0x13C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C98Cu;
        // 0x13c990: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C994u;
        goto label_13c994;
    }
    ctx->pc = 0x13C98Cu;
    {
        const bool branch_taken_0x13c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C98Cu;
        // 0x13c990: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c98c) {
            ctx->pc = 0x13C9B0u;
            goto label_13c9b0;
        }
    }
    ctx->pc = 0x13C994u;
label_13c994:
    // 0x13c994: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13c998:
    // 0x13c998: 0x10000005  b           . + 4 + (0x5 << 2)
label_13c99c:
    if (ctx->pc == 0x13C99Cu) {
        ctx->pc = 0x13C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C998u;
        // 0x13c99c: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9A0u;
        goto label_13c9a0;
    }
    ctx->pc = 0x13C998u;
    {
        const bool branch_taken_0x13c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C998u;
        // 0x13c99c: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c998) {
            ctx->pc = 0x13C9B0u;
            goto label_13c9b0;
        }
    }
    ctx->pc = 0x13C9A0u;
label_13c9a0:
    // 0x13c9a0: 0x1000005a  b           . + 4 + (0x5A << 2)
label_13c9a4:
    if (ctx->pc == 0x13C9A4u) {
        ctx->pc = 0x13C9A8u;
        goto label_13c9a8;
    }
    ctx->pc = 0x13C9A0u;
    {
        const bool branch_taken_0x13c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9a0) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13C9A8u;
label_13c9a8:
    // 0x13c9a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13c9ac:
    // 0x13c9ac: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x13c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_13c9b0:
    // 0x13c9b0: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_13c9b4:
    // 0x13c9b4: 0xc050714  jal         func_141C50
label_13c9b8:
    if (ctx->pc == 0x13C9B8u) {
        ctx->pc = 0x13C9BCu;
        goto label_13c9bc;
    }
    ctx->pc = 0x13C9B4u;
    SET_GPR_U32(ctx, 31, 0x13C9BCu);
    ctx->pc = 0x141C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C50u, 0x13C9B4u, 0x13C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9BCu;
label_13c9bc:
    // 0x13c9bc: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_13c9c0:
    // 0x13c9c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13c9c4:
    if (ctx->pc == 0x13C9C4u) {
        ctx->pc = 0x13C9C8u;
        goto label_13c9c8;
    }
    ctx->pc = 0x13C9C0u;
    {
        const bool branch_taken_0x13c9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9c0) {
            ctx->pc = 0x13C9E4u;
            goto label_13c9e4;
        }
    }
    ctx->pc = 0x13C9C8u;
label_13c9c8:
    // 0x13c9c8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c9cc:
    // 0x13c9cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13c9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13c9d0:
    // 0x13c9d0: 0x320f809  jalr        $t9
label_13c9d4:
    if (ctx->pc == 0x13C9D4u) {
        ctx->pc = 0x13C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D0u;
        // 0x13c9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9D8u;
        goto label_13c9d8;
    }
    ctx->pc = 0x13C9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C9D8u);
        ctx->pc = 0x13C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D0u;
        // 0x13c9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C9D0u, 0x13C9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C9D8u;
label_13c9d8:
    // 0x13c9d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13c9dc:
    if (ctx->pc == 0x13C9DCu) {
        ctx->pc = 0x13C9E0u;
        goto label_13c9e0;
    }
    ctx->pc = 0x13C9D8u;
    {
        const bool branch_taken_0x13c9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9d8) {
            ctx->pc = 0x13C9E4u;
            goto label_13c9e4;
        }
    }
    ctx->pc = 0x13C9E0u;
label_13c9e0:
    // 0x13c9e0: 0xa2200055  sb          $zero, 0x55($s1)
    ctx->pc = 0x13c9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 0));
label_13c9e4:
    // 0x13c9e4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_13c9e8:
    // 0x13c9e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13c9ec:
    if (ctx->pc == 0x13C9ECu) {
        ctx->pc = 0x13C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9E8u;
        // 0x13c9ec: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9F0u;
        goto label_13c9f0;
    }
    ctx->pc = 0x13C9E8u;
    {
        const bool branch_taken_0x13c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9E8u;
        // 0x13c9ec: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9e8) {
            ctx->pc = 0x13CA0Cu;
            goto label_13ca0c;
        }
    }
    ctx->pc = 0x13C9F0u;
label_13c9f0:
    // 0x13c9f0: 0xc0512c8  jal         func_144B20
label_13c9f4:
    if (ctx->pc == 0x13C9F4u) {
        ctx->pc = 0x13C9F8u;
        goto label_13c9f8;
    }
    ctx->pc = 0x13C9F0u;
    SET_GPR_U32(ctx, 31, 0x13C9F8u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x13C9F0u, 0x13C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9F8u;
label_13c9f8:
    // 0x13c9f8: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_13c9fc:
    // 0x13c9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ca00:
    // 0x13ca00: 0xc051324  jal         func_144C90
label_13ca04:
    if (ctx->pc == 0x13CA04u) {
        ctx->pc = 0x13CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA00u;
        // 0x13ca04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA08u;
        goto label_13ca08;
    }
    ctx->pc = 0x13CA00u;
    SET_GPR_U32(ctx, 31, 0x13CA08u);
    ctx->pc = 0x13CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA00u;
    // 0x13ca04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x13CA00u, 0x13CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA08u;
label_13ca08:
    // 0x13ca08: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_13ca0c:
    // 0x13ca0c: 0xc04c554  jal         func_131550
label_13ca10:
    if (ctx->pc == 0x13CA10u) {
        ctx->pc = 0x13CA14u;
        goto label_13ca14;
    }
    ctx->pc = 0x13CA0Cu;
    SET_GPR_U32(ctx, 31, 0x13CA14u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13CA0Cu, 0x13CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA14u;
label_13ca14:
    // 0x13ca14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ca18:
    // 0x13ca18: 0xc04c550  jal         func_131540
label_13ca1c:
    if (ctx->pc == 0x13CA1Cu) {
        ctx->pc = 0x13CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA18u;
        // 0x13ca1c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA20u;
        goto label_13ca20;
    }
    ctx->pc = 0x13CA18u;
    SET_GPR_U32(ctx, 31, 0x13CA20u);
    ctx->pc = 0x13CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA18u;
    // 0x13ca1c: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13CA18u, 0x13CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA20u;
label_13ca20:
    // 0x13ca20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_13ca24:
    // 0x13ca24: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_13ca28:
    // 0x13ca28: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x13ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_13ca2c:
    // 0x13ca2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_13ca30:
    // 0x13ca30: 0xc04c554  jal         func_131550
label_13ca34:
    if (ctx->pc == 0x13CA34u) {
        ctx->pc = 0x13CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA30u;
        // 0x13ca34: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA38u;
        goto label_13ca38;
    }
    ctx->pc = 0x13CA30u;
    SET_GPR_U32(ctx, 31, 0x13CA38u);
    ctx->pc = 0x13CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA30u;
    // 0x13ca34: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13CA30u, 0x13CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA38u;
label_13ca38:
    // 0x13ca38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13ca3c:
    // 0x13ca3c: 0xc04c54c  jal         func_131530
label_13ca40:
    if (ctx->pc == 0x13CA40u) {
        ctx->pc = 0x13CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA3Cu;
        // 0x13ca40: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA44u;
        goto label_13ca44;
    }
    ctx->pc = 0x13CA3Cu;
    SET_GPR_U32(ctx, 31, 0x13CA44u);
    ctx->pc = 0x13CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA3Cu;
    // 0x13ca40: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13CA3Cu, 0x13CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA44u;
label_13ca44:
    // 0x13ca44: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_13ca48:
    // 0x13ca48: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_13ca4c:
    // 0x13ca4c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x13ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13ca50:
    // 0x13ca50: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x13ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
label_13ca54:
    // 0x13ca54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ca58:
    // 0x13ca58: 0x10000016  b           . + 4 + (0x16 << 2)
label_13ca5c:
    if (ctx->pc == 0x13CA5Cu) {
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA60u;
        goto label_13ca60;
    }
    ctx->pc = 0x13CA58u;
    {
        const bool branch_taken_0x13ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA58u;
        // 0x13ca5c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca58) {
            ctx->pc = 0x13CAB4u;
            goto label_13cab4;
        }
    }
    ctx->pc = 0x13CA60u;
label_13ca60:
    // 0x13ca60: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x13ca60u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_13ca64:
    // 0x13ca64: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x13ca64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_13ca68:
    // 0x13ca68: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x13ca68u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_13ca6c:
    // 0x13ca6c: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x13ca6cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_13ca70:
    // 0x13ca70: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13ca74:
    // 0x13ca74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ca78:
    // 0x13ca78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ca7c:
    // 0x13ca7c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x13ca7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_13ca80:
    // 0x13ca80: 0x320f809  jalr        $t9
label_13ca84:
    if (ctx->pc == 0x13CA84u) {
        ctx->pc = 0x13CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA80u;
        // 0x13ca84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CA88u;
        goto label_13ca88;
    }
    ctx->pc = 0x13CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CA88u);
        ctx->pc = 0x13CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA80u;
        // 0x13ca84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA80u, 0x13CA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CA88u;
label_13ca88:
    // 0x13ca88: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x13ca88u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_13ca8c:
    // 0x13ca8c: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x13ca8cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_13ca90:
    // 0x13ca90: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x13ca90u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_13ca94:
    // 0x13ca94: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x13ca94u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_13ca98:
    // 0x13ca98: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13ca9c:
    // 0x13ca9c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x13ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13caa0:
    // 0x13caa0: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x13caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_13caa4:
    // 0x13caa4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13caa8:
    // 0x13caa8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x13caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_13caac:
    // 0x13caac: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x13caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_13cab0:
    // 0x13cab0: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_13cab4:
    // 0x13cab4: 0x0  nop
    ctx->pc = 0x13cab4u;
    // NOP
label_13cab8:
    // 0x13cab8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x13cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13cabc:
    // 0x13cabc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x13cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_13cac0:
    // 0x13cac0: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
label_13cac4:
    if (ctx->pc == 0x13CAC4u) {
        ctx->pc = 0x13CAC8u;
        goto label_13cac8;
    }
    ctx->pc = 0x13CAC0u;
    {
        const bool branch_taken_0x13cac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13cac0) {
            ctx->pc = 0x13CA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ca60;
        }
    }
    ctx->pc = 0x13CAC8u;
label_13cac8:
    // 0x13cac8: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_13cacc:
    // 0x13cacc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_13cad0:
    if (ctx->pc == 0x13CAD0u) {
        ctx->pc = 0x13CAD4u;
        goto label_13cad4;
    }
    ctx->pc = 0x13CACCu;
    {
        const bool branch_taken_0x13cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cacc) {
            ctx->pc = 0x13CAE8u;
            goto label_13cae8;
        }
    }
    ctx->pc = 0x13CAD4u;
label_13cad4:
    // 0x13cad4: 0xc0512c8  jal         func_144B20
label_13cad8:
    if (ctx->pc == 0x13CAD8u) {
        ctx->pc = 0x13CADCu;
        goto label_13cadc;
    }
    ctx->pc = 0x13CAD4u;
    SET_GPR_U32(ctx, 31, 0x13CADCu);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x13CAD4u, 0x13CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CADCu;
label_13cadc:
    // 0x13cadc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cae0:
    // 0x13cae0: 0xc051334  jal         func_144CD0
label_13cae4:
    if (ctx->pc == 0x13CAE4u) {
        ctx->pc = 0x13CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAE0u;
        // 0x13cae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAE8u;
        goto label_13cae8;
    }
    ctx->pc = 0x13CAE0u;
    SET_GPR_U32(ctx, 31, 0x13CAE8u);
    ctx->pc = 0x13CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAE0u;
    // 0x13cae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CD0u, 0x13CAE0u, 0x13CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAE8u;
label_13cae8:
    // 0x13cae8: 0x8f858330  lw          $a1, -0x7CD0($gp)
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
label_13caec:
    // 0x13caec: 0x27848328  addiu       $a0, $gp, -0x7CD8
    ctx->pc = 0x13caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
label_13caf0:
    // 0x13caf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13caf4:
    // 0x13caf4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_13caf8:
    // 0x13caf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13cafc:
    // 0x13cafc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13cb00:
    // 0x13cb00: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_13cb04:
    // 0x13cb04: 0x4610001  bgez        $v1, . + 4 + (0x1 << 2)
label_13cb08:
    if (ctx->pc == 0x13CB08u) {
        ctx->pc = 0x13CB0Cu;
        goto label_13cb0c;
    }
    ctx->pc = 0x13CB04u;
    {
        const bool branch_taken_0x13cb04 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13cb04) {
            ctx->pc = 0x13CB0Cu;
            goto label_13cb0c;
        }
    }
    ctx->pc = 0x13CB0Cu;
label_13cb0c:
    // 0x13cb0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13cb10:
    // 0x13cb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13cb14:
    // 0x13cb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13cb18:
    // 0x13cb18: 0x3e00008  jr          $ra
label_13cb1c:
    if (ctx->pc == 0x13CB1Cu) {
        ctx->pc = 0x13CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB18u;
        // 0x13cb1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CB20u;
        goto label_fallthrough_0x13cb18;
    }
    ctx->pc = 0x13CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB18u;
        // 0x13cb1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cb18:
    ctx->pc = 0x13CB20u;
}
