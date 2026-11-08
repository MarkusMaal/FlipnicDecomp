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

// Function: entry_00110188
// Address: 0x110188 - 0x1101a4
void entry_00110188_0x110188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110188_0x110188");
#endif

    ctx->pc = 0x110188u;

    // 0x110188: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11018c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11018Cu;
    {
        const bool branch_taken_0x11018c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11018c) {
            ctx->pc = 0x110144u;
            return;
        }
    }
    ctx->pc = 0x110194u;
    // 0x110194: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x110194u;
    {
        const bool branch_taken_0x110194 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110194u;
        // 0x110198: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110194) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x11019Cu;
    // 0x11019c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11019Cu;
    {
        const bool branch_taken_0x11019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11019Cu;
        // 0x1101a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11019c) {
            ctx->pc = 0x1101D4u;
            return;
        }
    }
    ctx->pc = 0x1101A4u;
}
