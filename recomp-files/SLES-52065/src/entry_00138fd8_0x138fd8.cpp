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

// Function: entry_00138fd8
// Address: 0x138fd8 - 0x138fe4
void entry_00138fd8_0x138fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138fd8_0x138fd8");
#endif

    ctx->pc = 0x138fd8u;

    // 0x138fd8: 0x15300002  bne         $t1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x138FD8u;
    {
        const bool branch_taken_0x138fd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        ctx->pc = 0x138FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FD8u;
        // 0x138fdc: 0x24070022  addiu       $a3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fd8) {
            ctx->pc = 0x138FE4u;
            return;
        }
    }
    ctx->pc = 0x138FE0u;
    // 0x138fe0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x138fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138fe4u;
}
