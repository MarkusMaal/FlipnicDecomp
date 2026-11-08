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

// Function: entry_00187c18
// Address: 0x187c18 - 0x187c24
void entry_00187c18_0x187c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c18_0x187c18");
#endif

    ctx->pc = 0x187c18u;

    // 0x187c18: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x187c18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187c1c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187C1Cu;
    {
        const bool branch_taken_0x187c1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c1c) {
            ctx->pc = 0x187C08u;
            return;
        }
    }
    ctx->pc = 0x187C24u;
}
