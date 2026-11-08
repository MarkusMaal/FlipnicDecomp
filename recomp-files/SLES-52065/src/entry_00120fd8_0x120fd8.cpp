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

// Function: entry_00120fd8
// Address: 0x120fd8 - 0x120fe8
void entry_00120fd8_0x120fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120fd8_0x120fd8");
#endif

    ctx->pc = 0x120fd8u;

    // 0x120fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x120fdc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x120fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x120fe0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x120FE0u;
    {
        const bool branch_taken_0x120fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FE0u;
        // 0x120fe4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fe0) {
            ctx->pc = 0x120F9Cu;
            return;
        }
    }
    ctx->pc = 0x120FE8u;
}
