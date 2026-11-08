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

// Function: FUN_001cf3e0
// Address: 0x1cf3e0 - 0x1cf744
void FUN_001cf3e0_0x1cf3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf3e0_0x1cf3e0");
#endif

    switch (ctx->pc) {
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf70cu: goto label_1cf70c;
        default: break;
    }

    ctx->pc = 0x1cf3e0u;

    // 0x1cf3e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cf3e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf3e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1cf3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1cf3ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cf3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cf3f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cf3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cf3f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cf3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cf3f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cf3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cf3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf404: 0x8022fbc8  lb          $v0, -0x438($at)
    ctx->pc = 0x1cf404u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBC8u));
    // 0x1cf408: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF408u;
    {
        const bool branch_taken_0x1cf408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF408u;
        // 0x1cf40c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf408) {
            ctx->pc = 0x1CF428u;
            goto label_1cf428;
        }
    }
    ctx->pc = 0x1CF410u;
    // 0x1cf410: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1cf414: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf418: 0xac23fbc0  sw          $v1, -0x440($at)
    ctx->pc = 0x1cf418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBC0u, _value); } while (0);
    // 0x1cf41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf420: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf424: 0xa022fbc8  sb          $v0, -0x438($at)
    ctx->pc = 0x1cf424u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBC8u, _value); } while (0);
label_1cf428:
    // 0x1cf428: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf42c: 0x8022fbd8  lb          $v0, -0x428($at)
    ctx->pc = 0x1cf42cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBD8u));
    // 0x1cf430: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF430u;
    {
        const bool branch_taken_0x1cf430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF430u;
        // 0x1cf434: 0x3c033fc0  lui         $v1, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf430) {
            ctx->pc = 0x1CF44Cu;
            goto label_1cf44c;
        }
    }
    ctx->pc = 0x1CF438u;
    // 0x1cf438: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf43c: 0xac23fbd0  sw          $v1, -0x430($at)
    ctx->pc = 0x1cf43cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBD0u, _value); } while (0);
    // 0x1cf440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf444: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf448: 0xa022fbd8  sb          $v0, -0x428($at)
    ctx->pc = 0x1cf448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBD8u, _value); } while (0);
label_1cf44c:
    // 0x1cf44c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1cf450: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cf454: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cf454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf458: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cf458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cf45c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf460: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF460u;
    SET_GPR_U32(ctx, 31, 0x1CF468u);
    ctx->pc = 0x1CF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF460u;
    // 0x1cf464: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF460u, 0x1CF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF468u;
