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

// Function: FUN_00123a60
// Address: 0x123a60 - 0x123ae8
void FUN_00123a60_0x123a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123a60_0x123a60");
#endif

    ctx->pc = 0x123a60u;

    // 0x123a60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123a64: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x123A64u;
    {
        const bool branch_taken_0x123a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x123A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A64u;
        // 0x123a68: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a64) {
            ctx->pc = 0x123A70u;
            goto label_123a70;
        }
    }
    ctx->pc = 0x123A6Cu;
    // 0x123a6c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x123a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_123a70:
    // 0x123a70: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x123a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x123a74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x123a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x123a78: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x123a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x123a7c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x123A7Cu;
    {
        const bool branch_taken_0x123a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a7c) {
            ctx->pc = 0x123A94u;
            goto label_123a94;
        }
    }
    ctx->pc = 0x123A84u;
    // 0x123a84: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123a88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123a8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x123a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x123a90: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x123a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_123a94:
    // 0x123a94: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x123a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123a98: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x123a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123a9c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123aa0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123aa4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x123aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x123aa8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x123aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x123aac: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x123aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x123ab0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123ab4: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x123ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x123ab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123abc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x123ABCu;
    {
        const bool branch_taken_0x123abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x123abc) {
            ctx->pc = 0x123ACCu;
            goto label_123acc;
        }
    }
    ctx->pc = 0x123AC4u;
    // 0x123ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123AC4u;
    {
        const bool branch_taken_0x123ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AC4u;
        // 0x123ac8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ac4) {
            ctx->pc = 0x123AD0u;
            goto label_123ad0;
        }
    }
    ctx->pc = 0x123ACCu;
label_123acc:
    // 0x123acc: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x123accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_123ad0:
    // 0x123ad0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x123ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x123ad4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123ad8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123adc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x123adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x123ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x123AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AE0u;
        // 0x123ae4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123AE8u;
}
