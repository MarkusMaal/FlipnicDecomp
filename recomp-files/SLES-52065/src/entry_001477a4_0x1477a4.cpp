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

// Function: entry_001477a4
// Address: 0x1477a4 - 0x1477c0
void entry_001477a4_0x1477a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001477a4_0x1477a4");
#endif

    ctx->pc = 0x1477a4u;

    // 0x1477a4: 0x0  nop
    ctx->pc = 0x1477a4u;
    // NOP
    // 0x1477a8: 0x2e611388  sltiu       $at, $s3, 0x1388
    ctx->pc = 0x1477a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
    // 0x1477ac: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1477ACu;
    {
        const bool branch_taken_0x1477ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477ac) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x1477B4u;
    // 0x1477b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1477b8: 0x3c034b18  lui         $v1, 0x4B18
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19224 << 16));
    // 0x1477bc: 0x34659680  ori         $a1, $v1, 0x9680
    ctx->pc = 0x1477bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38528);
    ctx->pc = 0x1477c0u;
}
