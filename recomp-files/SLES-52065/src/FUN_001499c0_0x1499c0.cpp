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

// Function: FUN_001499c0
// Address: 0x1499c0 - 0x14abd0
void FUN_001499c0_0x1499c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001499c0_0x1499c0");
#endif

    switch (ctx->pc) {
        case 0x149a70u: goto label_149a70;
        case 0x149a78u: goto label_149a78;
        case 0x149a8cu: goto label_149a8c;
        case 0x149a9cu: goto label_149a9c;
        case 0x149af8u: goto label_149af8;
        case 0x149b18u: goto label_149b18;
        case 0x149b78u: goto label_149b78;
        case 0x149ba4u: goto label_149ba4;
        case 0x149c00u: goto label_149c00;
        case 0x149c38u: goto label_149c38;
        case 0x149c44u: goto label_149c44;
        case 0x149c54u: goto label_149c54;
        case 0x149cc8u: goto label_149cc8;
        case 0x149cd4u: goto label_149cd4;
        case 0x149ce4u: goto label_149ce4;
        case 0x149d64u: goto label_149d64;
        case 0x149d94u: goto label_149d94;
        case 0x149da4u: goto label_149da4;
        case 0x149e18u: goto label_149e18;
        case 0x149e24u: goto label_149e24;
        case 0x149e34u: goto label_149e34;
        case 0x149f14u: goto label_149f14;
        case 0x149f6cu: goto label_149f6c;
        case 0x149fc4u: goto label_149fc4;
        case 0x14a02cu: goto label_14a02c;
        case 0x14a068u: goto label_14a068;
        case 0x14a104u: goto label_14a104;
        case 0x14a12cu: goto label_14a12c;
        case 0x14a188u: goto label_14a188;
        case 0x14a268u: goto label_14a268;
        case 0x14a2bcu: goto label_14a2bc;
        case 0x14a314u: goto label_14a314;
        case 0x14a370u: goto label_14a370;
        case 0x14a390u: goto label_14a390;
        case 0x14a3b0u: goto label_14a3b0;
        case 0x14a3dcu: goto label_14a3dc;
        case 0x14a438u: goto label_14a438;
        case 0x14a47cu: goto label_14a47c;
        case 0x14a4ccu: goto label_14a4cc;
        case 0x14a4d8u: goto label_14a4d8;
        case 0x14a4e8u: goto label_14a4e8;
        case 0x14a568u: goto label_14a568;
        case 0x14a58cu: goto label_14a58c;
        case 0x14a59cu: goto label_14a59c;
        case 0x14a6bcu: goto label_14a6bc;
        case 0x14a6c8u: goto label_14a6c8;
        case 0x14a6d8u: goto label_14a6d8;
        case 0x14a77cu: goto label_14a77c;
        case 0x14a7e0u: goto label_14a7e0;
        case 0x14a7e8u: goto label_14a7e8;
        case 0x14a7f4u: goto label_14a7f4;
        case 0x14a818u: goto label_14a818;
        case 0x14a848u: goto label_14a848;
        case 0x14a86cu: goto label_14a86c;
        case 0x14a87cu: goto label_14a87c;
        case 0x14a8fcu: goto label_14a8fc;
        case 0x14a950u: goto label_14a950;
        case 0x14a9bcu: goto label_14a9bc;
        case 0x14aa10u: goto label_14aa10;
        case 0x14aa74u: goto label_14aa74;
        case 0x14aa9cu: goto label_14aa9c;
        case 0x14aaf8u: goto label_14aaf8;
        case 0x14ab44u: goto label_14ab44;
        case 0x14ab4cu: goto label_14ab4c;
        case 0x14ab64u: goto label_14ab64;
        case 0x14ab6cu: goto label_14ab6c;
        default: break;
    }

    ctx->pc = 0x1499c0u;

    // 0x1499c0: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x1499c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x1499c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1499c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1499c8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1499cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1499ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1499d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1499d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1499d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1499d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1499d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1499d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1499dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1499dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1499e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1499e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1499e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1499e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1499e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1499ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1499f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1499f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1499f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1499f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1499f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1499fc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1499fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149a00: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x149a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149a04: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x149a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149a08: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x149a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149a0c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x149a0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x149a10: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x149a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x149a14: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x149a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x149a18: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x149a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x149a1c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x149a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149a20: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x149a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149a24: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x149a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x149a28: 0x1280045d  beqz        $s4, . + 4 + (0x45D << 2)
    ctx->pc = 0x149A28u;
    {
        const bool branch_taken_0x149a28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A28u;
        // 0x149a2c: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a28) {
            ctx->pc = 0x14ABA0u;
            goto label_14aba0;
        }
    }
    ctx->pc = 0x149A30u;
    // 0x149a30: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x149a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x149a34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x149a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x149a38: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x149a38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x149a3c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x149A3Cu;
    {
        const bool branch_taken_0x149a3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149a3c) {
            ctx->pc = 0x149A58u;
            goto label_149a58;
        }
    }
    ctx->pc = 0x149A44u;
    // 0x149a44: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x149a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x149a48: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x149a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x149a4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x149a50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x149A50u;
    {
        const bool branch_taken_0x149a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149a50) {
            ctx->pc = 0x149A78u;
            goto label_149a78;
        }
    }
    ctx->pc = 0x149A58u;
label_149a58:
    // 0x149a58: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149a5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x149a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x149a60: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x149a64: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x149a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x149a68: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x149A68u;
    SET_GPR_U32(ctx, 31, 0x149A70u);
    ctx->pc = 0x149A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A68u;
    // 0x149a6c: 0x24a5f1e0  addiu       $a1, $a1, -0xE20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x149A68u, 0x149A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A70u;
label_149a70:
    // 0x149a70: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x149A70u;
    SET_GPR_U32(ctx, 31, 0x149A78u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x149A70u, 0x149A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A78u;
label_149a78:
    // 0x149a78: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x149a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x149a7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149A7Cu;
    {
        const bool branch_taken_0x149a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A7Cu;
        // 0x149a80: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a7c) {
            ctx->pc = 0x149A9Cu;
            goto label_149a9c;
        }
    }
    ctx->pc = 0x149A84u;
    // 0x149a84: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x149A84u;
    SET_GPR_U32(ctx, 31, 0x149A8Cu);
    ctx->pc = 0x149A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A84u;
    // 0x149a88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x149A84u, 0x149A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A8Cu;
label_149a8c:
    // 0x149a8c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x149a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x149a90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a94: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x149A94u;
    SET_GPR_U32(ctx, 31, 0x149A9Cu);
    ctx->pc = 0x149A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A94u;
    // 0x149a98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x149A94u, 0x149A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A9Cu;
label_149a9c:
    // 0x149a9c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x149aa0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x149aa4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x149aa8: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x149aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149aac: 0x508823  subu        $s1, $v0, $s0
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149ab0: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x149ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x149ab4: 0x14200219  bnez        $at, . + 4 + (0x219 << 2)
    ctx->pc = 0x149AB4u;
    {
        const bool branch_taken_0x149ab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ab4) {
            ctx->pc = 0x14A31Cu;
            goto label_14a31c;
        }
    }
    ctx->pc = 0x149ABCu;
    // 0x149abc: 0xafa00878  sw          $zero, 0x878($sp)
    ctx->pc = 0x149abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2168), GPR_U32(ctx, 0));
    // 0x149ac0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x149ac4: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x149ac8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x149ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x149acc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x149accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x149ad0: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x149ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x149ad4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149ad8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x149adc: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x149adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x149ae0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x149AE0u;
    {
        const bool branch_taken_0x149ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AE0u;
        // 0x149ae4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ae0) {
            ctx->pc = 0x149B00u;
            goto label_149b00;
        }
    }
    ctx->pc = 0x149AE8u;
    // 0x149ae8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x149aec: 0x27a70878  addiu       $a3, $sp, 0x878
    ctx->pc = 0x149aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2168));
    // 0x149af0: 0xc052d20  jal         func_14B480
    ctx->pc = 0x149AF0u;
    SET_GPR_U32(ctx, 31, 0x149AF8u);
    ctx->pc = 0x149AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AF0u;
    // 0x149af4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B480u, 0x149AF0u, 0x149AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AF8u;
label_149af8:
    // 0x149af8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149AF8u;
    {
        const bool branch_taken_0x149af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AF8u;
        // 0x149afc: 0x8ea60014  lw          $a2, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149af8) {
            ctx->pc = 0x149B0Cu;
            goto label_149b0c;
        }
    }
    ctx->pc = 0x149B00u;
label_149b00:
    // 0x149b00: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x149b04: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x149b04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x149b08: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x149b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_149b0c:
    // 0x149b0c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x149b10: 0xc052340  jal         func_148D00
    ctx->pc = 0x149B10u;
    SET_GPR_U32(ctx, 31, 0x149B18u);
    ctx->pc = 0x149B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B10u;
    // 0x149b14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x149B10u, 0x149B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B18u;
