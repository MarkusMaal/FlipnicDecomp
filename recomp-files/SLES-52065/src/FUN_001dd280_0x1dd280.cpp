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

// Function: FUN_001dd280
// Address: 0x1dd280 - 0x1dd304
void FUN_001dd280_0x1dd280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd280_0x1dd280");
#endif

    ctx->pc = 0x1dd280u;

    // 0x1dd280: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd284: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x1dd284u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x1dd288: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd28c: 0x254a7330  addiu       $t2, $t2, 0x7330
    ctx->pc = 0x1dd28cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29488));
    // 0x1dd290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd294: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd298: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd29c: 0x254b0004  addiu       $t3, $t2, 0x4
    ctx->pc = 0x1dd29cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1dd2a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd2a8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1dd2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1dd2ac: 0x4a6821  addu        $t5, $v0, $t2
    ctx->pc = 0x1dd2acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1dd2b0: 0x1432021  addu        $a0, $t2, $v1
    ctx->pc = 0x1dd2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1dd2b4: 0x4b6021  addu        $t4, $v0, $t3
    ctx->pc = 0x1dd2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1dd2b8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1dd2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dd2bc: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x1dd2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dd2c0: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1dd2c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd2c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2c8: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1dd2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2cc: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1dd2ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd2d0: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dd2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dd2d4: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1dd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1dd2d8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1dd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1dd2dc: 0xac480030  sw          $t0, 0x30($v0)
    ctx->pc = 0x1dd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 8));
    // 0x1dd2e0: 0xad890070  sw          $t1, 0x70($t4)
    ctx->pc = 0x1dd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 112), GPR_U32(ctx, 9));
    // 0x1dd2e4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DD2E4u;
    {
        const bool branch_taken_0x1dd2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2e4) {
            ctx->pc = 0x1DD2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD2E4u;
            // 0x1dd2e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD2ECu;
            goto label_1dd2ec;
        }
    }
    ctx->pc = 0x1DD2ECu;
label_1dd2ec:
    // 0x1dd2ec: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x1dd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1dd2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd2f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1dd2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1dd2f8: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x1dd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x1dd2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2FCu;
        // 0x1dd300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD304u;
}
