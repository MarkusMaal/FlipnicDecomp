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

// Function: entry_0020ac7c
// Address: 0x20ac7c - 0x20aca0
void entry_0020ac7c_0x20ac7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ac7c_0x20ac7c");
#endif

    ctx->pc = 0x20ac7cu;

    // 0x20ac7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20ac80: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x20ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x20ac84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x20ac88: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x20ac88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20ac8c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20AC8Cu;
    {
        const bool branch_taken_0x20ac8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC8Cu;
        // 0x20ac90: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac8c) {
            ctx->pc = 0x20ACBCu;
            return;
        }
    }
    ctx->pc = 0x20AC94u;
    // 0x20ac94: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20ac98: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x20ac98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x20ac9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20ac9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20aca0u;
}
