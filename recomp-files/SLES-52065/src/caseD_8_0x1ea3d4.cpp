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

// Function: caseD_8
// Address: 0x1ea3d4 - 0x1ea450
void caseD_8_0x1ea3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ea3d4");
#endif

    switch (ctx->pc) {
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea404u: goto label_1ea404;
        default: break;
    }

    ctx->pc = 0x1ea3d4u;

    // 0x1ea3d4: 0x0  nop
    ctx->pc = 0x1ea3d4u;
    // NOP
    // 0x1ea3d8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea3dc: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x1ea3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ea3e0: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x1ea3e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x1ea3e4: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA3E4u;
    SET_GPR_U32(ctx, 31, 0x1EA3ECu);
    ctx->pc = 0x1EA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3E4u;
    // 0x1ea3e8: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA3E4u, 0x1EA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3ECu;
label_1ea3ec:
    // 0x1ea3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3f0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA3F0u;
    SET_GPR_U32(ctx, 31, 0x1EA3F8u);
    ctx->pc = 0x1EA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3F0u;
    // 0x1ea3f4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA3F0u, 0x1EA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3F8u;
label_1ea3f8:
    // 0x1ea3f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3fc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA3FCu;
    SET_GPR_U32(ctx, 31, 0x1EA404u);
    ctx->pc = 0x1EA400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3FCu;
    // 0x1ea400: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA3FCu, 0x1EA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA404u;
label_1ea404:
    // 0x1ea404: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea404u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea408: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea40c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea40cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea410: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea414: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea414u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea418: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ea41c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ea420: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ea424: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ea428: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea42c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA42Cu;
    {
        const bool branch_taken_0x1ea42c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA42Cu;
        // 0x1ea430: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea42c) {
            ctx->pc = 0x1EA450u;
            return;
        }
    }
    ctx->pc = 0x1EA434u;
    // 0x1ea434: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1ea434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1ea438: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ea43c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1ea440: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1ea440u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ea444: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1ea444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1ea448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA448u;
    {
        const bool branch_taken_0x1ea448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA448u;
        // 0x1ea44c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea448) {
            ctx->pc = 0x1EA464u;
            return;
        }
    }
    ctx->pc = 0x1EA450u;
}