label_149b18:
    // 0x149b18: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x149b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x149b1c: 0x8fa50220  lw          $a1, 0x220($sp)
    ctx->pc = 0x149b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x149b20: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x149b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x149b24: 0x8fa3022c  lw          $v1, 0x22C($sp)
    ctx->pc = 0x149b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x149b28: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x149b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x149b2c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x149b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x149b30: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x149b34: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x149b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x149b38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149b3c: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x149b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x149b40: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x149b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x149b44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149b48: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x149b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x149b4c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x149b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x149b50: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x149B50u;
    {
        const bool branch_taken_0x149b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B50u;
        // 0x149b54: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b50) {
            ctx->pc = 0x149C2Cu;
            goto label_149c2c;
        }
    }
    ctx->pc = 0x149B58u;
    // 0x149b58: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149b5c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x149b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x149b60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149b64: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x149b68: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149b6c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x149b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x149b70: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149B70u;
    SET_GPR_U32(ctx, 31, 0x149B78u);
    ctx->pc = 0x149B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B70u;
    // 0x149b74: 0xfca20010  sd          $v0, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149B70u, 0x149B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B78u;
label_149b78:
    // 0x149b78: 0x27b2042c  addiu       $s2, $sp, 0x42C
    ctx->pc = 0x149b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
    // 0x149b7c: 0x27b60430  addiu       $s6, $sp, 0x430
    ctx->pc = 0x149b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x149b80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x149b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149b84: 0x27b70434  addiu       $s7, $sp, 0x434
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1076));
    // 0x149b88: 0x2690ffff  addiu       $s0, $s4, -0x1
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x149b8c: 0xafa3040c  sw          $v1, 0x40C($sp)
    ctx->pc = 0x149b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 3));
    // 0x149b90: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149b94: 0xafa30410  sw          $v1, 0x410($sp)
    ctx->pc = 0x149b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 3));
    // 0x149b98: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x149b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149b9c: 0x128001d3  beqz        $s4, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x149B9Cu;
    {
        const bool branch_taken_0x149b9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B9Cu;
        // 0x149ba0: 0xafa30414  sw          $v1, 0x414($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b9c) {
            ctx->pc = 0x14A2ECu;
            goto label_14a2ec;
        }
    }
    ctx->pc = 0x149BA4u;
label_149ba4:
    // 0x149ba4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x149ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149ba8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BA8u;
    {
        const bool branch_taken_0x149ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ba8) {
            ctx->pc = 0x149BB8u;
            goto label_149bb8;
        }
    }
    ctx->pc = 0x149BB0u;
    // 0x149bb0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x149bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149bb4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x149bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_149bb8:
    // 0x149bb8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149bc0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x149bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x149bc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x149bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149bc8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x149bcc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x149bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x149bd0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149bd4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149BD4u;
    {
        const bool branch_taken_0x149bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x149BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BD4u;
        // 0x149bd8: 0x27be0428  addiu       $fp, $sp, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bd4) {
            ctx->pc = 0x149C18u;
            goto label_149c18;
        }
    }
    ctx->pc = 0x149BDCu;
    // 0x149bdc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x149bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x149be0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149be4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149be8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BE8u;
    {
        const bool branch_taken_0x149be8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BE8u;
        // 0x149bec: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149be8) {
            ctx->pc = 0x149BF8u;
            goto label_149bf8;
        }
    }
    ctx->pc = 0x149BF0u;
    // 0x149bf0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x149bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x149bf4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x149bf4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_149bf8:
    // 0x149bf8: 0xc050224  jal         func_140890
    ctx->pc = 0x149BF8u;
    SET_GPR_U32(ctx, 31, 0x149C00u);
    ctx->pc = 0x149BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BF8u;
    // 0x149bfc: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x149BF8u, 0x149C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C00u;
label_149c00:
    // 0x149c00: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x149c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x149c04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x149c08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x149c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149c0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x149c10: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x149c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x149c14: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x149c14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_149c18:
    // 0x149c18: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x149c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c1c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x149C1Cu;
    {
        const bool branch_taken_0x149c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C1Cu;
        // 0x149c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c1c) {
            ctx->pc = 0x149BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149ba4;
        }
    }
    ctx->pc = 0x149C24u;
    // 0x149c24: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x149C24u;
    {
        const bool branch_taken_0x149c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149c24) {
            ctx->pc = 0x14A2ECu;
            goto label_14a2ec;
        }
    }
    ctx->pc = 0x149C2Cu;
label_149c2c:
    // 0x149c2c: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x149c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
    // 0x149c30: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x149C30u;
    SET_GPR_U32(ctx, 31, 0x149C38u);
    ctx->pc = 0x149C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C30u;
    // 0x149c34: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x149C30u, 0x149C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C38u;
label_149c38:
    // 0x149c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c3c: 0xc051898  jal         func_146260
    ctx->pc = 0x149C3Cu;
    SET_GPR_U32(ctx, 31, 0x149C44u);
    ctx->pc = 0x149C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C3Cu;
    // 0x149c40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149C3Cu, 0x149C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C44u;
label_149c44:
    // 0x149c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c48: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x149c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x149c4c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149C4Cu;
    SET_GPR_U32(ctx, 31, 0x149C54u);
    ctx->pc = 0x149C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C4Cu;
    // 0x149c50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149C4Cu, 0x149C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C54u;
label_149c54:
    // 0x149c54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149c58: 0x27a6024c  addiu       $a2, $sp, 0x24C
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x149c5c: 0x27a70250  addiu       $a3, $sp, 0x250
    ctx->pc = 0x149c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x149c60: 0x27a80254  addiu       $t0, $sp, 0x254
    ctx->pc = 0x149c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x149c64: 0x27be0104  addiu       $fp, $sp, 0x104
    ctx->pc = 0x149c64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x149c68: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x149c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
    // 0x149c6c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x149c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149c70: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x149c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x149c74: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149c78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149c78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x149c7c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149c80: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x149c80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x149c84: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x149c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x149c88: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x149c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x149c8c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x149c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x149c90: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x149c94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149c98: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x149c9c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x149c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x149ca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149ca4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x149ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149ca8: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x149ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x149cac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149cb0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x149cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x149cb4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x149cb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149cbc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149cc0: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x149CC0u;
    SET_GPR_U32(ctx, 31, 0x149CC8u);
    ctx->pc = 0x149CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CC0u;
    // 0x149cc4: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x149CC0u, 0x149CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CC8u;
label_149cc8:
    // 0x149cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ccc: 0xc051898  jal         func_146260
    ctx->pc = 0x149CCCu;
    SET_GPR_U32(ctx, 31, 0x149CD4u);
    ctx->pc = 0x149CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CCCu;
    // 0x149cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149CCCu, 0x149CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CD4u;
label_149cd4:
    // 0x149cd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149cd8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x149cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x149cdc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149CDCu;
    SET_GPR_U32(ctx, 31, 0x149CE4u);
    ctx->pc = 0x149CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CDCu;
    // 0x149ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149CDCu, 0x149CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CE4u;
label_149ce4:
    // 0x149ce4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149ce8: 0x27a4026c  addiu       $a0, $sp, 0x26C
    ctx->pc = 0x149ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x149cec: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x149cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x149cf0: 0x27a60274  addiu       $a2, $sp, 0x274
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
    // 0x149cf4: 0x27b7011c  addiu       $s7, $sp, 0x11C
    ctx->pc = 0x149cf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x149cf8: 0x27b60120  addiu       $s6, $sp, 0x120
    ctx->pc = 0x149cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x149cfc: 0x27b20124  addiu       $s2, $sp, 0x124
    ctx->pc = 0x149cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x149d00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x149d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x149d04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149d08: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x149d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x149d0c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149d10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x149d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x149d14: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x149d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x149d18: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x149d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x149d1c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x149d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x149d20: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x149d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x149d24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149d28: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x149d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x149d2c: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x149d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x149d30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149d34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x149d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149d38: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x149d38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x149d3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149d40: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x149d40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x149d44: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149d48: 0x16140003  bne         $s0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x149D48u;
    {
        const bool branch_taken_0x149d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x149D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D48u;
        // 0x149d4c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d48) {
            ctx->pc = 0x149D58u;
            goto label_149d58;
        }
    }
    ctx->pc = 0x149D50u;
    // 0x149d50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x149D50u;
    {
        const bool branch_taken_0x149d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D50u;
        // 0x149d54: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d50) {
            ctx->pc = 0x149DC0u;
            goto label_149dc0;
        }
    }
    ctx->pc = 0x149D58u;
label_149d58:
    // 0x149d58: 0x27a407c0  addiu       $a0, $sp, 0x7C0
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    // 0x149d5c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149D5Cu;
    SET_GPR_U32(ctx, 31, 0x149D64u);
    ctx->pc = 0x149D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D5Cu;
    // 0x149d60: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149D5Cu, 0x149D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D64u;
label_149d64:
    // 0x149d64: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x149d68: 0x27a407c0  addiu       $a0, $sp, 0x7C0
    ctx->pc = 0x149d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
    // 0x149d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d74: 0xafa207cc  sw          $v0, 0x7CC($sp)
    ctx->pc = 0x149d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1996), GPR_U32(ctx, 2));
    // 0x149d78: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x149d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x149d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d80: 0xafa207d0  sw          $v0, 0x7D0($sp)
    ctx->pc = 0x149d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2000), GPR_U32(ctx, 2));
    // 0x149d84: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x149d88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149d8c: 0xc051898  jal         func_146260
    ctx->pc = 0x149D8Cu;
    SET_GPR_U32(ctx, 31, 0x149D94u);
    ctx->pc = 0x149D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D8Cu;
    // 0x149d90: 0xafa207d4  sw          $v0, 0x7D4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2004), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149D8Cu, 0x149D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D94u;
