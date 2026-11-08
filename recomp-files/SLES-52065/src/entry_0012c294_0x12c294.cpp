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

// Function: entry_0012c294
// Address: 0x12c294 - 0x12c2ac
void entry_0012c294_0x12c294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c294_0x12c294");
#endif

    ctx->pc = 0x12c294u;

    // 0x12c294: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C294u;
    {
        const bool branch_taken_0x12c294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C294u;
        // 0x12c298: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c294) {
            ctx->pc = 0x12C2B0u;
            return;
        }
    }
    ctx->pc = 0x12C29Cu;
    // 0x12c29c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x12c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12c2a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12c2a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12c2a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12c2a8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12c2a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x12c2acu;
}
