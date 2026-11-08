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

// Function: entry_00119334
// Address: 0x119334 - 0x119364
void entry_00119334_0x119334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119334_0x119334");
#endif

    switch (ctx->pc) {
        case 0x119348u: goto label_119348;
        default: break;
    }

    ctx->pc = 0x119334u;

    // 0x119334: 0x0  nop
    ctx->pc = 0x119334u;
    // NOP
    // 0x119338: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11933c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119340: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x119340u;
    SET_GPR_U32(ctx, 31, 0x119348u);
    ctx->pc = 0x119344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119340u;
    // 0x119344: 0x24a5e600  addiu       $a1, $a1, -0x1A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x119340u, 0x119348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119348u;
label_119348:
    // 0x119348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11934c: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11934Cu;
    {
        const bool branch_taken_0x11934c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x11934c) {
            ctx->pc = 0x1193C4u;
            return;
        }
    }
    ctx->pc = 0x119354u;
    // 0x119354: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119354u;
    {
        const bool branch_taken_0x119354 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119354u;
        // 0x119358: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119354) {
            ctx->pc = 0x119364u;
            return;
        }
    }
    ctx->pc = 0x11935Cu;
    // 0x11935c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11935Cu;
    {
        const bool branch_taken_0x11935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11935Cu;
        // 0x119360: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11935c) {
            ctx->pc = 0x119380u;
            return;
        }
    }
    ctx->pc = 0x119364u;
}
