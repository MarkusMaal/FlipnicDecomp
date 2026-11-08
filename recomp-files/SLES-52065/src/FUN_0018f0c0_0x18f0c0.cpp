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

// Function: FUN_0018f0c0
// Address: 0x18f0c0 - 0x18f2b0
void FUN_0018f0c0_0x18f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f0c0_0x18f0c0");
#endif

    switch (ctx->pc) {
        case 0x18f0c0u: goto label_18f0c0;
        case 0x18f0c4u: goto label_18f0c4;
        case 0x18f0c8u: goto label_18f0c8;
        case 0x18f0ccu: goto label_18f0cc;
        case 0x18f0d0u: goto label_18f0d0;
        case 0x18f0d4u: goto label_18f0d4;
        case 0x18f0d8u: goto label_18f0d8;
        case 0x18f0dcu: goto label_18f0dc;
        case 0x18f0e0u: goto label_18f0e0;
        case 0x18f0e4u: goto label_18f0e4;
        case 0x18f0e8u: goto label_18f0e8;
        case 0x18f0ecu: goto label_18f0ec;
        case 0x18f0f0u: goto label_18f0f0;
        case 0x18f0f4u: goto label_18f0f4;
        case 0x18f0f8u: goto label_18f0f8;
        case 0x18f0fcu: goto label_18f0fc;
        case 0x18f100u: goto label_18f100;
        case 0x18f104u: goto label_18f104;
        case 0x18f108u: goto label_18f108;
        case 0x18f10cu: goto label_18f10c;
        case 0x18f110u: goto label_18f110;
        case 0x18f114u: goto label_18f114;
        case 0x18f118u: goto label_18f118;
        case 0x18f11cu: goto label_18f11c;
        case 0x18f120u: goto label_18f120;
        case 0x18f124u: goto label_18f124;
        case 0x18f128u: goto label_18f128;
        case 0x18f12cu: goto label_18f12c;
        case 0x18f130u: goto label_18f130;
        case 0x18f134u: goto label_18f134;
        case 0x18f138u: goto label_18f138;
        case 0x18f13cu: goto label_18f13c;
        case 0x18f140u: goto label_18f140;
        case 0x18f144u: goto label_18f144;
        case 0x18f148u: goto label_18f148;
        case 0x18f14cu: goto label_18f14c;
        case 0x18f150u: goto label_18f150;
        case 0x18f154u: goto label_18f154;
        case 0x18f158u: goto label_18f158;
        case 0x18f15cu: goto label_18f15c;
        case 0x18f160u: goto label_18f160;
        case 0x18f164u: goto label_18f164;
        case 0x18f168u: goto label_18f168;
        case 0x18f16cu: goto label_18f16c;
        case 0x18f170u: goto label_18f170;
        case 0x18f174u: goto label_18f174;
        case 0x18f178u: goto label_18f178;
        case 0x18f17cu: goto label_18f17c;
        case 0x18f180u: goto label_18f180;
        case 0x18f184u: goto label_18f184;
        case 0x18f188u: goto label_18f188;
        case 0x18f18cu: goto label_18f18c;
        case 0x18f190u: goto label_18f190;
        case 0x18f194u: goto label_18f194;
        case 0x18f198u: goto label_18f198;
        case 0x18f19cu: goto label_18f19c;
        case 0x18f1a0u: goto label_18f1a0;
        case 0x18f1a4u: goto label_18f1a4;
        case 0x18f1a8u: goto label_18f1a8;
        case 0x18f1acu: goto label_18f1ac;
        case 0x18f1b0u: goto label_18f1b0;
        case 0x18f1b4u: goto label_18f1b4;
        case 0x18f1b8u: goto label_18f1b8;
        case 0x18f1bcu: goto label_18f1bc;
        case 0x18f1c0u: goto label_18f1c0;
        case 0x18f1c4u: goto label_18f1c4;
        case 0x18f1c8u: goto label_18f1c8;
        case 0x18f1ccu: goto label_18f1cc;
        case 0x18f1d0u: goto label_18f1d0;
        case 0x18f1d4u: goto label_18f1d4;
        case 0x18f1d8u: goto label_18f1d8;
        case 0x18f1dcu: goto label_18f1dc;
        case 0x18f1e0u: goto label_18f1e0;
        case 0x18f1e4u: goto label_18f1e4;
        case 0x18f1e8u: goto label_18f1e8;
        case 0x18f1ecu: goto label_18f1ec;
        case 0x18f1f0u: goto label_18f1f0;
        case 0x18f1f4u: goto label_18f1f4;
        case 0x18f1f8u: goto label_18f1f8;
        case 0x18f1fcu: goto label_18f1fc;
        case 0x18f200u: goto label_18f200;
        case 0x18f204u: goto label_18f204;
        case 0x18f208u: goto label_18f208;
        case 0x18f20cu: goto label_18f20c;
        case 0x18f210u: goto label_18f210;
        case 0x18f214u: goto label_18f214;
        case 0x18f218u: goto label_18f218;
        case 0x18f21cu: goto label_18f21c;
        case 0x18f220u: goto label_18f220;
        case 0x18f224u: goto label_18f224;
        case 0x18f228u: goto label_18f228;
        case 0x18f22cu: goto label_18f22c;
        case 0x18f230u: goto label_18f230;
        case 0x18f234u: goto label_18f234;
        case 0x18f238u: goto label_18f238;
        case 0x18f23cu: goto label_18f23c;
        case 0x18f240u: goto label_18f240;
        case 0x18f244u: goto label_18f244;
        case 0x18f248u: goto label_18f248;
        case 0x18f24cu: goto label_18f24c;
        case 0x18f250u: goto label_18f250;
        case 0x18f254u: goto label_18f254;
        case 0x18f258u: goto label_18f258;
        case 0x18f25cu: goto label_18f25c;
        case 0x18f260u: goto label_18f260;
        case 0x18f264u: goto label_18f264;
        case 0x18f268u: goto label_18f268;
        case 0x18f26cu: goto label_18f26c;
        case 0x18f270u: goto label_18f270;
        case 0x18f274u: goto label_18f274;
        case 0x18f278u: goto label_18f278;
        case 0x18f27cu: goto label_18f27c;
        case 0x18f280u: goto label_18f280;
        case 0x18f284u: goto label_18f284;
        case 0x18f288u: goto label_18f288;
        case 0x18f28cu: goto label_18f28c;
        case 0x18f290u: goto label_18f290;
        case 0x18f294u: goto label_18f294;
        case 0x18f298u: goto label_18f298;
        case 0x18f29cu: goto label_18f29c;
        case 0x18f2a0u: goto label_18f2a0;
        case 0x18f2a4u: goto label_18f2a4;
        case 0x18f2a8u: goto label_18f2a8;
        case 0x18f2acu: goto label_18f2ac;
        default: break;
    }

    ctx->pc = 0x18f0c0u;

