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

// Function: FUN_001fff00
// Address: 0x1fff00 - 0x1fff38
void FUN_001fff00_0x1fff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fff00_0x1fff00");
#endif

    switch (ctx->pc) {
        case 0x1fff18u: goto label_1fff18;
        default: break;
    }

    ctx->pc = 0x1fff00u;

    // 0x1fff00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fff04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fff08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fff08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fff0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fff10: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FFF10u;
    SET_GPR_U32(ctx, 31, 0x1FFF18u);
    ctx->pc = 0x1FFF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF10u;
    // 0x1fff14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FFF10u, 0x1FFF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF18u;
label_1fff18:
    // 0x1fff18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fff18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fff20: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1fff20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x1fff24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fff24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fff28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fff28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fff2c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1fff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1fff30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF30u;
        // 0x1fff34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFF38u;
}
