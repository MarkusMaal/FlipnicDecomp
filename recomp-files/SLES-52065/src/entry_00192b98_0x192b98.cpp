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

// Function: entry_00192b98
// Address: 0x192b98 - 0x192bd4
void entry_00192b98_0x192b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b98_0x192b98");
#endif

    ctx->pc = 0x192b98u;

    // 0x192b98: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x192b9c: 0x15250015  bne         $t1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x192B9Cu;
    {
        const bool branch_taken_0x192b9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 5));
        if (branch_taken_0x192b9c) {
            ctx->pc = 0x192BF4u;
            return;
        }
    }
    ctx->pc = 0x192BA4u;
    // 0x192ba4: 0x91a5282b  lbu         $a1, 0x282B($t5)
    ctx->pc = 0x192ba4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10283)));
    // 0x192ba8: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x192BA8u;
    {
        const bool branch_taken_0x192ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x192BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BA8u;
        // 0x192bac: 0x32940  sll         $a1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ba8) {
            ctx->pc = 0x192BD4u;
            return;
        }
    }
    ctx->pc = 0x192BB0u;
    // 0x192bb0: 0xc75025  or          $t2, $a2, $a3
    ctx->pc = 0x192bb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192bb4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x192bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x192bb8: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x192bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x192bbc: 0x91251084  lbu         $a1, 0x1084($t1)
    ctx->pc = 0x192bbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4228)));
    // 0x192bc0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x192bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x192bc4: 0xa1251084  sb          $a1, 0x1084($t1)
    ctx->pc = 0x192bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4228), (uint8_t)GPR_U32(ctx, 5));
    // 0x192bc8: 0x81251284  lb          $a1, 0x1284($t1)
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 4740)));
    // 0x192bcc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x192bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x192bd0: 0xa1251284  sb          $a1, 0x1284($t1)
    ctx->pc = 0x192bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4740), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x192bd4u;
}