label_1cf468:
    // 0x1cf468: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf46c: 0xc42cfbc0  lwc1        $f12, -0x440($at)
    ctx->pc = 0x1cf46cu;
    { uint32_t bits = FAST_READ32(0x36FBC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf470: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf474: 0xc42dfbd0  lwc1        $f13, -0x430($at)
    ctx->pc = 0x1cf474u;
    { uint32_t bits = FAST_READ32(0x36FBD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf478: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CF478u;
    SET_GPR_U32(ctx, 31, 0x1CF480u);
    ctx->pc = 0x1CF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF478u;
    // 0x1cf47c: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CF478u, 0x1CF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF480u;
label_1cf480:
    // 0x1cf480: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1cf480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf484: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf488: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF488u;
    {
        const bool branch_taken_0x1cf488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1CF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF488u;
        // 0x1cf48c: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf488) {
            ctx->pc = 0x1CF494u;
            goto label_1cf494;
        }
    }
    ctx->pc = 0x1CF490u;
    // 0x1cf490: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf494:
    // 0x1cf494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf498: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1CF498u;
    SET_GPR_U32(ctx, 31, 0x1CF4A0u);
    ctx->pc = 0x1CF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF498u;
    // 0x1cf49c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1CF498u, 0x1CF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4A0u;
label_1cf4a0:
    // 0x1cf4a0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1cf4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cf4a4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CF4A4u;
    {
        const bool branch_taken_0x1cf4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A4u;
        // 0x1cf4a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4a4) {
            ctx->pc = 0x1CF558u;
            goto label_1cf558;
        }
    }
    ctx->pc = 0x1CF4ACu;
    // 0x1cf4ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cf4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf4b0:
    // 0x1cf4b0: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1cf4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1cf4b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf4b8: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1cf4bc: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CF4BCu;
    {
        const bool branch_taken_0x1cf4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4BCu;
        // 0x1cf4c0: 0x24740064  addiu       $s4, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4bc) {
            ctx->pc = 0x1CF548u;
            goto label_1cf548;
        }
    }
    ctx->pc = 0x1CF4C4u;
    // 0x1cf4c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cf4c8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf4cc: 0x246330c0  addiu       $v1, $v1, 0x30C0
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12480));
    // 0x1cf4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cf4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cf4d4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF4D4u;
    {
        const bool branch_taken_0x1cf4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D4u;
        // 0x1cf4d8: 0x90720000  lbu         $s2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d4) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF4DCu;
    // 0x1cf4dc: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1cf4e0:
    // 0x1cf4e0: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1cf4e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF4E8u;
    SET_GPR_U32(ctx, 31, 0x1CF4F0u);
    ctx->pc = 0x1CF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4E8u;
    // 0x1cf4ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF4E8u, 0x1CF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4F0u;
label_1cf4f0:
    // 0x1cf4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4f4: 0xc06eb68  jal         func_1BADA0
    ctx->pc = 0x1CF4F4u;
    SET_GPR_U32(ctx, 31, 0x1CF4FCu);
    ctx->pc = 0x1CF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4F4u;
    // 0x1cf4f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BADA0u, 0x1CF4F4u, 0x1CF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4FCu;
label_1cf4fc:
    // 0x1cf4fc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1cf4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf500: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x1cf500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf504: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x1cf504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cf508: 0xc7af007c  lwc1        $f15, 0x7C($sp)
    ctx->pc = 0x1cf508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cf50c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CF50Cu;
    SET_GPR_U32(ctx, 31, 0x1CF514u);
    ctx->pc = 0x1CF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF50Cu;
    // 0x1cf510: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CF50Cu, 0x1CF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF514u;
label_1cf514:
    // 0x1cf514: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf518: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf51c: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x1cf51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1cf520: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF520u;
    SET_GPR_U32(ctx, 31, 0x1CF528u);
    ctx->pc = 0x1CF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF520u;
    // 0x1cf524: 0x24a53170  addiu       $a1, $a1, 0x3170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF520u, 0x1CF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF528u;
label_1cf528:
    // 0x1cf528: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x1cf528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cf52c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF52Cu;
    {
        const bool branch_taken_0x1cf52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf52c) {
            ctx->pc = 0x1CF548u;
            goto label_1cf548;
        }
    }
    ctx->pc = 0x1CF534u;
    // 0x1cf534: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cf534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cf538: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf53c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF53Cu;
    {
        const bool branch_taken_0x1cf53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF53Cu;
        // 0x1cf540: 0x21d1021  addu        $v0, $s0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf53c) {
            ctx->pc = 0x1CF548u;
            goto label_1cf548;
        }
    }
    ctx->pc = 0x1CF544u;
    // 0x1cf544: 0xa052008c  sb          $s2, 0x8C($v0)
    ctx->pc = 0x1cf544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 18));
label_1cf548:
    // 0x1cf548: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf54c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1cf54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cf550: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1CF550u;
    {
        const bool branch_taken_0x1cf550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF550u;
        // 0x1cf554: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf550) {
            ctx->pc = 0x1CF4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf4b0;
        }
    }
    ctx->pc = 0x1CF558u;
label_1cf558:
    // 0x1cf558: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1cf55c: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf560: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CF560u;
    {
        const bool branch_taken_0x1cf560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF560u;
        // 0x1cf564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf560) {
            ctx->pc = 0x1CF5BCu;
            goto label_1cf5bc;
        }
    }
    ctx->pc = 0x1CF568u;
    // 0x1cf568: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1cf56c:
    // 0x1cf56c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf570: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF570u;
    SET_GPR_U32(ctx, 31, 0x1CF578u);
    ctx->pc = 0x1CF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF570u;
    // 0x1cf574: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF570u, 0x1CF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF578u;
