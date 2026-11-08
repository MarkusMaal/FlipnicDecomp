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

// Function: entry_0011da2c
// Address: 0x11da2c - 0x11da50
void entry_0011da2c_0x11da2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da2c_0x11da2c");
#endif

    switch (ctx->pc) {
        case 0x11da48u: goto label_11da48;
        default: break;
    }

    ctx->pc = 0x11da2cu;

    // 0x11da2c: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x11da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x11da30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da34: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11da38: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x11da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11da3c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11da40: 0xc080702  jal         func_201C08
    ctx->pc = 0x11DA40u;
    SET_GPR_U32(ctx, 31, 0x11DA48u);
    ctx->pc = 0x11DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA40u;
    // 0x11da44: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11DA40u, 0x11DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA48u;
label_11da48:
    // 0x11da48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11DA48u;
    {
        const bool branch_taken_0x11da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da48) {
            ctx->pc = 0x11DA5Cu;
            return;
        }
    }
    ctx->pc = 0x11DA50u;
}
