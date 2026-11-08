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

// Function: FUN_001f3968
// Address: 0x1f3968 - 0x1f3990
void FUN_001f3968_0x1f3968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3968_0x1f3968");
#endif

    switch (ctx->pc) {
        case 0x1f3978u: goto label_1f3978;
        default: break;
    }

    ctx->pc = 0x1f3968u;

    // 0x1f3968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f396c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3970: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1F3970u;
    SET_GPR_U32(ctx, 31, 0x1F3978u);
    ctx->pc = 0x1F3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3970u;
    // 0x1f3974: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1F3970u, 0x1F3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3978u;
label_1f3978:
    // 0x1f3978: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f3978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f397c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f3980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f3984: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f3984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f3988: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3988u;
        // 0x1f398c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3990u;
}
