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

// Function: FUN_001b6010
// Address: 0x1b6010 - 0x1b624c
void FUN_001b6010_0x1b6010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6010_0x1b6010");
#endif

    switch (ctx->pc) {
        case 0x1b6010u: goto label_1b6010;
        case 0x1b6014u: goto label_1b6014;
        case 0x1b6018u: goto label_1b6018;
        case 0x1b601cu: goto label_1b601c;
        case 0x1b6020u: goto label_1b6020;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6028u: goto label_1b6028;
        case 0x1b602cu: goto label_1b602c;
        case 0x1b6030u: goto label_1b6030;
        case 0x1b6034u: goto label_1b6034;
        case 0x1b6038u: goto label_1b6038;
        case 0x1b603cu: goto label_1b603c;
        case 0x1b6040u: goto label_1b6040;
        case 0x1b6044u: goto label_1b6044;
        case 0x1b6048u: goto label_1b6048;
        case 0x1b604cu: goto label_1b604c;
        case 0x1b6050u: goto label_1b6050;
        case 0x1b6054u: goto label_1b6054;
        case 0x1b6058u: goto label_1b6058;
        case 0x1b605cu: goto label_1b605c;
        case 0x1b6060u: goto label_1b6060;
        case 0x1b6064u: goto label_1b6064;
        case 0x1b6068u: goto label_1b6068;
        case 0x1b606cu: goto label_1b606c;
        case 0x1b6070u: goto label_1b6070;
        case 0x1b6074u: goto label_1b6074;
        case 0x1b6078u: goto label_1b6078;
        case 0x1b607cu: goto label_1b607c;
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6084u: goto label_1b6084;
        case 0x1b6088u: goto label_1b6088;
        case 0x1b608cu: goto label_1b608c;
        case 0x1b6090u: goto label_1b6090;
        case 0x1b6094u: goto label_1b6094;
        case 0x1b6098u: goto label_1b6098;
        case 0x1b609cu: goto label_1b609c;
        case 0x1b60a0u: goto label_1b60a0;
        case 0x1b60a4u: goto label_1b60a4;
        case 0x1b60a8u: goto label_1b60a8;
        case 0x1b60acu: goto label_1b60ac;
        case 0x1b60b0u: goto label_1b60b0;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b60b8u: goto label_1b60b8;
        case 0x1b60bcu: goto label_1b60bc;
        case 0x1b60c0u: goto label_1b60c0;
        case 0x1b60c4u: goto label_1b60c4;
        case 0x1b60c8u: goto label_1b60c8;
        case 0x1b60ccu: goto label_1b60cc;
        case 0x1b60d0u: goto label_1b60d0;
        case 0x1b60d4u: goto label_1b60d4;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60dcu: goto label_1b60dc;
        case 0x1b60e0u: goto label_1b60e0;
        case 0x1b60e4u: goto label_1b60e4;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b60ecu: goto label_1b60ec;
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b60f8u: goto label_1b60f8;
        case 0x1b60fcu: goto label_1b60fc;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6104u: goto label_1b6104;
        case 0x1b6108u: goto label_1b6108;
        case 0x1b610cu: goto label_1b610c;
        case 0x1b6110u: goto label_1b6110;
        case 0x1b6114u: goto label_1b6114;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b611cu: goto label_1b611c;
        case 0x1b6120u: goto label_1b6120;
        case 0x1b6124u: goto label_1b6124;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b612cu: goto label_1b612c;
        case 0x1b6130u: goto label_1b6130;
        case 0x1b6134u: goto label_1b6134;
        case 0x1b6138u: goto label_1b6138;
        case 0x1b613cu: goto label_1b613c;
        case 0x1b6140u: goto label_1b6140;
        case 0x1b6144u: goto label_1b6144;
        case 0x1b6148u: goto label_1b6148;
        case 0x1b614cu: goto label_1b614c;
        case 0x1b6150u: goto label_1b6150;
        case 0x1b6154u: goto label_1b6154;
        case 0x1b6158u: goto label_1b6158;
        case 0x1b615cu: goto label_1b615c;
        case 0x1b6160u: goto label_1b6160;
        case 0x1b6164u: goto label_1b6164;
        case 0x1b6168u: goto label_1b6168;
        case 0x1b616cu: goto label_1b616c;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b6174u: goto label_1b6174;
        case 0x1b6178u: goto label_1b6178;
        case 0x1b617cu: goto label_1b617c;
        case 0x1b6180u: goto label_1b6180;
        case 0x1b6184u: goto label_1b6184;
        case 0x1b6188u: goto label_1b6188;
        case 0x1b618cu: goto label_1b618c;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b6194u: goto label_1b6194;
        case 0x1b6198u: goto label_1b6198;
        case 0x1b619cu: goto label_1b619c;
        case 0x1b61a0u: goto label_1b61a0;
        case 0x1b61a4u: goto label_1b61a4;
        case 0x1b61a8u: goto label_1b61a8;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61b0u: goto label_1b61b0;
        case 0x1b61b4u: goto label_1b61b4;
        case 0x1b61b8u: goto label_1b61b8;
        case 0x1b61bcu: goto label_1b61bc;
        case 0x1b61c0u: goto label_1b61c0;
        case 0x1b61c4u: goto label_1b61c4;
        case 0x1b61c8u: goto label_1b61c8;
        case 0x1b61ccu: goto label_1b61cc;
        case 0x1b61d0u: goto label_1b61d0;
        case 0x1b61d4u: goto label_1b61d4;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b61dcu: goto label_1b61dc;
        case 0x1b61e0u: goto label_1b61e0;
        case 0x1b61e4u: goto label_1b61e4;
        case 0x1b61e8u: goto label_1b61e8;
        case 0x1b61ecu: goto label_1b61ec;
        case 0x1b61f0u: goto label_1b61f0;
        case 0x1b61f4u: goto label_1b61f4;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b61fcu: goto label_1b61fc;
        case 0x1b6200u: goto label_1b6200;
        case 0x1b6204u: goto label_1b6204;
        case 0x1b6208u: goto label_1b6208;
        case 0x1b620cu: goto label_1b620c;
        case 0x1b6210u: goto label_1b6210;
        case 0x1b6214u: goto label_1b6214;
        case 0x1b6218u: goto label_1b6218;
        case 0x1b621cu: goto label_1b621c;
        case 0x1b6220u: goto label_1b6220;
        case 0x1b6224u: goto label_1b6224;
        case 0x1b6228u: goto label_1b6228;
        case 0x1b622cu: goto label_1b622c;
        case 0x1b6230u: goto label_1b6230;
        case 0x1b6234u: goto label_1b6234;
        case 0x1b6238u: goto label_1b6238;
        case 0x1b623cu: goto label_1b623c;
        case 0x1b6240u: goto label_1b6240;
        case 0x1b6244u: goto label_1b6244;
        case 0x1b6248u: goto label_1b6248;
        default: break;
    }

    ctx->pc = 0x1b6010u;

