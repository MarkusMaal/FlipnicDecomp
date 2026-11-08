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

// Function: entry_001dfad8
// Address: 0x1dfad8 - 0x1dfaf0
void entry_001dfad8_0x1dfad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfad8_0x1dfad8");
#endif

    ctx->pc = 0x1dfad8u;

    // 0x1dfad8: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1dfadc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dfae0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfae4: 0x8c639f18  lw          $v1, -0x60E8($v1)
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942488)));
    // 0x1dfae8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB18u;
            return;
        }
    }
    ctx->pc = 0x1DFAF0u;
}
