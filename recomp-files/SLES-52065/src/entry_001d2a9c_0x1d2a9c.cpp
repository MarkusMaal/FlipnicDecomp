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

// Function: entry_001d2a9c
// Address: 0x1d2a9c - 0x1d2ad8
void entry_001d2a9c_0x1d2a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a9c_0x1d2a9c");
#endif

    switch (ctx->pc) {
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ac0u: goto label_1d2ac0;
        default: break;
    }

    ctx->pc = 0x1d2a9cu;

    // 0x1d2a9c: 0x8c250330  lw          $a1, 0x330($at)
    ctx->pc = 0x1d2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 816)));
    // 0x1d2aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2aa4: 0x8c260338  lw          $a2, 0x338($at)
    ctx->pc = 0x1d2aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370338u));
    // 0x1d2aa8: 0xc07e212  jal         func_1F8848
    ctx->pc = 0x1D2AA8u;
    SET_GPR_U32(ctx, 31, 0x1D2AB0u);
    ctx->pc = 0x1D2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AA8u;
    // 0x1d2aac: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8848u, 0x1D2AA8u, 0x1D2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AB0u;
label_1d2ab0:
    // 0x1d2ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ab8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2AB8u;
    SET_GPR_U32(ctx, 31, 0x1D2AC0u);
    ctx->pc = 0x1D2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AB8u;
    // 0x1d2abc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2AB8u, 0x1D2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AC0u;
label_1d2ac0:
    // 0x1d2ac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2ac4: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370340u));
    // 0x1d2ac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2acc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2ad0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2AD0u;
    {
        const bool branch_taken_0x1d2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AD0u;
        // 0x1d2ad4: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ad0) {
            ctx->pc = 0x1D2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D2AD8u;
}
