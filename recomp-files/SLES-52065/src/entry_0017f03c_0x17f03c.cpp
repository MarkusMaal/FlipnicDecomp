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

// Function: entry_0017f03c
// Address: 0x17f03c - 0x17f04c
void entry_0017f03c_0x17f03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f03c_0x17f03c");
#endif

    ctx->pc = 0x17f03cu;

    // 0x17f03c: 0x0  nop
    ctx->pc = 0x17f03cu;
    // NOP
    // 0x17f040: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17f040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17f044: 0x1651ffe6  bne         $s2, $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17F044u;
    {
        const bool branch_taken_0x17f044 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x17f044) {
            ctx->pc = 0x17EFE0u;
            return;
        }
    }
    ctx->pc = 0x17F04Cu;
}