label_18f0c0:
    // 0x18f0c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_18f0c4:
    // 0x18f0c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18f0c8:
    // 0x18f0c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18f0cc:
    // 0x18f0cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18f0d0:
    // 0x18f0d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18f0d4:
    // 0x18f0d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f0d8:
    // 0x18f0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18f0dc:
    // 0x18f0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18f0e0:
    // 0x18f0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18f0e4:
    // 0x18f0e4: 0x8c822710  lw          $v0, 0x2710($a0)
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10000)));
label_18f0e8:
    // 0x18f0e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18f0ec:
    if (ctx->pc == 0x18F0ECu) {
        ctx->pc = 0x18F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E8u;
        // 0x18f0ec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0F0u;
        goto label_18f0f0;
    }
    ctx->pc = 0x18F0E8u;
    {
        const bool branch_taken_0x18f0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E8u;
        // 0x18f0ec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0e8) {
            ctx->pc = 0x18F0F8u;
            goto label_18f0f8;
        }
    }
    ctx->pc = 0x18F0F0u;
label_18f0f0:
    // 0x18f0f0: 0x10000066  b           . + 4 + (0x66 << 2)
label_18f0f4:
    if (ctx->pc == 0x18F0F4u) {
        ctx->pc = 0x18F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0F0u;
        // 0x18f0f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F0F8u;
        goto label_18f0f8;
    }
    ctx->pc = 0x18F0F0u;
    {
        const bool branch_taken_0x18f0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0F0u;
        // 0x18f0f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0f0) {
            ctx->pc = 0x18F28Cu;
            goto label_18f28c;
        }
    }
    ctx->pc = 0x18F0F8u;
label_18f0f8:
    // 0x18f0f8: 0xc062e70  jal         func_18B9C0
