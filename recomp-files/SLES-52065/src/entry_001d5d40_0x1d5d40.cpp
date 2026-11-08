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

// Function: entry_001d5d40
// Address: 0x1d5d40 - 0x1d5d68
void entry_001d5d40_0x1d5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5d40_0x1d5d40");
#endif

    switch (ctx->pc) {
        case 0x1d5d60u: goto label_1d5d60;
        default: break;
    }

    ctx->pc = 0x1d5d40u;

    // 0x1d5d40: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5d44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5d48: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5d4c: 0xac320580  sw          $s2, 0x580($at)
    ctx->pc = 0x1d5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 18));
    // 0x1d5d50: 0x12400101  beqz        $s2, . + 4 + (0x101 << 2)
    ctx->pc = 0x1D5D50u;
    {
        const bool branch_taken_0x1d5d50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d50) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D58u;
    // 0x1d5d58: 0xc0753be  jal         func_1D4EF8
    ctx->pc = 0x1D5D58u;
    SET_GPR_U32(ctx, 31, 0x1D5D60u);
    ctx->pc = 0x1D5D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D58u;
    // 0x1d5d5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF8u, 0x1D5D58u, 0x1D5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D60u;
label_1d5d60:
    // 0x1d5d60: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1D5D60u;
    {
        const bool branch_taken_0x1d5d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d60) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D68u;
}
