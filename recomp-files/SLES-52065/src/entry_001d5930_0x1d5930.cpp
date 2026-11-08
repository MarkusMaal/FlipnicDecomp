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

// Function: entry_001d5930
// Address: 0x1d5930 - 0x1d5948
void entry_001d5930_0x1d5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5930_0x1d5930");
#endif

    switch (ctx->pc) {
        case 0x1d5940u: goto label_1d5940;
        default: break;
    }

    ctx->pc = 0x1d5930u;

    // 0x1d5930: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d5934: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5938: 0xc078428  jal         func_1E10A0
    ctx->pc = 0x1D5938u;
    SET_GPR_U32(ctx, 31, 0x1D5940u);
    ctx->pc = 0x1D593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5938u;
    // 0x1d593c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E10A0u, 0x1D5938u, 0x1D5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5940u;
label_1d5940:
    // 0x1d5940: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1d5944: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d5944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1d5948u;
}
