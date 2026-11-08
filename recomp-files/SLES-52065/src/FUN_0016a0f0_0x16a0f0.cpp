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

// Function: FUN_0016a0f0
// Address: 0x16a0f0 - 0x16a374
void FUN_0016a0f0_0x16a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a0f0_0x16a0f0");
#endif

    switch (ctx->pc) {
        case 0x16a0f0u: goto label_16a0f0;
        case 0x16a0f4u: goto label_16a0f4;
        case 0x16a0f8u: goto label_16a0f8;
        case 0x16a0fcu: goto label_16a0fc;
        case 0x16a100u: goto label_16a100;
        case 0x16a104u: goto label_16a104;
        case 0x16a108u: goto label_16a108;
        case 0x16a10cu: goto label_16a10c;
        case 0x16a110u: goto label_16a110;
        case 0x16a114u: goto label_16a114;
        case 0x16a118u: goto label_16a118;
        case 0x16a11cu: goto label_16a11c;
        case 0x16a120u: goto label_16a120;
        case 0x16a124u: goto label_16a124;
        case 0x16a128u: goto label_16a128;
        case 0x16a12cu: goto label_16a12c;
        case 0x16a130u: goto label_16a130;
        case 0x16a134u: goto label_16a134;
        case 0x16a138u: goto label_16a138;
        case 0x16a13cu: goto label_16a13c;
        case 0x16a140u: goto label_16a140;
        case 0x16a144u: goto label_16a144;
        case 0x16a148u: goto label_16a148;
        case 0x16a14cu: goto label_16a14c;
        case 0x16a150u: goto label_16a150;
        case 0x16a154u: goto label_16a154;
        case 0x16a158u: goto label_16a158;
        case 0x16a15cu: goto label_16a15c;
        case 0x16a160u: goto label_16a160;
        case 0x16a164u: goto label_16a164;
        case 0x16a168u: goto label_16a168;
        case 0x16a16cu: goto label_16a16c;
        case 0x16a170u: goto label_16a170;
        case 0x16a174u: goto label_16a174;
        case 0x16a178u: goto label_16a178;
        case 0x16a17cu: goto label_16a17c;
        case 0x16a180u: goto label_16a180;
        case 0x16a184u: goto label_16a184;
        case 0x16a188u: goto label_16a188;
        case 0x16a18cu: goto label_16a18c;
        case 0x16a190u: goto label_16a190;
        case 0x16a194u: goto label_16a194;
        case 0x16a198u: goto label_16a198;
        case 0x16a19cu: goto label_16a19c;
        case 0x16a1a0u: goto label_16a1a0;
        case 0x16a1a4u: goto label_16a1a4;
        case 0x16a1a8u: goto label_16a1a8;
        case 0x16a1acu: goto label_16a1ac;
        case 0x16a1b0u: goto label_16a1b0;
        case 0x16a1b4u: goto label_16a1b4;
        case 0x16a1b8u: goto label_16a1b8;
        case 0x16a1bcu: goto label_16a1bc;
        case 0x16a1c0u: goto label_16a1c0;
        case 0x16a1c4u: goto label_16a1c4;
        case 0x16a1c8u: goto label_16a1c8;
        case 0x16a1ccu: goto label_16a1cc;
        case 0x16a1d0u: goto label_16a1d0;
        case 0x16a1d4u: goto label_16a1d4;
        case 0x16a1d8u: goto label_16a1d8;
        case 0x16a1dcu: goto label_16a1dc;
        case 0x16a1e0u: goto label_16a1e0;
        case 0x16a1e4u: goto label_16a1e4;
        case 0x16a1e8u: goto label_16a1e8;
        case 0x16a1ecu: goto label_16a1ec;
        case 0x16a1f0u: goto label_16a1f0;
        case 0x16a1f4u: goto label_16a1f4;
        case 0x16a1f8u: goto label_16a1f8;
        case 0x16a1fcu: goto label_16a1fc;
        case 0x16a200u: goto label_16a200;
        case 0x16a204u: goto label_16a204;
        case 0x16a208u: goto label_16a208;
        case 0x16a20cu: goto label_16a20c;
        case 0x16a210u: goto label_16a210;
        case 0x16a214u: goto label_16a214;
        case 0x16a218u: goto label_16a218;
        case 0x16a21cu: goto label_16a21c;
        case 0x16a220u: goto label_16a220;
        case 0x16a224u: goto label_16a224;
        case 0x16a228u: goto label_16a228;
        case 0x16a22cu: goto label_16a22c;
        case 0x16a230u: goto label_16a230;
        case 0x16a234u: goto label_16a234;
        case 0x16a238u: goto label_16a238;
        case 0x16a23cu: goto label_16a23c;
        case 0x16a240u: goto label_16a240;
        case 0x16a244u: goto label_16a244;
        case 0x16a248u: goto label_16a248;
        case 0x16a24cu: goto label_16a24c;
        case 0x16a250u: goto label_16a250;
        case 0x16a254u: goto label_16a254;
        case 0x16a258u: goto label_16a258;
        case 0x16a25cu: goto label_16a25c;
        case 0x16a260u: goto label_16a260;
        case 0x16a264u: goto label_16a264;
        case 0x16a268u: goto label_16a268;
        case 0x16a26cu: goto label_16a26c;
        case 0x16a270u: goto label_16a270;
        case 0x16a274u: goto label_16a274;
        case 0x16a278u: goto label_16a278;
        case 0x16a27cu: goto label_16a27c;
        case 0x16a280u: goto label_16a280;
        case 0x16a284u: goto label_16a284;
        case 0x16a288u: goto label_16a288;
        case 0x16a28cu: goto label_16a28c;
        case 0x16a290u: goto label_16a290;
        case 0x16a294u: goto label_16a294;
        case 0x16a298u: goto label_16a298;
        case 0x16a29cu: goto label_16a29c;
        case 0x16a2a0u: goto label_16a2a0;
        case 0x16a2a4u: goto label_16a2a4;
        case 0x16a2a8u: goto label_16a2a8;
        case 0x16a2acu: goto label_16a2ac;
        case 0x16a2b0u: goto label_16a2b0;
        case 0x16a2b4u: goto label_16a2b4;
        case 0x16a2b8u: goto label_16a2b8;
        case 0x16a2bcu: goto label_16a2bc;
        case 0x16a2c0u: goto label_16a2c0;
        case 0x16a2c4u: goto label_16a2c4;
        case 0x16a2c8u: goto label_16a2c8;
        case 0x16a2ccu: goto label_16a2cc;
        case 0x16a2d0u: goto label_16a2d0;
        case 0x16a2d4u: goto label_16a2d4;
        case 0x16a2d8u: goto label_16a2d8;
        case 0x16a2dcu: goto label_16a2dc;
        case 0x16a2e0u: goto label_16a2e0;
        case 0x16a2e4u: goto label_16a2e4;
        case 0x16a2e8u: goto label_16a2e8;
        case 0x16a2ecu: goto label_16a2ec;
        case 0x16a2f0u: goto label_16a2f0;
        case 0x16a2f4u: goto label_16a2f4;
        case 0x16a2f8u: goto label_16a2f8;
        case 0x16a2fcu: goto label_16a2fc;
        case 0x16a300u: goto label_16a300;
        case 0x16a304u: goto label_16a304;
        case 0x16a308u: goto label_16a308;
        case 0x16a30cu: goto label_16a30c;
        case 0x16a310u: goto label_16a310;
        case 0x16a314u: goto label_16a314;
        case 0x16a318u: goto label_16a318;
        case 0x16a31cu: goto label_16a31c;
        case 0x16a320u: goto label_16a320;
        case 0x16a324u: goto label_16a324;
        case 0x16a328u: goto label_16a328;
        case 0x16a32cu: goto label_16a32c;
        case 0x16a330u: goto label_16a330;
        case 0x16a334u: goto label_16a334;
        case 0x16a338u: goto label_16a338;
        case 0x16a33cu: goto label_16a33c;
        case 0x16a340u: goto label_16a340;
        case 0x16a344u: goto label_16a344;
        case 0x16a348u: goto label_16a348;
        case 0x16a34cu: goto label_16a34c;
        case 0x16a350u: goto label_16a350;
        case 0x16a354u: goto label_16a354;
        case 0x16a358u: goto label_16a358;
        case 0x16a35cu: goto label_16a35c;
        case 0x16a360u: goto label_16a360;
        case 0x16a364u: goto label_16a364;
        case 0x16a368u: goto label_16a368;
        case 0x16a36cu: goto label_16a36c;
        case 0x16a370u: goto label_16a370;
        default: break;
    }

    ctx->pc = 0x16a0f0u;

