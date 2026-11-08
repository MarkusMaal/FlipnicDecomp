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

// Function: FUN_001239d0
// Address: 0x1239d0 - 0x123a58
void FUN_001239d0_0x1239d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001239d0_0x1239d0");
#endif

    ctx->pc = 0x1239d0u;

    // 0x1239d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1239d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1239d4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1239D4u;
    {
        const bool branch_taken_0x1239d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1239D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239D4u;
        // 0x1239d8: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239d4) {
            ctx->pc = 0x1239E0u;
            goto label_1239e0;
        }
    }
    ctx->pc = 0x1239DCu;
    // 0x1239dc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1239dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1239e0:
    // 0x1239e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1239e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1239e4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1239e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1239e8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1239ec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1239ECu;
    {
        const bool branch_taken_0x1239ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239ec) {
            ctx->pc = 0x123A04u;
            goto label_123a04;
        }
    }
    ctx->pc = 0x1239F4u;
    // 0x1239f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1239f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1239f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1239fc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1239fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x123a00: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x123a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_123a04:
    // 0x123a04: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x123a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123a08: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x123a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123a0c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123a10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123a14: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x123a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x123a18: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x123a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x123a1c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x123a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x123a20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123a24: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x123a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x123a28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123a2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x123A2Cu;
    {
        const bool branch_taken_0x123a2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x123a2c) {
            ctx->pc = 0x123A3Cu;
            goto label_123a3c;
        }
    }
    ctx->pc = 0x123A34u;
    // 0x123a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123A34u;
    {
        const bool branch_taken_0x123a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A34u;
        // 0x123a38: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a34) {
            ctx->pc = 0x123A40u;
            goto label_123a40;
        }
    }
    ctx->pc = 0x123A3Cu;
label_123a3c:
    // 0x123a3c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x123a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_123a40:
    // 0x123a40: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x123a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x123a44: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123a48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123a4c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x123a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x123a50: 0x3e00008  jr          $ra
    ctx->pc = 0x123A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A50u;
        // 0x123a54: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123A58u;
}