label_18f0fc:
    if (ctx->pc == 0x18F0FCu) {
        ctx->pc = 0x18F100u;
        goto label_18f100;
    }
    ctx->pc = 0x18F0F8u;
    SET_GPR_U32(ctx, 31, 0x18F100u);
    ctx->pc = 0x18B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B9C0u, 0x18F0F8u, 0x18F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F100u;
label_18f100:
    // 0x18f100: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f104:
    // 0x18f104: 0xc062e88  jal         func_18BA20
label_18f108:
    if (ctx->pc == 0x18F108u) {
        ctx->pc = 0x18F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F104u;
        // 0x18f108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F10Cu;
        goto label_18f10c;
    }
    ctx->pc = 0x18F104u;
    SET_GPR_U32(ctx, 31, 0x18F10Cu);
    ctx->pc = 0x18F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F104u;
    // 0x18f108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BA20u, 0x18F104u, 0x18F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F10Cu;
label_18f10c:
    // 0x18f10c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x18f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18f110:
    // 0x18f110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f114:
    // 0x18f114: 0xc04c6dc  jal         func_131B70
label_18f118:
    if (ctx->pc == 0x18F118u) {
        ctx->pc = 0x18F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F114u;
        // 0x18f118: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F11Cu;
        goto label_18f11c;
    }
    ctx->pc = 0x18F114u;
    SET_GPR_U32(ctx, 31, 0x18F11Cu);
    ctx->pc = 0x18F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F114u;
    // 0x18f118: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x18F114u, 0x18F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F11Cu;
label_18f11c:
    // 0x18f11c: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x18f11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_18f120:
    // 0x18f120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f124:
    // 0x18f124: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_18f128:
    // 0x18f128: 0x320f809  jalr        $t9
label_18f12c:
    if (ctx->pc == 0x18F12Cu) {
        ctx->pc = 0x18F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F128u;
        // 0x18f12c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F130u;
        goto label_18f130;
    }
    ctx->pc = 0x18F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F130u);
        ctx->pc = 0x18F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F128u;
        // 0x18f12c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F128u, 0x18F130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F130u;
label_18f130:
    // 0x18f130: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_18f134:
    // 0x18f134: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x18f134u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18f138:
    // 0x18f138: 0x0  nop
    ctx->pc = 0x18f138u;
    // NOP
label_18f13c:
    // 0x18f13c: 0x0  nop
    ctx->pc = 0x18f13cu;
    // NOP
label_18f140:
    // 0x18f140: 0x8812  mflo        $s1
    ctx->pc = 0x18f140u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_18f144:
    // 0x18f144: 0x10000043  b           . + 4 + (0x43 << 2)
label_18f148:
    if (ctx->pc == 0x18F148u) {
        ctx->pc = 0x18F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F144u;
        // 0x18f148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F14Cu;
        goto label_18f14c;
    }
    ctx->pc = 0x18F144u;
    {
        const bool branch_taken_0x18f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F144u;
        // 0x18f148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f144) {
            ctx->pc = 0x18F254u;
            goto label_18f254;
        }
    }
    ctx->pc = 0x18F14Cu;
label_18f14c:
    // 0x18f14c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x18f14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18f150:
    // 0x18f150: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_18f154:
    // 0x18f154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18f158:
    // 0x18f158: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18f15c:
    // 0x18f15c: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x18f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_18f160:
    // 0x18f160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18f160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f164:
    // 0x18f164: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x18f164u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
label_18f168:
    // 0x18f168: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x18f168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_18f16c:
    // 0x18f16c: 0xc68d0200  lwc1        $f13, 0x200($s4)
    ctx->pc = 0x18f16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18f170:
    // 0x18f170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f174:
    // 0x18f174: 0xc059930  jal         func_1664C0
label_18f178:
    if (ctx->pc == 0x18F178u) {
        ctx->pc = 0x18F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F174u;
        // 0x18f178: 0x26670290  addiu       $a3, $s3, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F17Cu;
        goto label_18f17c;
    }
    ctx->pc = 0x18F174u;
    SET_GPR_U32(ctx, 31, 0x18F17Cu);
    ctx->pc = 0x18F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F174u;
    // 0x18f178: 0x26670290  addiu       $a3, $s3, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664C0u, 0x18F174u, 0x18F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F17Cu;
label_18f17c:
    // 0x18f17c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18f17cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f180:
    // 0x18f180: 0x0  nop
    ctx->pc = 0x18f180u;
    // NOP
label_18f184:
    // 0x18f184: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18f184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f188:
    // 0x18f188: 0x0  nop
    ctx->pc = 0x18f188u;
    // NOP