label_1b6010:
    // 0x1b6010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b6014:
    // 0x1b6014: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b6014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b6018:
    // 0x1b6018: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b601c:
    // 0x1b601c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b6020:
    // 0x1b6020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b6024:
    // 0x1b6024: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6028:
    // 0x1b6028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b602c:
    // 0x1b602c: 0x8c24f278  lw          $a0, -0xD88($at)
    ctx->pc = 0x1b602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963832)));
label_1b6030:
    // 0x1b6030: 0xc06e5b8  jal         func_1B96E0
label_1b6034:
    if (ctx->pc == 0x1B6034u) {
        ctx->pc = 0x1B6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6030u;
        // 0x1b6034: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6038u;
        goto label_1b6038;
    }
    ctx->pc = 0x1B6030u;
    SET_GPR_U32(ctx, 31, 0x1B6038u);
    ctx->pc = 0x1B6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6030u;
    // 0x1b6034: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B96E0u, 0x1B6030u, 0x1B6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6038u;
label_1b6038:
    // 0x1b6038: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x1b6038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1b603c:
    // 0x1b603c: 0x10a0007d  beqz        $a1, . + 4 + (0x7D << 2)
label_1b6040:
    if (ctx->pc == 0x1B6040u) {
        ctx->pc = 0x1B6044u;
        goto label_1b6044;
    }
    ctx->pc = 0x1B603Cu;
    {
        const bool branch_taken_0x1b603c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b603c) {
            ctx->pc = 0x1B6234u;
            goto label_1b6234;
        }
    }
    ctx->pc = 0x1B6044u;
