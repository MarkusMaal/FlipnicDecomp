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

// Function: entry_001642a8
// Address: 0x1642a8 - 0x1642c4
void entry_001642a8_0x1642a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001642a8_0x1642a8");
#endif

    switch (ctx->pc) {
        case 0x1642b4u: goto label_1642b4;
        default: break;
    }

    ctx->pc = 0x1642a8u;

    // 0x1642a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1642a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642ac: 0xc058d4c  jal         func_163530
    ctx->pc = 0x1642ACu;
    SET_GPR_U32(ctx, 31, 0x1642B4u);
    ctx->pc = 0x1642B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642ACu;
    // 0x1642b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x1642ACu, 0x1642B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642B4u;
label_1642b4:
    // 0x1642b4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1642B4u;
    {
        const bool branch_taken_0x1642b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1642B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642B4u;
        // 0x1642b8: 0xae4001d4  sw          $zero, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642b4) {
            ctx->pc = 0x1642C4u;
            return;
        }
    }
    ctx->pc = 0x1642BCu;
    // 0x1642bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1642BCu;
    {
        const bool branch_taken_0x1642bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642BCu;
        // 0x1642c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642bc) {
            ctx->pc = 0x164350u;
            return;
        }
    }
    ctx->pc = 0x1642C4u;
}
