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

// Function: entry_00170f9c
// Address: 0x170f9c - 0x170fb0
void entry_00170f9c_0x170f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f9c_0x170f9c");
#endif

    switch (ctx->pc) {
        case 0x170facu: goto label_170fac;
        default: break;
    }

    ctx->pc = 0x170f9cu;

    // 0x170f9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170F9Cu;
    {
        const bool branch_taken_0x170f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F9Cu;
        // 0x170fa0: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f9c) {
            ctx->pc = 0x170FB0u;
            return;
        }
    }
    ctx->pc = 0x170FA4u;
    // 0x170fa4: 0xc05c1b0  jal         func_1706C0
    ctx->pc = 0x170FA4u;
    SET_GPR_U32(ctx, 31, 0x170FACu);
    ctx->pc = 0x170FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FA4u;
    // 0x170fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1706C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1706C0u, 0x170FA4u, 0x170FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FACu;
label_170fac:
    // 0x170fac: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x170facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->pc = 0x170fb0u;
}
