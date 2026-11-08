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

// Function: entry_001f4560
// Address: 0x1f4560 - 0x1f4580
void entry_001f4560_0x1f4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4560_0x1f4560");
#endif

    switch (ctx->pc) {
        case 0x1f4574u: goto label_1f4574;
        default: break;
    }

    ctx->pc = 0x1f4560u;

    // 0x1f4560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4560u;
    {
        const bool branch_taken_0x1f4560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4560u;
        // 0x1f4564: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4560) {
            ctx->pc = 0x1F4580u;
            return;
        }
    }
    ctx->pc = 0x1F4568u;
    // 0x1f4568: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1f456c: 0xc07d124  jal         func_1F4490
    ctx->pc = 0x1F456Cu;
    SET_GPR_U32(ctx, 31, 0x1F4574u);
    ctx->pc = 0x1F4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F456Cu;
    // 0x1f4570: 0x26a64450  addiu       $a2, $s5, 0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 17488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4490u, 0x1F456Cu, 0x1F4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4574u;
label_1f4574:
    // 0x1f4574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f4574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4578u;
    {
        const bool branch_taken_0x1f4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4578u;
        // 0x1f457c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4578) {
            ctx->pc = 0x1F4598u;
            return;
        }
    }
    ctx->pc = 0x1F4580u;
}