label_149d94:
    // 0x149d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d98: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x149d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x149d9c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149D9Cu;
    SET_GPR_U32(ctx, 31, 0x149DA4u);
    ctx->pc = 0x149DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D9Cu;
    // 0x149da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149D9Cu, 0x149DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DA4u;
label_149da4:
    // 0x149da4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149da8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x149da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x149dac: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x149dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x149db0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149db4: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x149db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x149db8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149dbc: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x149dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
label_149dc0:
    // 0x149dc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149dc4: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x149dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x149dc8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x149dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x149dcc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x149dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x149dd0: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x149dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x149dd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149dd8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149ddc: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x149de0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149de4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x149de8: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x149de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x149dec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149df0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x149df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x149df4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x149df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x149df8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149dfc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x149e00: 0x27a20144  addiu       $v0, $sp, 0x144
    ctx->pc = 0x149e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x149e04: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x149E04u;
    {
        const bool branch_taken_0x149e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E04u;
        // 0x149e08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e04) {
            ctx->pc = 0x149E8Cu;
            goto label_149e8c;
        }
    }
    ctx->pc = 0x149E0Cu;
    // 0x149e0c: 0x27a407e0  addiu       $a0, $sp, 0x7E0
    ctx->pc = 0x149e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
    // 0x149e10: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x149E10u;
    SET_GPR_U32(ctx, 31, 0x149E18u);
    ctx->pc = 0x149E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E10u;
    // 0x149e14: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x149E10u, 0x149E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E18u;
label_149e18:
    // 0x149e18: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x149e1c: 0xc051898  jal         func_146260
    ctx->pc = 0x149E1Cu;
    SET_GPR_U32(ctx, 31, 0x149E24u);
    ctx->pc = 0x149E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E1Cu;
    // 0x149e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149E1Cu, 0x149E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E24u;
label_149e24:
    // 0x149e24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e28: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x149e2c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149E2Cu;
    SET_GPR_U32(ctx, 31, 0x149E34u);
    ctx->pc = 0x149E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E2Cu;
    // 0x149e30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149E2Cu, 0x149E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E34u;
label_149e34:
    // 0x149e34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149e38: 0x27a502ac  addiu       $a1, $sp, 0x2AC
    ctx->pc = 0x149e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
    // 0x149e3c: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x149e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x149e40: 0x27a702b4  addiu       $a3, $sp, 0x2B4
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x149e44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x149e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x149e48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149e4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x149e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x149e50: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149e54: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x149e58: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x149e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x149e5c: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x149e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x149e60: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x149e64: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x149e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x149e68: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x149e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x149e6c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x149e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x149e70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149e74: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x149e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x149e78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x149e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149e7c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x149e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x149e80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x149e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x149e84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x149E84u;
    {
        const bool branch_taken_0x149e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E84u;
        // 0x149e88: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e84) {
            ctx->pc = 0x149EC4u;
            goto label_149ec4;
        }
    }
    ctx->pc = 0x149E8Cu;
label_149e8c:
    // 0x149e8c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x149e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x149e90: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x149e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x149e94: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x149e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x149e98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149e9c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x149e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x149ea0: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x149ea4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149ea8: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x149ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x149eac: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x149eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149eb0: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x149eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x149eb4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x149eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149eb8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x149eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x149ebc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149ec0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x149ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_149ec4:
    // 0x149ec4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149ec8: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x149ecc: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x149eccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149ed0: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x149ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x149ed4: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x149ed4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149ed8: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x149edc: 0x27a70440  addiu       $a3, $sp, 0x440
    ctx->pc = 0x149edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x149ee0: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x149ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x149ee4: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x149ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x149ee8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149eec: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x149eecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x149ef0: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x149ef0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149ef4: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x149ef4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x149ef8: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x149ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x149efc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149efcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149f00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149f00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f04: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149f08: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x149f08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x149f0c: 0xc052b68  jal         func_14ADA0
    ctx->pc = 0x149F0Cu;
    SET_GPR_U32(ctx, 31, 0x149F14u);
    ctx->pc = 0x149F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F0Cu;
    // 0x149f10: 0xfce20010  sd          $v0, 0x10($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADA0u, 0x149F0Cu, 0x149F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F14u;
label_149f14:
    // 0x149f14: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x149f14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x149f18: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x149F18u;
    {
        const bool branch_taken_0x149f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F18u;
        // 0x149f1c: 0x214082b  sltu        $at, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f18) {
            ctx->pc = 0x14A0C8u;
            goto label_14a0c8;
        }
    }
    ctx->pc = 0x149F20u;
    // 0x149f20: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x149f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x149f24: 0x27a804e0  addiu       $t0, $sp, 0x4E0
    ctx->pc = 0x149f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x149f28: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x149f28u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f2c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x149f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x149f30: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x149f30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149f34: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x149f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x149f38: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x149f3c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x149f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x149f40: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x149f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149f44: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x149f44u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x149f48: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x149f48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149f4c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x149f4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x149f50: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x149f50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x149f54: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149f54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149f58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f5c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149f60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x149f60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x149f64: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x149F64u;
    {
        const bool branch_taken_0x149f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F64u;
        // 0x149f68: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f64) {
            ctx->pc = 0x14A044u;
            goto label_14a044;
        }
    }
    ctx->pc = 0x149F6Cu;
label_149f6c:
    // 0x149f6c: 0x27b704f0  addiu       $s7, $sp, 0x4F0
    ctx->pc = 0x149f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x149f70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x149f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x149f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149f78: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x149f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x149f7c: 0x8fa204f4  lw          $v0, 0x4F4($sp)
    ctx->pc = 0x149f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1268)));
    // 0x149f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149f84: 0xafa204f4  sw          $v0, 0x4F4($sp)
    ctx->pc = 0x149f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1268), GPR_U32(ctx, 2));
    // 0x149f88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149f8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x149f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149f90: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x149f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x149f94: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x149f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149f98: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149F98u;
    {
        const bool branch_taken_0x149f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F98u;
        // 0x149f9c: 0x27b604e8  addiu       $s6, $sp, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f98) {
            ctx->pc = 0x149FDCu;
            goto label_149fdc;
        }
    }
    ctx->pc = 0x149FA0u;
    // 0x149fa0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149fa8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149fac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149FACu;
    {
        const bool branch_taken_0x149fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FACu;
        // 0x149fb0: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fac) {
            ctx->pc = 0x149FBCu;
            goto label_149fbc;
        }
    }
    ctx->pc = 0x149FB4u;
    // 0x149fb4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x149fb8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_149fbc:
    // 0x149fbc: 0xc050224  jal         func_140890
    ctx->pc = 0x149FBCu;
    SET_GPR_U32(ctx, 31, 0x149FC4u);
    ctx->pc = 0x149FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FBCu;
    // 0x149fc0: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x149FBCu, 0x149FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FC4u;
label_149fc4:
    // 0x149fc4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149fc8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x149fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x149fcc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149fd0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x149fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x149fd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149fd8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x149fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_149fdc:
    // 0x149fdc: 0x0  nop
    ctx->pc = 0x149fdcu;
    // NOP
    // 0x149fe0: 0x8fa204b4  lw          $v0, 0x4B4($sp)
    ctx->pc = 0x149fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x149fe4: 0x27b604b0  addiu       $s6, $sp, 0x4B0
    ctx->pc = 0x149fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x149fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149fec: 0xafa204b4  sw          $v0, 0x4B4($sp)
    ctx->pc = 0x149fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 2));
    // 0x149ff0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x149ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149ff4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x149ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149ff8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x149ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x149ffc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a000: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A000u;
    {
        const bool branch_taken_0x14a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A000u;
        // 0x14a004: 0x27b204a8  addiu       $s2, $sp, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a000) {
            ctx->pc = 0x14A044u;
            goto label_14a044;
        }
    }
    ctx->pc = 0x14A008u;
    // 0x14a008: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a00c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a010: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a014: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A014u;
    {
        const bool branch_taken_0x14a014 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A014u;
        // 0x14a018: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a014) {
            ctx->pc = 0x14A024u;
            goto label_14a024;
        }
    }
    ctx->pc = 0x14A01Cu;
    // 0x14a01c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a020: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_14a024:
    // 0x14a024: 0xc050224  jal         func_140890
    ctx->pc = 0x14A024u;
    SET_GPR_U32(ctx, 31, 0x14A02Cu);
    ctx->pc = 0x14A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A024u;
    // 0x14a028: 0x27a404a0  addiu       $a0, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A024u, 0x14A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A02Cu;
label_14a02c:
    // 0x14a02c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a030: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a034: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a038: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14a038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x14a03c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a040: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14a040u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_14a044:
    // 0x14a044: 0x0  nop
    ctx->pc = 0x14a044u;
    // NOP
    // 0x14a048: 0x27b204ec  addiu       $s2, $sp, 0x4EC
    ctx->pc = 0x14a048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1260));
    // 0x14a04c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a050: 0x8fa204cc  lw          $v0, 0x4CC($sp)
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1228)));
    // 0x14a054: 0x1462ffc5  bne         $v1, $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x14A054u;
    {
        const bool branch_taken_0x14a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A054u;
        // 0x14a058: 0x27b104ac  addiu       $s1, $sp, 0x4AC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a054) {
            ctx->pc = 0x149F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149f6c;
        }
    }
    ctx->pc = 0x14A05Cu;
    // 0x14a05c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x14a060: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A060u;
    SET_GPR_U32(ctx, 31, 0x14A068u);
    ctx->pc = 0x14A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A060u;
    // 0x14a064: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A060u, 0x14A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A068u;