label_1b6044:
    // 0x1b6044: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1b6044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1b6048:
    // 0x1b6048: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b6048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b604c:
    // 0x1b604c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b6050:
    // 0x1b6050: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1b6050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b6054:
    // 0x1b6054: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1b6054u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_1b6058:
    // 0x1b6058: 0x0  nop
    ctx->pc = 0x1b6058u;
    // NOP
label_1b605c:
    // 0x1b605c: 0x0  nop
    ctx->pc = 0x1b605cu;
    // NOP
label_1b6060:
    // 0x1b6060: 0x2812  mflo        $a1
    ctx->pc = 0x1b6060u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1b6064:
    // 0x1b6064: 0xc04fc44  jal         func_13F110
label_1b6068:
    if (ctx->pc == 0x1B6068u) {
        ctx->pc = 0x1B6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6064u;
        // 0x1b6068: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B606Cu;
        goto label_1b606c;
    }
    ctx->pc = 0x1B6064u;
    SET_GPR_U32(ctx, 31, 0x1B606Cu);
    ctx->pc = 0x1B6068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6064u;
    // 0x1b6068: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1B6064u, 0x1B606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B606Cu;
label_1b606c:
    // 0x1b606c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b6070:
    // 0x1b6070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6074:
    // 0x1b6074: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x1b6074u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_1b6078:
    // 0x1b6078: 0x0  nop
    ctx->pc = 0x1b6078u;
    // NOP
label_1b607c:
    // 0x1b607c: 0x0  nop
    ctx->pc = 0x1b607cu;
    // NOP
label_1b6080:
    // 0x1b6080: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6080u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b6084:
    // 0x1b6084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b6084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b6088:
    // 0x1b6088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b608c:
    // 0x1b608c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b608cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6090:
    // 0x1b6090: 0xc06da14  jal         func_1B6850
label_1b6094:
    if (ctx->pc == 0x1B6094u) {
        ctx->pc = 0x1B6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6090u;
        // 0x1b6094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6098u;
        goto label_1b6098;
    }
    ctx->pc = 0x1B6090u;
    SET_GPR_U32(ctx, 31, 0x1B6098u);
    ctx->pc = 0x1B6094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6090u;
    // 0x1b6094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6850u, 0x1B6090u, 0x1B6098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6098u;
label_1b6098:
    // 0x1b6098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b609c:
    // 0x1b609c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b609cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b60a0:
    // 0x1b60a0: 0xc06dfd8  jal         func_1B7F60
label_1b60a4:
    if (ctx->pc == 0x1B60A4u) {
        ctx->pc = 0x1B60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60A0u;
        // 0x1b60a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60A8u;
        goto label_1b60a8;
    }
    ctx->pc = 0x1B60A0u;
    SET_GPR_U32(ctx, 31, 0x1B60A8u);
    ctx->pc = 0x1B60A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60A0u;
    // 0x1b60a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F60u, 0x1B60A0u, 0x1B60A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60A8u;
label_1b60a8:
    // 0x1b60a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b60a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b60ac:
    // 0x1b60ac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1b60b0:
    // 0x1b60b0: 0x320f809  jalr        $t9
