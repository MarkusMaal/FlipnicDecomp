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

// Function: entry_001b23f0
// Address: 0x1b23f0 - 0x1b242c
void entry_001b23f0_0x1b23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b23f0_0x1b23f0");
#endif

    switch (ctx->pc) {
        case 0x1b23f8u: goto label_1b23f8;
        default: break;
    }

    ctx->pc = 0x1b23f0u;

    // 0x1b23f0: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B23F0u;
    SET_GPR_U32(ctx, 31, 0x1B23F8u);
    ctx->pc = 0x1B23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23F0u;
    // 0x1b23f4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B23F0u, 0x1B23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23F8u;
label_1b23f8:
    // 0x1b23f8: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b23fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b2400: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b2404: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x1b2404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1b2408: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b2408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b240c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1b2410: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2414: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b2418: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x1b2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1b241c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B241Cu;
    {
        const bool branch_taken_0x1b241c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B241Cu;
        // 0x1b2420: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b241c) {
            ctx->pc = 0x1B242Cu;
            return;
        }
    }
    ctx->pc = 0x1B2424u;
    // 0x1b2424: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2428: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b242cu;
}
