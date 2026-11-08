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

// Function: entry_0012ee00
// Address: 0x12ee00 - 0x12ee18
void entry_0012ee00_0x12ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ee00_0x12ee00");
#endif

    switch (ctx->pc) {
        case 0x12ee14u: goto label_12ee14;
        default: break;
    }

    ctx->pc = 0x12ee00u;

    // 0x12ee00: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ee04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EE04u;
    {
        const bool branch_taken_0x12ee04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE04u;
        // 0x12ee08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee04) {
            ctx->pc = 0x12EE18u;
            return;
        }
    }
    ctx->pc = 0x12EE0Cu;
    // 0x12ee0c: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EE0Cu;
    SET_GPR_U32(ctx, 31, 0x12EE14u);
    ctx->pc = 0x12EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE0Cu;
    // 0x12ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12EE0Cu, 0x12EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE14u;
label_12ee14:
    // 0x12ee14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ee18u;
}
