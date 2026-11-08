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

// Function: FUN_00183ad0
// Address: 0x183ad0 - 0x183b14
void FUN_00183ad0_0x183ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00183ad0_0x183ad0");
#endif

    switch (ctx->pc) {
        case 0x183b00u: goto label_183b00;
        default: break;
    }

    ctx->pc = 0x183ad0u;

    // 0x183ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ae0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183AE0u;
    {
        const bool branch_taken_0x183ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AE0u;
        // 0x183ae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ae0) {
            ctx->pc = 0x183B04u;
            goto label_183b04;
        }
    }
    ctx->pc = 0x183AE8u;
    // 0x183ae8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x183ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x183aec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183aecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183af0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183AF0u;
    {
        const bool branch_taken_0x183af0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183af0) {
            ctx->pc = 0x183B00u;
            goto label_183b00;
        }
    }
    ctx->pc = 0x183AF8u;
    // 0x183af8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x183AF8u;
    SET_GPR_U32(ctx, 31, 0x183B00u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x183AF8u, 0x183B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B00u;
label_183b00:
    // 0x183b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x183b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183b04:
    // 0x183b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x183B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B0Cu;
        // 0x183b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B14u;
}