label_16a0f0:
    // 0x16a0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16a0f4:
    // 0x16a0f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16a0f8:
    // 0x16a0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16a0fc:
    // 0x16a0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16a100:
    // 0x16a100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16a104:
    // 0x16a104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a108:
    // 0x16a108: 0x90a201f4  lbu         $v0, 0x1F4($a1)
    ctx->pc = 0x16a108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 500)));
label_16a10c:
    // 0x16a10c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16a110:
    if (ctx->pc == 0x16A110u) {
        ctx->pc = 0x16A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A10Cu;
        // 0x16a110: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A114u;
        goto label_16a114;
    }
    ctx->pc = 0x16A10Cu;
    {
        const bool branch_taken_0x16a10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A10Cu;
        // 0x16a110: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a10c) {
            ctx->pc = 0x16A11Cu;
            goto label_16a11c;
        }
    }
    ctx->pc = 0x16A114u;
label_16a114:
    // 0x16a114: 0x10000091  b           . + 4 + (0x91 << 2)
label_16a118:
    if (ctx->pc == 0x16A118u) {
        ctx->pc = 0x16A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A114u;
        // 0x16a118: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A11Cu;
        goto label_16a11c;
    }
    ctx->pc = 0x16A114u;
    {
        const bool branch_taken_0x16a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A114u;
        // 0x16a118: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a114) {
            ctx->pc = 0x16A35Cu;
            goto label_16a35c;
        }
    }
    ctx->pc = 0x16A11Cu;
