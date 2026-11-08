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

// Function: entry_001b6c00
// Address: 0x1b6c00 - 0x1b6c20
void entry_001b6c00_0x1b6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c00_0x1b6c00");
#endif

    ctx->pc = 0x1b6c00u;

    // 0x1b6c00: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b6c04: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6C04u;
    {
        const bool branch_taken_0x1b6c04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C04u;
        // 0x1b6c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c04) {
            ctx->pc = 0x1B6C54u;
            return;
        }
    }
    ctx->pc = 0x1B6C0Cu;
    // 0x1b6c0c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b6c10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6C10u;
    {
        const bool branch_taken_0x1b6c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C10u;
        // 0x1b6c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c10) {
            ctx->pc = 0x1B6C20u;
            return;
        }
    }
    ctx->pc = 0x1B6C18u;
    // 0x1b6c18: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6C18u;
    SET_GPR_U32(ctx, 31, 0x1B6C20u);
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6C18u, 0x1B6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C20u;
}
