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

// Function: entry_00193974
// Address: 0x193974 - 0x19398c
void entry_00193974_0x193974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193974_0x193974");
#endif

    ctx->pc = 0x193974u;

    // 0x193974: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193978: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19397c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193980: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x193984: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x193984u;
    {
        const bool branch_taken_0x193984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193984u;
        // 0x193988: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193984) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x19398Cu;
}
