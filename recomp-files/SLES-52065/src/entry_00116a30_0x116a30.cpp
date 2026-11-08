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

// Function: entry_00116a30
// Address: 0x116a30 - 0x116a80
void entry_00116a30_0x116a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a30_0x116a30");
#endif

    ctx->pc = 0x116a30u;

label_116a30:
    // 0x116a30: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x116a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x116a34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116a38: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x116a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x116a3c: 0x288200e3  slti        $v0, $a0, 0xE3
    ctx->pc = 0x116a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)227) ? 1 : 0);
    // 0x116a40: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x116a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x116a44: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x116a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x116a48: 0x8d660634  lw          $a2, 0x634($t3)
    ctx->pc = 0x116a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1588)));
    // 0x116a4c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x116a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x116a50: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x116a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x116a54: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x116a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x116a58: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x116a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x116a5c: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x116a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x116a60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116a64: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x116a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x116a68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116a6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x116a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x116a70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116a74: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x116a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x116a78: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116A78u;
    {
        const bool branch_taken_0x116a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A78u;
        // 0x116a7c: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a78) {
            ctx->pc = 0x116A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a30;
        }
    }
    ctx->pc = 0x116A80u;
}