label_18f18c:
    // 0x18f18c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_18f190:
    if (ctx->pc == 0x18F190u) {
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F194u;
        goto label_18f194;
    }
    ctx->pc = 0x18F18Cu;
    {
        const bool branch_taken_0x18f18c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f18c) {
            ctx->pc = 0x18F248u;
            goto label_18f248;
        }
    }
    ctx->pc = 0x18F194u;
label_18f194:
    // 0x18f194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18f198:
    // 0x18f198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f19c:
    // 0x18f19c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_18f1a0:
    // 0x18f1a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_18f1a4:
    // 0x18f1a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18f1a8:
    // 0x18f1a8: 0xc056194  jal         func_158650
label_18f1ac:
    if (ctx->pc == 0x18F1ACu) {
        ctx->pc = 0x18F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1A8u;
        // 0x18f1ac: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1B0u;
        goto label_18f1b0;
    }
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1A8u;
    // 0x18f1ac: 0xe66002e8  swc1        $f0, 0x2E8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x18F1A8u, 0x18F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f1b4:
    // 0x18f1b4: 0xc0564b8  jal         func_1592E0
label_18f1b8:
    if (ctx->pc == 0x18F1B8u) {
        ctx->pc = 0x18F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B4u;
        // 0x18f1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1BCu;
        goto label_18f1bc;
    }
    ctx->pc = 0x18F1B4u;
    SET_GPR_U32(ctx, 31, 0x18F1BCu);
    ctx->pc = 0x18F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1B4u;
    // 0x18f1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x18F1B4u, 0x18F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1BCu;
label_18f1bc:
    // 0x18f1bc: 0x8e822714  lw          $v0, 0x2714($s4)
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10004)));
label_18f1c0:
    // 0x18f1c0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_18f1c4:
    if (ctx->pc == 0x18F1C4u) {
        ctx->pc = 0x18F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C0u;
        // 0x18f1c4: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1C8u;
        goto label_18f1c8;
    }
    ctx->pc = 0x18F1C0u;
    {
        const bool branch_taken_0x18f1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C0u;
        // 0x18f1c4: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c0) {
            ctx->pc = 0x18F234u;
            goto label_18f234;
        }
    }
    ctx->pc = 0x18F1C8u;
label_18f1c8:
    // 0x18f1c8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x18f1c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f1cc:
    // 0x18f1cc: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x18f1ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f1d0:
    // 0x18f1d0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x18f1d0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18f1d4:
    // 0x18f1d4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x18f1d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f1d8:
    // 0x18f1d8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x18f1d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_18f1dc:
    // 0x18f1dc: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x18f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_18f1e0:
    // 0x18f1e0: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x18f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_18f1e4:
    // 0x18f1e4: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x18f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_18f1e8:
    // 0x18f1e8: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x18f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_18f1ec:
    // 0x18f1ec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18f1f0:
    // 0x18f1f0: 0x7a660000  lq          $a2, 0x0($s3)
    ctx->pc = 0x18f1f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18f1f4:
    // 0x18f1f4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x18f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_18f1f8:
    // 0x18f1f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_18f1fc:
    // 0x18f1fc: 0xc046458  jal         func_119160
label_18f200:
    if (ctx->pc == 0x18F200u) {
        ctx->pc = 0x18F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1FCu;
        // 0x18f200: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F204u;
        goto label_18f204;
    }
    ctx->pc = 0x18F1FCu;
    SET_GPR_U32(ctx, 31, 0x18F204u);
    ctx->pc = 0x18F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1FCu;
    // 0x18f200: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x18F1FCu, 0x18F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F204u;
label_18f204:
    // 0x18f204: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18f204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18f208:
    // 0x18f208: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18f20c:
    // 0x18f20c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x18f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_18f210:
    // 0x18f210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f214:
    // 0x18f214: 0xc0465f0  jal         func_1197C0
label_18f218:
    if (ctx->pc == 0x18F218u) {
        ctx->pc = 0x18F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F214u;
        // 0x18f218: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F21Cu;
        goto label_18f21c;
    }
    ctx->pc = 0x18F214u;
    SET_GPR_U32(ctx, 31, 0x18F21Cu);
    ctx->pc = 0x18F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F214u;
    // 0x18f218: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x18F214u, 0x18F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F21Cu;
label_18f21c:
    // 0x18f21c: 0xc062d50  jal         func_18B540
