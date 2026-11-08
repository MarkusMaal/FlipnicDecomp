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

// Function: entry_00145b74
// Address: 0x145b74 - 0x145bb0
void entry_00145b74_0x145b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b74_0x145b74");
#endif

    switch (ctx->pc) {
        case 0x145b98u: goto label_145b98;
        default: break;
    }

    ctx->pc = 0x145b74u;

    // 0x145b74: 0x0  nop
    ctx->pc = 0x145b74u;
    // NOP
    // 0x145b78: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x145b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145b80: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x145b84: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x145b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x145b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145b8c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x145b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x145b90: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x145B90u;
    SET_GPR_U32(ctx, 31, 0x145B98u);
    ctx->pc = 0x145B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B90u;
    // 0x145b94: 0xafa00138  sw          $zero, 0x138($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x145B90u, 0x145B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B98u;
label_145b98:
    // 0x145b98: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x145b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x145b9c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x145b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x145ba0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x145BA0u;
    {
        const bool branch_taken_0x145ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ba0) {
            ctx->pc = 0x145BB0u;
            return;
        }
    }
    ctx->pc = 0x145BA8u;
    // 0x145ba8: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x145BA8u;
    {
        const bool branch_taken_0x145ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BA8u;
        // 0x145bac: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ba8) {
            ctx->pc = 0x1459D0u;
            return;
        }
    }
    ctx->pc = 0x145BB0u;
}
