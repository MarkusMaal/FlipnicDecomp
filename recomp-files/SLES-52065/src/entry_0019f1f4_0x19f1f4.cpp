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

// Function: entry_0019f1f4
// Address: 0x19f1f4 - 0x19f224
void entry_0019f1f4_0x19f1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1f4_0x19f1f4");
#endif

    switch (ctx->pc) {
        case 0x19f204u: goto label_19f204;
        default: break;
    }

    ctx->pc = 0x19f1f4u;

    // 0x19f1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f1f8: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f1fc: 0xc058018  jal         func_160060
    ctx->pc = 0x19F1FCu;
    SET_GPR_U32(ctx, 31, 0x19F204u);
    ctx->pc = 0x19F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1FCu;
    // 0x19f200: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19F1FCu, 0x19F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F204u;
label_19f204:
    // 0x19f204: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f208: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
    // 0x19f20c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19f210: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F210u;
    {
        const bool branch_taken_0x19f210 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19f210) {
            ctx->pc = 0x19F224u;
            return;
        }
    }
    ctx->pc = 0x19F218u;
    // 0x19f218: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x19f21c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19F21Cu;
    {
        const bool branch_taken_0x19f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F21Cu;
        // 0x19f220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f21c) {
            ctx->pc = 0x19F26Cu;
            return;
        }
    }
    ctx->pc = 0x19F224u;
}