label_18f220:
    if (ctx->pc == 0x18F220u) {
        ctx->pc = 0x18F224u;
        goto label_18f224;
    }
    ctx->pc = 0x18F21Cu;
    SET_GPR_U32(ctx, 31, 0x18F224u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18F21Cu, 0x18F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F224u;
label_18f224:
    // 0x18f224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f228:
    // 0x18f228: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_18f22c:
    // 0x18f22c: 0xc062b5c  jal         func_18AD70
label_18f230:
    if (ctx->pc == 0x18F230u) {
        ctx->pc = 0x18F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F22Cu;
        // 0x18f230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F234u;
        goto label_18f234;
    }
    ctx->pc = 0x18F22Cu;
    SET_GPR_U32(ctx, 31, 0x18F234u);
    ctx->pc = 0x18F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F22Cu;
    // 0x18f230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18F22Cu, 0x18F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F234u;
label_18f234:
    // 0x18f234: 0x0  nop
    ctx->pc = 0x18f234u;
    // NOP
label_18f238:
    // 0x18f238: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x18f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_18f23c:
    // 0x18f23c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f240:
    // 0x18f240: 0x10000008  b           . + 4 + (0x8 << 2)
label_18f244:
    if (ctx->pc == 0x18F244u) {
        ctx->pc = 0x18F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F240u;
        // 0x18f244: 0xae82045c  sw          $v0, 0x45C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F248u;
        goto label_18f248;
    }
    ctx->pc = 0x18F240u;
    {
        const bool branch_taken_0x18f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F240u;
        // 0x18f244: 0xae82045c  sw          $v0, 0x45C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f240) {
            ctx->pc = 0x18F264u;
            goto label_18f264;
        }
    }
    ctx->pc = 0x18F248u;
label_18f248:
    // 0x18f248: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x18f248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_18f24c:
    // 0x18f24c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x18f24cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_18f250:
    // 0x18f250: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18f250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18f254:
    // 0x18f254: 0x0  nop
    ctx->pc = 0x18f254u;
    // NOP
label_18f258:
    // 0x18f258: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x18f258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_18f25c:
    // 0x18f25c: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_18f260:
    if (ctx->pc == 0x18F260u) {
        ctx->pc = 0x18F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F25Cu;
        // 0x18f260: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F264u;
        goto label_18f264;
    }
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F25Cu;
        // 0x18f260: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f14c;
        }
    }
    ctx->pc = 0x18F264u;
label_18f264:
    // 0x18f264: 0x0  nop
    ctx->pc = 0x18f264u;
    // NOP
label_18f268:
    // 0x18f268: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_18f26c:
    // 0x18f26c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f270:
    // 0x18f270: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18f270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18f274:
    // 0x18f274: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x18f274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_18f278:
    // 0x18f278: 0x320f809  jalr        $t9
label_18f27c:
    if (ctx->pc == 0x18F27Cu) {
        ctx->pc = 0x18F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F278u;
        // 0x18f27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F280u;
        goto label_18f280;
    }
    ctx->pc = 0x18F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F280u);
        ctx->pc = 0x18F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F278u;
        // 0x18f27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F278u, 0x18F280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F280u;
label_18f280:
    // 0x18f280: 0xc063bd4  jal         func_18EF50
label_18f284:
    if (ctx->pc == 0x18F284u) {
        ctx->pc = 0x18F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F280u;
        // 0x18f284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F288u;
        goto label_18f288;
    }
    ctx->pc = 0x18F280u;
    SET_GPR_U32(ctx, 31, 0x18F288u);
    ctx->pc = 0x18F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F280u;
    // 0x18f284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EF50u, 0x18F280u, 0x18F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F288u;
label_18f288:
    // 0x18f288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18f28c:
    // 0x18f28c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18f28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_18f290:
    // 0x18f290: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18f294:
    // 0x18f294: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f298:
    // 0x18f298: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f29c:
    // 0x18f29c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f2a0:
    // 0x18f2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f2a4:
    // 0x18f2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18f2a8:
    // 0x18f2a8: 0x3e00008  jr          $ra
label_18f2ac:
    if (ctx->pc == 0x18F2ACu) {
        ctx->pc = 0x18F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2A8u;
        // 0x18f2ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2B0u;
        goto label_fallthrough_0x18f2a8;
    }
    ctx->pc = 0x18F2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2A8u;
        // 0x18f2ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f2a8:
    ctx->pc = 0x18F2B0u;
}
