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

// Function: entry_0012195c
// Address: 0x12195c - 0x121970
void entry_0012195c_0x12195c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012195c_0x12195c");
#endif

    ctx->pc = 0x12195cu;

    // 0x12195c: 0x0  nop
    ctx->pc = 0x12195cu;
    // NOP
    // 0x121960: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x121960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121964: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x121964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121968: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x121968u;
    {
        const bool branch_taken_0x121968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121968) {
            ctx->pc = 0x121940u;
            return;
        }
    }
    ctx->pc = 0x121970u;
}
