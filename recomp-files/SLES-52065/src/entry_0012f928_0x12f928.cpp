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

// Function: entry_0012f928
// Address: 0x12f928 - 0x12f94c
void entry_0012f928_0x12f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f928_0x12f928");
#endif

    switch (ctx->pc) {
        case 0x12f930u: goto label_12f930;
        default: break;
    }

    ctx->pc = 0x12f928u;

label_12f928:
    // 0x12f928: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x12F928u;
    SET_GPR_U32(ctx, 31, 0x12F930u);
    ctx->pc = 0x12F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F928u;
    // 0x12f92c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x12F928u, 0x12F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F930u;
label_12f930:
    // 0x12f930: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f934: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12f938: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x12f938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12f93c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x12f940: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12f940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12f944: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12F944u;
    {
        const bool branch_taken_0x12f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F944u;
        // 0x12f948: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f944) {
            ctx->pc = 0x12F928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f928;
        }
    }
    ctx->pc = 0x12F94Cu;
}
