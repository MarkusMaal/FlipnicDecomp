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

// Function: entry_00172f5c
// Address: 0x172f5c - 0x172f74
void entry_00172f5c_0x172f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f5c_0x172f5c");
#endif

    switch (ctx->pc) {
        case 0x172f70u: goto label_172f70;
        default: break;
    }

    ctx->pc = 0x172f5cu;

    // 0x172f5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172f60: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172F60u;
    {
        const bool branch_taken_0x172f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x172F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F60u;
        // 0x172f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f60) {
            ctx->pc = 0x172F74u;
            return;
        }
    }
    ctx->pc = 0x172F68u;
    // 0x172f68: 0xc05ccd4  jal         func_173350
    ctx->pc = 0x172F68u;
    SET_GPR_U32(ctx, 31, 0x172F70u);
    ctx->pc = 0x172F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F68u;
    // 0x172f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173350u, 0x172F68u, 0x172F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F70u;
label_172f70:
    // 0x172f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172f74u;
}
