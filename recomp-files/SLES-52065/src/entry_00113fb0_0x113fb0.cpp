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

// Function: entry_00113fb0
// Address: 0x113fb0 - 0x11400c
void entry_00113fb0_0x113fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fb0_0x113fb0");
#endif

    ctx->pc = 0x113fb0u;

    // 0x113fb0: 0x8f88824c  lw          $t0, -0x7DB4($gp)
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
    // 0x113fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fb8: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x113fb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x113fbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x113fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113fc0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x113fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x113fc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113fc8: 0xc8380a  movz        $a3, $a2, $t0
    ctx->pc = 0x113fc8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x113fcc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x113fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x113fd0: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x113fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x113fd4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x113fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x113fd8: 0xa2430255  sb          $v1, 0x255($s2)
    ctx->pc = 0x113fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 3));
    // 0x113fdc: 0x8e430230  lw          $v1, 0x230($s2)
    ctx->pc = 0x113fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x113fe0: 0xac640320  sw          $a0, 0x320($v1)
    ctx->pc = 0x113fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 4));
    // 0x113fe4: 0x8e430234  lw          $v1, 0x234($s2)
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x113fe8: 0xac640320  sw          $a0, 0x320($v1)
    ctx->pc = 0x113fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 4));
    // 0x113fec: 0x8e430238  lw          $v1, 0x238($s2)
    ctx->pc = 0x113fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x113ff0: 0xac640320  sw          $a0, 0x320($v1)
    ctx->pc = 0x113ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 4));
    // 0x113ff4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x114000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114004: 0x3e00008  jr          $ra
    ctx->pc = 0x114004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114004u;
        // 0x114008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11400Cu;
}
