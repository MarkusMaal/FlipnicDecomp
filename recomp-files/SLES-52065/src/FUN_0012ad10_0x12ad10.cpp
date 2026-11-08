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

// Function: FUN_0012ad10
// Address: 0x12ad10 - 0x12b1b4
void FUN_0012ad10_0x12ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ad10_0x12ad10");
#endif

    switch (ctx->pc) {
        case 0x12ad10u: goto label_12ad10;
        case 0x12ad14u: goto label_12ad14;
        case 0x12ad18u: goto label_12ad18;
        case 0x12ad1cu: goto label_12ad1c;
        case 0x12ad20u: goto label_12ad20;
        case 0x12ad24u: goto label_12ad24;
        case 0x12ad28u: goto label_12ad28;
        case 0x12ad2cu: goto label_12ad2c;
        case 0x12ad30u: goto label_12ad30;
        case 0x12ad34u: goto label_12ad34;
        case 0x12ad38u: goto label_12ad38;
        case 0x12ad3cu: goto label_12ad3c;
        case 0x12ad40u: goto label_12ad40;
        case 0x12ad44u: goto label_12ad44;
        case 0x12ad48u: goto label_12ad48;
        case 0x12ad4cu: goto label_12ad4c;
        case 0x12ad50u: goto label_12ad50;
        case 0x12ad54u: goto label_12ad54;
        case 0x12ad58u: goto label_12ad58;
        case 0x12ad5cu: goto label_12ad5c;
        case 0x12ad60u: goto label_12ad60;
        case 0x12ad64u: goto label_12ad64;
        case 0x12ad68u: goto label_12ad68;
        case 0x12ad6cu: goto label_12ad6c;
        case 0x12ad70u: goto label_12ad70;
        case 0x12ad74u: goto label_12ad74;
        case 0x12ad78u: goto label_12ad78;
        case 0x12ad7cu: goto label_12ad7c;
        case 0x12ad80u: goto label_12ad80;
        case 0x12ad84u: goto label_12ad84;
        case 0x12ad88u: goto label_12ad88;
        case 0x12ad8cu: goto label_12ad8c;
        case 0x12ad90u: goto label_12ad90;
        case 0x12ad94u: goto label_12ad94;
        case 0x12ad98u: goto label_12ad98;
        case 0x12ad9cu: goto label_12ad9c;
        case 0x12ada0u: goto label_12ada0;
        case 0x12ada4u: goto label_12ada4;
        case 0x12ada8u: goto label_12ada8;
        case 0x12adacu: goto label_12adac;
        case 0x12adb0u: goto label_12adb0;
        case 0x12adb4u: goto label_12adb4;
        case 0x12adb8u: goto label_12adb8;
        case 0x12adbcu: goto label_12adbc;
        case 0x12adc0u: goto label_12adc0;
        case 0x12adc4u: goto label_12adc4;
        case 0x12adc8u: goto label_12adc8;
        case 0x12adccu: goto label_12adcc;
        case 0x12add0u: goto label_12add0;
        case 0x12add4u: goto label_12add4;
        case 0x12add8u: goto label_12add8;
        case 0x12addcu: goto label_12addc;
        case 0x12ade0u: goto label_12ade0;
        case 0x12ade4u: goto label_12ade4;
        case 0x12ade8u: goto label_12ade8;
        case 0x12adecu: goto label_12adec;
        case 0x12adf0u: goto label_12adf0;
        case 0x12adf4u: goto label_12adf4;
        case 0x12adf8u: goto label_12adf8;
        case 0x12adfcu: goto label_12adfc;
        case 0x12ae00u: goto label_12ae00;
        case 0x12ae04u: goto label_12ae04;
        case 0x12ae08u: goto label_12ae08;
        case 0x12ae0cu: goto label_12ae0c;
        case 0x12ae10u: goto label_12ae10;
        case 0x12ae14u: goto label_12ae14;
        case 0x12ae18u: goto label_12ae18;
        case 0x12ae1cu: goto label_12ae1c;
        case 0x12ae20u: goto label_12ae20;
        case 0x12ae24u: goto label_12ae24;
        case 0x12ae28u: goto label_12ae28;
        case 0x12ae2cu: goto label_12ae2c;
        case 0x12ae30u: goto label_12ae30;
        case 0x12ae34u: goto label_12ae34;
        case 0x12ae38u: goto label_12ae38;
        case 0x12ae3cu: goto label_12ae3c;
        case 0x12ae40u: goto label_12ae40;
        case 0x12ae44u: goto label_12ae44;
        case 0x12ae48u: goto label_12ae48;
        case 0x12ae4cu: goto label_12ae4c;
        case 0x12ae50u: goto label_12ae50;
        case 0x12ae54u: goto label_12ae54;
        case 0x12ae58u: goto label_12ae58;
        case 0x12ae5cu: goto label_12ae5c;
        case 0x12ae60u: goto label_12ae60;
        case 0x12ae64u: goto label_12ae64;
        case 0x12ae68u: goto label_12ae68;
        case 0x12ae6cu: goto label_12ae6c;
        case 0x12ae70u: goto label_12ae70;
        case 0x12ae74u: goto label_12ae74;
        case 0x12ae78u: goto label_12ae78;
        case 0x12ae7cu: goto label_12ae7c;
        case 0x12ae80u: goto label_12ae80;
        case 0x12ae84u: goto label_12ae84;
        case 0x12ae88u: goto label_12ae88;
        case 0x12ae8cu: goto label_12ae8c;
        case 0x12ae90u: goto label_12ae90;
        case 0x12ae94u: goto label_12ae94;
        case 0x12ae98u: goto label_12ae98;
        case 0x12ae9cu: goto label_12ae9c;
        case 0x12aea0u: goto label_12aea0;
        case 0x12aea4u: goto label_12aea4;
        case 0x12aea8u: goto label_12aea8;
        case 0x12aeacu: goto label_12aeac;
        case 0x12aeb0u: goto label_12aeb0;
        case 0x12aeb4u: goto label_12aeb4;
        case 0x12aeb8u: goto label_12aeb8;
        case 0x12aebcu: goto label_12aebc;
        case 0x12aec0u: goto label_12aec0;
        case 0x12aec4u: goto label_12aec4;
        case 0x12aec8u: goto label_12aec8;
        case 0x12aeccu: goto label_12aecc;
        case 0x12aed0u: goto label_12aed0;
        case 0x12aed4u: goto label_12aed4;
        case 0x12aed8u: goto label_12aed8;
        case 0x12aedcu: goto label_12aedc;
        case 0x12aee0u: goto label_12aee0;
        case 0x12aee4u: goto label_12aee4;
        case 0x12aee8u: goto label_12aee8;
        case 0x12aeecu: goto label_12aeec;
        case 0x12aef0u: goto label_12aef0;
        case 0x12aef4u: goto label_12aef4;
        case 0x12aef8u: goto label_12aef8;
        case 0x12aefcu: goto label_12aefc;
        case 0x12af00u: goto label_12af00;
        case 0x12af04u: goto label_12af04;
        case 0x12af08u: goto label_12af08;
        case 0x12af0cu: goto label_12af0c;
        case 0x12af10u: goto label_12af10;
        case 0x12af14u: goto label_12af14;
        case 0x12af18u: goto label_12af18;
        case 0x12af1cu: goto label_12af1c;
        case 0x12af20u: goto label_12af20;
        case 0x12af24u: goto label_12af24;
        case 0x12af28u: goto label_12af28;
        case 0x12af2cu: goto label_12af2c;
        case 0x12af30u: goto label_12af30;
        case 0x12af34u: goto label_12af34;
        case 0x12af38u: goto label_12af38;
        case 0x12af3cu: goto label_12af3c;
        case 0x12af40u: goto label_12af40;
        case 0x12af44u: goto label_12af44;
        case 0x12af48u: goto label_12af48;
        case 0x12af4cu: goto label_12af4c;
        case 0x12af50u: goto label_12af50;
        case 0x12af54u: goto label_12af54;
        case 0x12af58u: goto label_12af58;
        case 0x12af5cu: goto label_12af5c;
        case 0x12af60u: goto label_12af60;
        case 0x12af64u: goto label_12af64;
        case 0x12af68u: goto label_12af68;
        case 0x12af6cu: goto label_12af6c;
        case 0x12af70u: goto label_12af70;
        case 0x12af74u: goto label_12af74;
        case 0x12af78u: goto label_12af78;
        case 0x12af7cu: goto label_12af7c;
        case 0x12af80u: goto label_12af80;
        case 0x12af84u: goto label_12af84;
        case 0x12af88u: goto label_12af88;
        case 0x12af8cu: goto label_12af8c;
        case 0x12af90u: goto label_12af90;
        case 0x12af94u: goto label_12af94;
        case 0x12af98u: goto label_12af98;
        case 0x12af9cu: goto label_12af9c;
        case 0x12afa0u: goto label_12afa0;
        case 0x12afa4u: goto label_12afa4;
        case 0x12afa8u: goto label_12afa8;
        case 0x12afacu: goto label_12afac;
        case 0x12afb0u: goto label_12afb0;
        case 0x12afb4u: goto label_12afb4;
        case 0x12afb8u: goto label_12afb8;
        case 0x12afbcu: goto label_12afbc;
        case 0x12afc0u: goto label_12afc0;
        case 0x12afc4u: goto label_12afc4;
        case 0x12afc8u: goto label_12afc8;
        case 0x12afccu: goto label_12afcc;
        case 0x12afd0u: goto label_12afd0;
        case 0x12afd4u: goto label_12afd4;
        case 0x12afd8u: goto label_12afd8;
        case 0x12afdcu: goto label_12afdc;
        case 0x12afe0u: goto label_12afe0;
        case 0x12afe4u: goto label_12afe4;
        case 0x12afe8u: goto label_12afe8;
        case 0x12afecu: goto label_12afec;
        case 0x12aff0u: goto label_12aff0;
        case 0x12aff4u: goto label_12aff4;
        case 0x12aff8u: goto label_12aff8;
        case 0x12affcu: goto label_12affc;
        case 0x12b000u: goto label_12b000;
        case 0x12b004u: goto label_12b004;
        case 0x12b008u: goto label_12b008;
        case 0x12b00cu: goto label_12b00c;
        case 0x12b010u: goto label_12b010;
        case 0x12b014u: goto label_12b014;
        case 0x12b018u: goto label_12b018;
        case 0x12b01cu: goto label_12b01c;
        case 0x12b020u: goto label_12b020;
        case 0x12b024u: goto label_12b024;
        case 0x12b028u: goto label_12b028;
        case 0x12b02cu: goto label_12b02c;
        case 0x12b030u: goto label_12b030;
        case 0x12b034u: goto label_12b034;
        case 0x12b038u: goto label_12b038;
        case 0x12b03cu: goto label_12b03c;
        case 0x12b040u: goto label_12b040;
        case 0x12b044u: goto label_12b044;
        case 0x12b048u: goto label_12b048;
        case 0x12b04cu: goto label_12b04c;
        case 0x12b050u: goto label_12b050;
        case 0x12b054u: goto label_12b054;
        case 0x12b058u: goto label_12b058;
        case 0x12b05cu: goto label_12b05c;
        case 0x12b060u: goto label_12b060;
        case 0x12b064u: goto label_12b064;
        case 0x12b068u: goto label_12b068;
        case 0x12b06cu: goto label_12b06c;
        case 0x12b070u: goto label_12b070;
        case 0x12b074u: goto label_12b074;
        case 0x12b078u: goto label_12b078;
        case 0x12b07cu: goto label_12b07c;
        case 0x12b080u: goto label_12b080;
        case 0x12b084u: goto label_12b084;
        case 0x12b088u: goto label_12b088;
        case 0x12b08cu: goto label_12b08c;
        case 0x12b090u: goto label_12b090;
        case 0x12b094u: goto label_12b094;
        case 0x12b098u: goto label_12b098;
        case 0x12b09cu: goto label_12b09c;
        case 0x12b0a0u: goto label_12b0a0;
        case 0x12b0a4u: goto label_12b0a4;
        case 0x12b0a8u: goto label_12b0a8;
        case 0x12b0acu: goto label_12b0ac;
        case 0x12b0b0u: goto label_12b0b0;
        case 0x12b0b4u: goto label_12b0b4;
        case 0x12b0b8u: goto label_12b0b8;
        case 0x12b0bcu: goto label_12b0bc;
        case 0x12b0c0u: goto label_12b0c0;
        case 0x12b0c4u: goto label_12b0c4;
        case 0x12b0c8u: goto label_12b0c8;
        case 0x12b0ccu: goto label_12b0cc;
        case 0x12b0d0u: goto label_12b0d0;
        case 0x12b0d4u: goto label_12b0d4;
        case 0x12b0d8u: goto label_12b0d8;
        case 0x12b0dcu: goto label_12b0dc;
        case 0x12b0e0u: goto label_12b0e0;
        case 0x12b0e4u: goto label_12b0e4;
        case 0x12b0e8u: goto label_12b0e8;
        case 0x12b0ecu: goto label_12b0ec;
        case 0x12b0f0u: goto label_12b0f0;
        case 0x12b0f4u: goto label_12b0f4;
        case 0x12b0f8u: goto label_12b0f8;
        case 0x12b0fcu: goto label_12b0fc;
        case 0x12b100u: goto label_12b100;
        case 0x12b104u: goto label_12b104;
        case 0x12b108u: goto label_12b108;
        case 0x12b10cu: goto label_12b10c;
        case 0x12b110u: goto label_12b110;
        case 0x12b114u: goto label_12b114;
        case 0x12b118u: goto label_12b118;
        case 0x12b11cu: goto label_12b11c;
        case 0x12b120u: goto label_12b120;
        case 0x12b124u: goto label_12b124;
        case 0x12b128u: goto label_12b128;
        case 0x12b12cu: goto label_12b12c;
        case 0x12b130u: goto label_12b130;
        case 0x12b134u: goto label_12b134;
        case 0x12b138u: goto label_12b138;
        case 0x12b13cu: goto label_12b13c;
        case 0x12b140u: goto label_12b140;
        case 0x12b144u: goto label_12b144;
        case 0x12b148u: goto label_12b148;
        case 0x12b14cu: goto label_12b14c;
        case 0x12b150u: goto label_12b150;
        case 0x12b154u: goto label_12b154;
        case 0x12b158u: goto label_12b158;
        case 0x12b15cu: goto label_12b15c;
        case 0x12b160u: goto label_12b160;
        case 0x12b164u: goto label_12b164;
        case 0x12b168u: goto label_12b168;
        case 0x12b16cu: goto label_12b16c;
        case 0x12b170u: goto label_12b170;
        case 0x12b174u: goto label_12b174;
        case 0x12b178u: goto label_12b178;
        case 0x12b17cu: goto label_12b17c;
        case 0x12b180u: goto label_12b180;
        case 0x12b184u: goto label_12b184;
        case 0x12b188u: goto label_12b188;
        case 0x12b18cu: goto label_12b18c;
        case 0x12b190u: goto label_12b190;
        case 0x12b194u: goto label_12b194;
        case 0x12b198u: goto label_12b198;
        case 0x12b19cu: goto label_12b19c;
        case 0x12b1a0u: goto label_12b1a0;
        case 0x12b1a4u: goto label_12b1a4;
        case 0x12b1a8u: goto label_12b1a8;
        case 0x12b1acu: goto label_12b1ac;
        case 0x12b1b0u: goto label_12b1b0;
        default: break;
    }

    ctx->pc = 0x12ad10u;

