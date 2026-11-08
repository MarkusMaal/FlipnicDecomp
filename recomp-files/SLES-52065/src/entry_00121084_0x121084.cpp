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

// Function: entry_00121084
// Address: 0x121084 - 0x121098
void entry_00121084_0x121084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121084_0x121084");
#endif

    ctx->pc = 0x121084u;

    // 0x121084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x121088: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121088u;
    {
        const bool branch_taken_0x121088 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121088u;
        // 0x12108c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121088) {
            ctx->pc = 0x12109Cu;
            return;
        }
    }
    ctx->pc = 0x121090u;
    // 0x121090: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121090u;
    SET_GPR_U32(ctx, 31, 0x121098u);
    ctx->pc = 0x121094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121090u;
    // 0x121094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121090u, 0x121098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121098u;
}