label_16a11c:
    // 0x16a11c: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x16a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_16a120:
    // 0x16a120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16a124:
    if (ctx->pc == 0x16A124u) {
        ctx->pc = 0x16A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A120u;
        // 0x16a124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A128u;
        goto label_16a128;
    }
    ctx->pc = 0x16A120u;
    {
        const bool branch_taken_0x16a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A120u;
        // 0x16a124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a120) {
            ctx->pc = 0x16A130u;
            goto label_16a130;
        }
    }
    ctx->pc = 0x16A128u;
label_16a128:
    // 0x16a128: 0x1000008d  b           . + 4 + (0x8D << 2)
label_16a12c:
    if (ctx->pc == 0x16A12Cu) {
        ctx->pc = 0x16A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A128u;
        // 0x16a12c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A130u;
        goto label_16a130;
    }
    ctx->pc = 0x16A128u;
    {
        const bool branch_taken_0x16a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A128u;
        // 0x16a12c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a128) {
            ctx->pc = 0x16A360u;
            goto label_16a360;
        }
    }
    ctx->pc = 0x16A130u;
label_16a130:
    // 0x16a130: 0x92230222  lbu         $v1, 0x222($s1)
    ctx->pc = 0x16a130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
label_16a134:
    // 0x16a134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a138:
    // 0x16a138: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
label_16a13c:
    if (ctx->pc == 0x16A13Cu) {
        ctx->pc = 0x16A140u;
        goto label_16a140;
    }
    ctx->pc = 0x16A138u;
    {
        const bool branch_taken_0x16a138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a138) {
            ctx->pc = 0x16A230u;
            goto label_16a230;
        }
    }
    ctx->pc = 0x16A140u;
label_16a140:
    // 0x16a140: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a144:
    // 0x16a144: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16a144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_16a148:
    // 0x16a148: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16a14c:
    // 0x16a14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a150:
    // 0x16a150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16a154:
    // 0x16a154: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_16a158:
    // 0x16a158: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_16a15c:
    // 0x16a15c: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a160:
    // 0x16a160: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16a164:
    // 0x16a164: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_16a168:
    // 0x16a168: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16a16c:
    // 0x16a16c: 0xc05f330  jal         func_17CCC0
