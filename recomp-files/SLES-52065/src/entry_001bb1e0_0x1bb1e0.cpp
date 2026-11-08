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

// Function: entry_001bb1e0
// Address: 0x1bb1e0 - 0x1bb21c
void entry_001bb1e0_0x1bb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb1e0_0x1bb1e0");
#endif

    switch (ctx->pc) {
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb210u: goto label_1bb210;
        default: break;
    }

    ctx->pc = 0x1bb1e0u;

    // 0x1bb1e0: 0x1651000e  bne         $s2, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB1E0u;
    {
        const bool branch_taken_0x1bb1e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x1BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1E0u;
        // 0x1bb1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1e0) {
            ctx->pc = 0x1BB21Cu;
            return;
        }
    }
    ctx->pc = 0x1BB1E8u;
    // 0x1bb1e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1f8: 0xc06ef58  jal         func_1BBD60
    ctx->pc = 0x1BB1F8u;
    SET_GPR_U32(ctx, 31, 0x1BB200u);
    ctx->pc = 0x1BB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1F8u;
    // 0x1bb1fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD60u, 0x1BB1F8u, 0x1BB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB200u;
label_1bb200:
    // 0x1bb200: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bb200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb208: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x1BB208u;
    SET_GPR_U32(ctx, 31, 0x1BB210u);
    ctx->pc = 0x1BB20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB208u;
    // 0x1bb20c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x1BB208u, 0x1BB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB210u;
label_1bb210:
    // 0x1bb210: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BB210u;
    {
        const bool branch_taken_0x1bb210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB210u;
        // 0x1bb214: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb210) {
            ctx->pc = 0x1BB248u;
            return;
        }
    }
    ctx->pc = 0x1BB218u;
    // 0x1bb218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb21cu;
}
