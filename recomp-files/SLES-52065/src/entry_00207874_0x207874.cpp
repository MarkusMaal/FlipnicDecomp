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

// Function: entry_00207874
// Address: 0x207874 - 0x207884
void entry_00207874_0x207874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207874_0x207874");
#endif

    ctx->pc = 0x207874u;

    // 0x207874: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x207878: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x207878u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x20787c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20787Cu;
    {
        const bool branch_taken_0x20787c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20787c) {
            ctx->pc = 0x207880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20787Cu;
            // 0x207880: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207884u;
            return;
        }
    }
    ctx->pc = 0x207884u;
}
