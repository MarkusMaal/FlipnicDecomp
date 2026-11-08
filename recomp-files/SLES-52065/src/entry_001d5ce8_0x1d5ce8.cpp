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

// Function: entry_001d5ce8
// Address: 0x1d5ce8 - 0x1d5d10
void entry_001d5ce8_0x1d5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ce8_0x1d5ce8");
#endif

    switch (ctx->pc) {
        case 0x1d5d04u: goto label_1d5d04;
        default: break;
    }

    ctx->pc = 0x1d5ce8u;

    // 0x1d5ce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cec: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5cf0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5cf4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5cf8: 0xac320580  sw          $s2, 0x580($at)
    ctx->pc = 0x1d5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 18));
    // 0x1d5cfc: 0xc075428  jal         func_1D50A0
    ctx->pc = 0x1D5CFCu;
    SET_GPR_U32(ctx, 31, 0x1D5D04u);
    ctx->pc = 0x1D5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CFCu;
    // 0x1d5d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50A0u, 0x1D5CFCu, 0x1D5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D04u;
label_1d5d04:
    // 0x1d5d04: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x1D5D04u;
    {
        const bool branch_taken_0x1d5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d04) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D0Cu;
    // 0x1d5d0c: 0x0  nop
    ctx->pc = 0x1d5d0cu;
    // NOP
    ctx->pc = 0x1d5d10u;
}
