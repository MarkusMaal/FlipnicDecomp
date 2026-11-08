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

// Function: entry_001d7500
// Address: 0x1d7500 - 0x1d7510
void entry_001d7500_0x1d7500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7500_0x1d7500");
#endif

    ctx->pc = 0x1d7500u;

    // 0x1d7500: 0x96a30062  lhu         $v1, 0x62($s5)
    ctx->pc = 0x1d7500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 98)));
    // 0x1d7504: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7504u;
    {
        const bool branch_taken_0x1d7504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7504u;
        // 0x1d7508: 0x30a2ff0f  andi        $v0, $a1, 0xFF0F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7504) {
            ctx->pc = 0x1D7510u;
            return;
        }
    }
    ctx->pc = 0x1D750Cu;
    // 0x1d750c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1d750cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1d7510u;
}
