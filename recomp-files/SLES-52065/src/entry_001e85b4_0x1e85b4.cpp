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

// Function: entry_001e85b4
// Address: 0x1e85b4 - 0x1e85d4
void entry_001e85b4_0x1e85b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e85b4_0x1e85b4");
#endif

    ctx->pc = 0x1e85b4u;

    // 0x1e85b4: 0x0  nop
    ctx->pc = 0x1e85b4u;
    // NOP
    // 0x1e85b8: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e85b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e85bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e85c0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e85c4: 0xa4302b  sltu        $a2, $a1, $a0
    ctx->pc = 0x1e85c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e85c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e85c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e85cc: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E85CCu;
    {
        const bool branch_taken_0x1e85cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85CCu;
        // 0x1e85d0: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85cc) {
            ctx->pc = 0x1E8584u;
            return;
        }
    }
    ctx->pc = 0x1E85D4u;
}
