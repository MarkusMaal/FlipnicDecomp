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

// Function: entry_0011b4f8
// Address: 0x11b4f8 - 0x11b520
void entry_0011b4f8_0x11b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b4f8_0x11b4f8");
#endif

    ctx->pc = 0x11b4f8u;

    // 0x11b4f8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b4fc: 0xa06f0000  sb          $t7, 0x0($v1)
    ctx->pc = 0x11b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x11b500: 0xf7e3c  dsll32      $t7, $t7, 24
    ctx->pc = 0x11b500u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 24));
    // 0x11b504: 0xf7e3f  dsra32      $t7, $t7, 24
    ctx->pc = 0x11b504u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 24));
    // 0x11b508: 0x15ec0005  bne         $t7, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B508u;
    {
        const bool branch_taken_0x11b508 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 12));
        if (branch_taken_0x11b508) {
            ctx->pc = 0x11B520u;
            return;
        }
    }
    ctx->pc = 0x11B510u;
    // 0x11b510: 0x14eb0003  bne         $a3, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B510u;
    {
        const bool branch_taken_0x11b510 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x11b510) {
            ctx->pc = 0x11B520u;
            return;
        }
    }
    ctx->pc = 0x11B518u;
    // 0x11b518: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11B518u;
    {
        const bool branch_taken_0x11b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B518u;
        // 0x11b51c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b518) {
            ctx->pc = 0x11B590u;
            return;
        }
    }
    ctx->pc = 0x11B520u;
}
