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

// Function: caseD_0
// Address: 0x1d2080 - 0x1d20e0
void caseD_0_0x1d2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1d2080");
#endif

    switch (ctx->pc) {
        case 0x1d2088u: goto label_1d2088;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20d4u: goto label_1d20d4;
        default: break;
    }

    ctx->pc = 0x1d2080u;

    // 0x1d2080: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D2080u;
    SET_GPR_U32(ctx, 31, 0x1D2088u);
    ctx->pc = 0x1D2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2080u;
    // 0x1d2084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D2080u, 0x1D2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2088u;
label_1d2088:
    // 0x1d2088: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1D2088u;
    {
        const bool branch_taken_0x1d2088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2088u;
        // 0x1d208c: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2088) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D2090u;
    // 0x1d2090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2098: 0xc07e17c  jal         func_1F85F0
    ctx->pc = 0x1D2098u;
    SET_GPR_U32(ctx, 31, 0x1D20A0u);
    ctx->pc = 0x1D209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2098u;
    // 0x1d209c: 0x24c6fe60  addiu       $a2, $a2, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F85F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85F0u, 0x1D2098u, 0x1D20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20A0u;
label_1d20a0:
    // 0x1d20a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d20a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20a8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D20A8u;
    SET_GPR_U32(ctx, 31, 0x1D20B0u);
    ctx->pc = 0x1D20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20A8u;
    // 0x1d20ac: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D20A8u, 0x1D20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20B0u;
label_1d20b0:
    // 0x1d20b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d20b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20b8: 0x8c22fea0  lw          $v0, -0x160($at)
    ctx->pc = 0x1d20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d20bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d20c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d20c4: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d20c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20cc: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1D20CCu;
    SET_GPR_U32(ctx, 31, 0x1D20D4u);
    ctx->pc = 0x1D20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20CCu;
    // 0x1d20d0: 0xac22fea0  sw          $v0, -0x160($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1D20CCu, 0x1D20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20D4u;
label_1d20d4:
    // 0x1d20d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d20d8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1D20D8u;
    {
        const bool branch_taken_0x1d20d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D8u;
        // 0x1d20dc: 0xac22fea8  sw          $v0, -0x158($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d8) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D20E0u;
}
