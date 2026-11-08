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

// Function: entry_001880f0
// Address: 0x1880f0 - 0x188100
void entry_001880f0_0x1880f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001880f0_0x1880f0");
#endif

    ctx->pc = 0x1880f0u;

    // 0x1880f0: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x1880f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1880f4: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1880F4u;
    {
        const bool branch_taken_0x1880f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1880f4) {
            ctx->pc = 0x18810Cu;
            return;
        }
    }
    ctx->pc = 0x1880FCu;
    // 0x1880fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x188100u;
}
