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

// Function: entry_0011d4dc
// Address: 0x11d4dc - 0x11d4fc
void entry_0011d4dc_0x11d4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d4dc_0x11d4dc");
#endif

    ctx->pc = 0x11d4dcu;

    // 0x11d4dc: 0x0  nop
    ctx->pc = 0x11d4dcu;
    // NOP
    // 0x11d4e0: 0x1690002b  bne         $s4, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11D4E0u;
    {
        const bool branch_taken_0x11d4e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        if (branch_taken_0x11d4e0) {
            ctx->pc = 0x11D590u;
            return;
        }
    }
    ctx->pc = 0x11D4E8u;
    // 0x11d4e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D4E8u;
    {
        const bool branch_taken_0x11d4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d4e8) {
            ctx->pc = 0x11D4FCu;
            return;
        }
    }
    ctx->pc = 0x11D4F0u;
    // 0x11d4f0: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x11d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x11d4f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D4F4u;
    {
        const bool branch_taken_0x11d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4F4u;
        // 0x11d4f8: 0xaea20100  sw          $v0, 0x100($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4f4) {
            ctx->pc = 0x11D508u;
            return;
        }
    }
    ctx->pc = 0x11D4FCu;
}
