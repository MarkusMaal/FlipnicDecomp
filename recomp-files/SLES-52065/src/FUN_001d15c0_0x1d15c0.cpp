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

// Function: FUN_001d15c0
// Address: 0x1d15c0 - 0x1d15fc
void FUN_001d15c0_0x1d15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d15c0_0x1d15c0");
#endif

    switch (ctx->pc) {
        case 0x1d15d4u: goto label_1d15d4;
        default: break;
    }

    ctx->pc = 0x1d15c0u;

    // 0x1d15c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d15c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d15c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d15c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d15cc: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1D15CCu;
    SET_GPR_U32(ctx, 31, 0x1D15D4u);
    ctx->pc = 0x1D15D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15CCu;
    // 0x1d15d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1D15CCu, 0x1D15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15D4u;
label_1d15d4:
    // 0x1d15d4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1d15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1d15d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d15d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d15dc: 0x2463c070  addiu       $v1, $v1, -0x3F90
    ctx->pc = 0x1d15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951024));
    // 0x1d15e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d15e4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1d15e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d15e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d15ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d15ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d15f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d15f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d15f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D15F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F4u;
        // 0x1d15f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D15F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D15FCu;
}
