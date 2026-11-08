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

// Function: FUN_001af9a0
// Address: 0x1af9a0 - 0x1afa2c
void FUN_001af9a0_0x1af9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af9a0_0x1af9a0");
#endif

    ctx->pc = 0x1af9a0u;

    // 0x1af9a0: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af9a4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1af9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1af9a8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x1af9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1af9ac: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x1af9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x1af9b0: 0x654025  or          $t0, $v1, $a1
    ctx->pc = 0x1af9b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1af9b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af9b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af9b8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1af9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af9bc: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x1af9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x1af9c0: 0x34aa0004  ori         $t2, $a1, 0x4
    ctx->pc = 0x1af9c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x1af9c4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1af9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1af9c8: 0x34691001  ori         $t1, $v1, 0x1001
    ctx->pc = 0x1af9c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x1af9cc: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x1af9ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x1af9d0: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x1af9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x1af9d4: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1af9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1af9d8: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x1af9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x1af9dc: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x1af9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1af9e0: 0xfd660000  sd          $a2, 0x0($t3)
    ctx->pc = 0x1af9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 6));
    // 0x1af9e4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af9e8: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1af9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x1af9ec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1af9f0: 0xad6a000c  sw          $t2, 0xC($t3)
    ctx->pc = 0x1af9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 10));
    // 0x1af9f4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1af9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1af9f8: 0x7baa0000  lq          $t2, 0x0($sp)
    ctx->pc = 0x1af9f8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9fc: 0x7d6a0010  sq          $t2, 0x10($t3)
    ctx->pc = 0x1af9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 10));
    // 0x1afa00: 0xfd690020  sd          $t1, 0x20($t3)
    ctx->pc = 0x1afa00u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 9));
    // 0x1afa04: 0xfd680028  sd          $t0, 0x28($t3)
    ctx->pc = 0x1afa04u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 8));
    // 0x1afa08: 0xfd670030  sd          $a3, 0x30($t3)
    ctx->pc = 0x1afa08u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 7));
    // 0x1afa0c: 0xfd660038  sd          $a2, 0x38($t3)
    ctx->pc = 0x1afa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 6));
    // 0x1afa10: 0xfd650040  sd          $a1, 0x40($t3)
    ctx->pc = 0x1afa10u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 64), GPR_U64(ctx, 5));
    // 0x1afa14: 0xfd630048  sd          $v1, 0x48($t3)
    ctx->pc = 0x1afa14u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 3));
    // 0x1afa18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1afa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afa1c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1afa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1afa20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1afa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1afa24: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA24u;
        // 0x1afa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFA2Cu;
}
