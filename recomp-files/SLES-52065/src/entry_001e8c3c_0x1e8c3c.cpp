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

// Function: entry_001e8c3c
// Address: 0x1e8c3c - 0x1e8c54
void entry_001e8c3c_0x1e8c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8c3c_0x1e8c3c");
#endif

    ctx->pc = 0x1e8c3cu;

    // 0x1e8c3c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8C3Cu;
    {
        const bool branch_taken_0x1e8c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C3Cu;
        // 0x1e8c40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c3c) {
            ctx->pc = 0x1E8C54u;
            return;
        }
    }
    ctx->pc = 0x1E8C44u;
    // 0x1e8c44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8c48: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x1e8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
    // 0x1e8c4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e8c50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e8c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x1e8c54u;
}
