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

// Function: entry_00150370
// Address: 0x150370 - 0x150394
void entry_00150370_0x150370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150370_0x150370");
#endif

    ctx->pc = 0x150370u;

    // 0x150370: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x150370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x150374: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x150374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x150378: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x150378u;
    {
        const bool branch_taken_0x150378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150378u;
        // 0x15037c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150378) {
            ctx->pc = 0x1502F8u;
            return;
        }
    }
    ctx->pc = 0x150380u;
    // 0x150380: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x150384: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150384u;
    {
        const bool branch_taken_0x150384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x150388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150384u;
        // 0x150388: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150384) {
            ctx->pc = 0x150394u;
            return;
        }
    }
    ctx->pc = 0x15038Cu;
    // 0x15038c: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x15038Cu;
    SET_GPR_U32(ctx, 31, 0x150394u);
    ctx->pc = 0x150390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15038Cu;
    // 0x150390: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135EB0u, 0x15038Cu, 0x150394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150394u;
}
