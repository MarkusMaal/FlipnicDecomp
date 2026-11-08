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

// Function: entry_0013b3e4
// Address: 0x13b3e4 - 0x13b418
void entry_0013b3e4_0x13b3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b3e4_0x13b3e4");
#endif

    ctx->pc = 0x13b3e4u;

    // 0x13b3e4: 0x0  nop
    ctx->pc = 0x13b3e4u;
    // NOP
    // 0x13b3e8: 0x732823  subu        $a1, $v1, $s3
    ctx->pc = 0x13b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13b3ec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b3f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b3f4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x13b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b3f8: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x13b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b3fc: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b400: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B400u;
    {
        const bool branch_taken_0x13b400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B400u;
        // 0x13b404: 0x2854821  addu        $t1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b400) {
            ctx->pc = 0x13B41Cu;
            return;
        }
    }
    ctx->pc = 0x13B408u;
    // 0x13b408: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x13b408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b40c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B40Cu;
    {
        const bool branch_taken_0x13b40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b40c) {
            ctx->pc = 0x13B418u;
            return;
        }
    }
    ctx->pc = 0x13B414u;
    // 0x13b414: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x13b414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    ctx->pc = 0x13b418u;
}
