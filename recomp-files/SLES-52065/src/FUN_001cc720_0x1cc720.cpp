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

// Function: FUN_001cc720
// Address: 0x1cc720 - 0x1cc75c
void FUN_001cc720_0x1cc720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc720_0x1cc720");
#endif

    switch (ctx->pc) {
        case 0x1cc734u: goto label_1cc734;
        default: break;
    }

    ctx->pc = 0x1cc720u;

    // 0x1cc720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc72c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CC72Cu;
    SET_GPR_U32(ctx, 31, 0x1CC734u);
    ctx->pc = 0x1CC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC72Cu;
    // 0x1cc730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CC72Cu, 0x1CC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC734u;
label_1cc734:
    // 0x1cc734: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cc734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cc738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc73c: 0x2463bda0  addiu       $v1, $v1, -0x4260
    ctx->pc = 0x1cc73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950304));
    // 0x1cc740: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cc740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cc744: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1cc744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc748: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1cc748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1cc74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc754: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC754u;
        // 0x1cc758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC75Cu;
}
