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

// Function: entry_001a9088
// Address: 0x1a9088 - 0x1a90a0
void entry_001a9088_0x1a9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9088_0x1a9088");
#endif

    ctx->pc = 0x1a9088u;

    // 0x1a9088: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1a9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1a908c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a908cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a9090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9090u;
    {
        const bool branch_taken_0x1a9090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9090) {
            ctx->pc = 0x1A90A0u;
            return;
        }
    }
    ctx->pc = 0x1A9098u;
    // 0x1a9098: 0x3a220020  xori        $v0, $s1, 0x20
    ctx->pc = 0x1a9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)32);
    // 0x1a909c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a909cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1a90a0u;
}
