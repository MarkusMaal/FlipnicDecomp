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

// Function: entry_001633bc
// Address: 0x1633bc - 0x1633d0
void entry_001633bc_0x1633bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633bc_0x1633bc");
#endif

    ctx->pc = 0x1633bcu;

    // 0x1633bc: 0x0  nop
    ctx->pc = 0x1633bcu;
    // NOP
    // 0x1633c0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633C0u;
    {
        const bool branch_taken_0x1633c0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C0u;
        // 0x1633c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c0) {
            ctx->pc = 0x1633D0u;
            return;
        }
    }
    ctx->pc = 0x1633C8u;
    // 0x1633c8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1633C8u;
    {
        const bool branch_taken_0x1633c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C8u;
        // 0x1633cc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c8) {
            ctx->pc = 0x16350Cu;
            return;
        }
    }
    ctx->pc = 0x1633D0u;
}
