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

// Function: entry_001e803c
// Address: 0x1e803c - 0x1e8060
void entry_001e803c_0x1e803c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e803c_0x1e803c");
#endif

    ctx->pc = 0x1e803cu;

    // 0x1e803c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8040: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1e8040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8044: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e8048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e804c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e8050: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e8054: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8058: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8058u;
    {
        const bool branch_taken_0x1e8058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8058) {
            ctx->pc = 0x1E8080u;
            return;
        }
    }
    ctx->pc = 0x1E8060u;
}