label_1cf578:
    // 0x1cf578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf580: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CF580u;
    SET_GPR_U32(ctx, 31, 0x1CF588u);
    ctx->pc = 0x1CF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF580u;
    // 0x1cf584: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CF580u, 0x1CF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF588u;
label_1cf588:
    // 0x1cf588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf58c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1cf58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf590: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CF590u;
    {
        const bool branch_taken_0x1cf590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF590u;
        // 0x1cf594: 0x26060005  addiu       $a2, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf590) {
            ctx->pc = 0x1CF56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf56c;
        }
    }
    ctx->pc = 0x1CF598u;
    // 0x1cf598: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1cf598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf59c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf5a4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF5A4u;
    SET_GPR_U32(ctx, 31, 0x1CF5ACu);
    ctx->pc = 0x1CF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5A4u;
    // 0x1cf5a8: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF5A4u, 0x1CF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5ACu;
label_1cf5ac:
    // 0x1cf5ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf5b4: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CF5B4u;
    SET_GPR_U32(ctx, 31, 0x1CF5BCu);
    ctx->pc = 0x1CF5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5B4u;
    // 0x1cf5b8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CF5B4u, 0x1CF5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5BCu;
label_1cf5bc:
    // 0x1cf5bc: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf5c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf5c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf5c8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cf5cc: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1cf5d0: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1cf5d4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF5D4u;
    {
        const bool branch_taken_0x1cf5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf5d4) {
            ctx->pc = 0x1CF5FCu;
            goto label_1cf5fc;
        }
    }
    ctx->pc = 0x1CF5DCu;
    // 0x1cf5dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1cf5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1cf5e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf5e4: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf5e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF5E8u;
    {
        const bool branch_taken_0x1cf5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5E8u;
        // 0x1cf5ec: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5e8) {
            ctx->pc = 0x1CF5FCu;
            goto label_1cf5fc;
        }
    }
    ctx->pc = 0x1CF5F0u;
    // 0x1cf5f0: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf5f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1cf5f8: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1cf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_1cf5fc:
    // 0x1cf5fc: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf600: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1cf600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf608: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cf60c: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x1cf610: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x1cf610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1cf614: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF614u;
    {
        const bool branch_taken_0x1cf614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf614) {
            ctx->pc = 0x1CF620u;
            goto label_1cf620;
        }
    }
    ctx->pc = 0x1CF61Cu;
    // 0x1cf61c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1cf61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1cf620:
    // 0x1cf620: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf624: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf628: 0xaea3007c  sw          $v1, 0x7C($s5)
    ctx->pc = 0x1cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 3));
    // 0x1cf62c: 0x8ea40078  lw          $a0, 0x78($s5)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf630: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf634: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x1cf634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1cf638: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x1cf638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1cf63c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF63Cu;
    {
        const bool branch_taken_0x1cf63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF63Cu;
        // 0x1cf640: 0x24080031  addiu       $t0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf63c) {
            ctx->pc = 0x1CF648u;
            goto label_1cf648;
        }
    }
    ctx->pc = 0x1CF644u;
    // 0x1cf644: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1cf648:
    // 0x1cf648: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1cf648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf64c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF64Cu;
    {
        const bool branch_taken_0x1cf64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF64Cu;
        // 0x1cf650: 0x2a51021  addu        $v0, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf64c) {
            ctx->pc = 0x1CF67Cu;
            goto label_1cf67c;
        }
    }
    ctx->pc = 0x1CF654u;
    // 0x1cf654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf658: 0x244a0064  addiu       $t2, $v0, 0x64
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1cf65c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cf660: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1cf660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cf664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf668: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf66c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CF66Cu;
    SET_GPR_U32(ctx, 31, 0x1CF674u);
    ctx->pc = 0x1CF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF66Cu;
    // 0x1cf670: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CF66Cu, 0x1CF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF674u;
label_1cf674:
    // 0x1cf674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf678: 0xaea20070  sw          $v0, 0x70($s5)
    ctx->pc = 0x1cf678u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