label_14a068:
    // 0x14a068: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x14a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14a06c: 0x8fa604ac  lw          $a2, 0x4AC($sp)
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x14a070: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x14a070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x14a074: 0x8fa404b4  lw          $a0, 0x4B4($sp)
    ctx->pc = 0x14a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x14a078: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14a078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14a07c: 0xafa602ec  sw          $a2, 0x2EC($sp)
    ctx->pc = 0x14a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 6));
    // 0x14a080: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x14a084: 0xafa502f0  sw          $a1, 0x2F0($sp)
    ctx->pc = 0x14a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 5));
    // 0x14a088: 0xafa402f4  sw          $a0, 0x2F4($sp)
    ctx->pc = 0x14a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 4));
    // 0x14a08c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a090: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x14a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x14a094: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x14a098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a09c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x14a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x14a0a0: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x14a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x14a0a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0a8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x14a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x14a0ac: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x14a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14a0b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0b4: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14a0b8: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x14a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x14a0bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0c0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x14A0C0u;
    {
        const bool branch_taken_0x14a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C0u;
        // 0x14a0c4: 0xafa30164  sw          $v1, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c0) {
            ctx->pc = 0x14A234u;
            goto label_14a234;
        }
    }
    ctx->pc = 0x14A0C8u;
label_14a0c8:
    // 0x14a0c8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x14A0C8u;
    {
        const bool branch_taken_0x14a0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C8u;
        // 0x14a0cc: 0x27a30130  addiu       $v1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c8) {
            ctx->pc = 0x14A1F4u;
            goto label_14a1f4;
        }
    }
    ctx->pc = 0x14A0D0u;
    // 0x14a0d0: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x14a0d4: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x14a0d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0d8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x14a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14a0dc: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x14a0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x14a0e0: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x14a0e4: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a0e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a0e8: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x14a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x14a0ec: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x14a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x14a0f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a0f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a0f4: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a0f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a0f8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14a0fc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A0FCu;
    SET_GPR_U32(ctx, 31, 0x14A104u);
    ctx->pc = 0x14A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0FCu;
    // 0x14a100: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A0FCu, 0x14A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A104u;
label_14a104:
    // 0x14a104: 0x27b2054c  addiu       $s2, $sp, 0x54C
    ctx->pc = 0x14a104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
    // 0x14a108: 0x27b10550  addiu       $s1, $sp, 0x550
    ctx->pc = 0x14a108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
    // 0x14a10c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a110: 0x27b60554  addiu       $s6, $sp, 0x554
    ctx->pc = 0x14a110u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
    // 0x14a114: 0xafa3050c  sw          $v1, 0x50C($sp)
    ctx->pc = 0x14a114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 3));
    // 0x14a118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a11c: 0xafa30510  sw          $v1, 0x510($sp)
    ctx->pc = 0x14a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 3));
    // 0x14a120: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a124: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14A124u;
    {
        const bool branch_taken_0x14a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A124u;
        // 0x14a128: 0xafa30514  sw          $v1, 0x514($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a124) {
            ctx->pc = 0x14A1A0u;
            goto label_14a1a0;
        }
    }
    ctx->pc = 0x14A12Cu;
label_14a12c:
    // 0x14a12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A12Cu;
    {
        const bool branch_taken_0x14a12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a12c) {
            ctx->pc = 0x14A13Cu;
            goto label_14a13c;
        }
    }
    ctx->pc = 0x14A134u;
    // 0x14a134: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a138: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14a138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_14a13c:
    // 0x14a13c: 0x0  nop
    ctx->pc = 0x14a13cu;
    // NOP
    // 0x14a140: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a148: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a148u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x14a14c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a150: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a154: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a158: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a15c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A15Cu;
    {
        const bool branch_taken_0x14a15c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A15Cu;
        // 0x14a160: 0x27b70548  addiu       $s7, $sp, 0x548 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a15c) {
            ctx->pc = 0x14A1A0u;
            goto label_14a1a0;
        }
    }
    ctx->pc = 0x14A164u;
    // 0x14a164: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a16c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a170: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A170u;
    {
        const bool branch_taken_0x14a170 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A170u;
        // 0x14a174: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a170) {
            ctx->pc = 0x14A180u;
            goto label_14a180;
        }
    }
    ctx->pc = 0x14A178u;
    // 0x14a178: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a17c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a17cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_14a180:
    // 0x14a180: 0xc050224  jal         func_140890
    ctx->pc = 0x14A180u;
    SET_GPR_U32(ctx, 31, 0x14A188u);
    ctx->pc = 0x14A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A180u;
    // 0x14a184: 0x27a40540  addiu       $a0, $sp, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A180u, 0x14A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A188u;
label_14a188:
    // 0x14a188: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a18c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a190: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a194: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a198: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a19c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_14a1a0:
    // 0x14a1a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a1a4: 0x8fa3052c  lw          $v1, 0x52C($sp)
    ctx->pc = 0x14a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1324)));
    // 0x14a1a8: 0x1483ffe0  bne         $a0, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14A1A8u;
    {
        const bool branch_taken_0x14a1a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a1a8) {
            ctx->pc = 0x14A12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a12c;
        }
    }
    ctx->pc = 0x14A1B0u;
    // 0x14a1b0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14a1b4: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14a1b8: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x14a1bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1c0: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x14a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x14a1c4: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x14a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14a1c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1cc: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x14a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x14a1d0: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x14a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x14a1d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1d8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x14a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x14a1dc: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14a1e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a1e4: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14a1e8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a1ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14A1ECu;
    {
        const bool branch_taken_0x14a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1ECu;
        // 0x14a1f0: 0xafa30164  sw          $v1, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1ec) {
            ctx->pc = 0x14A234u;
            goto label_14a234;
        }
    }
    ctx->pc = 0x14A1F4u;
label_14a1f4:
    // 0x14a1f4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14a1f8: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14a1fc: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x14a200: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a204: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x14a204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x14a208: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14a20c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a210: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x14a210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x14a214: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x14a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x14a218: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a21c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x14a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x14a220: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x14a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14a224: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a228: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14a22c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a230: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x14a230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
label_14a234:
    // 0x14a234: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14a238: 0x27a70580  addiu       $a3, $sp, 0x580
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    // 0x14a23c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x14a23cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a240: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x14a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14a244: 0x27a50560  addiu       $a1, $sp, 0x560
    ctx->pc = 0x14a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
    // 0x14a248: 0xdc840010  ld          $a0, 0x10($a0)
    ctx->pc = 0x14a248u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14a24c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x14a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x14a250: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x14a250u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x14a254: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x14a254u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a258: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a258u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a25c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14a260: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A260u;
    {
        const bool branch_taken_0x14a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A260u;
        // 0x14a264: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a260) {
            ctx->pc = 0x14A2D4u;
            goto label_14a2d4;
        }
    }
    ctx->pc = 0x14A268u;
label_14a268:
    // 0x14a268: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a26c: 0x27b60590  addiu       $s6, $sp, 0x590
    ctx->pc = 0x14a26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x14a270: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14a274: 0x8fa30594  lw          $v1, 0x594($sp)
    ctx->pc = 0x14a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x14a278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a27c: 0xafa30594  sw          $v1, 0x594($sp)
    ctx->pc = 0x14a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1428), GPR_U32(ctx, 3));
    // 0x14a280: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a284: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a288: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a28c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a290: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A290u;
    {
        const bool branch_taken_0x14a290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A290u;
        // 0x14a294: 0x27b20588  addiu       $s2, $sp, 0x588 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a290) {
            ctx->pc = 0x14A2D4u;
            goto label_14a2d4;
        }
    }
    ctx->pc = 0x14A298u;
    // 0x14a298: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a29c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a2a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a2a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A2A4u;
    {
        const bool branch_taken_0x14a2a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2A4u;
        // 0x14a2a8: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2a4) {
            ctx->pc = 0x14A2B4u;
            goto label_14a2b4;
        }
    }
    ctx->pc = 0x14A2ACu;
    // 0x14a2ac: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a2b0: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a2b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_14a2b4:
    // 0x14a2b4: 0xc050224  jal         func_140890
    ctx->pc = 0x14A2B4u;
    SET_GPR_U32(ctx, 31, 0x14A2BCu);
    ctx->pc = 0x14A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2B4u;
    // 0x14a2b8: 0x27a40580  addiu       $a0, $sp, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A2B4u, 0x14A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2BCu;
label_14a2bc:
    // 0x14a2bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a2c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a2c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a2c8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a2cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a2d0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_14a2d4:
    // 0x14a2d4: 0x0  nop
    ctx->pc = 0x14a2d4u;
    // NOP
    // 0x14a2d8: 0x27b1058c  addiu       $s1, $sp, 0x58C
    ctx->pc = 0x14a2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1420));
    // 0x14a2dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a2e0: 0x8fa3056c  lw          $v1, 0x56C($sp)
    ctx->pc = 0x14a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1388)));
    // 0x14a2e4: 0x1483ffe0  bne         $a0, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14A2E4u;
    {
        const bool branch_taken_0x14a2e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a2e4) {
            ctx->pc = 0x14A268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a268;
        }
    }
    ctx->pc = 0x14A2ECu;