label_16a170:
    if (ctx->pc == 0x16A170u) {
        ctx->pc = 0x16A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A16Cu;
        // 0x16a170: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A174u;
        goto label_16a174;
    }
    ctx->pc = 0x16A16Cu;
    SET_GPR_U32(ctx, 31, 0x16A174u);
    ctx->pc = 0x16A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A16Cu;
    // 0x16a170: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCC0u, 0x16A16Cu, 0x16A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A174u;
label_16a174:
    // 0x16a174: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16a174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16a178:
    // 0x16a178: 0x0  nop
    ctx->pc = 0x16a178u;
    // NOP
label_16a17c:
    // 0x16a17c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x16a17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16a180:
    // 0x16a180: 0x0  nop
    ctx->pc = 0x16a180u;
    // NOP
label_16a184:
    // 0x16a184: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_16a188:
    if (ctx->pc == 0x16A188u) {
        ctx->pc = 0x16A18Cu;
        goto label_16a18c;
    }
    ctx->pc = 0x16A184u;
    {
        const bool branch_taken_0x16a184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a184) {
            ctx->pc = 0x16A208u;
            goto label_16a208;
        }
    }
    ctx->pc = 0x16A18Cu;
label_16a18c:
    // 0x16a18c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x16a18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
label_16a190:
    // 0x16a190: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_16a194:
    // 0x16a194: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x16a194u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_16a198:
    // 0x16a198: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16a198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16a19c:
    // 0x16a19c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16a19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_16a1a0:
    // 0x16a1a0: 0x0  nop
    ctx->pc = 0x16a1a0u;
    // NOP
label_16a1a4:
    // 0x16a1a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x16a1a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_16a1a8:
    // 0x16a1a8: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x16a1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_16a1ac:
    // 0x16a1ac: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x16a1acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_16a1b0:
    // 0x16a1b0: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x16a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_16a1b4:
    // 0x16a1b4: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16a1b8:
    // 0x16a1b8: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16a1b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16a1bc:
    // 0x16a1bc: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x16a1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16a1c0:
    // 0x16a1c0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_16a1c4:
    // 0x16a1c4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_16a1c8:
    // 0x16a1c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16a1cc:
    // 0x16a1cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16a1d0:
    // 0x16a1d0: 0xc056194  jal         func_158650
label_16a1d4:
    if (ctx->pc == 0x16A1D4u) {
        ctx->pc = 0x16A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1D0u;
        // 0x16a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A1D8u;
        goto label_16a1d8;
    }
    ctx->pc = 0x16A1D0u;
    SET_GPR_U32(ctx, 31, 0x16A1D8u);
    ctx->pc = 0x16A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1D0u;
    // 0x16a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x16A1D0u, 0x16A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1D8u;
label_16a1d8:
    // 0x16a1d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_16a1dc:
    // 0x16a1dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16a1e0:
    // 0x16a1e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16a1e4:
    // 0x16a1e4: 0xc055dac  jal         func_1576B0
label_16a1e8:
    if (ctx->pc == 0x16A1E8u) {
        ctx->pc = 0x16A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1E4u;
        // 0x16a1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A1ECu;
        goto label_16a1ec;
    }
    ctx->pc = 0x16A1E4u;
    SET_GPR_U32(ctx, 31, 0x16A1ECu);
    ctx->pc = 0x16A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1E4u;
    // 0x16a1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x16A1E4u, 0x16A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1ECu;
label_16a1ec:
    // 0x16a1ec: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16a1f0:
    // 0x16a1f0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_16a1f4:
    // 0x16a1f4: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16a1f8:
    // 0x16a1f8: 0xc054f5c  jal         func_153D70
label_16a1fc:
    if (ctx->pc == 0x16A1FCu) {
        ctx->pc = 0x16A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1F8u;
        // 0x16a1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A200u;
        goto label_16a200;
    }
    ctx->pc = 0x16A1F8u;
    SET_GPR_U32(ctx, 31, 0x16A200u);
    ctx->pc = 0x16A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1F8u;
    // 0x16a1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x16A1F8u, 0x16A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A200u;
label_16a200:
    // 0x16a200: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a204:
    if (ctx->pc == 0x16A204u) {
        ctx->pc = 0x16A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A200u;
        // 0x16a204: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A208u;
        goto label_16a208;
    }
    ctx->pc = 0x16A200u;
    {
        const bool branch_taken_0x16a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A200u;
        // 0x16a204: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a200) {
            ctx->pc = 0x16A20Cu;
            goto label_16a20c;
        }
    }
    ctx->pc = 0x16A208u;
