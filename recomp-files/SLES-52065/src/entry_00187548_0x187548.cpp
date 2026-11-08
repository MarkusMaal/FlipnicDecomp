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

// Function: entry_00187548
// Address: 0x187548 - 0x18757c
void entry_00187548_0x187548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187548_0x187548");
#endif

    switch (ctx->pc) {
        case 0x18755cu: goto label_18755c;
        case 0x187570u: goto label_187570;
        default: break;
    }

    ctx->pc = 0x187548u;

    // 0x187548: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x187548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18754c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18754Cu;
    {
        const bool branch_taken_0x18754c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18754Cu;
        // 0x187550: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18754c) {
            ctx->pc = 0x187514u;
            return;
        }
    }
    ctx->pc = 0x187554u;
    // 0x187554: 0xc061d68  jal         func_1875A0
    ctx->pc = 0x187554u;
    SET_GPR_U32(ctx, 31, 0x18755Cu);
    ctx->pc = 0x1875A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875A0u, 0x187554u, 0x18755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18755Cu;
label_18755c:
    // 0x18755c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187560: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187560u;
    {
        const bool branch_taken_0x187560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187560u;
        // 0x187564: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187560) {
            ctx->pc = 0x18757Cu;
            return;
        }
    }
    ctx->pc = 0x187568u;
    // 0x187568: 0xc061d68  jal         func_1875A0
    ctx->pc = 0x187568u;
    SET_GPR_U32(ctx, 31, 0x187570u);
    ctx->pc = 0x1875A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875A0u, 0x187568u, 0x187570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187570u;
label_187570:
    // 0x187570: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187574: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187574u;
    SET_GPR_U32(ctx, 31, 0x18757Cu);
    ctx->pc = 0x187578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187574u;
    // 0x187578: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x187574u, 0x18757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18757Cu;
}