label_1b60b4:
    if (ctx->pc == 0x1B60B4u) {
        ctx->pc = 0x1B60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60B0u;
        // 0x1b60b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60B8u;
        goto label_1b60b8;
    }
    ctx->pc = 0x1B60B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B60B8u);
        ctx->pc = 0x1B60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60B0u;
        // 0x1b60b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60B0u, 0x1B60B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B60B8u;
label_1b60b8:
    // 0x1b60b8: 0xc073098  jal         func_1CC260
label_1b60bc:
    if (ctx->pc == 0x1B60BCu) {
        ctx->pc = 0x1B60C0u;
        goto label_1b60c0;
    }
    ctx->pc = 0x1B60B8u;
    SET_GPR_U32(ctx, 31, 0x1B60C0u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1B60B8u, 0x1B60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60C0u;
label_1b60c0:
    // 0x1b60c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b60c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b60c4:
    // 0x1b60c4: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
label_1b60c8:
    if (ctx->pc == 0x1B60C8u) {
        ctx->pc = 0x1B60CCu;
        goto label_1b60cc;
    }
    ctx->pc = 0x1B60C4u;
    {
        const bool branch_taken_0x1b60c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b60c4) {
            ctx->pc = 0x1B6230u;
            goto label_1b6230;
        }
    }
    ctx->pc = 0x1B60CCu;
label_1b60cc:
    // 0x1b60cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b60ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b60d0:
    // 0x1b60d0: 0x9023f270  lbu         $v1, -0xD90($at)
    ctx->pc = 0x1b60d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294963824)));
label_1b60d4:
    // 0x1b60d4: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
label_1b60d8:
    if (ctx->pc == 0x1B60D8u) {
        ctx->pc = 0x1B60DCu;
        goto label_1b60dc;
    }
    ctx->pc = 0x1B60D4u;
    {
        const bool branch_taken_0x1b60d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b60d4) {
            ctx->pc = 0x1B6230u;
            goto label_1b6230;
        }
    }
    ctx->pc = 0x1B60DCu;
label_1b60dc:
    // 0x1b60dc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1b60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1b60e0:
    // 0x1b60e0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1b60e4:
    if (ctx->pc == 0x1B60E4u) {
        ctx->pc = 0x1B60E8u;
        goto label_1b60e8;
    }
    ctx->pc = 0x1B60E0u;
    {
        const bool branch_taken_0x1b60e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b60e0) {
            ctx->pc = 0x1B610Cu;
            goto label_1b610c;
        }
    }
    ctx->pc = 0x1B60E8u;
label_1b60e8:
    // 0x1b60e8: 0xc0401bc  jal         func_1006F0
label_1b60ec:
    if (ctx->pc == 0x1B60ECu) {
        ctx->pc = 0x1B60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60E8u;
        // 0x1b60ec: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60F0u;
        goto label_1b60f0;
    }
    ctx->pc = 0x1B60E8u;
    SET_GPR_U32(ctx, 31, 0x1B60F0u);
    ctx->pc = 0x1B60ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60E8u;
    // 0x1b60ec: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B60E8u, 0x1B60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60F0u;
label_1b60f0:
    // 0x1b60f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b60f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b60f4:
    // 0x1b60f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b60f8:
    if (ctx->pc == 0x1B60F8u) {
        ctx->pc = 0x1B60FCu;
        goto label_1b60fc;
    }
    ctx->pc = 0x1B60F4u;
    {
        const bool branch_taken_0x1b60f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60f4) {
            ctx->pc = 0x1B6108u;
            goto label_1b6108;
        }
    }
    ctx->pc = 0x1B60FCu;
label_1b60fc:
    // 0x1b60fc: 0xc073de8  jal         func_1CF7A0
label_1b6100:
    if (ctx->pc == 0x1B6100u) {
        ctx->pc = 0x1B6104u;
        goto label_1b6104;
    }
    ctx->pc = 0x1B60FCu;
    SET_GPR_U32(ctx, 31, 0x1B6104u);
    ctx->pc = 0x1CF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7A0u, 0x1B60FCu, 0x1B6104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6104u;