label_12ad10:
    // 0x12ad10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x12ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_12ad14:
    // 0x12ad14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x12ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_12ad18:
    // 0x12ad18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x12ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_12ad1c:
    // 0x12ad1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x12ad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_12ad20:
    // 0x12ad20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x12ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_12ad24:
    // 0x12ad24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12ad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_12ad28:
    // 0x12ad28: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12ad28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ad2c:
    // 0x12ad2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_12ad30:
    // 0x12ad30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_12ad34:
    // 0x12ad34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_12ad38:
    // 0x12ad38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_12ad3c:
    // 0x12ad3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_12ad40:
    // 0x12ad40: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x12ad40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12ad44:
    // 0x12ad44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x12ad44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12ad48:
    // 0x12ad48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12ad48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12ad4c:
    // 0x12ad4c: 0x8ec50028  lw          $a1, 0x28($s6)
    ctx->pc = 0x12ad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_12ad50:
    // 0x12ad50: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12ad54:
    // 0x12ad54: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x12ad54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_12ad58:
    // 0x12ad58: 0x320f809  jalr        $t9
label_12ad5c:
    if (ctx->pc == 0x12AD5Cu) {
        ctx->pc = 0x12AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD58u;
        // 0x12ad5c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD60u;
        goto label_12ad60;
    }
    ctx->pc = 0x12AD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12AD60u);
        ctx->pc = 0x12AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD58u;
        // 0x12ad5c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD58u, 0x12AD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AD60u;
