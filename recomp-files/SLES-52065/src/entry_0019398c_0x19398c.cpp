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

// Function: entry_0019398c
// Address: 0x19398c - 0x1939a8
void entry_0019398c_0x19398c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019398c_0x19398c");
#endif

    ctx->pc = 0x19398cu;

    // 0x19398c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193990: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19399c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1939a0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1939A0u;
    {
        const bool branch_taken_0x1939a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939A0u;
        // 0x1939a4: 0xa06501d3  sb          $a1, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939a0) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x1939A8u;
}
