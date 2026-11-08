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

// Function: entry_00187b08
// Address: 0x187b08 - 0x187b18
void entry_00187b08_0x187b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b08_0x187b08");
#endif

    ctx->pc = 0x187b08u;

    // 0x187b08: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187b0c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B0Cu;
    {
        const bool branch_taken_0x187b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187b0c) {
            ctx->pc = 0x187B24u;
            return;
        }
    }
    ctx->pc = 0x187B14u;
    // 0x187b14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x187b18u;
}