label_12ad60:
    // 0x12ad60: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x12ad60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_12ad64:
    // 0x12ad64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12ad64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ad68:
    // 0x12ad68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12ad68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12ad6c:
    // 0x12ad6c: 0x320f809  jalr        $t9
label_12ad70:
    if (ctx->pc == 0x12AD70u) {
        ctx->pc = 0x12AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD6Cu;
        // 0x12ad70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD74u;
        goto label_12ad74;
    }
    ctx->pc = 0x12AD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12AD74u);
        ctx->pc = 0x12AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD6Cu;
        // 0x12ad70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD6Cu, 0x12AD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AD74u;
label_12ad74:
    // 0x12ad74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ad78:
    // 0x12ad78: 0xc04e848  jal         func_13A120
label_12ad7c:
    if (ctx->pc == 0x12AD7Cu) {
        ctx->pc = 0x12AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD78u;
        // 0x12ad7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AD80u;
        goto label_12ad80;
    }
    ctx->pc = 0x12AD78u;
    SET_GPR_U32(ctx, 31, 0x12AD80u);
    ctx->pc = 0x12AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD78u;
    // 0x12ad7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A120u, 0x12AD78u, 0x12AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD80u;
label_12ad80:
    // 0x12ad80: 0xc6c20140  lwc1        $f2, 0x140($s6)
    ctx->pc = 0x12ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ad84:
    // 0x12ad84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ad84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ad88:
    // 0x12ad88: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x12ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ad8c:
    // 0x12ad8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x12ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_12ad90:
    // 0x12ad90: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12ad90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12ad94:
    // 0x12ad94: 0x26d20054  addiu       $s2, $s6, 0x54
    ctx->pc = 0x12ad94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 84));
