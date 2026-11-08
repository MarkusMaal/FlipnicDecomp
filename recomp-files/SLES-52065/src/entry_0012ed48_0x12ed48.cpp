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

// Function: entry_0012ed48
// Address: 0x12ed48 - 0x12ed60
void entry_0012ed48_0x12ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed48_0x12ed48");
#endif

    switch (ctx->pc) {
        case 0x12ed5cu: goto label_12ed5c;
        default: break;
    }

    ctx->pc = 0x12ed48u;

    // 0x12ed48: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ed4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ED4Cu;
    {
        const bool branch_taken_0x12ed4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED4Cu;
        // 0x12ed50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed4c) {
            ctx->pc = 0x12ED60u;
            return;
        }
    }
    ctx->pc = 0x12ED54u;
    // 0x12ed54: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12ED54u;
    SET_GPR_U32(ctx, 31, 0x12ED5Cu);
    ctx->pc = 0x12ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED54u;
    // 0x12ed58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12ED54u, 0x12ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED5Cu;
label_12ed5c:
    // 0x12ed5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ed60u;
}
