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

// Function: entry_00131644
// Address: 0x131644 - 0x13167c
void entry_00131644_0x131644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131644_0x131644");
#endif

    switch (ctx->pc) {
        case 0x131678u: goto label_131678;
        default: break;
    }

    ctx->pc = 0x131644u;

    // 0x131644: 0x0  nop
    ctx->pc = 0x131644u;
    // NOP
    // 0x131648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13164c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x131650: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x131650u;
    {
        const bool branch_taken_0x131650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131650) {
            ctx->pc = 0x131638u;
            return;
        }
    }
    ctx->pc = 0x131658u;
    // 0x131658: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x13165c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x13165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x131660: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x131660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x131664: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x131664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x131668: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x131668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x13166c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131670: 0xc04c91c  jal         func_132470
    ctx->pc = 0x131670u;
    SET_GPR_U32(ctx, 31, 0x131678u);
    ctx->pc = 0x131674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131670u;
    // 0x131674: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132470u, 0x131670u, 0x131678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131678u;
label_131678:
    // 0x131678: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x131678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x13167cu;
}