label_12ad98:
    // 0x12ad98: 0x26d30044  addiu       $s3, $s6, 0x44
    ctx->pc = 0x12ad98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
label_12ad9c:
    // 0x12ad9c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12ad9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_12ada0:
    // 0x12ada0: 0xe6c00140  swc1        $f0, 0x140($s6)
    ctx->pc = 0x12ada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 320), bits); }
label_12ada4:
    // 0x12ada4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x12ada4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_12ada8:
    // 0x12ada8: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x12ada8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_12adac:
    // 0x12adac: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x12adacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12adb0:
    // 0x12adb0: 0x0  nop
    ctx->pc = 0x12adb0u;
    // NOP
label_12adb4:
    // 0x12adb4: 0x45000076  bc1f        . + 4 + (0x76 << 2)
label_12adb8:
    if (ctx->pc == 0x12ADB8u) {
        ctx->pc = 0x12ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADB4u;
        // 0x12adb8: 0x26d40064  addiu       $s4, $s6, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADBCu;
        goto label_12adbc;
    }
    ctx->pc = 0x12ADB4u;
    {
        const bool branch_taken_0x12adb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADB4u;
        // 0x12adb8: 0x26d40064  addiu       $s4, $s6, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adb4) {
            ctx->pc = 0x12AF90u;
            goto label_12af90;
        }
    }
    ctx->pc = 0x12ADBCu;
label_12adbc:
    // 0x12adbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12adc0:
    // 0x12adc0: 0x26d700e0  addiu       $s7, $s6, 0xE0
    ctx->pc = 0x12adc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
label_12adc4:
    // 0x12adc4: 0x26c500c0  addiu       $a1, $s6, 0xC0
    ctx->pc = 0x12adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
label_12adc8:
    // 0x12adc8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12adc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12adcc:
    // 0x12adcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12adccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12add0:
    // 0x12add0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12add0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12add4:
    // 0x12add4: 0xc061ab4  jal         func_186AD0
label_12add8:
    if (ctx->pc == 0x12ADD8u) {
        ctx->pc = 0x12ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD4u;
        // 0x12add8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADDCu;
        goto label_12addc;
    }
    ctx->pc = 0x12ADD4u;
    SET_GPR_U32(ctx, 31, 0x12ADDCu);
    ctx->pc = 0x12ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADD4u;
    // 0x12add8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12ADD4u, 0x12ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ADDCu;
label_12addc:
    // 0x12addc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12ade0:
    // 0x12ade0: 0x26d500f0  addiu       $s5, $s6, 0xF0
    ctx->pc = 0x12ade0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 240));
label_12ade4:
    // 0x12ade4: 0x26c500d0  addiu       $a1, $s6, 0xD0
    ctx->pc = 0x12ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_12ade8:
    // 0x12ade8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12ade8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12adec:
    // 0x12adec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12adecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12adf0:
    // 0x12adf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12adf4:
    // 0x12adf4: 0xc061ab4  jal         func_186AD0
label_12adf8:
    if (ctx->pc == 0x12ADF8u) {
        ctx->pc = 0x12ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADF4u;
        // 0x12adf8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADFCu;
        goto label_12adfc;
    }
    ctx->pc = 0x12ADF4u;
    SET_GPR_U32(ctx, 31, 0x12ADFCu);
    ctx->pc = 0x12ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADF4u;
    // 0x12adf8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12ADF4u, 0x12ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ADFCu;
label_12adfc:
    // 0x12adfc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_12ae00:
    // 0x12ae00: 0x26de0120  addiu       $fp, $s6, 0x120
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
label_12ae04:
    // 0x12ae04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ae04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ae08:
    // 0x12ae08: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_12ae0c:
    // 0x12ae0c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12ae0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12ae10:
    // 0x12ae10: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12ae10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12ae14:
    // 0x12ae14: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x12ae14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_12ae18:
    // 0x12ae18: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_12ae1c:
    // 0x12ae1c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x12ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12ae20:
    // 0x12ae20: 0xc061ab4  jal         func_186AD0
label_12ae24:
    if (ctx->pc == 0x12AE24u) {
        ctx->pc = 0x12AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE20u;
        // 0x12ae24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE28u;
        goto label_12ae28;
    }
    ctx->pc = 0x12AE20u;
    SET_GPR_U32(ctx, 31, 0x12AE28u);
    ctx->pc = 0x12AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE20u;
    // 0x12ae24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AE20u, 0x12AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE28u;
label_12ae28:
    // 0x12ae28: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_12ae2c:
    // 0x12ae2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12ae2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12ae30:
    // 0x12ae30: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12ae30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12ae34:
    // 0x12ae34: 0x26d20130  addiu       $s2, $s6, 0x130
    ctx->pc = 0x12ae34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
label_12ae38:
    // 0x12ae38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12ae3c:
    // 0x12ae3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12ae3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ae40:
    // 0x12ae40: 0xc061ab4  jal         func_186AD0
label_12ae44:
    if (ctx->pc == 0x12AE44u) {
        ctx->pc = 0x12AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE40u;
        // 0x12ae44: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE48u;
        goto label_12ae48;
    }
    ctx->pc = 0x12AE40u;
    SET_GPR_U32(ctx, 31, 0x12AE48u);
    ctx->pc = 0x12AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE40u;
    // 0x12ae44: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AE40u, 0x12AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE48u;
