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

// Function: entry_00123338
// Address: 0x123338 - 0x12336c
void entry_00123338_0x123338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123338_0x123338");
#endif

    switch (ctx->pc) {
        case 0x123364u: goto label_123364;
        default: break;
    }

    ctx->pc = 0x123338u;

    // 0x123338: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12333c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123340: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x123344: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123348: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x123348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x12334c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x12334cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123350: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x123350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12335c: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x12335Cu;
    SET_GPR_U32(ctx, 31, 0x123364u);
    ctx->pc = 0x123360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12335Cu;
    // 0x123360: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x12335Cu, 0x123364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123364u;
label_123364:
    // 0x123364: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x123364u;
    {
        const bool branch_taken_0x123364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123364u;
        // 0x123368: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123364) {
            ctx->pc = 0x1234E4u;
            return;
        }
    }
    ctx->pc = 0x12336Cu;
}
