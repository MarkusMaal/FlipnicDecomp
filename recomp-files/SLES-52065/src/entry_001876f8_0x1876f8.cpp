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

// Function: entry_001876f8
// Address: 0x1876f8 - 0x187710
void entry_001876f8_0x1876f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001876f8_0x1876f8");
#endif

    switch (ctx->pc) {
        case 0x18770cu: goto label_18770c;
        default: break;
    }

    ctx->pc = 0x1876f8u;

    // 0x1876f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1876fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1876FCu;
    {
        const bool branch_taken_0x1876fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876FCu;
        // 0x187700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876fc) {
            ctx->pc = 0x187710u;
            return;
        }
    }
    ctx->pc = 0x187704u;
    // 0x187704: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187704u;
    SET_GPR_U32(ctx, 31, 0x18770Cu);
    ctx->pc = 0x187708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187704u;
    // 0x187708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876B0u, 0x187704u, 0x18770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18770Cu;
label_18770c:
    // 0x18770c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187710u;
}
