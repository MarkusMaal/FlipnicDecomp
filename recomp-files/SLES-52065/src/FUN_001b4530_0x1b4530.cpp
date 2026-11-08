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

// Function: FUN_001b4530
// Address: 0x1b4530 - 0x1b45c8
void FUN_001b4530_0x1b4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4530_0x1b4530");
#endif

    ctx->pc = 0x1b4530u;

    // 0x1b4530: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x1b4530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b4534: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1b4534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b4538: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4538u;
    {
        const bool branch_taken_0x1b4538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4538u;
        // 0x1b453c: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4538) {
            ctx->pc = 0x1B4544u;
            goto label_1b4544;
        }
    }
    ctx->pc = 0x1B4540u;
    // 0x1b4540: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x1b4540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
label_1b4544:
    // 0x1b4544: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x1b4544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b4548: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4548u;
    {
        const bool branch_taken_0x1b4548 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4548u;
        // 0x1b454c: 0x5197c  dsll32      $v1, $a1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4548) {
            ctx->pc = 0x1B456Cu;
            goto label_1b456c;
        }
    }
    ctx->pc = 0x1B4550u;
    // 0x1b4550: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b4554: 0x7317c  dsll32      $a2, $a3, 5
    ctx->pc = 0x1b4554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x1b4558: 0x6317e  dsrl32      $a2, $a2, 5
    ctx->pc = 0x1b4558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 5));
    // 0x1b455c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1b455cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1b4560: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b4560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b4564: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1b4564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1b4568: 0x5197c  dsll32      $v1, $a1, 5
    ctx->pc = 0x1b4568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 5));
label_1b456c:
    // 0x1b456c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b4570: 0x3197e  dsrl32      $v1, $v1, 5
    ctx->pc = 0x1b4570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 5));
    // 0x1b4574: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1b4574u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x1b4578: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1b4578u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1b457c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1b457cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1b4580: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x1b4580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x1b4584: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1b4584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1b4588: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x1b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1b458c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b4590: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4594: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1b4594u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4598: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x1b4598u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x1b459c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b45a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b45a4: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x1b45a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x1b45a8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b45ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b45acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b45b0: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x1b45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x1b45b4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1b45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b45b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b45bc: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1b45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1b45c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45C0u;
        // 0x1b45c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B45C8u;
}
