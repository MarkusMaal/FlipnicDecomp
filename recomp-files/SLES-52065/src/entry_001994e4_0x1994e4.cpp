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

// Function: entry_001994e4
// Address: 0x1994e4 - 0x199510
void entry_001994e4_0x1994e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001994e4_0x1994e4");
#endif

    ctx->pc = 0x1994e4u;

    // 0x1994e4: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1994e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1994e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1994ec: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1994ECu;
    {
        const bool branch_taken_0x1994ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1994ec) {
            ctx->pc = 0x199510u;
            return;
        }
    }
    ctx->pc = 0x1994F4u;
    // 0x1994f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1994f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1994f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1994f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994fc: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1994fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x199500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199508: 0xc065834  jal         func_1960D0
    ctx->pc = 0x199508u;
    SET_GPR_U32(ctx, 31, 0x199510u);
    ctx->pc = 0x19950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199508u;
    // 0x19950c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x199508u, 0x199510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199510u;
}