label_1b6104:
    // 0x1b6104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6108:
    // 0x1b6108: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
label_1b610c:
    // 0x1b610c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b6110:
    // 0x1b6110: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_1b6114:
    if (ctx->pc == 0x1B6114u) {
        ctx->pc = 0x1B6118u;
        goto label_1b6118;
    }
    ctx->pc = 0x1B6110u;
    {
        const bool branch_taken_0x1b6110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6110) {
            ctx->pc = 0x1B618Cu;
            goto label_1b618c;
        }
    }
    ctx->pc = 0x1B6118u;
label_1b6118:
    // 0x1b6118: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1b611c:
    // 0x1b611c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_1b6120:
    if (ctx->pc == 0x1B6120u) {
        ctx->pc = 0x1B6124u;
        goto label_1b6124;
    }
    ctx->pc = 0x1B611Cu;
    {
        const bool branch_taken_0x1b611c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b611c) {
            ctx->pc = 0x1B618Cu;
            goto label_1b618c;
        }
    }
    ctx->pc = 0x1B6124u;
label_1b6124:
    // 0x1b6124: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b6128:
    // 0x1b6128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b612c:
    // 0x1b612c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1b6130:
    if (ctx->pc == 0x1B6130u) {
        ctx->pc = 0x1B6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B612Cu;
        // 0x1b6130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6134u;
        goto label_1b6134;
    }
    ctx->pc = 0x1B612Cu;
    {
        const bool branch_taken_0x1b612c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B612Cu;
        // 0x1b6130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b612c) {
            ctx->pc = 0x1B6170u;
            goto label_1b6170;
        }
    }
    ctx->pc = 0x1B6134u;
label_1b6134:
    // 0x1b6134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6138:
    // 0x1b6138: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b613c:
    if (ctx->pc == 0x1B613Cu) {
        ctx->pc = 0x1B6140u;
        goto label_1b6140;
    }
    ctx->pc = 0x1B6138u;
    {
        const bool branch_taken_0x1b6138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6138) {
            ctx->pc = 0x1B6148u;
            goto label_1b6148;
        }
    }
    ctx->pc = 0x1B6140u;
label_1b6140:
    // 0x1b6140: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b6144:
    if (ctx->pc == 0x1B6144u) {
        ctx->pc = 0x1B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6140u;
        // 0x1b6144: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6148u;
        goto label_1b6148;
    }
    ctx->pc = 0x1B6140u;
    {
        const bool branch_taken_0x1b6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6140u;
        // 0x1b6144: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6140) {
            ctx->pc = 0x1B617Cu;
            goto label_1b617c;
        }
    }
    ctx->pc = 0x1B6148u;
label_1b6148:
    // 0x1b6148: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1b6148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_1b614c:
    // 0x1b614c: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x1b614cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
label_1b6150:
    // 0x1b6150: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1b6154:
    // 0x1b6154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b6158:
    // 0x1b6158: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b6158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b615c:
    // 0x1b615c: 0x320f809  jalr        $t9
label_1b6160:
    if (ctx->pc == 0x1B6160u) {
        ctx->pc = 0x1B6164u;
        goto label_1b6164;
    }
    ctx->pc = 0x1B615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6164u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B615Cu, 0x1B6164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6164u;
label_1b6164:
    // 0x1b6164: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b6168:
    if (ctx->pc == 0x1B6168u) {
        ctx->pc = 0x1B616Cu;
        goto label_1b616c;
    }
    ctx->pc = 0x1B6164u;
    {
        const bool branch_taken_0x1b6164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6164) {
            ctx->pc = 0x1B6178u;
            goto label_1b6178;
        }
    }
    ctx->pc = 0x1B616Cu;
label_1b616c:
    // 0x1b616c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6170:
    // 0x1b6170: 0xc073e84  jal         func_1CFA10
