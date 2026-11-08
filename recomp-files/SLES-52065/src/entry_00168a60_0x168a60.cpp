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

// Function: entry_00168a60
// Address: 0x168a60 - 0x168a80
void entry_00168a60_0x168a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168a60_0x168a60");
#endif

    switch (ctx->pc) {
        case 0x168a68u: goto label_168a68;
        default: break;
    }

    ctx->pc = 0x168a60u;

    // 0x168a60: 0xc042570  jal         func_1095C0
    ctx->pc = 0x168A60u;
    SET_GPR_U32(ctx, 31, 0x168A68u);
    ctx->pc = 0x168A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A60u;
    // 0x168a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168A60u, 0x168A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A68u;
label_168a68:
    // 0x168a68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168a6c: 0xae2201d4  sw          $v0, 0x1D4($s1)
    ctx->pc = 0x168a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
    // 0x168a70: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x168a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x168a74: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168A74u;
    {
        const bool branch_taken_0x168a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168a74) {
            ctx->pc = 0x168A80u;
            return;
        }
    }
    ctx->pc = 0x168A7Cu;
    // 0x168a7c: 0xae300220  sw          $s0, 0x220($s1)
    ctx->pc = 0x168a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 16));
    ctx->pc = 0x168a80u;
}
