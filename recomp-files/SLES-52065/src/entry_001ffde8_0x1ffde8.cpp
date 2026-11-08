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

// Function: entry_001ffde8
// Address: 0x1ffde8 - 0x1ffe00
void entry_001ffde8_0x1ffde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffde8_0x1ffde8");
#endif

    ctx->pc = 0x1ffde8u;

    // 0x1ffde8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1ffde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1ffdec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ffdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ffdf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFDF0u;
    {
        const bool branch_taken_0x1ffdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdf0) {
            ctx->pc = 0x1FFE00u;
            return;
        }
    }
    ctx->pc = 0x1FFDF8u;
    // 0x1ffdf8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ffdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ffdfc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1ffe00u;
}
