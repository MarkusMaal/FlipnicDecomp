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

// Function: FUN_0011e940
// Address: 0x11e940 - 0x11e990
void FUN_0011e940_0x11e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e940_0x11e940");
#endif

    switch (ctx->pc) {
        case 0x11e95cu: goto label_11e95c;
        case 0x11e974u: goto label_11e974;
        default: break;
    }

    ctx->pc = 0x11e940u;

    // 0x11e940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e948: 0x838283fc  lb          $v0, -0x7C04($gp)
    ctx->pc = 0x11e948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935548)));
    // 0x11e94c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E94Cu;
    {
        const bool branch_taken_0x11e94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E94Cu;
        // 0x11e950: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e94c) {
            ctx->pc = 0x11E97Cu;
            goto label_11e97c;
        }
    }
    ctx->pc = 0x11E954u;
    // 0x11e954: 0xc04698c  jal         func_11A630
    ctx->pc = 0x11E954u;
    SET_GPR_U32(ctx, 31, 0x11E95Cu);
    ctx->pc = 0x11E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E954u;
    // 0x11e958: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x11E954u, 0x11E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E95Cu;
label_11e95c:
    // 0x11e95c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11e960: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x11e960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x11e964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e968: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x11e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x11e96c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x11E96Cu;
    SET_GPR_U32(ctx, 31, 0x11E974u);
    ctx->pc = 0x11E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E96Cu;
    // 0x11e970: 0x24c60198  addiu       $a2, $a2, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x11E96Cu, 0x11E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E974u;
label_11e974:
    // 0x11e974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e978: 0xa38283fc  sb          $v0, -0x7C04($gp)
    ctx->pc = 0x11e978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935548), (uint8_t)GPR_U32(ctx, 2));
label_11e97c:
    // 0x11e97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e980: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x11e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x11e984: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x11e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x11e988: 0x3e00008  jr          $ra
    ctx->pc = 0x11E988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E988u;
        // 0x11e98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E990u;
}
