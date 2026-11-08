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

// Function: entry_0017e838
// Address: 0x17e838 - 0x17e85c
void entry_0017e838_0x17e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e838_0x17e838");
#endif

    ctx->pc = 0x17e838u;

    // 0x17e838: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E838u;
    {
        const bool branch_taken_0x17e838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e838) {
            ctx->pc = 0x17E8A4u;
            return;
        }
    }
    ctx->pc = 0x17E840u;
    // 0x17e840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e844: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E844u;
    {
        const bool branch_taken_0x17e844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e844) {
            ctx->pc = 0x17E880u;
            return;
        }
    }
    ctx->pc = 0x17E84Cu;
    // 0x17e84c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E84Cu;
    {
        const bool branch_taken_0x17e84c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e84c) {
            ctx->pc = 0x17E85Cu;
            return;
        }
    }
    ctx->pc = 0x17E854u;
    // 0x17e854: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17E854u;
    {
        const bool branch_taken_0x17e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E854u;
        // 0x17e858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e854) {
            ctx->pc = 0x17E8CCu;
            return;
        }
    }
    ctx->pc = 0x17E85Cu;
}
