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

// Function: FUN_001b45d0
// Address: 0x1b45d0 - 0x1b465c
void FUN_001b45d0_0x1b45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b45d0_0x1b45d0");
#endif

    ctx->pc = 0x1b45d0u;

    // 0x1b45d0: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x1b45d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b45d4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1b45d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1b45d8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x1b45d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b45dc: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x1b45dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x1b45e0: 0x654025  or          $t0, $v1, $a1
    ctx->pc = 0x1b45e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1b45e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b45e8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b45e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b45ec: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x1b45ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x1b45f0: 0x34aa0004  ori         $t2, $a1, 0x4
    ctx->pc = 0x1b45f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x1b45f4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1b45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1b45f8: 0x34691001  ori         $t1, $v1, 0x1001
    ctx->pc = 0x1b45f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x1b45fc: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x1b45fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x1b4600: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x1b4600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x1b4604: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1b4604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b4608: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x1b4608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x1b460c: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1b4610: 0xfd660000  sd          $a2, 0x0($t3)
    ctx->pc = 0x1b4610u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 6));
    // 0x1b4614: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b4614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4618: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1b4618u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x1b461c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b461cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4620: 0xad6a000c  sw          $t2, 0xC($t3)
    ctx->pc = 0x1b4620u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 10));
    // 0x1b4624: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1b4628: 0x7baa0000  lq          $t2, 0x0($sp)
    ctx->pc = 0x1b4628u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b462c: 0x7d6a0010  sq          $t2, 0x10($t3)
    ctx->pc = 0x1b462cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 10));
    // 0x1b4630: 0xfd690020  sd          $t1, 0x20($t3)
    ctx->pc = 0x1b4630u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 9));
    // 0x1b4634: 0xfd680028  sd          $t0, 0x28($t3)
    ctx->pc = 0x1b4634u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 8));
    // 0x1b4638: 0xfd670030  sd          $a3, 0x30($t3)
    ctx->pc = 0x1b4638u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 7));
    // 0x1b463c: 0xfd660038  sd          $a2, 0x38($t3)
    ctx->pc = 0x1b463cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 6));
    // 0x1b4640: 0xfd650040  sd          $a1, 0x40($t3)
    ctx->pc = 0x1b4640u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 64), GPR_U64(ctx, 5));
    // 0x1b4644: 0xfd630048  sd          $v1, 0x48($t3)
    ctx->pc = 0x1b4644u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 3));
    // 0x1b4648: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b464c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1b464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1b4650: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4654: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4654u;
        // 0x1b4658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B465Cu;
}