label_16a208:
    // 0x16a208: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x16a208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a20c:
    // 0x16a20c: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x16a20cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_16a210:
    // 0x16a210: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_16a214:
    if (ctx->pc == 0x16A214u) {
        ctx->pc = 0x16A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A210u;
        // 0x16a214: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A218u;
        goto label_16a218;
    }
    ctx->pc = 0x16A210u;
    {
        const bool branch_taken_0x16a210 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A210u;
        // 0x16a214: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a210) {
            ctx->pc = 0x16A228u;
            goto label_16a228;
        }
    }
    ctx->pc = 0x16A218u;
label_16a218:
    // 0x16a218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a21c:
    // 0x16a21c: 0xc042118  jal         func_108460
label_16a220:
    if (ctx->pc == 0x16A220u) {
        ctx->pc = 0x16A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A21Cu;
        // 0x16a220: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A224u;
        goto label_16a224;
    }
    ctx->pc = 0x16A21Cu;
    SET_GPR_U32(ctx, 31, 0x16A224u);
    ctx->pc = 0x16A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A21Cu;
    // 0x16a220: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16A21Cu, 0x16A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A224u;
label_16a224:
    // 0x16a224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a228:
    // 0x16a228: 0x1000004c  b           . + 4 + (0x4C << 2)
label_16a22c:
    if (ctx->pc == 0x16A22Cu) {
        ctx->pc = 0x16A230u;
        goto label_16a230;
    }
    ctx->pc = 0x16A228u;
    {
        const bool branch_taken_0x16a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a228) {
            ctx->pc = 0x16A35Cu;
            goto label_16a35c;
        }
    }
    ctx->pc = 0x16A230u;
label_16a230:
    // 0x16a230: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_16a234:
    // 0x16a234: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_16a238:
    if (ctx->pc == 0x16A238u) {
        ctx->pc = 0x16A23Cu;
        goto label_16a23c;
    }
    ctx->pc = 0x16A234u;
    {
        const bool branch_taken_0x16a234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a234) {
            ctx->pc = 0x16A2FCu;
            goto label_16a2fc;
        }
    }
    ctx->pc = 0x16A23Cu;
label_16a23c:
    // 0x16a23c: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x16a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16a240:
    // 0x16a240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16a244:
    // 0x16a244: 0x0  nop
    ctx->pc = 0x16a244u;
    // NOP
label_16a248:
    // 0x16a248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16a24c:
    // 0x16a24c: 0x0  nop
    ctx->pc = 0x16a24cu;
    // NOP
label_16a250:
    // 0x16a250: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_16a254:
    if (ctx->pc == 0x16A254u) {
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A258u;
        goto label_16a258;
    }
    ctx->pc = 0x16A250u;
    {
        const bool branch_taken_0x16a250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a250) {
            ctx->pc = 0x16A35Cu;
            goto label_16a35c;
        }
    }
    ctx->pc = 0x16A258u;
label_16a258:
    // 0x16a258: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a25c:
    // 0x16a25c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_16a260:
    // 0x16a260: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16a264:
    // 0x16a264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a268:
    // 0x16a268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16a26c:
    // 0x16a26c: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_16a270:
    // 0x16a270: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x16a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_16a274:
    // 0x16a274: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16a278:
    // 0x16a278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16a27c:
    // 0x16a27c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x16a27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_16a280:
    // 0x16a280: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16a284:
    // 0x16a284: 0xc05f330  jal         func_17CCC0
label_16a288:
    if (ctx->pc == 0x16A288u) {
        ctx->pc = 0x16A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A284u;
        // 0x16a288: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A28Cu;
        goto label_16a28c;
    }
    ctx->pc = 0x16A284u;
    SET_GPR_U32(ctx, 31, 0x16A28Cu);
    ctx->pc = 0x16A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A284u;
    // 0x16a288: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCC0u, 0x16A284u, 0x16A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A28Cu;
label_16a28c:
    // 0x16a28c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16a28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16a290:
    // 0x16a290: 0x0  nop
    ctx->pc = 0x16a290u;
    // NOP
