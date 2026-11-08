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

// Function: entry_00132b5c
// Address: 0x132b5c - 0x132b70
void entry_00132b5c_0x132b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132b5c_0x132b5c");
#endif

    ctx->pc = 0x132b5cu;

    // 0x132b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x132b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x132b60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132B60u;
    {
        const bool branch_taken_0x132b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x132B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B60u;
        // 0x132b64: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b60) {
            ctx->pc = 0x132B74u;
            return;
        }
    }
    ctx->pc = 0x132B68u;
    // 0x132b68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x132B68u;
    SET_GPR_U32(ctx, 31, 0x132B70u);
    ctx->pc = 0x132B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B68u;
    // 0x132b6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x132B68u, 0x132B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B70u;
}
