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

// Function: entry_001b2794
// Address: 0x1b2794 - 0x1b27c4
void entry_001b2794_0x1b2794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2794_0x1b2794");
#endif

    switch (ctx->pc) {
        case 0x1b279cu: goto label_1b279c;
        default: break;
    }

    ctx->pc = 0x1b2794u;

    // 0x1b2794: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2794u;
    SET_GPR_U32(ctx, 31, 0x1B279Cu);
    ctx->pc = 0x1B2798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2794u;
    // 0x1b2798: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2794u, 0x1B279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B279Cu;
label_1b279c:
    // 0x1b279c: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b27a0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1b27a4: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x1b27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b27a8: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x1b27a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x1b27ac: 0x8fa30370  lw          $v1, 0x370($sp)
    ctx->pc = 0x1b27acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1b27b0: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1b27b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B27B4u;
    {
        const bool branch_taken_0x1b27b4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27B4u;
        // 0x1b27b8: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27b4) {
            ctx->pc = 0x1B27C4u;
            return;
        }
    }
    ctx->pc = 0x1B27BCu;
    // 0x1b27bc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b27c0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1b27c4u;
}
