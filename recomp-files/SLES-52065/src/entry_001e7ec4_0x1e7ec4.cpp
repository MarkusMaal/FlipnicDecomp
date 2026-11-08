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

// Function: entry_001e7ec4
// Address: 0x1e7ec4 - 0x1e7ed4
void entry_001e7ec4_0x1e7ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7ec4_0x1e7ec4");
#endif

    ctx->pc = 0x1e7ec4u;

    // 0x1e7ec4: 0x0  nop
    ctx->pc = 0x1e7ec4u;
    // NOP
    // 0x1e7ec8: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e7ec8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7ecc: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E7ECCu;
    {
        const bool branch_taken_0x1e7ecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7ECCu;
        // 0x1e7ed0: 0x3c011555  lui         $at, 0x1555 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ecc) {
            ctx->pc = 0x1E7EA4u;
            return;
        }
    }
    ctx->pc = 0x1E7ED4u;
}
