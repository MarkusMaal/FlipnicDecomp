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

// Function: entry_0017b5b4
// Address: 0x17b5b4 - 0x17b5c4
void entry_0017b5b4_0x17b5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5b4_0x17b5b4");
#endif

    ctx->pc = 0x17b5b4u;

    // 0x17b5b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B5B4u;
    {
        const bool branch_taken_0x17b5b4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5B4u;
        // 0x17b5b8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5b4) {
            ctx->pc = 0x17B5C4u;
            return;
        }
    }
    ctx->pc = 0x17B5BCu;
    // 0x17b5bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B5BCu;
    {
        const bool branch_taken_0x17b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5BCu;
        // 0x17b5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5bc) {
            ctx->pc = 0x17B5D0u;
            return;
        }
    }
    ctx->pc = 0x17B5C4u;
}
