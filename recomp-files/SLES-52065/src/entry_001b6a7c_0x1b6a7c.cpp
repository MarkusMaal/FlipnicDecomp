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

// Function: entry_001b6a7c
// Address: 0x1b6a7c - 0x1b6aa0
void entry_001b6a7c_0x1b6a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6a7c_0x1b6a7c");
#endif

    switch (ctx->pc) {
        case 0x1b6a94u: goto label_1b6a94;
        default: break;
    }

    ctx->pc = 0x1b6a7cu;

    // 0x1b6a7c: 0x0  nop
    ctx->pc = 0x1b6a7cu;
    // NOP
    // 0x1b6a80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b6a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6a88: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6a8c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A94u);
    ctx->pc = 0x1B6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A8Cu;
    // 0x1b6a90: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6A8Cu, 0x1B6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A94u;
label_1b6a94:
    // 0x1b6a94: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b6a98: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B6A98u;
    {
        const bool branch_taken_0x1b6a98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A98u;
        // 0x1b6a9c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a98) {
            ctx->pc = 0x1B6A4Cu;
            return;
        }
    }
    ctx->pc = 0x1B6AA0u;
}
