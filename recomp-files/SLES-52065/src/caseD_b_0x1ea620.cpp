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

// Function: caseD_b
// Address: 0x1ea620 - 0x1ea68c
void caseD_b_0x1ea620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1ea620");
#endif

    switch (ctx->pc) {
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea640u: goto label_1ea640;
        default: break;
    }

    ctx->pc = 0x1ea620u;

    // 0x1ea620: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea624: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1ea624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ea628: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x1ea628u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x1ea62c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA62Cu;
    SET_GPR_U32(ctx, 31, 0x1EA634u);
    ctx->pc = 0x1EA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA62Cu;
    // 0x1ea630: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA62Cu, 0x1EA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA634u;
label_1ea634:
    // 0x1ea634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea638: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA638u;
    SET_GPR_U32(ctx, 31, 0x1EA640u);
    ctx->pc = 0x1EA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA638u;
    // 0x1ea63c: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA638u, 0x1EA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA640u;
label_1ea640:
    // 0x1ea640: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea640u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1ea644: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea648: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea648u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1ea64c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea64cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1ea650: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea654: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ea658: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ea65c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ea660: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ea664: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ea668: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA668u;
    {
        const bool branch_taken_0x1ea668 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA668u;
        // 0x1ea66c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea668) {
            ctx->pc = 0x1EA68Cu;
            return;
        }
    }
    ctx->pc = 0x1EA670u;
    // 0x1ea670: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ea674: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ea678: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1ea67c: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1ea67cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ea680: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1ea680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1ea684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA684u;
    {
        const bool branch_taken_0x1ea684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA684u;
        // 0x1ea688: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea684) {
            ctx->pc = 0x1EA6A0u;
            return;
        }
    }
    ctx->pc = 0x1EA68Cu;
}
