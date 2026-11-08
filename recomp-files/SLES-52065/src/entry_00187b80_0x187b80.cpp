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

// Function: entry_00187b80
// Address: 0x187b80 - 0x187b90
void entry_00187b80_0x187b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b80_0x187b80");
#endif

    ctx->pc = 0x187b80u;

    // 0x187b80: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187b84: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B84u;
    {
        const bool branch_taken_0x187b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x187b84) {
            ctx->pc = 0x187B9Cu;
            return;
        }
    }
    ctx->pc = 0x187B8Cu;
    // 0x187b8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x187b90u;
}
