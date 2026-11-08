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

// Function: entry_00116a9c
// Address: 0x116a9c - 0x116aec
void entry_00116a9c_0x116a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a9c_0x116a9c");
#endif

    ctx->pc = 0x116a9cu;

label_116a9c:
    // 0x116a9c: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x116a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x116aa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116aa4: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x116aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x116aa8: 0x2882026f  slti        $v0, $a0, 0x26F
    ctx->pc = 0x116aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)623) ? 1 : 0);
    // 0x116aac: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x116aacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x116ab0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x116ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x116ab4: 0x8d66fc74  lw          $a2, -0x38C($t3)
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294966388)));
    // 0x116ab8: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x116ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x116abc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x116abcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x116ac0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x116ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x116ac4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x116ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x116ac8: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x116acc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116ad0: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x116ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x116ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116ad8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x116adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116ae0: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x116ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x116ae4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116AE4u;
    {
        const bool branch_taken_0x116ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE4u;
        // 0x116ae8: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ae4) {
            ctx->pc = 0x116A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a9c;
        }
    }
    ctx->pc = 0x116AECu;
}
