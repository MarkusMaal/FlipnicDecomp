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

// Function: entry_001a4ea8
// Address: 0x1a4ea8 - 0x1a4edc
void entry_001a4ea8_0x1a4ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4ea8_0x1a4ea8");
#endif

    switch (ctx->pc) {
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eccu: goto label_1a4ecc;
        default: break;
    }

    ctx->pc = 0x1a4ea8u;

    // 0x1a4ea8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1A4EA8u;
    SET_GPR_U32(ctx, 31, 0x1A4EB0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A4EA8u, 0x1A4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EB0u;
label_1a4eb0:
    // 0x1a4eb0: 0xae620750  sw          $v0, 0x750($s3)
    ctx->pc = 0x1a4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1872), GPR_U32(ctx, 2));
    // 0x1a4eb4: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1a4eb8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EDCu;
            return;
        }
    }
    ctx->pc = 0x1A4EC0u;
    // 0x1a4ec0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a4ec4: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A4EC4u;
    SET_GPR_U32(ctx, 31, 0x1A4ECCu);
    ctx->pc = 0x1A4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EC4u;
    // 0x1a4ec8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A4EC4u, 0x1A4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4ECCu;
label_1a4ecc:
    // 0x1a4ecc: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x1a4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
    // 0x1a4ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4ed4: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A4ED4u;
    SET_GPR_U32(ctx, 31, 0x1A4EDCu);
    ctx->pc = 0x1A4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4ED4u;
    // 0x1a4ed8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A4ED4u, 0x1A4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EDCu;
}
