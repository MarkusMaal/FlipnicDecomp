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

// Function: entry_0015cad8
// Address: 0x15cad8 - 0x15cae8
void entry_0015cad8_0x15cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cad8_0x15cad8");
#endif

    ctx->pc = 0x15cad8u;

    // 0x15cad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15cadc: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x15cadcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cae0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15CAE0u;
    {
        const bool branch_taken_0x15cae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE0u;
        // 0x15cae4: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cae0) {
            ctx->pc = 0x15CA90u;
            return;
        }
    }
    ctx->pc = 0x15CAE8u;
}
