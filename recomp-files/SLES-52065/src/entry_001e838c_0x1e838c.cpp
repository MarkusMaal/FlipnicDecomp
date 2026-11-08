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

// Function: entry_001e838c
// Address: 0x1e838c - 0x1e83b4
void entry_001e838c_0x1e838c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e838c_0x1e838c");
#endif

    ctx->pc = 0x1e838cu;

    // 0x1e838c: 0x0  nop
    ctx->pc = 0x1e838cu;
    // NOP
    // 0x1e8390: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1e8390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e8394: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1e8394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e8398: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e839c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x1e839cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e83a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E83A0u;
    {
        const bool branch_taken_0x1e83a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83A0u;
        // 0x1e83a4: 0x205082b  sltu        $at, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83a0) {
            ctx->pc = 0x1E83B4u;
            return;
        }
    }
    ctx->pc = 0x1E83A8u;
    // 0x1e83a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E83A8u;
    {
        const bool branch_taken_0x1e83a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83a8) {
            ctx->pc = 0x1E83B4u;
            return;
        }
    }
    ctx->pc = 0x1E83B0u;
    // 0x1e83b0: 0x20b8021  addu        $s0, $s0, $t3
    ctx->pc = 0x1e83b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    ctx->pc = 0x1e83b4u;
}
