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

// Function: FUN_001b87f0
// Address: 0x1b87f0 - 0x1b8830
void FUN_001b87f0_0x1b87f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b87f0_0x1b87f0");
#endif

    switch (ctx->pc) {
        case 0x1b8810u: goto label_1b8810;
        default: break;
    }

    ctx->pc = 0x1b87f0u;

    // 0x1b87f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b87f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b87f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b87f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b87f8: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1b87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b87fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b87fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8800: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1b8800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b8804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8808: 0xc06ed38  jal         func_1BB4E0
    ctx->pc = 0x1B8808u;
    SET_GPR_U32(ctx, 31, 0x1B8810u);
    ctx->pc = 0x1B880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8808u;
    // 0x1b880c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB4E0u, 0x1B8808u, 0x1B8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8810u;
label_1b8810:
    // 0x1b8810: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b8810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b8814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8818: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x1b8818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b881c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b881cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8828: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8828u;
        // 0x1b882c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8830u;
}
