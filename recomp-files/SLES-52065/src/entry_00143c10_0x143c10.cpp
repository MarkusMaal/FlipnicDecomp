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

// Function: entry_00143c10
// Address: 0x143c10 - 0x143c24
void entry_00143c10_0x143c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c10_0x143c10");
#endif

    ctx->pc = 0x143c10u;

    // 0x143c10: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x143c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x143c14: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x143c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x143c18: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x143c18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143c1c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x143C1Cu;
    {
        const bool branch_taken_0x143c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c1c) {
            ctx->pc = 0x143C48u;
            return;
        }
    }
    ctx->pc = 0x143C24u;
}
