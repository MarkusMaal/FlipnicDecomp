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

// Function: entry_001471e0
// Address: 0x1471e0 - 0x1471f4
void entry_001471e0_0x1471e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001471e0_0x1471e0");
#endif

    ctx->pc = 0x1471e0u;

    // 0x1471e0: 0x2b01023  subu        $v0, $s5, $s0
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1471e4: 0x215082b  sltu        $at, $s0, $s5
    ctx->pc = 0x1471e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1471e8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x1471E8u;
    {
        const bool branch_taken_0x1471e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E8u;
        // 0x1471ec: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e8) {
            ctx->pc = 0x1472A0u;
            return;
        }
    }
    ctx->pc = 0x1471F0u;
    // 0x1471f0: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x1471f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1471f4u;
}
