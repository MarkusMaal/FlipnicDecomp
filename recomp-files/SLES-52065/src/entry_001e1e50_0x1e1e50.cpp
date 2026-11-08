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

// Function: entry_001e1e50
// Address: 0x1e1e50 - 0x1e1e88
void entry_001e1e50_0x1e1e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1e50_0x1e1e50");
#endif

    switch (ctx->pc) {
        case 0x1e1e70u: goto label_1e1e70;
        default: break;
    }

    ctx->pc = 0x1e1e50u;

    // 0x1e1e50: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1e54: 0x2484b6a0  addiu       $a0, $a0, -0x4960
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948512));
    // 0x1e1e58: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1E58u;
    {
        const bool branch_taken_0x1e1e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E58u;
        // 0x1e1e5c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e58) {
            ctx->pc = 0x1E1E88u;
            return;
        }
    }
    ctx->pc = 0x1E1E60u;
    // 0x1e1e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1e64: 0x24c6b960  addiu       $a2, $a2, -0x46A0
    ctx->pc = 0x1e1e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949216));
    // 0x1e1e68: 0xc078c74  jal         func_1E31D0
    ctx->pc = 0x1E1E68u;
    SET_GPR_U32(ctx, 31, 0x1E1E70u);
    ctx->pc = 0x1E1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E68u;
    // 0x1e1e6c: 0xafdd0064  sw          $sp, 0x64($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31D0u, 0x1E1E68u, 0x1E1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E70u;
label_1e1e70:
    // 0x1e1e70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1E70u;
    {
        const bool branch_taken_0x1e1e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e70) {
            ctx->pc = 0x1E1E88u;
            return;
        }
    }
    ctx->pc = 0x1E1E78u;
    // 0x1e1e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1e80: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E1E80u;
    SET_GPR_U32(ctx, 31, 0x1E1E88u);
    ctx->pc = 0x1E1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E80u;
    // 0x1e1e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1E80u, 0x1E1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E88u;
}
