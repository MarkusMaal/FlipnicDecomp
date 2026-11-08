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

// Function: entry_001aa3dc
// Address: 0x1aa3dc - 0x1aa3f4
void entry_001aa3dc_0x1aa3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa3dc_0x1aa3dc");
#endif

    ctx->pc = 0x1aa3dcu;

    // 0x1aa3dc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1aa3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa3e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aa3e4: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA3E4u;
    {
        const bool branch_taken_0x1aa3e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E4u;
        // 0x1aa3e8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3e4) {
            ctx->pc = 0x1AA414u;
            return;
        }
    }
    ctx->pc = 0x1AA3ECu;
    // 0x1aa3ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA3ECu;
    {
        const bool branch_taken_0x1aa3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3ECu;
        // 0x1aa3f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3ec) {
            ctx->pc = 0x1AA414u;
            return;
        }
    }
    ctx->pc = 0x1AA3F4u;
}
