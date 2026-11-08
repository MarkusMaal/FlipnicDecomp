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

// Function: FUN_0018a180
// Address: 0x18a180 - 0x18a1a8
void FUN_0018a180_0x18a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a180_0x18a180");
#endif

    switch (ctx->pc) {
        case 0x18a194u: goto label_18a194;
        default: break;
    }

    ctx->pc = 0x18a180u;

    // 0x18a180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a18c: 0xc04b600  jal         func_12D800
    ctx->pc = 0x18A18Cu;
    SET_GPR_U32(ctx, 31, 0x18A194u);
    ctx->pc = 0x18A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A18Cu;
    // 0x18a190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D800u, 0x18A18Cu, 0x18A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A194u;
label_18a194:
    // 0x18a194: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x18a194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1A0u;
        // 0x18a1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A1A8u;
}