label_1cf67c:
    // 0x1cf67c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf680: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cf684: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1cf684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cf688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf68c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf690: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cf690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf694: 0x26aa0078  addiu       $t2, $s5, 0x78
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x1cf698: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CF698u;
    SET_GPR_U32(ctx, 31, 0x1CF6A0u);
    ctx->pc = 0x1CF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF698u;
    // 0x1cf69c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CF698u, 0x1CF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6A0u;
label_1cf6a0:
    // 0x1cf6a0: 0x8ea50078  lw          $a1, 0x78($s5)
    ctx->pc = 0x1cf6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf6a4: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf6a8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1cf6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cf6ac: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1cf6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1cf6b0: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1cf6b4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF6B4u;
    {
        const bool branch_taken_0x1cf6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6B4u;
        // 0x1cf6b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6b4) {
            ctx->pc = 0x1CF6F8u;
            goto label_1cf6f8;
        }
    }
    ctx->pc = 0x1CF6BCu;
    // 0x1cf6bc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF6BCu;
    SET_GPR_U32(ctx, 31, 0x1CF6C4u);
    ctx->pc = 0x1CF6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6BCu;
    // 0x1cf6c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF6BCu, 0x1CF6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6C4u;
label_1cf6c4:
    // 0x1cf6c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CF6C4u;
    {
        const bool branch_taken_0x1cf6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6C4u;
        // 0x1cf6c8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6c4) {
            ctx->pc = 0x1CF720u;
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF6CCu;
    // 0x1cf6cc: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF6CCu;
    SET_GPR_U32(ctx, 31, 0x1CF6D4u);
    ctx->pc = 0x1CF6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6CCu;
    // 0x1cf6d0: 0xa020fb48  sb          $zero, -0x4B8($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966088), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF6CCu, 0x1CF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6D4u;
label_1cf6d4:
    // 0x1cf6d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6dc: 0x8c25fb50  lw          $a1, -0x4B0($at)
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FB50u));
    // 0x1cf6e0: 0xc072fcc  jal         func_1CBF30
    ctx->pc = 0x1CF6E0u;
    SET_GPR_U32(ctx, 31, 0x1CF6E8u);
    ctx->pc = 0x1CF6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6E0u;
    // 0x1cf6e4: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF30u, 0x1CF6E0u, 0x1CF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6E8u;
label_1cf6e8:
    // 0x1cf6e8: 0xc073dd4  jal         func_1CF750
    ctx->pc = 0x1CF6E8u;
    SET_GPR_U32(ctx, 31, 0x1CF6F0u);
    ctx->pc = 0x1CF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6E8u;
    // 0x1cf6ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF750u, 0x1CF6E8u, 0x1CF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6F0u;
label_1cf6f0:
    // 0x1cf6f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CF6F0u;
    {
        const bool branch_taken_0x1cf6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6F0u;
        // 0x1cf6f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6f0) {
            ctx->pc = 0x1CF724u;
            goto label_1cf724;
        }
    }
    ctx->pc = 0x1CF6F8u;
label_1cf6f8:
    // 0x1cf6f8: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1cf6fc: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF6FCu;
    {
        const bool branch_taken_0x1cf6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6FCu;
        // 0x1cf700: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6fc) {
            ctx->pc = 0x1CF720u;
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF704u;
    // 0x1cf704: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CF704u;
    SET_GPR_U32(ctx, 31, 0x1CF70Cu);
    ctx->pc = 0x1CF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF704u;
    // 0x1cf708: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CF704u, 0x1CF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF70Cu;
label_1cf70c:
    // 0x1cf70c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF70Cu;
    {
        const bool branch_taken_0x1cf70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf70c) {
            ctx->pc = 0x1CF720u;
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF714u;
    // 0x1cf714: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf718: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf71c: 0xaea30078  sw          $v1, 0x78($s5)
    ctx->pc = 0x1cf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 3));
label_1cf720:
    // 0x1cf720: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1cf720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1cf724:
    // 0x1cf724: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cf724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf728: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cf728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf72c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF73Cu;
        // 0x1cf740: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF744u;
}
