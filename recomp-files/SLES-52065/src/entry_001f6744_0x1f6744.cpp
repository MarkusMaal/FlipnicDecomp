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

// Function: entry_001f6744
// Address: 0x1f6744 - 0x1f6768
void entry_001f6744_0x1f6744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6744_0x1f6744");
#endif

    switch (ctx->pc) {
        case 0x1f6760u: goto label_1f6760;
        default: break;
    }

    ctx->pc = 0x1f6744u;

    // 0x1f6744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6748: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6748u;
    {
        const bool branch_taken_0x1f6748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6748u;
        // 0x1f674c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6748) {
            ctx->pc = 0x1F6768u;
            return;
        }
    }
    ctx->pc = 0x1F6750u;
    // 0x1f6750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6758: 0xc07d832  jal         func_1F60C8
    ctx->pc = 0x1F6758u;
    SET_GPR_U32(ctx, 31, 0x1F6760u);
    ctx->pc = 0x1F675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6758u;
    // 0x1f675c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F60C8u, 0x1F6758u, 0x1F6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6760u;
label_1f6760:
    // 0x1f6760: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1f6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f6764: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f6764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f6768u;
}
