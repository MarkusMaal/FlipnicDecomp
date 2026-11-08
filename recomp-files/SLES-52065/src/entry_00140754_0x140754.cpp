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

// Function: entry_00140754
// Address: 0x140754 - 0x140770
void entry_00140754_0x140754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140754_0x140754");
#endif

    switch (ctx->pc) {
        case 0x14075cu: goto label_14075c;
        case 0x14076cu: goto label_14076c;
        default: break;
    }

    ctx->pc = 0x140754u;

    // 0x140754: 0xc050234  jal         func_1408D0
    ctx->pc = 0x140754u;
    SET_GPR_U32(ctx, 31, 0x14075Cu);
    ctx->pc = 0x140758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140754u;
    // 0x140758: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408D0u, 0x140754u, 0x14075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14075Cu;
label_14075c:
    // 0x14075c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140760: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x140760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140764: 0xc050224  jal         func_140890
    ctx->pc = 0x140764u;
    SET_GPR_U32(ctx, 31, 0x14076Cu);
    ctx->pc = 0x140768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140764u;
    // 0x140768: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x140764u, 0x14076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14076Cu;
label_14076c:
    // 0x14076c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x140770u;
}
