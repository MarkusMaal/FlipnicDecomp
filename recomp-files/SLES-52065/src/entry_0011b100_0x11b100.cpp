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

// Function: entry_0011b100
// Address: 0x11b100 - 0x11b120
void entry_0011b100_0x11b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b100_0x11b100");
#endif

    switch (ctx->pc) {
        case 0x11b118u: goto label_11b118;
        default: break;
    }

    ctx->pc = 0x11b100u;

    // 0x11b100: 0x8e220538  lw          $v0, 0x538($s1)
    ctx->pc = 0x11b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1336)));
    // 0x11b104: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B104u;
    {
        const bool branch_taken_0x11b104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B104u;
        // 0x11b108: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b104) {
            ctx->pc = 0x11B120u;
            return;
        }
    }
    ctx->pc = 0x11B10Cu;
    // 0x11b10c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b110: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B110u;
    SET_GPR_U32(ctx, 31, 0x11B118u);
    ctx->pc = 0x11B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B110u;
    // 0x11b114: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B110u, 0x11B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B118u;
label_11b118:
    // 0x11b118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B118u;
    {
        const bool branch_taken_0x11b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B118u;
        // 0x11b11c: 0x263200f4  addiu       $s2, $s1, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b118) {
            ctx->pc = 0x11B128u;
            return;
        }
    }
    ctx->pc = 0x11B120u;
}
