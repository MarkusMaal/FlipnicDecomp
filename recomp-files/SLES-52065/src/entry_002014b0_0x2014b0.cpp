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

// Function: entry_002014b0
// Address: 0x2014b0 - 0x2014bc
void entry_002014b0_0x2014b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002014b0_0x2014b0");
#endif

    ctx->pc = 0x2014b0u;

label_2014b0:
    // 0x2014b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2014b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2014b4:
    // 0x2014b4: 0x60f809  jalr        $v1
label_2014b8:
    if (ctx->pc == 0x2014B8u) {
        ctx->pc = 0x2014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B4u;
        // 0x2014b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014BCu;
        goto label_fallthrough_0x2014b4;
    }
    ctx->pc = 0x2014B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2014BCu);
        ctx->pc = 0x2014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B4u;
        // 0x2014b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014B4u, 0x2014BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x2014b4:
    ctx->pc = 0x2014BCu;
}