label_14a2ec:
    // 0x14a2ec: 0x0  nop
    ctx->pc = 0x14a2ecu;
    // NOP
    // 0x14a2f0: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a2f4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x14a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14a2f8: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x14a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x14a2fc: 0x27a300cc  addiu       $v1, $sp, 0xCC
    ctx->pc = 0x14a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x14a300: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a304: 0x1080021d  beqz        $a0, . + 4 + (0x21D << 2)
    ctx->pc = 0x14A304u;
    {
        const bool branch_taken_0x14a304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a304) {
            ctx->pc = 0x14AB7Cu;
            goto label_14ab7c;
        }
    }
    ctx->pc = 0x14A30Cu;
    // 0x14a30c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14A30Cu;
    SET_GPR_U32(ctx, 31, 0x14A314u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14A30Cu, 0x14A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A314u;
label_14a314:
    // 0x14a314: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x14A314u;
    {
        const bool branch_taken_0x14a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a314) {
            ctx->pc = 0x14AB7Cu;
            goto label_14ab7c;
        }
    }
    ctx->pc = 0x14A31Cu;
label_14a31c:
    // 0x14a31c: 0xafa0087c  sw          $zero, 0x87C($sp)
    ctx->pc = 0x14a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2172), GPR_U32(ctx, 0));
    // 0x14a320: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x14a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x14a324: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x14a324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x14a328: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x14a328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x14a32c: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x14a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x14a330: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14a330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14a334: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x14a334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14a338: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x14a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14a33c: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14a340: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a344: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14a344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14a348: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x14a348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14a34c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a350: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a354: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x14a354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14a358: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A358u;
    {
        const bool branch_taken_0x14a358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A358u;
        // 0x14a35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a358) {
            ctx->pc = 0x14A370u;
            goto label_14a370;
        }
    }
    ctx->pc = 0x14A360u;
    // 0x14a360: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14a364: 0x27a7087c  addiu       $a3, $sp, 0x87C
    ctx->pc = 0x14a364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2172));
    // 0x14a368: 0xc052c8c  jal         func_14B230
    ctx->pc = 0x14A368u;
    SET_GPR_U32(ctx, 31, 0x14A370u);
    ctx->pc = 0x14A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A368u;
    // 0x14a36c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B230u, 0x14A368u, 0x14A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A370u;
label_14a370:
    // 0x14a370: 0x1620003c  bnez        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x14A370u;
    {
        const bool branch_taken_0x14a370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a370) {
            ctx->pc = 0x14A464u;
            goto label_14a464;
        }
    }
    ctx->pc = 0x14A378u;
    // 0x14a378: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14a37c: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x14a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x14a380: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a384: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a388: 0xc052340  jal         func_148D00
    ctx->pc = 0x14A388u;
    SET_GPR_U32(ctx, 31, 0x14A390u);
    ctx->pc = 0x14A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A388u;
    // 0x14a38c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14A388u, 0x14A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A390u;
label_14a390:
    // 0x14a390: 0x27a20300  addiu       $v0, $sp, 0x300
    ctx->pc = 0x14a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x14a394: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x14a394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x14a398: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a39c: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x14a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x14a3a0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a3a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a3a4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14a3a8: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A3A8u;
    SET_GPR_U32(ctx, 31, 0x14A3B0u);
    ctx->pc = 0x14A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3A8u;
    // 0x14a3ac: 0xfca20010  sd          $v0, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A3A8u, 0x14A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3B0u;
label_14a3b0:
    // 0x14a3b0: 0x27b205cc  addiu       $s2, $sp, 0x5CC
    ctx->pc = 0x14a3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1484));
    // 0x14a3b4: 0x27b605d0  addiu       $s6, $sp, 0x5D0
    ctx->pc = 0x14a3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
    // 0x14a3b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a3bc: 0x27b705d4  addiu       $s7, $sp, 0x5D4
    ctx->pc = 0x14a3bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
    // 0x14a3c0: 0x2690ffff  addiu       $s0, $s4, -0x1
    ctx->pc = 0x14a3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x14a3c4: 0xafa305ac  sw          $v1, 0x5AC($sp)
    ctx->pc = 0x14a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1452), GPR_U32(ctx, 3));
    // 0x14a3c8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a3cc: 0xafa305b0  sw          $v1, 0x5B0($sp)
    ctx->pc = 0x14a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1456), GPR_U32(ctx, 3));
    // 0x14a3d0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x14a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a3d4: 0x128001d2  beqz        $s4, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x14A3D4u;
    {
        const bool branch_taken_0x14a3d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3D4u;
        // 0x14a3d8: 0xafa305b4  sw          $v1, 0x5B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3d4) {
            ctx->pc = 0x14AB20u;
            goto label_14ab20;
        }
    }
    ctx->pc = 0x14A3DCu;
label_14a3dc:
    // 0x14a3dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a3e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3E0u;
    {
        const bool branch_taken_0x14a3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3e0) {
            ctx->pc = 0x14A3F0u;
            goto label_14a3f0;
        }
    }
    ctx->pc = 0x14A3E8u;
    // 0x14a3e8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a3ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_14a3f0:
    // 0x14a3f0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x14a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a3f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a3f8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x14a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x14a3fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a400: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a404: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a408: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a40c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A40Cu;
    {
        const bool branch_taken_0x14a40c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A40Cu;
        // 0x14a410: 0x27be05c8  addiu       $fp, $sp, 0x5C8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a40c) {
            ctx->pc = 0x14A450u;
            goto label_14a450;
        }
    }
    ctx->pc = 0x14A414u;
    // 0x14a414: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x14a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a418: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a41c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a420: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A420u;
    {
        const bool branch_taken_0x14a420 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A420u;
        // 0x14a424: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a420) {
            ctx->pc = 0x14A430u;
            goto label_14a430;
        }
    }
    ctx->pc = 0x14A428u;
    // 0x14a428: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a42c: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x14a42cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_14a430:
    // 0x14a430: 0xc050224  jal         func_140890
    ctx->pc = 0x14A430u;
    SET_GPR_U32(ctx, 31, 0x14A438u);
    ctx->pc = 0x14A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A430u;
    // 0x14a434: 0x27a405c0  addiu       $a0, $sp, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A430u, 0x14A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A438u;
label_14a438:
    // 0x14a438: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x14a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a43c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14a440: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a444: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a448: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a44c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_14a450:
    // 0x14a450: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x14a450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a454: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14A454u;
    {
        const bool branch_taken_0x14a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A454u;
        // 0x14a458: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a454) {
            ctx->pc = 0x14A3DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a3dc;
        }
    }
    ctx->pc = 0x14A45Cu;
    // 0x14a45c: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x14A45Cu;
    {
        const bool branch_taken_0x14a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a45c) {
            ctx->pc = 0x14AB20u;
            goto label_14ab20;
        }
    }
    ctx->pc = 0x14A464u;
label_14a464:
    // 0x14a464: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14a468: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x14a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x14a46c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a470: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a474: 0xc052340  jal         func_148D00
    ctx->pc = 0x14A474u;
    SET_GPR_U32(ctx, 31, 0x14A47Cu);
    ctx->pc = 0x14A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A474u;
    // 0x14a478: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14A474u, 0x14A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A47Cu;
label_14a47c:
    // 0x14a47c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x14a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x14a480: 0x27be01a8  addiu       $fp, $sp, 0x1A8
    ctx->pc = 0x14a480u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x14a484: 0x8fa30324  lw          $v1, 0x324($sp)
    ctx->pc = 0x14a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
    // 0x14a488: 0x27b701ac  addiu       $s7, $sp, 0x1AC
    ctx->pc = 0x14a488u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x14a48c: 0x27b601b0  addiu       $s6, $sp, 0x1B0
    ctx->pc = 0x14a48cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14a490: 0x27b001b4  addiu       $s0, $sp, 0x1B4
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x14a494: 0x27a40800  addiu       $a0, $sp, 0x800
    ctx->pc = 0x14a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
    // 0x14a498: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x14a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a49c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x14a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x14a4a0: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x14a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x14a4a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a4a8: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x14a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x14a4ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x14a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14a4b0: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x14a4b4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x14a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x14a4b8: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x14a4bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x14a4c0: 0x8fa20334  lw          $v0, 0x334($sp)
    ctx->pc = 0x14a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
    // 0x14a4c4: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x14A4C4u;
    SET_GPR_U32(ctx, 31, 0x14A4CCu);
    ctx->pc = 0x14A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4C4u;
    // 0x14a4c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x14A4C4u, 0x14A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4CCu;
label_14a4cc:
    // 0x14a4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14a4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4d0: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A4D0u;
    SET_GPR_U32(ctx, 31, 0x14A4D8u);
    ctx->pc = 0x14A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4D0u;
    // 0x14a4d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14A4D0u, 0x14A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4D8u;
label_14a4d8:
    // 0x14a4d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4dc: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x14a4e0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4E0u;
    // 0x14a4e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A4E0u, 0x14A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4E8u;
