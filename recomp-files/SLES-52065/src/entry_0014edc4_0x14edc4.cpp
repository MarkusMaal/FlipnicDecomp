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

// Function: entry_0014edc4
// Address: 0x14edc4 - 0x14ede0
void entry_0014edc4_0x14edc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014edc4_0x14edc4");
#endif

    ctx->pc = 0x14edc4u;

    // 0x14edc4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14edc8: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x14edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14edcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14edd0: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x14edd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14edd4: 0x214082b  sltu        $at, $s0, $s4
    ctx->pc = 0x14edd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14edd8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EDD8u;
    {
        const bool branch_taken_0x14edd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edd8) {
            ctx->pc = 0x14EDFCu;
            return;
        }
    }
    ctx->pc = 0x14EDE0u;
}
