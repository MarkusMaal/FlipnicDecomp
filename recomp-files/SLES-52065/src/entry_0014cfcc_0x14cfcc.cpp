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

// Function: entry_0014cfcc
// Address: 0x14cfcc - 0x14cff8
void entry_0014cfcc_0x14cfcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cfcc_0x14cfcc");
#endif

    switch (ctx->pc) {
        case 0x14cfe0u: goto label_14cfe0;
        case 0x14cfecu: goto label_14cfec;
        default: break;
    }

    ctx->pc = 0x14cfccu;

label_14cfcc:
    // 0x14cfcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14cfd0:
    // 0x14cfd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cfd4:
    // 0x14cfd4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x14cfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_14cfd8:
    // 0x14cfd8: 0x320f809  jalr        $t9
label_14cfdc:
    if (ctx->pc == 0x14CFDCu) {
        ctx->pc = 0x14CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFD8u;
        // 0x14cfdc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CFE0u;
        goto label_14cfe0;
    }
    ctx->pc = 0x14CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CFE0u);
        ctx->pc = 0x14CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFD8u;
        // 0x14cfdc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFD8u, 0x14CFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CFE0u;
label_14cfe0:
    // 0x14cfe0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14cfe4:
    // 0x14cfe4: 0xc04c730  jal         func_131CC0
label_14cfe8:
    if (ctx->pc == 0x14CFE8u) {
        ctx->pc = 0x14CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFE4u;
        // 0x14cfe8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CFECu;
        goto label_14cfec;
    }
    ctx->pc = 0x14CFE4u;
    SET_GPR_U32(ctx, 31, 0x14CFECu);
    ctx->pc = 0x14CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CFE4u;
    // 0x14cfe8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x14CFE4u, 0x14CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFECu;
label_14cfec:
    // 0x14cfec: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14cfecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_14cff0:
    // 0x14cff0: 0x1630fff6  bne         $s1, $s0, . + 4 + (-0xA << 2)
label_14cff4:
    if (ctx->pc == 0x14CFF4u) {
        ctx->pc = 0x14CFF8u;
        goto label_fallthrough_0x14cff0;
    }
    ctx->pc = 0x14CFF0u;
    {
        const bool branch_taken_0x14cff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x14cff0) {
            ctx->pc = 0x14CFCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cfcc;
        }
    }
label_fallthrough_0x14cff0:
    ctx->pc = 0x14CFF8u;
}
