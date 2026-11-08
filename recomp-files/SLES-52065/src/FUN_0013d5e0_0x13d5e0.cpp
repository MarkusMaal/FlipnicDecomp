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

// Function: FUN_0013d5e0
// Address: 0x13d5e0 - 0x13d614
void FUN_0013d5e0_0x13d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d5e0_0x13d5e0");
#endif

    switch (ctx->pc) {
        case 0x13d608u: goto label_13d608;
        default: break;
    }

    ctx->pc = 0x13d5e0u;

    // 0x13d5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d5e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d5ec: 0x8c86017c  lw          $a2, 0x17C($a0)
    ctx->pc = 0x13d5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13d5f0: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D5F0u;
    {
        const bool branch_taken_0x13d5f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d5f0) {
            ctx->pc = 0x13D608u;
            goto label_13d608;
        }
    }
    ctx->pc = 0x13D5F8u;
    // 0x13d5f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13d5fc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x13d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x13d600: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x13D600u;
    SET_GPR_U32(ctx, 31, 0x13D608u);
    ctx->pc = 0x13D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D600u;
    // 0x13d604: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x13D600u, 0x13D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D608u;
label_13d608:
    // 0x13d608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d60c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D60Cu;
        // 0x13d610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D614u;
}
