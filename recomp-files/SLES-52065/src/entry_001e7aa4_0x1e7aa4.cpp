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

// Function: entry_001e7aa4
// Address: 0x1e7aa4 - 0x1e7abc
void entry_001e7aa4_0x1e7aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7aa4_0x1e7aa4");
#endif

    ctx->pc = 0x1e7aa4u;

    // 0x1e7aa4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7AA4u;
    {
        const bool branch_taken_0x1e7aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AA4u;
        // 0x1e7aa8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7aa4) {
            ctx->pc = 0x1E7ABCu;
            return;
        }
    }
    ctx->pc = 0x1E7AACu;
    // 0x1e7aac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e7ab0: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e7ab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e7ab8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x1e7abcu;
}