label_12ae48:
    // 0x12ae48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12ae4c:
    // 0x12ae4c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12ae50:
    // 0x12ae50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12ae54:
    // 0x12ae54: 0xc04eacc  jal         func_13AB30
label_12ae58:
    if (ctx->pc == 0x12AE58u) {
        ctx->pc = 0x12AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE54u;
        // 0x12ae58: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE5Cu;
        goto label_12ae5c;
    }
    ctx->pc = 0x12AE54u;
    SET_GPR_U32(ctx, 31, 0x12AE5Cu);
    ctx->pc = 0x12AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE54u;
    // 0x12ae58: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12AE54u, 0x12AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE5Cu;
label_12ae5c:
    // 0x12ae5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_12ae60:
    // 0x12ae60: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12ae64:
    // 0x12ae64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12ae64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ae68:
    // 0x12ae68: 0x0  nop
    ctx->pc = 0x12ae68u;
    // NOP
label_12ae6c:
    // 0x12ae6c: 0x46140581  sub.s       $f22, $f0, $f20
    ctx->pc = 0x12ae6cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_12ae70:
    // 0x12ae70: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12ae74:
    // 0x12ae74: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12ae74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12ae78:
    // 0x12ae78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12ae7c:
    // 0x12ae7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12ae80:
    // 0x12ae80: 0xc04eab8  jal         func_13AAE0
label_12ae84:
    if (ctx->pc == 0x12AE84u) {
        ctx->pc = 0x12AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE80u;
        // 0x12ae84: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE88u;
        goto label_12ae88;
    }
    ctx->pc = 0x12AE80u;
    SET_GPR_U32(ctx, 31, 0x12AE88u);
    ctx->pc = 0x12AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE80u;
    // 0x12ae84: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12AE80u, 0x12AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE88u;
label_12ae88:
    // 0x12ae88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12ae8c:
    // 0x12ae8c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12ae90:
    // 0x12ae90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12ae94:
    // 0x12ae94: 0xc04eacc  jal         func_13AB30
label_12ae98:
    if (ctx->pc == 0x12AE98u) {
        ctx->pc = 0x12AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE94u;
        // 0x12ae98: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE9Cu;
        goto label_12ae9c;
    }
    ctx->pc = 0x12AE94u;
    SET_GPR_U32(ctx, 31, 0x12AE9Cu);
    ctx->pc = 0x12AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE94u;
    // 0x12ae98: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12AE94u, 0x12AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE9Cu;
label_12ae9c:
    // 0x12ae9c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12aea0:
    // 0x12aea0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12aea4:
    // 0x12aea4: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12aea4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12aea8:
    // 0x12aea8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12aeac:
    // 0x12aeac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12aeb0:
    // 0x12aeb0: 0xc04eab8  jal         func_13AAE0
label_12aeb4:
    if (ctx->pc == 0x12AEB4u) {
        ctx->pc = 0x12AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEB0u;
        // 0x12aeb4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AEB8u;
        goto label_12aeb8;
    }
    ctx->pc = 0x12AEB0u;
    SET_GPR_U32(ctx, 31, 0x12AEB8u);
    ctx->pc = 0x12AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEB0u;
    // 0x12aeb4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12AEB0u, 0x12AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEB8u;
label_12aeb8:
    // 0x12aeb8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x12aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_12aebc:
    // 0x12aebc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12aebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12aec0:
    // 0x12aec0: 0x26c500a0  addiu       $a1, $s6, 0xA0
    ctx->pc = 0x12aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_12aec4:
    // 0x12aec4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12aec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12aec8:
    // 0x12aec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12aecc:
    // 0x12aecc: 0xc061ab4  jal         func_186AD0
label_12aed0:
    if (ctx->pc == 0x12AED0u) {
        ctx->pc = 0x12AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AECCu;
        // 0x12aed0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AED4u;
        goto label_12aed4;
    }
    ctx->pc = 0x12AECCu;
    SET_GPR_U32(ctx, 31, 0x12AED4u);
    ctx->pc = 0x12AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AECCu;
    // 0x12aed0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AECCu, 0x12AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AED4u;
label_12aed4:
    // 0x12aed4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x12aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_12aed8:
    // 0x12aed8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12aed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12aedc:
    // 0x12aedc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12aedcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12aee0:
    // 0x12aee0: 0x26c500b0  addiu       $a1, $s6, 0xB0
    ctx->pc = 0x12aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
label_12aee4:
    // 0x12aee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12aee8:
    // 0x12aee8: 0xc061ab4  jal         func_186AD0
label_12aeec:
    if (ctx->pc == 0x12AEECu) {
        ctx->pc = 0x12AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEE8u;
        // 0x12aeec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AEF0u;
        goto label_12aef0;
    }
    ctx->pc = 0x12AEE8u;
    SET_GPR_U32(ctx, 31, 0x12AEF0u);
    ctx->pc = 0x12AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEE8u;
    // 0x12aeec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AEE8u, 0x12AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEF0u;
label_12aef0:
    // 0x12aef0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_12aef4:
    // 0x12aef4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12aef8:
    // 0x12aef8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12aefc:
    // 0x12aefc: 0xc04eacc  jal         func_13AB30
label_12af00:
    if (ctx->pc == 0x12AF00u) {
        ctx->pc = 0x12AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEFCu;
        // 0x12af00: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF04u;
        goto label_12af04;
    }
    ctx->pc = 0x12AEFCu;
    SET_GPR_U32(ctx, 31, 0x12AF04u);
    ctx->pc = 0x12AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEFCu;
    // 0x12af00: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12AEFCu, 0x12AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF04u;
label_12af04:
    // 0x12af04: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12af08:
    // 0x12af08: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12af08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12af0c:
    // 0x12af0c: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12af0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12af10:
    // 0x12af10: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_12af14:
    // 0x12af14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12af14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12af18:
    // 0x12af18: 0xc04eab8  jal         func_13AAE0
