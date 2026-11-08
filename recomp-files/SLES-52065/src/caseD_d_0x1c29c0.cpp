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

// Function: caseD_d
// Address: 0x1c29c0 - 0x1c29ec
void caseD_d_0x1c29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1c29c0");
#endif

    switch (ctx->pc) {
        case 0x1c29c8u: goto label_1c29c8;
        default: break;
    }

    ctx->pc = 0x1c29c0u;

    // 0x1c29c0: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C29C0u;
    SET_GPR_U32(ctx, 31, 0x1C29C8u);
    ctx->pc = 0x1C29C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29C0u;
    // 0x1c29c4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C29C0u, 0x1C29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29C8u;
label_1c29c8:
    // 0x1c29c8: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1C29C8u;
    {
        const bool branch_taken_0x1c29c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c29c8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C29D0u;
    // 0x1c29d0: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c29d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c29d8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C29D8u;
    {
        const bool branch_taken_0x1c29d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D8u;
        // 0x1c29dc: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d8) {
            ctx->pc = 0x1C29ECu;
            return;
        }
    }
    ctx->pc = 0x1C29E0u;
    // 0x1c29e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c29e4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1C29E4u;
    {
        const bool branch_taken_0x1c29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E4u;
        // 0x1c29e8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29e4) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C29ECu;
}
