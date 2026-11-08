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

// Function: entry_001af44c
// Address: 0x1af44c - 0x1af478
void entry_001af44c_0x1af44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af44c_0x1af44c");
#endif

    ctx->pc = 0x1af44cu;

    // 0x1af44c: 0x26040790  addiu       $a0, $s0, 0x790
    ctx->pc = 0x1af44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
    // 0x1af450: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF450u;
    {
        const bool branch_taken_0x1af450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF450u;
        // 0x1af454: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af450) {
            ctx->pc = 0x1AF478u;
            return;
        }
    }
    ctx->pc = 0x1AF458u;
    // 0x1af458: 0x2442b790  addiu       $v0, $v0, -0x4870
    ctx->pc = 0x1af458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
    // 0x1af45c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF45Cu;
    {
        const bool branch_taken_0x1af45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF45Cu;
        // 0x1af460: 0xae02079c  sw          $v0, 0x79C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af45c) {
            ctx->pc = 0x1AF478u;
            return;
        }
    }
    ctx->pc = 0x1AF464u;
    // 0x1af464: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1af464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1af468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af46c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1af46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1af470: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AF470u;
    SET_GPR_U32(ctx, 31, 0x1AF478u);
    ctx->pc = 0x1AF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF470u;
    // 0x1af474: 0xae02079c  sw          $v0, 0x79C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AF470u, 0x1AF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF478u;
}
