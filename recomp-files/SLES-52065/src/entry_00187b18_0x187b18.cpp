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

// Function: entry_00187b18
// Address: 0x187b18 - 0x187b24
void entry_00187b18_0x187b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b18_0x187b18");
#endif

    ctx->pc = 0x187b18u;

    // 0x187b18: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x187b18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187b1c: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187B1Cu;
    {
        const bool branch_taken_0x187b1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b1c) {
            ctx->pc = 0x187B08u;
            return;
        }
    }
    ctx->pc = 0x187B24u;
}
