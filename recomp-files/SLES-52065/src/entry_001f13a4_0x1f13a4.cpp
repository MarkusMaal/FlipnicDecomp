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

// Function: entry_001f13a4
// Address: 0x1f13a4 - 0x1f13c0
void entry_001f13a4_0x1f13a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f13a4_0x1f13a4");
#endif

    ctx->pc = 0x1f13a4u;

    // 0x1f13a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f13a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f13a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F13ACu;
    {
        const bool branch_taken_0x1f13ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13ACu;
        // 0x1f13b0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13ac) {
            ctx->pc = 0x1F13E8u;
            return;
        }
    }
    ctx->pc = 0x1F13B4u;
    // 0x1f13b4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f13b8: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f13b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f13bc: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f13c0u;
}
