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

// Function: caseD_26
// Address: 0x1c7640 - 0x1c766c
void caseD_26_0x1c7640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_26_0x1c7640");
#endif

    switch (ctx->pc) {
        case 0x1c7648u: goto label_1c7648;
        default: break;
    }

    ctx->pc = 0x1c7640u;

    // 0x1c7640: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C7640u;
    SET_GPR_U32(ctx, 31, 0x1C7648u);
    ctx->pc = 0x1C7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7640u;
    // 0x1c7644: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C7640u, 0x1C7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7648u;
label_1c7648:
    // 0x1c7648: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C7648u;
    {
        const bool branch_taken_0x1c7648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7648) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7650u;
    // 0x1c7650: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c7654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7658: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7658u;
    {
        const bool branch_taken_0x1c7658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7658u;
        // 0x1c765c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7658) {
            ctx->pc = 0x1C766Cu;
            return;
        }
    }
    ctx->pc = 0x1C7660u;
    // 0x1c7660: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c7664: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C7664u;
    {
        const bool branch_taken_0x1c7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7664u;
        // 0x1c7668: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7664) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C766Cu;
}
