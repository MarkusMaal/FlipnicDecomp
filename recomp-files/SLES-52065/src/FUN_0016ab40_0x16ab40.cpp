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

// Function: FUN_0016ab40
// Address: 0x16ab40 - 0x16ab84
void FUN_0016ab40_0x16ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016ab40_0x16ab40");
#endif

    switch (ctx->pc) {
        case 0x16ab68u: goto label_16ab68;
        case 0x16ab78u: goto label_16ab78;
        default: break;
    }

    ctx->pc = 0x16ab40u;

    // 0x16ab40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ab44: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ab48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ab4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ab50: 0x8066006c  lb          $a2, 0x6C($v1)
    ctx->pc = 0x16ab50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x16ab54: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AB54u;
    {
        const bool branch_taken_0x16ab54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ab54) {
            ctx->pc = 0x16AB70u;
            goto label_16ab70;
        }
    }
    ctx->pc = 0x16AB5Cu;
    // 0x16ab5c: 0x24840220  addiu       $a0, $a0, 0x220
    ctx->pc = 0x16ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x16ab60: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AB60u;
    SET_GPR_U32(ctx, 31, 0x16AB68u);
    ctx->pc = 0x16AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB60u;
    // 0x16ab64: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AB60u, 0x16AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB68u;
label_16ab68:
    // 0x16ab68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB68u;
    {
        const bool branch_taken_0x16ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB68u;
        // 0x16ab6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab68) {
            ctx->pc = 0x16AB7Cu;
            goto label_16ab7c;
        }
    }
    ctx->pc = 0x16AB70u;
label_16ab70:
    // 0x16ab70: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AB70u;
    SET_GPR_U32(ctx, 31, 0x16AB78u);
    ctx->pc = 0x16AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB70u;
    // 0x16ab74: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AB70u, 0x16AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB78u;
label_16ab78:
    // 0x16ab78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ab7c:
    // 0x16ab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB7Cu;
        // 0x16ab80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB84u;
}
