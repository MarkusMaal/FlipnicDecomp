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

// Function: maybe_play_sound
// Address: 0x18ad70 - 0x18adc4
void maybe_play_sound_0x18ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("maybe_play_sound_0x18ad70");
#endif

    ctx->pc = 0x18ad70u;

    // 0x18ad70: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18ad74: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18ad74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ad7c: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x18ad80: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x18ad80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ad84: 0x24c61b00  addiu       $a2, $a2, 0x1B00
    ctx->pc = 0x18ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6912));
    // 0x18ad88: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x18ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x18ad8c: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x18ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x18ad90: 0x24421b08  addiu       $v0, $v0, 0x1B08
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6920));
    // 0x18ad94: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x18ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x18ad98: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18ad9c: 0x24631b04  addiu       $v1, $v1, 0x1B04
    ctx->pc = 0x18ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6916));
    // 0x18ada0: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x18ada0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ada4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18ada8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18adac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18adb0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x18adb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18adb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18adbc: 0x8076436  j           func_1D90D8
    ctx->pc = 0x18ADBCu;
    ctx->pc = 0x18ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADBCu;
    // 0x18adc0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D90D8u;
    FUN_001d90d8_0x1d90d8(rdram, ctx, runtime); return;
    ctx->pc = 0x18ADC4u;
}
