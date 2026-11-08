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

// Function: entry_00100d4c
// Address: 0x100d4c - 0x100d60
void entry_00100d4c_0x100d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d4c_0x100d4c");
#endif

    ctx->pc = 0x100d4cu;

    // 0x100d4c: 0x0  nop
    ctx->pc = 0x100d4cu;
    // NOP
    // 0x100d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100d54: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x100d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x100d58: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x100D58u;
    {
        const bool branch_taken_0x100d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D58u;
        // 0x100d5c: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d58) {
            ctx->pc = 0x100D2Cu;
            return;
        }
    }
    ctx->pc = 0x100D60u;
}
