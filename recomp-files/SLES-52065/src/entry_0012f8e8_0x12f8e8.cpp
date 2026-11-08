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

// Function: entry_0012f8e8
// Address: 0x12f8e8 - 0x12f904
void entry_0012f8e8_0x12f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f8e8_0x12f8e8");
#endif

    switch (ctx->pc) {
        case 0x12f8f0u: goto label_12f8f0;
        default: break;
    }

    ctx->pc = 0x12f8e8u;

    // 0x12f8e8: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x12F8E8u;
    SET_GPR_U32(ctx, 31, 0x12F8F0u);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x12F8E8u, 0x12F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8F0u;
label_12f8f0:
    // 0x12f8f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F8F4u;
    {
        const bool branch_taken_0x12f8f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8F4u;
        // 0x12f8f8: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8f4) {
            ctx->pc = 0x12F904u;
            return;
        }
    }
    ctx->pc = 0x12F8FCu;
    // 0x12f8fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12F8FCu;
    {
        const bool branch_taken_0x12f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8FCu;
        // 0x12f900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8fc) {
            ctx->pc = 0x12F988u;
            return;
        }
    }
    ctx->pc = 0x12F904u;
}