label_16a294:
    // 0x16a294: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16a298:
    // 0x16a298: 0x0  nop
    ctx->pc = 0x16a298u;
    // NOP
label_16a29c:
    // 0x16a29c: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
label_16a2a0:
    if (ctx->pc == 0x16A2A0u) {
        ctx->pc = 0x16A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A29Cu;
        // 0x16a2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2A4u;
        goto label_16a2a4;
    }
    ctx->pc = 0x16A29Cu;
    {
        const bool branch_taken_0x16a29c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A29Cu;
        // 0x16a2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a29c) {
            ctx->pc = 0x16A358u;
            goto label_16a358;
        }
    }
    ctx->pc = 0x16A2A4u;
label_16a2a4:
    // 0x16a2a4: 0xc042118  jal         func_108460
label_16a2a8:
    if (ctx->pc == 0x16A2A8u) {
        ctx->pc = 0x16A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2A4u;
        // 0x16a2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2ACu;
        goto label_16a2ac;
    }
    ctx->pc = 0x16A2A4u;
    SET_GPR_U32(ctx, 31, 0x16A2ACu);
    ctx->pc = 0x16A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2A4u;
    // 0x16a2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16A2A4u, 0x16A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2ACu;
label_16a2ac:
    // 0x16a2ac: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x16a2acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16a2b0:
    // 0x16a2b0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x16a2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_16a2b4:
    // 0x16a2b4: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x16a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_16a2b8:
    // 0x16a2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a2bc:
    // 0x16a2bc: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16a2c0:
    // 0x16a2c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a2c4:
    // 0x16a2c4: 0x320f809  jalr        $t9
label_16a2c8:
    if (ctx->pc == 0x16A2C8u) {
        ctx->pc = 0x16A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2C4u;
        // 0x16a2c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2CCu;
        goto label_16a2cc;
    }
    ctx->pc = 0x16A2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A2CCu);
        ctx->pc = 0x16A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2C4u;
        // 0x16a2c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A2C4u, 0x16A2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A2CCu;
label_16a2cc:
    // 0x16a2cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a2d0:
    // 0x16a2d0: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16a2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16a2d4:
    // 0x16a2d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16a2d8:
    if (ctx->pc == 0x16A2D8u) {
        ctx->pc = 0x16A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2D4u;
        // 0x16a2d8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2DCu;
        goto label_16a2dc;
    }
    ctx->pc = 0x16A2D4u;
    {
        const bool branch_taken_0x16a2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2D4u;
        // 0x16a2d8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2d4) {
            ctx->pc = 0x16A2E4u;
            goto label_16a2e4;
        }
    }
    ctx->pc = 0x16A2DCu;
label_16a2dc:
    // 0x16a2dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_16a2e0:
    if (ctx->pc == 0x16A2E0u) {
        ctx->pc = 0x16A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2DCu;
        // 0x16a2e0: 0xa6220220  sh          $v0, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2E4u;
        goto label_16a2e4;
    }
    ctx->pc = 0x16A2DCu;
    {
        const bool branch_taken_0x16a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2DCu;
        // 0x16a2e0: 0xa6220220  sh          $v0, 0x220($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2dc) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A2E4u;
label_16a2e4:
    // 0x16a2e4: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16a2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16a2e8:
    // 0x16a2e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_16a2ec:
    // 0x16a2ec: 0xa6220220  sh          $v0, 0x220($s1)
    ctx->pc = 0x16a2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 2));
label_16a2f0:
    // 0x16a2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a2f4:
    // 0x16a2f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_16a2f8:
    if (ctx->pc == 0x16A2F8u) {
        ctx->pc = 0x16A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2F4u;
        // 0x16a2f8: 0xae300224  sw          $s0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2FCu;
        goto label_16a2fc;
    }
    ctx->pc = 0x16A2F4u;
    {
        const bool branch_taken_0x16a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2F4u;
        // 0x16a2f8: 0xae300224  sw          $s0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2f4) {
            ctx->pc = 0x16A35Cu;
            goto label_16a35c;
        }
    }
    ctx->pc = 0x16A2FCu;
