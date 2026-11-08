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

// Function: entry_0017e4e8
// Address: 0x17e4e8 - 0x17e50c
void entry_0017e4e8_0x17e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e4e8_0x17e4e8");
#endif

    ctx->pc = 0x17e4e8u;

    // 0x17e4e8: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E4E8u;
    {
        const bool branch_taken_0x17e4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e4e8) {
            ctx->pc = 0x17E554u;
            return;
        }
    }
    ctx->pc = 0x17E4F0u;
    // 0x17e4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e4f4: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E4F4u;
    {
        const bool branch_taken_0x17e4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e4f4) {
            ctx->pc = 0x17E530u;
            return;
        }
    }
    ctx->pc = 0x17E4FCu;
    // 0x17e4fc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E4FCu;
    {
        const bool branch_taken_0x17e4fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4fc) {
            ctx->pc = 0x17E50Cu;
            return;
        }
    }
    ctx->pc = 0x17E504u;
    // 0x17e504: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x17E504u;
    {
        const bool branch_taken_0x17e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E504u;
        // 0x17e508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e504) {
            ctx->pc = 0x17E5BCu;
            return;
        }
    }
    ctx->pc = 0x17E50Cu;
}
