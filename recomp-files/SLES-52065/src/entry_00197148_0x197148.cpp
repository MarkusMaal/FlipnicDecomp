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

// Function: entry_00197148
// Address: 0x197148 - 0x197178
void entry_00197148_0x197148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197148_0x197148");
#endif

    ctx->pc = 0x197148u;

    // 0x197148: 0x8ea306d4  lw          $v1, 0x6D4($s5)
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1748)));
    // 0x19714c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197150: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x197150u;
    {
        const bool branch_taken_0x197150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197150u;
        // 0x197154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197150) {
            ctx->pc = 0x197278u;
            return;
        }
    }
    ctx->pc = 0x197158u;
    // 0x197158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19715c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x19715Cu;
    {
        const bool branch_taken_0x19715c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19715Cu;
        // 0x197160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19715c) {
            ctx->pc = 0x1971E4u;
            return;
        }
    }
    ctx->pc = 0x197164u;
    // 0x197164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197164u;
    {
        const bool branch_taken_0x197164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197164u;
        // 0x197168: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197164) {
            ctx->pc = 0x197178u;
            return;
        }
    }
    ctx->pc = 0x19716Cu;
    // 0x19716c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x19716Cu;
    {
        const bool branch_taken_0x19716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19716c) {
            ctx->pc = 0x197300u;
            return;
        }
    }
    ctx->pc = 0x197174u;
    // 0x197174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197178u;
}
