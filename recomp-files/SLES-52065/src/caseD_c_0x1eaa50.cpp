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
// Address: 0x1eaa50 - 0x1eaa9c
void caseD_c_0x1eaa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1eaa50");
#endif

    switch (ctx->pc) {
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa94u: goto label_1eaa94;
        default: break;
    }

    ctx->pc = 0x1eaa50u;

    // 0x1eaa50: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x1eaa50u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1eaa54: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x1eaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1eaa58: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1eaa58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1eaa5c: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x1eaa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1eaa60: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x1eaa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1eaa64: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x1eaa64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1eaa68: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1eaa68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1eaa6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1eaa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1eaa70: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1eaa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1eaa74: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1eaa74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1eaa78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1eaa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1eaa7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eaa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eaa80: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAA80u;
    SET_GPR_U32(ctx, 31, 0x1EAA88u);
    ctx->pc = 0x1EAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA80u;
    // 0x1eaa84: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAA80u, 0x1EAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA88u;
label_1eaa88:
    // 0x1eaa88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa8c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA94u);
    ctx->pc = 0x1EAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA8Cu;
    // 0x1eaa90: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA8Cu, 0x1EAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA94u;
label_1eaa94:
    // 0x1eaa94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1EAA94u;
    {
        const bool branch_taken_0x1eaa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA94u;
        // 0x1eaa98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa94) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAA9Cu;
}
