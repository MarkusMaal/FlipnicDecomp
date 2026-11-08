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

// Function: caseD_c
// Address: 0x1ea6f0 - 0x1ea744
void caseD_c_0x1ea6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1ea6f0");
#endif

    switch (ctx->pc) {
        case 0x1ea730u: goto label_1ea730;
        case 0x1ea73cu: goto label_1ea73c;
        default: break;
    }

    ctx->pc = 0x1ea6f0u;

    // 0x1ea6f0: 0x12e80040  beq         $s7, $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1EA6F0u;
    {
        const bool branch_taken_0x1ea6f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ea6f0) {
            ctx->pc = 0x1EA7F4u;
            return;
        }
    }
    ctx->pc = 0x1EA6F8u;
    // 0x1ea6f8: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x1ea6f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1ea6fc: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x1ea6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1ea700: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1ea700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1ea704: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x1ea704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1ea708: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x1ea708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ea70c: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x1ea70cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1ea710: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1ea714: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ea718: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ea71c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ea71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1ea720: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ea720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ea724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ea728: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EA728u;
    SET_GPR_U32(ctx, 31, 0x1EA730u);
    ctx->pc = 0x1EA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA728u;
    // 0x1ea72c: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA728u, 0x1EA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA730u;
label_1ea730:
    // 0x1ea730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea734: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA734u;
    SET_GPR_U32(ctx, 31, 0x1EA73Cu);
    ctx->pc = 0x1EA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA734u;
    // 0x1ea738: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA734u, 0x1EA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA73Cu;
label_1ea73c:
    // 0x1ea73c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1EA73Cu;
    {
        const bool branch_taken_0x1ea73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA73Cu;
        // 0x1ea740: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea73c) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA744u;
}
