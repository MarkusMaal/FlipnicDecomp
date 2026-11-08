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

// Function: entry_001b4544
// Address: 0x1b4544 - 0x1b456c
void entry_001b4544_0x1b4544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4544_0x1b4544");
#endif

    ctx->pc = 0x1b4544u;

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
            return;
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
    ctx->pc = 0x1b456cu;
}
