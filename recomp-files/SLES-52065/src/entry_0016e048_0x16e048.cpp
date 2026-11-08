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

// Function: entry_0016e048
// Address: 0x16e048 - 0x16e08c
void entry_0016e048_0x16e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e048_0x16e048");
#endif

    switch (ctx->pc) {
        case 0x16e074u: goto label_16e074;
        default: break;
    }

    ctx->pc = 0x16e048u;

    // 0x16e048: 0x86620214  lh          $v0, 0x214($s3)
    ctx->pc = 0x16e048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 532)));
    // 0x16e04c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x16e04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16e050: 0x1440ff48  bnez        $v0, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x16E050u;
    {
        const bool branch_taken_0x16e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e050) {
            ctx->pc = 0x16DD74u;
            return;
        }
    }
    ctx->pc = 0x16E058u;
    // 0x16e058: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16e05c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e060: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x16e064: 0x1445000e  bne         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x16E064u;
    {
        const bool branch_taken_0x16e064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x16E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E064u;
        // 0x16e068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e064) {
            ctx->pc = 0x16E0A0u;
            return;
        }
    }
    ctx->pc = 0x16E06Cu;
    // 0x16e06c: 0xc042118  jal         func_108460
    ctx->pc = 0x16E06Cu;
    SET_GPR_U32(ctx, 31, 0x16E074u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16E06Cu, 0x16E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E074u;
label_16e074:
    // 0x16e074: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x16e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16e078: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16e078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16e07c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E07Cu;
    {
        const bool branch_taken_0x16e07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E07Cu;
        // 0x16e080: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e07c) {
            ctx->pc = 0x16E08Cu;
            return;
        }
    }
    ctx->pc = 0x16E084u;
    // 0x16e084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E084u;
    {
        const bool branch_taken_0x16e084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E084u;
        // 0x16e088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e084) {
            ctx->pc = 0x16E098u;
            return;
        }
    }
    ctx->pc = 0x16E08Cu;
}
