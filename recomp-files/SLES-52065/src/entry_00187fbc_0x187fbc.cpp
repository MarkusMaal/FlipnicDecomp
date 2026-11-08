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

// Function: entry_00187fbc
// Address: 0x187fbc - 0x187fcc
void entry_00187fbc_0x187fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fbc_0x187fbc");
#endif

    ctx->pc = 0x187fbcu;

    // 0x187fbc: 0x0  nop
    ctx->pc = 0x187fbcu;
    // NOP
    // 0x187fc0: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x187fc0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187fc4: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x187FC4u;
    {
        const bool branch_taken_0x187fc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fc4) {
            ctx->pc = 0x187FA0u;
            return;
        }
    }
    ctx->pc = 0x187FCCu;
}
