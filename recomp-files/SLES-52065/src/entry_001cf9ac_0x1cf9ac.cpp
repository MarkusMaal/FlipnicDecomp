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

// Function: entry_001cf9ac
// Address: 0x1cf9ac - 0x1cf9c0
void entry_001cf9ac_0x1cf9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf9ac_0x1cf9ac");
#endif

    ctx->pc = 0x1cf9acu;

    // 0x1cf9ac: 0x0  nop
    ctx->pc = 0x1cf9acu;
    // NOP
    // 0x1cf9b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf9b4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1cf9b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cf9b8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CF9B8u;
    {
        const bool branch_taken_0x1cf9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9B8u;
        // 0x1cf9bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9b8) {
            ctx->pc = 0x1CF930u;
            return;
        }
    }
    ctx->pc = 0x1CF9C0u;
}
