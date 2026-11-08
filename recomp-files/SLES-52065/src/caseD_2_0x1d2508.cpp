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

// Function: caseD_2
// Address: 0x1d2508 - 0x1d253c
void caseD_2_0x1d2508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1d2508");
#endif

    switch (ctx->pc) {
        case 0x1d2510u: goto label_1d2510;
        default: break;
    }

    ctx->pc = 0x1d2508u;

    // 0x1d2508: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1D2508u;
    SET_GPR_U32(ctx, 31, 0x1D2510u);
    ctx->pc = 0x1D250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2508u;
    // 0x1d250c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1D2508u, 0x1D2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2510u;
label_1d2510:
    // 0x1d2510: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D2510u;
    {
        const bool branch_taken_0x1d2510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2510) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D2518u;
    // 0x1d2518: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d251c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2520: 0x8c24fef0  lw          $a0, -0x110($at)
    ctx->pc = 0x1d2520u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2524: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2528: 0xac23fef8  sw          $v1, -0x108($at)
    ctx->pc = 0x1d2528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FEF8u, _value); } while (0);
    // 0x1d252c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2530: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2534: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D2534u;
    {
        const bool branch_taken_0x1d2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2534u;
        // 0x1d2538: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2534) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D253Cu;
}
