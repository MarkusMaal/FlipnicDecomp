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

// Function: entry_0014368c
// Address: 0x14368c - 0x1436a4
void entry_0014368c_0x14368c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014368c_0x14368c");
#endif

    ctx->pc = 0x14368cu;

    // 0x14368c: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14368cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143690: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x143690u;
    {
        const bool branch_taken_0x143690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143690u;
        // 0x143694: 0x134900  sll         $t1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143690) {
            ctx->pc = 0x14374Cu;
            return;
        }
    }
    ctx->pc = 0x143698u;
    // 0x143698: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x143698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14369c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14369Cu;
    {
        const bool branch_taken_0x14369c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14369Cu;
        // 0x1436a0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14369c) {
            ctx->pc = 0x1436ECu;
            return;
        }
    }
    ctx->pc = 0x1436A4u;
}
