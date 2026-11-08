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

// Function: entry_001a98cc
// Address: 0x1a98cc - 0x1a98e0
void entry_001a98cc_0x1a98cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a98cc_0x1a98cc");
#endif

    ctx->pc = 0x1a98ccu;

    // 0x1a98cc: 0x0  nop
    ctx->pc = 0x1a98ccu;
    // NOP
    // 0x1a98d0: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x1a98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1a98d4: 0xac620678  sw          $v0, 0x678($v1)
    ctx->pc = 0x1a98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 2));
    // 0x1a98d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A98D8u;
    {
        const bool branch_taken_0x1a98d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98D8u;
        // 0x1a98dc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98d8) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A98E0u;
}
