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

// Function: entry_00187b38
// Address: 0x187b38 - 0x187b44
void entry_00187b38_0x187b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b38_0x187b38");
#endif

    ctx->pc = 0x187b38u;

    // 0x187b38: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x187b38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187b3c: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x187B3Cu;
    {
        const bool branch_taken_0x187b3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187b3c) {
            ctx->pc = 0x187AF4u;
            return;
        }
    }
    ctx->pc = 0x187B44u;
}
