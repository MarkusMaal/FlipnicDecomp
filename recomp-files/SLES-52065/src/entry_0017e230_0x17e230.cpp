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

// Function: entry_0017e230
// Address: 0x17e230 - 0x17e254
void entry_0017e230_0x17e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e230_0x17e230");
#endif

    ctx->pc = 0x17e230u;

    // 0x17e230: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E230u;
    {
        const bool branch_taken_0x17e230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e230) {
            ctx->pc = 0x17E29Cu;
            return;
        }
    }
    ctx->pc = 0x17E238u;
    // 0x17e238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e23c: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E23Cu;
    {
        const bool branch_taken_0x17e23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e23c) {
            ctx->pc = 0x17E278u;
            return;
        }
    }
    ctx->pc = 0x17E244u;
    // 0x17e244: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E244u;
    {
        const bool branch_taken_0x17e244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e244) {
            ctx->pc = 0x17E254u;
            return;
        }
    }
    ctx->pc = 0x17E24Cu;
    // 0x17e24c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17E24Cu;
    {
        const bool branch_taken_0x17e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E24Cu;
        // 0x17e250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e24c) {
            ctx->pc = 0x17E2B8u;
            return;
        }
    }
    ctx->pc = 0x17E254u;
}
