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

// Function: entry_001cbc7c
// Address: 0x1cbc7c - 0x1cbc90
void entry_001cbc7c_0x1cbc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc7c_0x1cbc7c");
#endif

    ctx->pc = 0x1cbc7cu;

    // 0x1cbc7c: 0x90631694  lbu         $v1, 0x1694($v1)
    ctx->pc = 0x1cbc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5780)));
    // 0x1cbc80: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1cbc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbc84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBC84u;
    {
        const bool branch_taken_0x1cbc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc84) {
            ctx->pc = 0x1CBC90u;
            return;
        }
    }
    ctx->pc = 0x1CBC8Cu;
    // 0x1cbc8c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cbc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cbc90u;
}