label_14a4e8:
    // 0x14a4e8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14a4ec: 0x27a5034c  addiu       $a1, $sp, 0x34C
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 844));
    // 0x14a4f0: 0x27a60350  addiu       $a2, $sp, 0x350
    ctx->pc = 0x14a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x14a4f4: 0x27a20354  addiu       $v0, $sp, 0x354
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 852));
    // 0x14a4f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14a4fc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a500: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14a500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x14a504: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x14a504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14a508: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14a50c: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x14a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x14a510: 0x8fa40344  lw          $a0, 0x344($sp)
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x14a514: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x14a514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x14a518: 0x27a301c4  addiu       $v1, $sp, 0x1C4
    ctx->pc = 0x14a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x14a51c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a520: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x14a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x14a524: 0x27a301c8  addiu       $v1, $sp, 0x1C8
    ctx->pc = 0x14a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14a528: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a52c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a530: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x14a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x14a534: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a538: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a53c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x14a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x14a540: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14a540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14a544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a548: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x14a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x14a54c: 0x16340003  bne         $s1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A54Cu;
    {
        const bool branch_taken_0x14a54c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x14A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A54Cu;
        // 0x14a550: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a54c) {
            ctx->pc = 0x14A55Cu;
            goto label_14a55c;
        }
    }
    ctx->pc = 0x14A554u;
    // 0x14a554: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14A554u;
    {
        const bool branch_taken_0x14a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A554u;
        // 0x14a558: 0x27a201c0  addiu       $v0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a554) {
            ctx->pc = 0x14A5B8u;
            goto label_14a5b8;
        }
    }
    ctx->pc = 0x14A55Cu;
label_14a55c:
    // 0x14a55c: 0x27a40820  addiu       $a0, $sp, 0x820
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x14a560: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A560u;
    SET_GPR_U32(ctx, 31, 0x14A568u);
    ctx->pc = 0x14A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A560u;
    // 0x14a564: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A560u, 0x14A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A568u;
label_14a568:
    // 0x14a568: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a56c: 0x27a40820  addiu       $a0, $sp, 0x820
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x14a570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a574: 0xafa2082c  sw          $v0, 0x82C($sp)
    ctx->pc = 0x14a574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2092), GPR_U32(ctx, 2));
    // 0x14a578: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a57c: 0xafa20830  sw          $v0, 0x830($sp)
    ctx->pc = 0x14a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2096), GPR_U32(ctx, 2));
    // 0x14a580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a584: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A584u;
    SET_GPR_U32(ctx, 31, 0x14A58Cu);
    ctx->pc = 0x14A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A584u;
    // 0x14a588: 0xafa20834  sw          $v0, 0x834($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14A584u, 0x14A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A58Cu;
label_14a58c:
    // 0x14a58c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a590: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x14a594: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A594u;
    SET_GPR_U32(ctx, 31, 0x14A59Cu);
    ctx->pc = 0x14A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A594u;
    // 0x14a598: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A594u, 0x14A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A59Cu;
label_14a59c:
    // 0x14a59c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14a5a0: 0x27a20360  addiu       $v0, $sp, 0x360
    ctx->pc = 0x14a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x14a5a4: 0xafa3036c  sw          $v1, 0x36C($sp)
    ctx->pc = 0x14a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 3));
    // 0x14a5a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a5ac: 0xafa30370  sw          $v1, 0x370($sp)
    ctx->pc = 0x14a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 3));
    // 0x14a5b0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x14a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14a5b4: 0xafa30374  sw          $v1, 0x374($sp)
    ctx->pc = 0x14a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 3));
label_14a5b8:
    // 0x14a5b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a5bc: 0x27a301e4  addiu       $v1, $sp, 0x1E4
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x14a5c0: 0x27a601e8  addiu       $a2, $sp, 0x1E8
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x14a5c4: 0x27a701ec  addiu       $a3, $sp, 0x1EC
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x14a5c8: 0x27a801f0  addiu       $t0, $sp, 0x1F0
    ctx->pc = 0x14a5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14a5cc: 0x27a901f4  addiu       $t1, $sp, 0x1F4
    ctx->pc = 0x14a5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x14a5d0: 0x234202b  sltu        $a0, $s1, $s4
    ctx->pc = 0x14a5d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14a5d4: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x14a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x14a5d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14a5dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14a5e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a5e4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x14a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x14a5e8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x14a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a5ec: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x14a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x14a5f0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a5f4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x14a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x14a5f8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14a5fc: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A5FCu;
    {
        const bool branch_taken_0x14a5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5FCu;
        // 0x14a600: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5fc) {
            ctx->pc = 0x14A680u;
            goto label_14a680;
        }
    }
    ctx->pc = 0x14A604u;
    // 0x14a604: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x14a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x14a608: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x14a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x14a60c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x14a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x14a610: 0x27a201c4  addiu       $v0, $sp, 0x1C4
    ctx->pc = 0x14a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x14a614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a618: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x14a618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x14a61c: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x14a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x14a620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a624: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x14a624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x14a628: 0x27a201cc  addiu       $v0, $sp, 0x1CC
    ctx->pc = 0x14a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x14a62c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a630: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x14a630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x14a634: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x14a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x14a638: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a63c: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x14a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x14a640: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x14a644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a648: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x14a648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x14a64c: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x14a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x14a650: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x14a654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a658: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x14a658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x14a65c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a660: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x14a660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x14a664: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a668: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x14a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x14a66c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a670: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x14a670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x14a674: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a678: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14A678u;
    {
        const bool branch_taken_0x14a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A678u;
        // 0x14a67c: 0xafa20194  sw          $v0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a678) {
            ctx->pc = 0x14A72Cu;
            goto label_14a72c;
        }
    }
    ctx->pc = 0x14A680u;
label_14a680:
    // 0x14a680: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14a684: 0x27a40840  addiu       $a0, $sp, 0x840
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
    // 0x14a688: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x14a688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a68c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x14a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x14a690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a694: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x14a694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x14a698: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a69c: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x14a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x14a6a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a6a4: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x14a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x14a6a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x14a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14a6ac: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x14a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x14a6b0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x14a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14a6b4: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x14A6B4u;
    SET_GPR_U32(ctx, 31, 0x14A6BCu);
    ctx->pc = 0x14A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6B4u;
    // 0x14a6b8: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x14A6B4u, 0x14A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6BCu;
label_14a6bc:
    // 0x14a6bc: 0x2912823  subu        $a1, $s4, $s1
    ctx->pc = 0x14a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x14a6c0: 0xc051898  jal         func_146260
    ctx->pc = 0x14A6C0u;
    SET_GPR_U32(ctx, 31, 0x14A6C8u);
    ctx->pc = 0x14A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6C0u;
    // 0x14a6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x14A6C0u, 0x14A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6C8u;
label_14a6c8:
    // 0x14a6c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6cc: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x14a6d0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A6D0u;
    SET_GPR_U32(ctx, 31, 0x14A6D8u);
    ctx->pc = 0x14A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6D0u;
    // 0x14a6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A6D0u, 0x14A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6D8u;
label_14a6d8:
    // 0x14a6d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14a6dc: 0x27a5038c  addiu       $a1, $sp, 0x38C
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
    // 0x14a6e0: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x14a6e4: 0x27a70394  addiu       $a3, $sp, 0x394
    ctx->pc = 0x14a6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
    // 0x14a6e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x14a6ec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a6f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14a6f4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x14a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14a6f8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x14a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x14a6fc: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x14a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x14a700: 0x8fa30384  lw          $v1, 0x384($sp)
    ctx->pc = 0x14a700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x14a704: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x14a708: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x14a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x14a70c: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x14a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x14a710: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x14a710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x14a714: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a718: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x14a718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x14a71c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a720: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x14a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x14a724: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a728: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x14a728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_14a72c:
    // 0x14a72c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14a730: 0x27a50620  addiu       $a1, $sp, 0x620
    ctx->pc = 0x14a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    // 0x14a734: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x14a734u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a738: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a73c: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x14a73cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a740: 0x27a60600  addiu       $a2, $sp, 0x600
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x14a744: 0x27a705e0  addiu       $a3, $sp, 0x5E0
    ctx->pc = 0x14a744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x14a748: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x14a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x14a74c: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x14a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x14a750: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14a754: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x14a754u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x14a758: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x14a758u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a75c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a75cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a760: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x14a760u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x14a764: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14a764u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14a768: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a768u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a76c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a76cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a770: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x14a770u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x14a774: 0xc052b68  jal         func_14ADA0
    ctx->pc = 0x14A774u;
    SET_GPR_U32(ctx, 31, 0x14A77Cu);
    ctx->pc = 0x14A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A774u;
    // 0x14a778: 0xfce20010  sd          $v0, 0x10($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADA0u, 0x14A774u, 0x14A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A77Cu;
label_14a77c:
    // 0x14a77c: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x14a77cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14a780: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x14A780u;
    {
        const bool branch_taken_0x14a780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A780u;
        // 0x14a784: 0x234082b  sltu        $at, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a780) {
            ctx->pc = 0x14A984u;
            goto label_14a984;
        }
    }
    ctx->pc = 0x14A788u;
    // 0x14a788: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x14a788u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14a78c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x14A78Cu;
    {
        const bool branch_taken_0x14a78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a78c) {
            ctx->pc = 0x14A830u;
            goto label_14a830;
        }
    }
    ctx->pc = 0x14A794u;
    // 0x14a794: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x14a798: 0x27a80680  addiu       $t0, $sp, 0x680
    ctx->pc = 0x14a798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
    // 0x14a79c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x14a79cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a7a0: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x14a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x14a7a4: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x14a7a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a7a8: 0x27a60660  addiu       $a2, $sp, 0x660
    ctx->pc = 0x14a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    // 0x14a7ac: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x14a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    // 0x14a7b0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x14a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x14a7b4: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x14a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a7b8: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x14a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x14a7bc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x14a7bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a7c0: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a7c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a7c4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x14a7c8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14a7cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a7d0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a7d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a7d4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x14a7d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A7D8u;
    {
        const bool branch_taken_0x14a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7D8u;
        // 0x14a7dc: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7d8) {
            ctx->pc = 0x14A800u;
            goto label_14a800;
        }
    }
    ctx->pc = 0x14A7E0u;
