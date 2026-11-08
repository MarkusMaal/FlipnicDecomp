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

// Function: FUN_0017ada0
// Address: 0x17ada0 - 0x17adf4
void FUN_0017ada0_0x17ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ada0_0x17ada0");
#endif

    switch (ctx->pc) {
        case 0x17add8u: goto label_17add8;
        default: break;
    }

    ctx->pc = 0x17ada0u;

    // 0x17ada0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ada4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ada8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17adac: 0x8c8303d0  lw          $v1, 0x3D0($a0)
    ctx->pc = 0x17adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 976)));
    // 0x17adb0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17ADB0u;
    {
        const bool branch_taken_0x17adb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADB0u;
        // 0x17adb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adb0) {
            ctx->pc = 0x17ADE4u;
            goto label_17ade4;
        }
    }
    ctx->pc = 0x17ADB8u;
    // 0x17adb8: 0x8e050404  lw          $a1, 0x404($s0)
    ctx->pc = 0x17adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x17adbc: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17ADBCu;
    {
        const bool branch_taken_0x17adbc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x17adbc) {
            ctx->pc = 0x17ADE4u;
            goto label_17ade4;
        }
    }
    ctx->pc = 0x17ADC4u;
    // 0x17adc4: 0x86030408  lh          $v1, 0x408($s0)
    ctx->pc = 0x17adc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x17adc8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17adcc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17adccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17add0: 0xc046744  jal         func_119D10
    ctx->pc = 0x17ADD0u;
    SET_GPR_U32(ctx, 31, 0x17ADD8u);
    ctx->pc = 0x17ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADD0u;
    // 0x17add4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x17ADD0u, 0x17ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADD8u;
label_17add8:
    // 0x17add8: 0xae0003d0  sw          $zero, 0x3D0($s0)
    ctx->pc = 0x17add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 0));
    // 0x17addc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ade0: 0xae030404  sw          $v1, 0x404($s0)
    ctx->pc = 0x17ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 3));
label_17ade4:
    // 0x17ade4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ade8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ade8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17adec: 0x3e00008  jr          $ra
    ctx->pc = 0x17ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADECu;
        // 0x17adf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADF4u;
}
