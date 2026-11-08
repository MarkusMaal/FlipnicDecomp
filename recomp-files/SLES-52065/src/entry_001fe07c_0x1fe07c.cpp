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

// Function: entry_001fe07c
// Address: 0x1fe07c - 0x1fe08c
void entry_001fe07c_0x1fe07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe07c_0x1fe07c");
#endif

    ctx->pc = 0x1fe07cu;

    // 0x1fe07c: 0x30c3ffdf  andi        $v1, $a2, 0xFFDF
    ctx->pc = 0x1fe07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65503);
    // 0x1fe080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe084: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1FE084u;
    {
        const bool branch_taken_0x1fe084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE084u;
        // 0x1fe088: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe084) {
            ctx->pc = 0x1FE198u;
            return;
        }
    }
    ctx->pc = 0x1FE08Cu;
}
