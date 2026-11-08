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

// Function: entry_00187b24
// Address: 0x187b24 - 0x187b38
void entry_00187b24_0x187b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b24_0x187b24");
#endif

    ctx->pc = 0x187b24u;

    // 0x187b24: 0x0  nop
    ctx->pc = 0x187b24u;
    // NOP
    // 0x187b28: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x187b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187b2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187B2Cu;
    {
        const bool branch_taken_0x187b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b2c) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187B34u;
    // 0x187b34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x187b38u;
}
