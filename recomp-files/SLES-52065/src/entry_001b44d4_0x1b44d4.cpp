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

// Function: entry_001b44d4
// Address: 0x1b44d4 - 0x1b44fc
void entry_001b44d4_0x1b44d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44d4_0x1b44d4");
#endif

    ctx->pc = 0x1b44d4u;

    // 0x1b44d4: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x1b44d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b44d8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B44D8u;
    {
        const bool branch_taken_0x1b44d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44D8u;
        // 0x1b44dc: 0x5197c  dsll32      $v1, $a1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44d8) {
            ctx->pc = 0x1B44FCu;
            return;
        }
    }
    ctx->pc = 0x1B44E0u;
    // 0x1b44e0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b44e4: 0x7317c  dsll32      $a2, $a3, 5
    ctx->pc = 0x1b44e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x1b44e8: 0x6317e  dsrl32      $a2, $a2, 5
    ctx->pc = 0x1b44e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 5));
    // 0x1b44ec: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1b44ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1b44f0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b44f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b44f4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1b44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1b44f8: 0x5197c  dsll32      $v1, $a1, 5
    ctx->pc = 0x1b44f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 5));
    ctx->pc = 0x1b44fcu;
}
