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

// Function: entry_001b16e0
// Address: 0x1b16e0 - 0x1b1700
void entry_001b16e0_0x1b16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b16e0_0x1b16e0");
#endif

    switch (ctx->pc) {
        case 0x1b16ecu: goto label_1b16ec;
        default: break;
    }

    ctx->pc = 0x1b16e0u;

    // 0x1b16e0: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x1b16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x1b16e4: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B16E4u;
    SET_GPR_U32(ctx, 31, 0x1B16ECu);
    ctx->pc = 0x1B16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16E4u;
    // 0x1b16e8: 0x24a50b90  addiu       $a1, $a1, 0xB90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B16E4u, 0x1B16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16ECu;
label_1b16ec:
    // 0x1b16ec: 0x920328fc  lbu         $v1, 0x28FC($s0)
    ctx->pc = 0x1b16ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10492)));
    // 0x1b16f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B16F0u;
    {
        const bool branch_taken_0x1b16f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16F0u;
        // 0x1b16f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f0) {
            ctx->pc = 0x1B1700u;
            return;
        }
    }
    ctx->pc = 0x1B16F8u;
    // 0x1b16f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B16F8u;
    {
        const bool branch_taken_0x1b16f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16F8u;
        // 0x1b16fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f8) {
            ctx->pc = 0x1B1704u;
            return;
        }
    }
    ctx->pc = 0x1B1700u;
}