label_12af1c:
    if (ctx->pc == 0x12AF1Cu) {
        ctx->pc = 0x12AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF18u;
        // 0x12af1c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF20u;
        goto label_12af20;
    }
    ctx->pc = 0x12AF18u;
    SET_GPR_U32(ctx, 31, 0x12AF20u);
    ctx->pc = 0x12AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF18u;
    // 0x12af1c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12AF18u, 0x12AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF20u;
label_12af20:
    // 0x12af20: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x12af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_12af24:
    // 0x12af24: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12af28:
    // 0x12af28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12af28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12af2c:
    // 0x12af2c: 0xc04eacc  jal         func_13AB30
label_12af30:
    if (ctx->pc == 0x12AF30u) {
        ctx->pc = 0x12AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF2Cu;
        // 0x12af30: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF34u;
        goto label_12af34;
    }
    ctx->pc = 0x12AF2Cu;
    SET_GPR_U32(ctx, 31, 0x12AF34u);
    ctx->pc = 0x12AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF2Cu;
    // 0x12af30: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12AF2Cu, 0x12AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF34u;
label_12af34:
    // 0x12af34: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12af38:
    // 0x12af38: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12af3c:
    // 0x12af3c: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12af3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12af40:
    // 0x12af40: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x12af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_12af44:
    // 0x12af44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12af48:
    // 0x12af48: 0xc04eab8  jal         func_13AAE0
label_12af4c:
    if (ctx->pc == 0x12AF4Cu) {
        ctx->pc = 0x12AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF48u;
        // 0x12af4c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF50u;
        goto label_12af50;
    }
    ctx->pc = 0x12AF48u;
    SET_GPR_U32(ctx, 31, 0x12AF50u);
    ctx->pc = 0x12AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF48u;
    // 0x12af4c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12AF48u, 0x12AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF50u;
label_12af50:
    // 0x12af50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12af54:
    // 0x12af54: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12af54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12af58:
    // 0x12af58: 0x26c50100  addiu       $a1, $s6, 0x100
    ctx->pc = 0x12af58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
label_12af5c:
    // 0x12af5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12af5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12af60:
    // 0x12af60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12af60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12af64:
    // 0x12af64: 0xc061ab4  jal         func_186AD0
label_12af68:
    if (ctx->pc == 0x12AF68u) {
        ctx->pc = 0x12AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF64u;
        // 0x12af68: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF6Cu;
        goto label_12af6c;
    }
    ctx->pc = 0x12AF64u;
    SET_GPR_U32(ctx, 31, 0x12AF6Cu);
    ctx->pc = 0x12AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF64u;
    // 0x12af68: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AF64u, 0x12AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF6Cu;
label_12af6c:
    // 0x12af6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x12af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12af70:
    // 0x12af70: 0x26c50110  addiu       $a1, $s6, 0x110
    ctx->pc = 0x12af70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
label_12af74:
    // 0x12af74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12af74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12af78:
    // 0x12af78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12af78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12af7c:
    // 0x12af7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12af80:
    // 0x12af80: 0xc061ab4  jal         func_186AD0
label_12af84:
    if (ctx->pc == 0x12AF84u) {
        ctx->pc = 0x12AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF80u;
        // 0x12af84: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF88u;
        goto label_12af88;
    }
    ctx->pc = 0x12AF80u;
    SET_GPR_U32(ctx, 31, 0x12AF88u);
    ctx->pc = 0x12AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF80u;
    // 0x12af84: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AF80u, 0x12AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF88u;
label_12af88:
    // 0x12af88: 0x1000007c  b           . + 4 + (0x7C << 2)
label_12af8c:
    if (ctx->pc == 0x12AF8Cu) {
        ctx->pc = 0x12AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF88u;
        // 0x12af8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AF90u;
        goto label_12af90;
    }
    ctx->pc = 0x12AF88u;
    {
        const bool branch_taken_0x12af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF88u;
        // 0x12af8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af88) {
            ctx->pc = 0x12B17Cu;
            goto label_12b17c;
        }
    }
    ctx->pc = 0x12AF90u;
label_12af90:
    // 0x12af90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12af94:
    // 0x12af94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12af94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_12af98:
    // 0x12af98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12af98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12af9c:
    // 0x12af9c: 0x26d700c0  addiu       $s7, $s6, 0xC0
    ctx->pc = 0x12af9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
label_12afa0:
    // 0x12afa0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12afa4:
    // 0x12afa4: 0x26c20080  addiu       $v0, $s6, 0x80
    ctx->pc = 0x12afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
label_12afa8:
    // 0x12afa8: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x12afa8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_12afac:
    // 0x12afac: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x12afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_12afb0:
    // 0x12afb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_12afb4:
    // 0x12afb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_12afb8:
    // 0x12afb8: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x12afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_12afbc:
    // 0x12afbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12afc0:
    // 0x12afc0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_12afc4:
    // 0x12afc4: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x12afc4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_12afc8:
    // 0x12afc8: 0xc061ab4  jal         func_186AD0
label_12afcc:
    if (ctx->pc == 0x12AFCCu) {
        ctx->pc = 0x12AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFC8u;
        // 0x12afcc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFD0u;
        goto label_12afd0;
    }
    ctx->pc = 0x12AFC8u;
    SET_GPR_U32(ctx, 31, 0x12AFD0u);
    ctx->pc = 0x12AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFC8u;
    // 0x12afcc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AFC8u, 0x12AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFD0u;
label_12afd0:
    // 0x12afd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12afd4:
    // 0x12afd4: 0x26d500d0  addiu       $s5, $s6, 0xD0
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_12afd8:
    // 0x12afd8: 0x26de0090  addiu       $fp, $s6, 0x90
    ctx->pc = 0x12afd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_12afdc:
    // 0x12afdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12afdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12afe0:
    // 0x12afe0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12afe4:
    // 0x12afe4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12afe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12afe8:
    // 0x12afe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12afec:
    // 0x12afec: 0xc061ab4  jal         func_186AD0
label_12aff0:
    if (ctx->pc == 0x12AFF0u) {
        ctx->pc = 0x12AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFECu;
        // 0x12aff0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AFF4u;
        goto label_12aff4;
    }
    ctx->pc = 0x12AFECu;
    SET_GPR_U32(ctx, 31, 0x12AFF4u);
    ctx->pc = 0x12AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFECu;
    // 0x12aff0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AFECu, 0x12AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFF4u;