label_1b6174:
    if (ctx->pc == 0x1B6174u) {
        ctx->pc = 0x1B6178u;
        goto label_1b6178;
    }
    ctx->pc = 0x1B6170u;
    SET_GPR_U32(ctx, 31, 0x1B6178u);
    ctx->pc = 0x1CFA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA10u, 0x1B6170u, 0x1B6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6178u;
label_1b6178:
    // 0x1b6178: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1b617c:
    // 0x1b617c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b6180:
    // 0x1b6180: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1b6180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1b6184:
    // 0x1b6184: 0x320f809  jalr        $t9
label_1b6188:
    if (ctx->pc == 0x1B6188u) {
        ctx->pc = 0x1B618Cu;
        goto label_1b618c;
    }
    ctx->pc = 0x1B6184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B618Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6184u, 0x1B618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B618Cu;
label_1b618c:
    // 0x1b618c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1b618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1b6190:
    // 0x1b6190: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1b6194:
    if (ctx->pc == 0x1B6194u) {
        ctx->pc = 0x1B6198u;
        goto label_1b6198;
    }
    ctx->pc = 0x1B6190u;
    {
        const bool branch_taken_0x1b6190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6190) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B6198u;
label_1b6198:
    // 0x1b6198: 0xc0401bc  jal         func_1006F0
label_1b619c:
    if (ctx->pc == 0x1B619Cu) {
        ctx->pc = 0x1B619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6198u;
        // 0x1b619c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61A0u;
        goto label_1b61a0;
    }
    ctx->pc = 0x1B6198u;
    SET_GPR_U32(ctx, 31, 0x1B61A0u);
    ctx->pc = 0x1B619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6198u;
    // 0x1b619c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6198u, 0x1B61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61A0u;
label_1b61a0:
    // 0x1b61a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b61a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b61a4:
    // 0x1b61a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b61a8:
    if (ctx->pc == 0x1B61A8u) {
        ctx->pc = 0x1B61ACu;
        goto label_1b61ac;
    }
    ctx->pc = 0x1B61A4u;
    {
        const bool branch_taken_0x1b61a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61a4) {
            ctx->pc = 0x1B61B8u;
            goto label_1b61b8;
        }
    }
    ctx->pc = 0x1B61ACu;
label_1b61ac:
    // 0x1b61ac: 0xc07404c  jal         func_1D0130
label_1b61b0:
    if (ctx->pc == 0x1B61B0u) {
        ctx->pc = 0x1B61B4u;
        goto label_1b61b4;
    }
    ctx->pc = 0x1B61ACu;
    SET_GPR_U32(ctx, 31, 0x1B61B4u);
    ctx->pc = 0x1D0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0130u, 0x1B61ACu, 0x1B61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61B4u;
label_1b61b4:
    // 0x1b61b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b61b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b61b8:
    // 0x1b61b8: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x1b61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
label_1b61bc:
    // 0x1b61bc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b61c0:
    // 0x1b61c0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1b61c4:
    if (ctx->pc == 0x1B61C4u) {
        ctx->pc = 0x1B61C8u;
        goto label_1b61c8;
    }
    ctx->pc = 0x1B61C0u;
    {
        const bool branch_taken_0x1b61c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61c0) {
            ctx->pc = 0x1B6230u;
            goto label_1b6230;
        }
    }
    ctx->pc = 0x1B61C8u;
label_1b61c8:
    // 0x1b61c8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1b61cc:
    // 0x1b61cc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1b61d0:
    if (ctx->pc == 0x1B61D0u) {
        ctx->pc = 0x1B61D4u;
        goto label_1b61d4;
    }
    ctx->pc = 0x1B61CCu;
    {
        const bool branch_taken_0x1b61cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61cc) {
            ctx->pc = 0x1B6230u;
            goto label_1b6230;
        }
    }
    ctx->pc = 0x1B61D4u;
