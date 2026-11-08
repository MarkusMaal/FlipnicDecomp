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

// Function: FUN_00148480
// Address: 0x148480 - 0x1484b4
void FUN_00148480_0x148480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148480_0x148480");
#endif

    switch (ctx->pc) {
        case 0x148498u: goto label_148498;
        case 0x1484a4u: goto label_1484a4;
        default: break;
    }

    ctx->pc = 0x148480u;

    // 0x148480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14848c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14848cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148490: 0xc052614  jal         func_149850
    ctx->pc = 0x148490u;
    SET_GPR_U32(ctx, 31, 0x148498u);
    ctx->pc = 0x148494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148490u;
    // 0x148494: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149850u, 0x148490u, 0x148498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148498u;
label_148498:
    // 0x148498: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x148498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x14849c: 0xc052c08  jal         func_14B020
    ctx->pc = 0x14849Cu;
    SET_GPR_U32(ctx, 31, 0x1484A4u);
    ctx->pc = 0x1484A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14849Cu;
    // 0x1484a0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B020u, 0x14849Cu, 0x1484A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484A4u;
label_1484a4:
    // 0x1484a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1484a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1484a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1484a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1484ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1484ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1484B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484ACu;
        // 0x1484b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1484ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1484B4u;
}
