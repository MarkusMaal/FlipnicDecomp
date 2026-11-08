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

// Function: entry_001d2d48
// Address: 0x1d2d48 - 0x1d2d84
void entry_001d2d48_0x1d2d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d48_0x1d2d48");
#endif

    switch (ctx->pc) {
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d6cu: goto label_1d2d6c;
        default: break;
    }

    ctx->pc = 0x1d2d48u;

    // 0x1d2d48: 0x8c250390  lw          $a1, 0x390($at)
    ctx->pc = 0x1d2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 912)));
    // 0x1d2d4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d50: 0x8c260398  lw          $a2, 0x398($at)
    ctx->pc = 0x1d2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370398u));
    // 0x1d2d54: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D2D54u;
    SET_GPR_U32(ctx, 31, 0x1D2D5Cu);
    ctx->pc = 0x1D2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D54u;
    // 0x1d2d58: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D2D54u, 0x1D2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D5Cu;
label_1d2d5c:
    // 0x1d2d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d64: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2D64u;
    SET_GPR_U32(ctx, 31, 0x1D2D6Cu);
    ctx->pc = 0x1D2D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D64u;
    // 0x1d2d68: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2D64u, 0x1D2D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D6Cu;
label_1d2d6c:
    // 0x1d2d6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d70: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2d78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2D7Cu;
    {
        const bool branch_taken_0x1d2d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D7Cu;
        // 0x1d2d80: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d7c) {
            ctx->pc = 0x1D2DD8u;
            return;
        }
    }
    ctx->pc = 0x1D2D84u;
}
