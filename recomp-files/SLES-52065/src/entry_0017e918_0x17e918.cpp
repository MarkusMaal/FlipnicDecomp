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

// Function: entry_0017e918
// Address: 0x17e918 - 0x17e93c
void entry_0017e918_0x17e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e918_0x17e918");
#endif

    ctx->pc = 0x17e918u;

    // 0x17e918: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E918u;
    {
        const bool branch_taken_0x17e918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e918) {
            ctx->pc = 0x17E984u;
            return;
        }
    }
    ctx->pc = 0x17E920u;
    // 0x17e920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e924: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E924u;
    {
        const bool branch_taken_0x17e924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e924) {
            ctx->pc = 0x17E960u;
            return;
        }
    }
    ctx->pc = 0x17E92Cu;
    // 0x17e92c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E92Cu;
    {
        const bool branch_taken_0x17e92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e92c) {
            ctx->pc = 0x17E93Cu;
            return;
        }
    }
    ctx->pc = 0x17E934u;
    // 0x17e934: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17E934u;
    {
        const bool branch_taken_0x17e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E934u;
        // 0x17e938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e934) {
            ctx->pc = 0x17E9A0u;
            return;
        }
    }
    ctx->pc = 0x17E93Cu;
}
