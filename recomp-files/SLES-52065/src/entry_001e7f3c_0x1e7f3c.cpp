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

// Function: entry_001e7f3c
// Address: 0x1e7f3c - 0x1e7f5c
void entry_001e7f3c_0x1e7f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7f3c_0x1e7f3c");
#endif

    ctx->pc = 0x1e7f3cu;

    // 0x1e7f3c: 0x0  nop
    ctx->pc = 0x1e7f3cu;
    // NOP
    // 0x1e7f40: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e7f44: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e7f48: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e7f4c: 0xb2302b  sltu        $a2, $a1, $s2
    ctx->pc = 0x1e7f4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7f50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e7f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e7f54: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7F54u;
    {
        const bool branch_taken_0x1e7f54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F54u;
        // 0x1e7f58: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f54) {
            ctx->pc = 0x1E7F14u;
            return;
        }
    }
    ctx->pc = 0x1E7F5Cu;
}
