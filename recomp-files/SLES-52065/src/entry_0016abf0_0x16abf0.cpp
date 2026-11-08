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

// Function: entry_0016abf0
// Address: 0x16abf0 - 0x16ac08
void entry_0016abf0_0x16abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016abf0_0x16abf0");
#endif

    switch (ctx->pc) {
        case 0x16ac00u: goto label_16ac00;
        default: break;
    }

    ctx->pc = 0x16abf0u;

    // 0x16abf0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16ABF0u;
    {
        const bool branch_taken_0x16abf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABF0u;
        // 0x16abf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abf0) {
            ctx->pc = 0x16AC08u;
            return;
        }
    }
    ctx->pc = 0x16ABF8u;
    // 0x16abf8: 0xc055c40  jal         func_157100
    ctx->pc = 0x16ABF8u;
    SET_GPR_U32(ctx, 31, 0x16AC00u);
    ctx->pc = 0x16ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABF8u;
    // 0x16abfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16ABF8u, 0x16AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC00u;
label_16ac00:
    // 0x16ac00: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x16AC00u;
    {
        const bool branch_taken_0x16ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC00u;
        // 0x16ac04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac00) {
            ctx->pc = 0x16AEB8u;
            return;
        }
    }
    ctx->pc = 0x16AC08u;
}
