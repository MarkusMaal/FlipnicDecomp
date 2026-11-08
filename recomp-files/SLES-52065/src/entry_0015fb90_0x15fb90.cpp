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

// Function: entry_0015fb90
// Address: 0x15fb90 - 0x15fba0
void entry_0015fb90_0x15fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fb90_0x15fb90");
#endif

    ctx->pc = 0x15fb90u;

    // 0x15fb90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15fb94: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15fb94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15fb98: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15FB98u;
    {
        const bool branch_taken_0x15fb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB98u;
        // 0x15fb9c: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb98) {
            ctx->pc = 0x15FB5Cu;
            return;
        }
    }
    ctx->pc = 0x15FBA0u;
}