label_14a7e0:
    // 0x14a7e0: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14A7E0u;
    SET_GPR_U32(ctx, 31, 0x14A7E8u);
    ctx->pc = 0x14A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7E0u;
    // 0x14a7e4: 0x27a40660  addiu       $a0, $sp, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x14A7E0u, 0x14A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7E8u;
label_14a7e8:
    // 0x14a7e8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a7ec: 0xc0525e8  jal         func_1497A0
    ctx->pc = 0x14A7ECu;
    SET_GPR_U32(ctx, 31, 0x14A7F4u);
    ctx->pc = 0x14A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7ECu;
    // 0x14a7f0: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497A0u, 0x14A7ECu, 0x14A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7F4u;
label_14a7f4:
    // 0x14a7f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a7f8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x14a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a7fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14a7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_14a800:
    // 0x14a800: 0x8fa3066c  lw          $v1, 0x66C($sp)
    ctx->pc = 0x14a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1644)));
    // 0x14a804: 0x8fa2068c  lw          $v0, 0x68C($sp)
    ctx->pc = 0x14a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
    // 0x14a808: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14A808u;
    {
        const bool branch_taken_0x14a808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A808u;
        // 0x14a80c: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a808) {
            ctx->pc = 0x14A7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a7e0;
        }
    }
    ctx->pc = 0x14A810u;
    // 0x14a810: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A810u;
    SET_GPR_U32(ctx, 31, 0x14A818u);
    ctx->pc = 0x14A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A810u;
    // 0x14a814: 0x27a50640  addiu       $a1, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A810u, 0x14A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A818u;
label_14a818:
    // 0x14a818: 0x8fa5064c  lw          $a1, 0x64C($sp)
    ctx->pc = 0x14a818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1612)));
    // 0x14a81c: 0x8fa40650  lw          $a0, 0x650($sp)
    ctx->pc = 0x14a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x14a820: 0x8fa30654  lw          $v1, 0x654($sp)
    ctx->pc = 0x14a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
    // 0x14a824: 0xafa503cc  sw          $a1, 0x3CC($sp)
    ctx->pc = 0x14a824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 5));
    // 0x14a828: 0xafa403d0  sw          $a0, 0x3D0($sp)
    ctx->pc = 0x14a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 4));
    // 0x14a82c: 0xafa303d4  sw          $v1, 0x3D4($sp)
    ctx->pc = 0x14a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 3));
label_14a830:
    // 0x14a830: 0x16340003  bne         $s1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A830u;
    {
        const bool branch_taken_0x14a830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x14A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A830u;
        // 0x14a834: 0x27a40860  addiu       $a0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a830) {
            ctx->pc = 0x14A840u;
            goto label_14a840;
        }
    }
    ctx->pc = 0x14A838u;
    // 0x14a838: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14A838u;
    {
        const bool branch_taken_0x14a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A838u;
        // 0x14a83c: 0x27a801a0  addiu       $t0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a838) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
    ctx->pc = 0x14A840u;
label_14a840:
    // 0x14a840: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A840u;
    SET_GPR_U32(ctx, 31, 0x14A848u);
    ctx->pc = 0x14A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A840u;
    // 0x14a844: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A840u, 0x14A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A848u;
label_14a848:
    // 0x14a848: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a84c: 0x2342823  subu        $a1, $s1, $s4
    ctx->pc = 0x14a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14a850: 0x27a40860  addiu       $a0, $sp, 0x860
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    // 0x14a854: 0xafa2086c  sw          $v0, 0x86C($sp)
    ctx->pc = 0x14a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2156), GPR_U32(ctx, 2));
    // 0x14a858: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a85c: 0xafa20870  sw          $v0, 0x870($sp)
    ctx->pc = 0x14a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 2));
    // 0x14a860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a864: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A864u;
    SET_GPR_U32(ctx, 31, 0x14A86Cu);
    ctx->pc = 0x14A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A864u;
    // 0x14a868: 0xafa20874  sw          $v0, 0x874($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14A864u, 0x14A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A86Cu;
label_14a86c:
    // 0x14a86c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a870: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x14a874: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A874u;
    SET_GPR_U32(ctx, 31, 0x14A87Cu);
    ctx->pc = 0x14A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A874u;
    // 0x14a878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A874u, 0x14A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A87Cu;
label_14a87c:
    // 0x14a87c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14a880: 0x27a803e0  addiu       $t0, $sp, 0x3E0
    ctx->pc = 0x14a880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x14a884: 0xafa303ec  sw          $v1, 0x3EC($sp)
    ctx->pc = 0x14a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 3));
    // 0x14a888: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a88c: 0xafa303f0  sw          $v1, 0x3F0($sp)
    ctx->pc = 0x14a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 3));
    // 0x14a890: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a894: 0xafa303f4  sw          $v1, 0x3F4($sp)
    ctx->pc = 0x14a894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 3));
label_14a898:
    // 0x14a898: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14a898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14a89c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x14a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x14a8a0: 0x27a706c0  addiu       $a3, $sp, 0x6C0
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    // 0x14a8a4: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x14a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14a8a8: 0x27a506a0  addiu       $a1, $sp, 0x6A0
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
    // 0x14a8ac: 0xafa60200  sw          $a2, 0x200($sp)
    ctx->pc = 0x14a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 6));
    // 0x14a8b0: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x14a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14a8b4: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x14a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
    // 0x14a8b8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x14a8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14a8bc: 0xafa60208  sw          $a2, 0x208($sp)
    ctx->pc = 0x14a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 6));
    // 0x14a8c0: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x14a8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x14a8c4: 0xafa6020c  sw          $a2, 0x20C($sp)
    ctx->pc = 0x14a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 6));
    // 0x14a8c8: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x14a8cc: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x14a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
    // 0x14a8d0: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x14a8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x14a8d4: 0xafa60214  sw          $a2, 0x214($sp)
    ctx->pc = 0x14a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
    // 0x14a8d8: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x14a8d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a8dc: 0xdc840010  ld          $a0, 0x10($a0)
    ctx->pc = 0x14a8dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14a8e0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x14a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x14a8e4: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x14a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x14a8e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x14a8e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a8ec: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a8ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a8f0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14a8f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A8F4u;
    {
        const bool branch_taken_0x14a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8F4u;
        // 0x14a8f8: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8f4) {
            ctx->pc = 0x14A968u;
            goto label_14a968;
        }
    }
    ctx->pc = 0x14A8FCu;
label_14a8fc:
    // 0x14a8fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a900: 0x27b606d0  addiu       $s6, $sp, 0x6D0
    ctx->pc = 0x14a900u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x14a904: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14a908: 0x8fa306d4  lw          $v1, 0x6D4($sp)
    ctx->pc = 0x14a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1748)));
    // 0x14a90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a910: 0xafa306d4  sw          $v1, 0x6D4($sp)
    ctx->pc = 0x14a910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1748), GPR_U32(ctx, 3));
    // 0x14a914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a918: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a91c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a920: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a924: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A924u;
    {
        const bool branch_taken_0x14a924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A924u;
        // 0x14a928: 0x27b206c8  addiu       $s2, $sp, 0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a924) {
            ctx->pc = 0x14A968u;
            goto label_14a968;
        }
    }
    ctx->pc = 0x14A92Cu;
    // 0x14a92c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a934: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a938: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A938u;
    {
        const bool branch_taken_0x14a938 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A938u;
        // 0x14a93c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a938) {
            ctx->pc = 0x14A948u;
            goto label_14a948;
        }
    }
    ctx->pc = 0x14A940u;
    // 0x14a940: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a944: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a944u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_14a948:
    // 0x14a948: 0xc050224  jal         func_140890
    ctx->pc = 0x14A948u;
    SET_GPR_U32(ctx, 31, 0x14A950u);
    ctx->pc = 0x14A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A948u;
    // 0x14a94c: 0x27a406c0  addiu       $a0, $sp, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A948u, 0x14A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A950u;
label_14a950:
    // 0x14a950: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a954: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a958: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a95c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a960: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a964: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a964u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_14a968:
    // 0x14a968: 0x27b106cc  addiu       $s1, $sp, 0x6CC
    ctx->pc = 0x14a968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1740));
    // 0x14a96c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a970: 0x8fa306ac  lw          $v1, 0x6AC($sp)
    ctx->pc = 0x14a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
    // 0x14a974: 0x1483ffe1  bne         $a0, $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14A974u;
    {
        const bool branch_taken_0x14a974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a974) {
            ctx->pc = 0x14A8FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a8fc;
        }
    }
    ctx->pc = 0x14A97Cu;
    // 0x14a97c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x14A97Cu;
    {
        const bool branch_taken_0x14a97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a97c) {
            ctx->pc = 0x14AB20u;
            goto label_14ab20;
        }
    }
    ctx->pc = 0x14A984u;
