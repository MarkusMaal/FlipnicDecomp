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

// Function: entry_001dfaa8
// Address: 0x1dfaa8 - 0x1dfac0
void entry_001dfaa8_0x1dfaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfaa8_0x1dfaa8");
#endif

    ctx->pc = 0x1dfaa8u;

    // 0x1dfaa8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dfaac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfab0: 0x8c639f10  lw          $v1, -0x60F0($v1)
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942480)));
    // 0x1dfab4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DFAB4u;
    {
        const bool branch_taken_0x1dfab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAB4u;
        // 0x1dfab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfab4) {
            ctx->pc = 0x1DFB18u;
            return;
        }
    }
    ctx->pc = 0x1DFABCu;
    // 0x1dfabc: 0x0  nop
    ctx->pc = 0x1dfabcu;
    // NOP
    ctx->pc = 0x1dfac0u;
}
