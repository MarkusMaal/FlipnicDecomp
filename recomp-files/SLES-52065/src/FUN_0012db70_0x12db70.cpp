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

// Function: FUN_0012db70
// Address: 0x12db70 - 0x12dba0
void FUN_0012db70_0x12db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012db70_0x12db70");
#endif

    switch (ctx->pc) {
        case 0x12db8cu: goto label_12db8c;
        default: break;
    }

    ctx->pc = 0x12db70u;

    // 0x12db70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12db74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12db78: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x12db78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12db7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12db80: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x12db80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x12db84: 0xc04bbd8  jal         func_12EF60
    ctx->pc = 0x12DB84u;
    SET_GPR_U32(ctx, 31, 0x12DB8Cu);
    ctx->pc = 0x12DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DB84u;
    // 0x12db88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF60u, 0x12DB84u, 0x12DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB8Cu;
label_12db8c:
    // 0x12db8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12db8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12db94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12db94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12db98: 0x3e00008  jr          $ra
    ctx->pc = 0x12DB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB98u;
        // 0x12db9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DBA0u;
}
