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

// Function: entry_0015c274
// Address: 0x15c274 - 0x15c2a0
void entry_0015c274_0x15c274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c274_0x15c274");
#endif

    switch (ctx->pc) {
        case 0x15c288u: goto label_15c288;
        default: break;
    }

    ctx->pc = 0x15c274u;

label_15c274:
    // 0x15c274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15c274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c27c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c280: 0xc05704c  jal         func_15C130
    ctx->pc = 0x15C280u;
    SET_GPR_U32(ctx, 31, 0x15C288u);
    ctx->pc = 0x15C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C280u;
    // 0x15c284: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x15C280u, 0x15C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C288u;
label_15c288:
    // 0x15c288: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15c288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c28c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C28Cu;
    {
        const bool branch_taken_0x15c28c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x15c28c) {
            ctx->pc = 0x15C2A0u;
            return;
        }
    }
    ctx->pc = 0x15C294u;
    // 0x15c294: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c298: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x15C298u;
    {
        const bool branch_taken_0x15c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C298u;
        // 0x15c29c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c298) {
            ctx->pc = 0x15C274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c274;
        }
    }
    ctx->pc = 0x15C2A0u;
}
