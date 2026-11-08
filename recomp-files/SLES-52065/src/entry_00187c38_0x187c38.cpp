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

// Function: entry_00187c38
// Address: 0x187c38 - 0x187c44
void entry_00187c38_0x187c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c38_0x187c38");
#endif

    ctx->pc = 0x187c38u;

    // 0x187c38: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x187c38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187c3c: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x187C3Cu;
    {
        const bool branch_taken_0x187c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c3c) {
            ctx->pc = 0x187BF8u;
            return;
        }
    }
    ctx->pc = 0x187C44u;
}
