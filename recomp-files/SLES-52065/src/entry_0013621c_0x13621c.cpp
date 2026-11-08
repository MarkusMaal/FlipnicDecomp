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

// Function: entry_0013621c
// Address: 0x13621c - 0x136234
void entry_0013621c_0x13621c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013621c_0x13621c");
#endif

    ctx->pc = 0x13621cu;

    // 0x13621c: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x13621cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x136220: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x136220u;
    {
        const bool branch_taken_0x136220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136220u;
        // 0x136224: 0x134880  sll         $t1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136220) {
            ctx->pc = 0x1362ACu;
            return;
        }
    }
    ctx->pc = 0x136228u;
    // 0x136228: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x136228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13622c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13622Cu;
    {
        const bool branch_taken_0x13622c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13622Cu;
        // 0x136230: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13622c) {
            ctx->pc = 0x136264u;
            return;
        }
    }
    ctx->pc = 0x136234u;
}