label_12aff4:
    // 0x12aff4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_12aff8:
    // 0x12aff8: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x12aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_12affc:
    // 0x12affc: 0x26c500e0  addiu       $a1, $s6, 0xE0
    ctx->pc = 0x12affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
label_12b000:
    // 0x12b000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12b004:
    // 0x12b004: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x12b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_12b008:
    // 0x12b008: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x12b008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_12b00c:
    // 0x12b00c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x12b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_12b010:
    // 0x12b010: 0xc061ab4  jal         func_186AD0
label_12b014:
    if (ctx->pc == 0x12B014u) {
        ctx->pc = 0x12B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B010u;
        // 0x12b014: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B018u;
        goto label_12b018;
    }
    ctx->pc = 0x12B010u;
    SET_GPR_U32(ctx, 31, 0x12B018u);
    ctx->pc = 0x12B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B010u;
    // 0x12b014: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B010u, 0x12B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B018u;
label_12b018:
    // 0x12b018: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_12b01c:
    // 0x12b01c: 0x26c500f0  addiu       $a1, $s6, 0xF0
    ctx->pc = 0x12b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 240));
label_12b020:
    // 0x12b020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12b024:
    // 0x12b024: 0x26d200b0  addiu       $s2, $s6, 0xB0
    ctx->pc = 0x12b024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
label_12b028:
    // 0x12b028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12b02c:
    // 0x12b02c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12b02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b030:
    // 0x12b030: 0xc061ab4  jal         func_186AD0
label_12b034:
    if (ctx->pc == 0x12B034u) {
        ctx->pc = 0x12B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B030u;
        // 0x12b034: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B038u;
        goto label_12b038;
    }
    ctx->pc = 0x12B030u;
    SET_GPR_U32(ctx, 31, 0x12B038u);
    ctx->pc = 0x12B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B030u;
    // 0x12b034: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B030u, 0x12B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B038u;
label_12b038:
    // 0x12b038: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12b03c:
    // 0x12b03c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b040:
    // 0x12b040: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b044:
    // 0x12b044: 0xc04eacc  jal         func_13AB30
label_12b048:
    if (ctx->pc == 0x12B048u) {
        ctx->pc = 0x12B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B044u;
        // 0x12b048: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B04Cu;
        goto label_12b04c;
    }
    ctx->pc = 0x12B044u;
    SET_GPR_U32(ctx, 31, 0x12B04Cu);
    ctx->pc = 0x12B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B044u;
    // 0x12b048: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B044u, 0x12B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B04Cu;
label_12b04c:
    // 0x12b04c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x12b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_12b050:
    // 0x12b050: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b054:
    // 0x12b054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b058:
    // 0x12b058: 0x0  nop
    ctx->pc = 0x12b058u;
    // NOP
label_12b05c:
    // 0x12b05c: 0x46140580  add.s       $f22, $f0, $f20
    ctx->pc = 0x12b05cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_12b060:
    // 0x12b060: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12b064:
    // 0x12b064: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b064u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12b068:
    // 0x12b068: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12b06c:
    // 0x12b06c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b070:
    // 0x12b070: 0xc04eab8  jal         func_13AAE0
label_12b074:
    if (ctx->pc == 0x12B074u) {
        ctx->pc = 0x12B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B070u;
        // 0x12b074: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B078u;
        goto label_12b078;
    }
    ctx->pc = 0x12B070u;
    SET_GPR_U32(ctx, 31, 0x12B078u);
    ctx->pc = 0x12B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B070u;
    // 0x12b074: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B070u, 0x12B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B078u;
label_12b078:
    // 0x12b078: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12b07c:
    // 0x12b07c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b080:
    // 0x12b080: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b084:
    // 0x12b084: 0xc04eacc  jal         func_13AB30
label_12b088:
    if (ctx->pc == 0x12B088u) {
        ctx->pc = 0x12B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B084u;
        // 0x12b088: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B08Cu;
        goto label_12b08c;
    }
    ctx->pc = 0x12B084u;
    SET_GPR_U32(ctx, 31, 0x12B08Cu);
    ctx->pc = 0x12B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B084u;
    // 0x12b088: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B084u, 0x12B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B08Cu;
label_12b08c:
    // 0x12b08c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12b090:
    // 0x12b090: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b094:
    // 0x12b094: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12b098:
    // 0x12b098: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_12b09c:
    // 0x12b09c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b0a0:
    // 0x12b0a0: 0xc04eab8  jal         func_13AAE0
label_12b0a4:
    if (ctx->pc == 0x12B0A4u) {
        ctx->pc = 0x12B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0A0u;
        // 0x12b0a4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0A8u;
        goto label_12b0a8;
    }
    ctx->pc = 0x12B0A0u;
    SET_GPR_U32(ctx, 31, 0x12B0A8u);
    ctx->pc = 0x12B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0A0u;
    // 0x12b0a4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B0A0u, 0x12B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0A8u;
label_12b0a8:
    // 0x12b0a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x12b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_12b0ac:
    // 0x12b0ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12b0acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12b0b0:
    // 0x12b0b0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x12b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_12b0b4:
    // 0x12b0b4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x12b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_12b0b8:
    // 0x12b0b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12b0bc:
    // 0x12b0bc: 0xc061ab4  jal         func_186AD0
label_12b0c0:
    if (ctx->pc == 0x12B0C0u) {
        ctx->pc = 0x12B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0BCu;
        // 0x12b0c0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0C4u;
        goto label_12b0c4;
    }
    ctx->pc = 0x12B0BCu;
    SET_GPR_U32(ctx, 31, 0x12B0C4u);
    ctx->pc = 0x12B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0BCu;
    // 0x12b0c0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B0BCu, 0x12B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0C4u;
