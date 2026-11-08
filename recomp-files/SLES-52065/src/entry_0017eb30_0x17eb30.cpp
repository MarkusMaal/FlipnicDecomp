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

// Function: entry_0017eb30
// Address: 0x17eb30 - 0x17eb50
void entry_0017eb30_0x17eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb30_0x17eb30");
#endif

    switch (ctx->pc) {
        case 0x17eb44u: goto label_17eb44;
        default: break;
    }

    ctx->pc = 0x17eb30u;

    // 0x17eb30: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x17eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17eb34: 0x1452ffd9  bne         $v0, $s2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x17EB34u;
    {
        const bool branch_taken_0x17eb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x17EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB34u;
        // 0x17eb38: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb34) {
            ctx->pc = 0x17EA9Cu;
            return;
        }
    }
    ctx->pc = 0x17EB3Cu;
    // 0x17eb3c: 0xc05fd60  jal         func_17F580
    ctx->pc = 0x17EB3Cu;
    SET_GPR_U32(ctx, 31, 0x17EB44u);
    ctx->pc = 0x17F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F580u, 0x17EB3Cu, 0x17EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB44u;
label_17eb44:
    // 0x17eb44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17eb48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17eb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17eb4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17eb50u;
}