label_1b61d4:
    // 0x1b61d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b61d8:
    // 0x1b61d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b61dc:
    // 0x1b61dc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1b61e0:
    if (ctx->pc == 0x1B61E0u) {
        ctx->pc = 0x1B61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61DCu;
        // 0x1b61e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61E4u;
        goto label_1b61e4;
    }
    ctx->pc = 0x1B61DCu;
    {
        const bool branch_taken_0x1b61dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61DCu;
        // 0x1b61e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61dc) {
            ctx->pc = 0x1B6214u;
            goto label_1b6214;
        }
    }
    ctx->pc = 0x1B61E4u;
label_1b61e4:
    // 0x1b61e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b61e8:
    // 0x1b61e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b61ec:
    if (ctx->pc == 0x1B61ECu) {
        ctx->pc = 0x1B61F0u;
        goto label_1b61f0;
    }
    ctx->pc = 0x1B61E8u;
    {
        const bool branch_taken_0x1b61e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b61e8) {
            ctx->pc = 0x1B61F8u;
            goto label_1b61f8;
        }
    }
    ctx->pc = 0x1B61F0u;
label_1b61f0:
    // 0x1b61f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b61f4:
    if (ctx->pc == 0x1B61F4u) {
        ctx->pc = 0x1B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61F0u;
        // 0x1b61f4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61F8u;
        goto label_1b61f8;
    }
    ctx->pc = 0x1B61F0u;
    {
        const bool branch_taken_0x1b61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61F0u;
        // 0x1b61f4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61f0) {
            ctx->pc = 0x1B6220u;
            goto label_1b6220;
        }
    }
    ctx->pc = 0x1B61F8u;
label_1b61f8:
    // 0x1b61f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b61f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b61fc:
    // 0x1b61fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b61fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b6200:
    // 0x1b6200: 0x320f809  jalr        $t9
label_1b6204:
    if (ctx->pc == 0x1B6204u) {
        ctx->pc = 0x1B6208u;
        goto label_1b6208;
    }
    ctx->pc = 0x1B6200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6208u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6200u, 0x1B6208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6208u;
label_1b6208:
    // 0x1b6208: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b620c:
    if (ctx->pc == 0x1B620Cu) {
        ctx->pc = 0x1B6210u;
        goto label_1b6210;
    }
    ctx->pc = 0x1B6208u;
    {
        const bool branch_taken_0x1b6208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6208) {
            ctx->pc = 0x1B621Cu;
            goto label_1b621c;
        }
    }
    ctx->pc = 0x1B6210u;
label_1b6210:
    // 0x1b6210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6214:
    // 0x1b6214: 0xc0740b4  jal         func_1D02D0
label_1b6218:
    if (ctx->pc == 0x1B6218u) {
        ctx->pc = 0x1B621Cu;
        goto label_1b621c;
    }
    ctx->pc = 0x1B6214u;
    SET_GPR_U32(ctx, 31, 0x1B621Cu);
    ctx->pc = 0x1D02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02D0u, 0x1B6214u, 0x1B621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B621Cu;
label_1b621c:
    // 0x1b621c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1b6220:
    // 0x1b6220: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b6224:
    // 0x1b6224: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1b6224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1b6228:
    // 0x1b6228: 0x320f809  jalr        $t9
label_1b622c:
    if (ctx->pc == 0x1B622Cu) {
        ctx->pc = 0x1B6230u;
        goto label_1b6230;
    }
    ctx->pc = 0x1B6228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6230u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6228u, 0x1B6230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6230u;
label_1b6230:
    // 0x1b6230: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b6230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1b6234:
    // 0x1b6234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6238:
    // 0x1b6238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b623c:
    // 0x1b623c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b623cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6240:
    // 0x1b6240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6244:
    // 0x1b6244: 0x3e00008  jr          $ra
label_1b6248:
    if (ctx->pc == 0x1B6248u) {
        ctx->pc = 0x1B6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6244u;
        // 0x1b6248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B624Cu;
        goto label_fallthrough_0x1b6244;
    }
    ctx->pc = 0x1B6244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6244u;
        // 0x1b6248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6244:
    ctx->pc = 0x1B624Cu;
}
