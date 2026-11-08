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

// Function: entry_001ee0ac
// Address: 0x1ee0ac - 0x1ee0b8
void entry_001ee0ac_0x1ee0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee0ac_0x1ee0ac");
#endif

    ctx->pc = 0x1ee0acu;

    // 0x1ee0ac: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1ee0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ee0b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1EE0B0u;
    {
        const bool branch_taken_0x1ee0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0B0u;
        // 0x1ee0b4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0b0) {
            ctx->pc = 0x1EE060u;
            return;
        }
    }
    ctx->pc = 0x1EE0B8u;
}
