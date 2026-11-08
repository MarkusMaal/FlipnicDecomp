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

// Function: entry_0013b5a0
// Address: 0x13b5a0 - 0x13b5cc
void entry_0013b5a0_0x13b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b5a0_0x13b5a0");
#endif

    ctx->pc = 0x13b5a0u;

    // 0x13b5a0: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x13b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x13b5a4: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x13b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x13b5a8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b5ac: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x13b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13b5b0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x13b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13b5b4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x13b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b5b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13b5bc: 0x94082b  sltu        $at, $a0, $s4
    ctx->pc = 0x13b5bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13b5c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13b5c4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B5C4u;
    {
        const bool branch_taken_0x13b5c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C4u;
        // 0x13b5c8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5c4) {
            ctx->pc = 0x13B624u;
            return;
        }
    }
    ctx->pc = 0x13B5CCu;
}
