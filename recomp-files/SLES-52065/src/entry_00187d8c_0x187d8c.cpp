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

// Function: entry_00187d8c
// Address: 0x187d8c - 0x187db0
void entry_00187d8c_0x187d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d8c_0x187d8c");
#endif

    ctx->pc = 0x187d8cu;

    // 0x187d8c: 0x0  nop
    ctx->pc = 0x187d8cu;
    // NOP
    // 0x187d90: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x187d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187d94: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x187D94u;
    {
        const bool branch_taken_0x187d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d94) {
            ctx->pc = 0x187D78u;
            return;
        }
    }
    ctx->pc = 0x187D9Cu;
    // 0x187d9c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x187d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x187da0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x187DA0u;
    {
        const bool branch_taken_0x187da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187da0) {
            ctx->pc = 0x187D78u;
            return;
        }
    }
    ctx->pc = 0x187DA8u;
    // 0x187da8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x187DA8u;
    {
        const bool branch_taken_0x187da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187da8) {
            ctx->pc = 0x187E58u;
            return;
        }
    }
    ctx->pc = 0x187DB0u;
}
