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

// Function: entry_001e7db4
// Address: 0x1e7db4 - 0x1e7de4
void entry_001e7db4_0x1e7db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7db4_0x1e7db4");
#endif

    ctx->pc = 0x1e7db4u;

    // 0x1e7db4: 0x0  nop
    ctx->pc = 0x1e7db4u;
    // NOP
    // 0x1e7db8: 0xf12823  subu        $a1, $a3, $s1
    ctx->pc = 0x1e7db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1e7dbc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1e7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e7dc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e7dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7dc4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1e7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7dc8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1e7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7dcc: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x1e7dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7dd0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7DD0u;
    {
        const bool branch_taken_0x1e7dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DD0u;
        // 0x1e7dd4: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dd0) {
            ctx->pc = 0x1E7DE4u;
            return;
        }
    }
    ctx->pc = 0x1E7DD8u;
    // 0x1e7dd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7DD8u;
    {
        const bool branch_taken_0x1e7dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7dd8) {
            ctx->pc = 0x1E7DE4u;
            return;
        }
    }
    ctx->pc = 0x1E7DE0u;
    // 0x1e7de0: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x1e7de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    ctx->pc = 0x1e7de4u;
}
