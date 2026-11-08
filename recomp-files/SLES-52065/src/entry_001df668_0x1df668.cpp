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

// Function: entry_001df668
// Address: 0x1df668 - 0x1df68c
void entry_001df668_0x1df668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df668_0x1df668");
#endif

    switch (ctx->pc) {
        case 0x1df688u: goto label_1df688;
        default: break;
    }

    ctx->pc = 0x1df668u;

    // 0x1df668: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1df668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1df66c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1df66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1df670: 0x24219f00  addiu       $at, $at, -0x6100
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294942464));
    // 0x1df674: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1df674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1df678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df67c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1df680: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF680u;
    SET_GPR_U32(ctx, 31, 0x1DF688u);
    ctx->pc = 0x1DF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF680u;
    // 0x1df684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF680u, 0x1DF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF688u;
label_1df688:
    // 0x1df688: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1df688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1df68cu;
}
