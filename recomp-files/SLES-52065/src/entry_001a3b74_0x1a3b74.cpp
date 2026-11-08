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

// Function: entry_001a3b74
// Address: 0x1a3b74 - 0x1a3b88
void entry_001a3b74_0x1a3b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3b74_0x1a3b74");
#endif

    ctx->pc = 0x1a3b74u;

    // 0x1a3b74: 0x0  nop
    ctx->pc = 0x1a3b74u;
    // NOP
    // 0x1a3b78: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a3b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a3b7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A3B7Cu;
    {
        const bool branch_taken_0x1a3b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B7Cu;
        // 0x1a3b80: 0xc2880  sll         $a1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b7c) {
            ctx->pc = 0x1A3BA8u;
            return;
        }
    }
    ctx->pc = 0x1A3B84u;
    // 0x1a3b84: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1a3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->pc = 0x1a3b88u;
}
