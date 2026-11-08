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

// Function: FUN_00105f60
// Address: 0x105f60 - 0x105fb8
void FUN_00105f60_0x105f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105f60_0x105f60");
#endif

    switch (ctx->pc) {
        case 0x105f74u: goto label_105f74;
        default: break;
    }

    ctx->pc = 0x105f60u;

    // 0x105f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105f6c: 0xc056360  jal         func_158D80
    ctx->pc = 0x105F6Cu;
    SET_GPR_U32(ctx, 31, 0x105F74u);
    ctx->pc = 0x105F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F6Cu;
    // 0x105f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x105F6Cu, 0x105F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F74u;
label_105f74:
    // 0x105f74: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105f78: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105f7c: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x105f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x105f80: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x105f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x105f84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105f88: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105f8c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105f90: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x105f94: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105f98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105f9c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x105f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x105fa0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105fa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x105FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FB0u;
        // 0x105fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105FB8u;
}