label_16a2fc:
    // 0x16a2fc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_16a300:
    if (ctx->pc == 0x16A300u) {
        ctx->pc = 0x16A304u;
        goto label_16a304;
    }
    ctx->pc = 0x16A2FCu;
    {
        const bool branch_taken_0x16a2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x16a2fc) {
            ctx->pc = 0x16A30Cu;
            goto label_16a30c;
        }
    }
    ctx->pc = 0x16A304u;
label_16a304:
    // 0x16a304: 0x10000015  b           . + 4 + (0x15 << 2)
label_16a308:
    if (ctx->pc == 0x16A308u) {
        ctx->pc = 0x16A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A304u;
        // 0x16a308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A30Cu;
        goto label_16a30c;
    }
    ctx->pc = 0x16A304u;
    {
        const bool branch_taken_0x16a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A304u;
        // 0x16a308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a304) {
            ctx->pc = 0x16A35Cu;
            goto label_16a35c;
        }
    }
    ctx->pc = 0x16A30Cu;
label_16a30c:
    // 0x16a30c: 0xc059990  jal         func_166640
label_16a310:
    if (ctx->pc == 0x16A310u) {
        ctx->pc = 0x16A314u;
        goto label_16a314;
    }
    ctx->pc = 0x16A30Cu;
    SET_GPR_U32(ctx, 31, 0x16A314u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16A30Cu, 0x16A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A314u;
label_16a314:
    // 0x16a314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16a314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a318:
    // 0x16a318: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_16a31c:
    // 0x16a31c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16a320:
    // 0x16a320: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16a324:
    // 0x16a324: 0xc055c50  jal         func_157140
label_16a328:
    if (ctx->pc == 0x16A328u) {
        ctx->pc = 0x16A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A324u;
        // 0x16a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A32Cu;
        goto label_16a32c;
    }
    ctx->pc = 0x16A324u;
    SET_GPR_U32(ctx, 31, 0x16A32Cu);
    ctx->pc = 0x16A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A324u;
    // 0x16a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157140u, 0x16A324u, 0x16A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A32Cu;
label_16a32c:
    // 0x16a32c: 0x2a410000  slti        $at, $s2, 0x0
    ctx->pc = 0x16a32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
label_16a330:
    // 0x16a330: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_16a334:
    if (ctx->pc == 0x16A334u) {
        ctx->pc = 0x16A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A330u;
        // 0x16a334: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A338u;
        goto label_16a338;
    }
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A330u;
        // 0x16a334: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A350u;
            goto label_16a350;
        }
    }
    ctx->pc = 0x16A338u;
label_16a338:
    // 0x16a338: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16a33c:
    // 0x16a33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a340:
    // 0x16a340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16a344:
    // 0x16a344: 0xc0425a4  jal         func_109690
label_16a348:
    if (ctx->pc == 0x16A348u) {
        ctx->pc = 0x16A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A344u;
        // 0x16a348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A34Cu;
        goto label_16a34c;
    }
    ctx->pc = 0x16A344u;
    SET_GPR_U32(ctx, 31, 0x16A34Cu);
    ctx->pc = 0x16A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A344u;
    // 0x16a348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16A344u, 0x16A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A34Cu;
label_16a34c:
    // 0x16a34c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16a34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a350:
    // 0x16a350: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a354:
    if (ctx->pc == 0x16A354u) {
        ctx->pc = 0x16A358u;
        goto label_16a358;
    }
    ctx->pc = 0x16A350u;
    {
        const bool branch_taken_0x16a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a350) {
            ctx->pc = 0x16A35Cu;
            goto label_16a35c;
        }
    }
    ctx->pc = 0x16A358u;
label_16a358:
    // 0x16a358: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a35c:
    // 0x16a35c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a360:
    // 0x16a360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a364:
    // 0x16a364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a368:
    // 0x16a368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16a36c:
    // 0x16a36c: 0x3e00008  jr          $ra
label_16a370:
    if (ctx->pc == 0x16A370u) {
        ctx->pc = 0x16A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A36Cu;
        // 0x16a370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A374u;
        goto label_fallthrough_0x16a36c;
    }
    ctx->pc = 0x16A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A36Cu;
        // 0x16a370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a36c:
    ctx->pc = 0x16A374u;
}
