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

// Function: entry_001b2aa4
// Address: 0x1b2aa4 - 0x1b2ad0
void entry_001b2aa4_0x1b2aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2aa4_0x1b2aa4");
#endif

    switch (ctx->pc) {
        case 0x1b2aacu: goto label_1b2aac;
        default: break;
    }

    ctx->pc = 0x1b2aa4u;

    // 0x1b2aa4: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2AA4u;
    SET_GPR_U32(ctx, 31, 0x1B2AACu);
    ctx->pc = 0x1B2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AA4u;
    // 0x1b2aa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2AA4u, 0x1B2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AACu;
label_1b2aac:
    // 0x1b2aac: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b2ab0: 0x3d31823  subu        $v1, $fp, $s3
    ctx->pc = 0x1b2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x1b2ab4: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x1b2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x1b2ab8: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b2ab8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2abc: 0x8fa403f8  lw          $a0, 0x3F8($sp)
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x1b2ac0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2AC0u;
    {
        const bool branch_taken_0x1b2ac0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AC0u;
        // 0x1b2ac4: 0xffa40010  sd          $a0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ac0) {
            ctx->pc = 0x1B2AD0u;
            return;
        }
    }
    ctx->pc = 0x1B2AC8u;
    // 0x1b2ac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2acc: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1b2ad0u;
}
