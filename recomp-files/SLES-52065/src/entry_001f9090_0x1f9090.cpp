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

// Function: entry_001f9090
// Address: 0x1f9090 - 0x1f90b8
void entry_001f9090_0x1f9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9090_0x1f9090");
#endif

    switch (ctx->pc) {
        case 0x1f909cu: goto label_1f909c;
        default: break;
    }

    ctx->pc = 0x1f9090u;

    // 0x1f9090: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f9090u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f9094: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9094u;
    SET_GPR_U32(ctx, 31, 0x1F909Cu);
    ctx->pc = 0x1F9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9094u;
    // 0x1f9098: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9094u, 0x1F909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F909Cu;
label_1f909c:
    // 0x1f909c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F909Cu;
    {
        const bool branch_taken_0x1f909c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F909Cu;
        // 0x1f90a0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f909c) {
            ctx->pc = 0x1F9154u;
            return;
        }
    }
    ctx->pc = 0x1F90A4u;
    // 0x1f90a4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F90A4u;
    {
        const bool branch_taken_0x1f90a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f90a4) {
            ctx->pc = 0x1F90B8u;
            return;
        }
    }
    ctx->pc = 0x1F90ACu;
    // 0x1f90ac: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1f90acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f90b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F90B0u;
    {
        const bool branch_taken_0x1f90b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90B0u;
        // 0x1f90b4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90b0) {
            ctx->pc = 0x1F90C8u;
            return;
        }
    }
    ctx->pc = 0x1F90B8u;
}
