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

// Function: entry_0016cdf4
// Address: 0x16cdf4 - 0x16ce08
void entry_0016cdf4_0x16cdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cdf4_0x16cdf4");
#endif

    ctx->pc = 0x16cdf4u;

label_16cdf4:
    // 0x16cdf4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cdf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cdf8:
    // 0x16cdf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cdfc:
    // 0x16cdfc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16ce00:
    // 0x16ce00: 0x320f809  jalr        $t9
label_16ce04:
    if (ctx->pc == 0x16CE04u) {
        ctx->pc = 0x16CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE00u;
        // 0x16ce04: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE08u;
        goto label_fallthrough_0x16ce00;
    }
    ctx->pc = 0x16CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CE08u);
        ctx->pc = 0x16CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE00u;
        // 0x16ce04: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE00u, 0x16CE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16ce00:
    ctx->pc = 0x16CE08u;
}
