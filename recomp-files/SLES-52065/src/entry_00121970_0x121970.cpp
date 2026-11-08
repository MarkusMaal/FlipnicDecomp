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

// Function: entry_00121970
// Address: 0x121970 - 0x121998
void entry_00121970_0x121970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121970_0x121970");
#endif

    switch (ctx->pc) {
        case 0x121978u: goto label_121978;
        case 0x12198cu: goto label_12198c;
        default: break;
    }

    ctx->pc = 0x121970u;

    // 0x121970: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 31, 0x121978u);
    ctx->pc = 0x121974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121970u;
    // 0x121974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x121970u, 0x121978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121978u;
label_121978:
    // 0x121978: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121978u;
    {
        const bool branch_taken_0x121978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121978u;
        // 0x12197c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121978) {
            ctx->pc = 0x121998u;
            return;
        }
    }
    ctx->pc = 0x121980u;
    // 0x121980: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x121980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x121984: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121984u;
    SET_GPR_U32(ctx, 31, 0x12198Cu);
    ctx->pc = 0x121988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121984u;
    // 0x121988: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121984u, 0x12198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12198Cu;
label_12198c:
    // 0x12198c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x12198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x121990: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x121990u;
    {
        const bool branch_taken_0x121990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121990u;
        // 0x121994: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121990) {
            ctx->pc = 0x121C90u;
            return;
        }
    }
    ctx->pc = 0x121998u;
}
