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

// Function: entry_00199510
// Address: 0x199510 - 0x19953c
void entry_00199510_0x199510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199510_0x199510");
#endif

    ctx->pc = 0x199510u;

    // 0x199510: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x199510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x199514: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199518: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x199518u;
    {
        const bool branch_taken_0x199518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199518) {
            ctx->pc = 0x19953Cu;
            return;
        }
    }
    ctx->pc = 0x199520u;
    // 0x199520: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x199524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199528: 0x24a50118  addiu       $a1, $a1, 0x118
    ctx->pc = 0x199528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
    // 0x19952c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199534: 0xc065834  jal         func_1960D0
    ctx->pc = 0x199534u;
    SET_GPR_U32(ctx, 31, 0x19953Cu);
    ctx->pc = 0x199538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199534u;
    // 0x199538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x199534u, 0x19953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19953Cu;
}