label_14a984:
    // 0x14a984: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x14A984u;
    {
        const bool branch_taken_0x14a984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A984u;
        // 0x14a988: 0x27a301e0  addiu       $v1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a984) {
            ctx->pc = 0x14AB20u;
            goto label_14ab20;
        }
    }
    ctx->pc = 0x14A98Cu;
    // 0x14a98c: 0x27a60700  addiu       $a2, $sp, 0x700
    ctx->pc = 0x14a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
    // 0x14a990: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x14a990u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a994: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14a998: 0x27a406e0  addiu       $a0, $sp, 0x6E0
    ctx->pc = 0x14a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
    // 0x14a99c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a99cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a9a0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x14a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x14a9a4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x14a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14a9a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a9ac: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a9acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a9b0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14a9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x14a9b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A9B4u;
    {
        const bool branch_taken_0x14a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9B4u;
        // 0x14a9b8: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9b4) {
            ctx->pc = 0x14AA28u;
            goto label_14aa28;
        }
    }
    ctx->pc = 0x14A9BCu;
label_14a9bc:
    // 0x14a9bc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a9c0: 0x27b60710  addiu       $s6, $sp, 0x710
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x14a9c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14a9c8: 0x8fa20714  lw          $v0, 0x714($sp)
    ctx->pc = 0x14a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x14a9cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a9d0: 0xafa20714  sw          $v0, 0x714($sp)
    ctx->pc = 0x14a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1812), GPR_U32(ctx, 2));
    // 0x14a9d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a9d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14a9dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14a9e0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a9e4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A9E4u;
    {
        const bool branch_taken_0x14a9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E4u;
        // 0x14a9e8: 0x27b20708  addiu       $s2, $sp, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9e4) {
            ctx->pc = 0x14AA28u;
            goto label_14aa28;
        }
    }
    ctx->pc = 0x14A9ECu;
    // 0x14a9ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a9f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a9f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a9f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A9F8u;
    {
        const bool branch_taken_0x14a9f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f8) {
            ctx->pc = 0x14AA08u;
            goto label_14aa08;
        }
    }
    ctx->pc = 0x14AA00u;
    // 0x14aa00: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14aa04: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14aa04u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_14aa08:
    // 0x14aa08: 0xc050224  jal         func_140890
    ctx->pc = 0x14AA08u;
    SET_GPR_U32(ctx, 31, 0x14AA10u);
    ctx->pc = 0x14AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA08u;
    // 0x14aa0c: 0x27a40700  addiu       $a0, $sp, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14AA08u, 0x14AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA10u;
label_14aa10:
    // 0x14aa10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aa14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14aa18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14aa1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x14aa20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14aa24: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_14aa28:
    // 0x14aa28: 0x27b1070c  addiu       $s1, $sp, 0x70C
    ctx->pc = 0x14aa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1804));
    // 0x14aa2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aa30: 0x8fa206ec  lw          $v0, 0x6EC($sp)
    ctx->pc = 0x14aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1772)));
    // 0x14aa34: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14AA34u;
    {
        const bool branch_taken_0x14aa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14aa34) {
            ctx->pc = 0x14A9BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a9bc;
        }
    }
    ctx->pc = 0x14AA3Cu;
    // 0x14aa3c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x14aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14aa40: 0x27a50760  addiu       $a1, $sp, 0x760
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
    // 0x14aa44: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x14aa44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14aa48: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x14aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14aa4c: 0x27a60740  addiu       $a2, $sp, 0x740
    ctx->pc = 0x14aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
    // 0x14aa50: 0x27a40720  addiu       $a0, $sp, 0x720
    ctx->pc = 0x14aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
    // 0x14aa54: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14aa54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14aa58: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x14aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x14aa5c: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x14aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x14aa60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14aa60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14aa64: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14aa64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14aa68: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14aa6c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14AA6Cu;
    SET_GPR_U32(ctx, 31, 0x14AA74u);
    ctx->pc = 0x14AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA6Cu;
    // 0x14aa70: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14AA6Cu, 0x14AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA74u;
label_14aa74:
    // 0x14aa74: 0x27b2076c  addiu       $s2, $sp, 0x76C
    ctx->pc = 0x14aa74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1900));
    // 0x14aa78: 0x27b10770  addiu       $s1, $sp, 0x770
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
    // 0x14aa7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aa80: 0x27b60774  addiu       $s6, $sp, 0x774
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1908));
    // 0x14aa84: 0xafa3072c  sw          $v1, 0x72C($sp)
    ctx->pc = 0x14aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1836), GPR_U32(ctx, 3));
    // 0x14aa88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aa8c: 0xafa30730  sw          $v1, 0x730($sp)
    ctx->pc = 0x14aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1840), GPR_U32(ctx, 3));
    // 0x14aa90: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14aa94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14AA94u;
    {
        const bool branch_taken_0x14aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA94u;
        // 0x14aa98: 0xafa30734  sw          $v1, 0x734($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa94) {
            ctx->pc = 0x14AB10u;
            goto label_14ab10;
        }
    }
    ctx->pc = 0x14AA9Cu;
label_14aa9c:
    // 0x14aa9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AA9Cu;
    {
        const bool branch_taken_0x14aa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa9c) {
            ctx->pc = 0x14AAACu;
            goto label_14aaac;
        }
    }
    ctx->pc = 0x14AAA4u;
    // 0x14aaa4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aaa8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14aaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_14aaac:
    // 0x14aaac: 0x0  nop
    ctx->pc = 0x14aaacu;
    // NOP
    // 0x14aab0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14aab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14aab8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x14aabc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aac0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14aac4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14aac8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14aacc: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14AACCu;
    {
        const bool branch_taken_0x14aacc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AACCu;
        // 0x14aad0: 0x27b70768  addiu       $s7, $sp, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aacc) {
            ctx->pc = 0x14AB10u;
            goto label_14ab10;
        }
    }
    ctx->pc = 0x14AAD4u;
    // 0x14aad4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14aad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14aadc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14aae0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AAE0u;
    {
        const bool branch_taken_0x14aae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAE0u;
        // 0x14aae4: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aae0) {
            ctx->pc = 0x14AAF0u;
            goto label_14aaf0;
        }
    }
    ctx->pc = 0x14AAE8u;
    // 0x14aae8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14aaec: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14aaecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_14aaf0:
    // 0x14aaf0: 0xc050224  jal         func_140890
    ctx->pc = 0x14AAF0u;
    SET_GPR_U32(ctx, 31, 0x14AAF8u);
    ctx->pc = 0x14AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAF0u;
    // 0x14aaf4: 0x27a40760  addiu       $a0, $sp, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14AAF0u, 0x14AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAF8u;
label_14aaf8:
    // 0x14aaf8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x14aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14aafc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ab00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ab04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14ab08: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14ab0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_14ab10:
    // 0x14ab10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ab14: 0x8fa3074c  lw          $v1, 0x74C($sp)
    ctx->pc = 0x14ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1868)));
    // 0x14ab18: 0x1483ffe0  bne         $a0, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14AB18u;
    {
        const bool branch_taken_0x14ab18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ab18) {
            ctx->pc = 0x14AA9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aa9c;
        }
    }
    ctx->pc = 0x14AB20u;
label_14ab20:
    // 0x14ab20: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14ab24: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x14ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14ab28: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x14ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x14ab2c: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x14ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x14ab30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ab34: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14AB34u;
    {
        const bool branch_taken_0x14ab34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab34) {
            ctx->pc = 0x14AB7Cu;
            goto label_14ab7c;
        }
    }
    ctx->pc = 0x14AB3Cu;
    // 0x14ab3c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14AB3Cu;
    SET_GPR_U32(ctx, 31, 0x14AB44u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14AB3Cu, 0x14AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB44u;
label_14ab44:
    // 0x14ab44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14AB44u;
    {
        const bool branch_taken_0x14ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab44) {
            ctx->pc = 0x14AB7Cu;
            goto label_14ab7c;
        }
    }
    ctx->pc = 0x14AB4Cu;
label_14ab4c:
    // 0x14ab4c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x14ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14ab50: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14ab54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ab58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ab5c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14AB5Cu;
    SET_GPR_U32(ctx, 31, 0x14AB64u);
    ctx->pc = 0x14AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB5Cu;
    // 0x14ab60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14AB5Cu, 0x14AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB64u;
label_14ab64:
    // 0x14ab64: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x14AB64u;
    SET_GPR_U32(ctx, 31, 0x14AB6Cu);
    ctx->pc = 0x14AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB64u;
    // 0x14ab68: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x14AB64u, 0x14AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB6Cu;
label_14ab6c:
    // 0x14ab6c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14ab70: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14ab74: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x14ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14ab78: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x14ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
label_14ab7c:
    // 0x14ab7c: 0x0  nop
    ctx->pc = 0x14ab7cu;
    // NOP
    // 0x14ab80: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x14ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14ab84: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x14ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14ab88: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14ab8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ab90: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x14ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x14ab94: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14ab94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ab98: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14AB98u;
    {
        const bool branch_taken_0x14ab98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab98) {
            ctx->pc = 0x14AB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ab4c;
        }
    }
    ctx->pc = 0x14ABA0u;
label_14aba0:
    // 0x14aba0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14aba4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14aba4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14aba8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14aba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14abac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14abacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14abb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14abb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14abb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14abb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14abb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14abb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14abbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14abbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14abc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14abc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14abc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14abc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABC8u;
        // 0x14abcc: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ABD0u;
}
