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

// Function: entry_001e1488
// Address: 0x1e1488 - 0x1e14a0
void entry_001e1488_0x1e1488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1488_0x1e1488");
#endif

    ctx->pc = 0x1e1488u;

    // 0x1e1488: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1488u;
    {
        const bool branch_taken_0x1e1488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1488u;
        // 0x1e148c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1488) {
            ctx->pc = 0x1E14A0u;
            return;
        }
    }
    ctx->pc = 0x1E1490u;
    // 0x1e1490: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1494: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e1498: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e149c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x1e14a0u;
}