label_12b0c4:
    // 0x12b0c4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_12b0c8:
    // 0x12b0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b0cc:
    // 0x12b0cc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12b0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12b0d0:
    // 0x12b0d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12b0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_12b0d4:
    // 0x12b0d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12b0d8:
    // 0x12b0d8: 0xc061ab4  jal         func_186AD0
label_12b0dc:
    if (ctx->pc == 0x12B0DCu) {
        ctx->pc = 0x12B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0D8u;
        // 0x12b0dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0E0u;
        goto label_12b0e0;
    }
    ctx->pc = 0x12B0D8u;
    SET_GPR_U32(ctx, 31, 0x12B0E0u);
    ctx->pc = 0x12B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0D8u;
    // 0x12b0dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B0D8u, 0x12B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0E0u;
label_12b0e0:
    // 0x12b0e0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_12b0e4:
    // 0x12b0e4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b0e8:
    // 0x12b0e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b0ec:
    // 0x12b0ec: 0xc04eacc  jal         func_13AB30
label_12b0f0:
    if (ctx->pc == 0x12B0F0u) {
        ctx->pc = 0x12B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ECu;
        // 0x12b0f0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0F4u;
        goto label_12b0f4;
    }
    ctx->pc = 0x12B0ECu;
    SET_GPR_U32(ctx, 31, 0x12B0F4u);
    ctx->pc = 0x12B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0ECu;
    // 0x12b0f0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B0ECu, 0x12B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0F4u;
label_12b0f4:
    // 0x12b0f4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12b0f8:
    // 0x12b0f8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b0fc:
    // 0x12b0fc: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b0fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12b100:
    // 0x12b100: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_12b104:
    // 0x12b104: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b108:
    // 0x12b108: 0xc04eab8  jal         func_13AAE0
label_12b10c:
    if (ctx->pc == 0x12B10Cu) {
        ctx->pc = 0x12B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B108u;
        // 0x12b10c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B110u;
        goto label_12b110;
    }
    ctx->pc = 0x12B108u;
    SET_GPR_U32(ctx, 31, 0x12B110u);
    ctx->pc = 0x12B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B108u;
    // 0x12b10c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B108u, 0x12B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B110u;
label_12b110:
    // 0x12b110: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x12b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_12b114:
    // 0x12b114: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b118:
    // 0x12b118: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b11c:
    // 0x12b11c: 0xc04eacc  jal         func_13AB30
label_12b120:
    if (ctx->pc == 0x12B120u) {
        ctx->pc = 0x12B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B11Cu;
        // 0x12b120: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B124u;
        goto label_12b124;
    }
    ctx->pc = 0x12B11Cu;
    SET_GPR_U32(ctx, 31, 0x12B124u);
    ctx->pc = 0x12B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B11Cu;
    // 0x12b120: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B11Cu, 0x12B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B124u;
label_12b124:
    // 0x12b124: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_12b128:
    // 0x12b128: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12b12c:
    // 0x12b12c: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b12cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12b130:
    // 0x12b130: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x12b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_12b134:
    // 0x12b134: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b138:
    // 0x12b138: 0xc04eab8  jal         func_13AAE0
label_12b13c:
    if (ctx->pc == 0x12B13Cu) {
        ctx->pc = 0x12B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B138u;
        // 0x12b13c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B140u;
        goto label_12b140;
    }
    ctx->pc = 0x12B138u;
    SET_GPR_U32(ctx, 31, 0x12B140u);
    ctx->pc = 0x12B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B138u;
    // 0x12b13c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B138u, 0x12B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B140u;
label_12b140:
    // 0x12b140: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_12b144:
    // 0x12b144: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12b148:
    // 0x12b148: 0x26c50100  addiu       $a1, $s6, 0x100
    ctx->pc = 0x12b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
label_12b14c:
    // 0x12b14c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b14cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12b150:
    // 0x12b150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12b154:
    // 0x12b154: 0xc061ab4  jal         func_186AD0
label_12b158:
    if (ctx->pc == 0x12B158u) {
        ctx->pc = 0x12B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B154u;
        // 0x12b158: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B15Cu;
        goto label_12b15c;
    }
    ctx->pc = 0x12B154u;
    SET_GPR_U32(ctx, 31, 0x12B15Cu);
    ctx->pc = 0x12B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B154u;
    // 0x12b158: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B154u, 0x12B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B15Cu;
label_12b15c:
    // 0x12b15c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x12b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_12b160:
    // 0x12b160: 0x26c50110  addiu       $a1, $s6, 0x110
    ctx->pc = 0x12b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
label_12b164:
    // 0x12b164: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12b164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12b168:
    // 0x12b168: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12b16c:
    // 0x12b16c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_12b170:
    // 0x12b170: 0xc061ab4  jal         func_186AD0
label_12b174:
    if (ctx->pc == 0x12B174u) {
        ctx->pc = 0x12B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B170u;
        // 0x12b174: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B178u;
        goto label_12b178;
    }
    ctx->pc = 0x12B170u;
    SET_GPR_U32(ctx, 31, 0x12B178u);
    ctx->pc = 0x12B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B170u;
    // 0x12b174: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B170u, 0x12B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B178u;
label_12b178:
    // 0x12b178: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_12b17c:
    // 0x12b17c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x12b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12b180:
    // 0x12b180: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x12b180u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12b184:
    // 0x12b184: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12b188:
    // 0x12b188: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x12b188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12b18c:
    // 0x12b18c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12b190:
    // 0x12b190: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12b190u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12b194:
    // 0x12b194: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12b194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12b198:
    // 0x12b198: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12b198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12b19c:
    // 0x12b19c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12b19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12b1a0:
    // 0x12b1a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12b1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12b1a4:
    // 0x12b1a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12b1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b1a8:
    // 0x12b1a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b1ac:
    // 0x12b1ac: 0x3e00008  jr          $ra
label_12b1b0:
    if (ctx->pc == 0x12B1B0u) {
        ctx->pc = 0x12B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1ACu;
        // 0x12b1b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B1B4u;
        goto label_fallthrough_0x12b1ac;
    }
    ctx->pc = 0x12B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1ACu;
        // 0x12b1b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b1ac:
    ctx->pc = 0x12B1B4u;
}
