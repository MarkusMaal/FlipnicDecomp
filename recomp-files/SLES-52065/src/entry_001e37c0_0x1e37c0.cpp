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

// Function: entry_001e37c0
// Address: 0x1e37c0 - 0x1e37d8
void entry_001e37c0_0x1e37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e37c0_0x1e37c0");
#endif

    ctx->pc = 0x1e37c0u;

    // 0x1e37c0: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1e37c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1e37c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e37c8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E37C8u;
    {
        const bool branch_taken_0x1e37c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e37c8) {
            ctx->pc = 0x1E37D8u;
            return;
        }
    }
    ctx->pc = 0x1E37D0u;
    // 0x1e37d0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E37D0u;
    {
        const bool branch_taken_0x1e37d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D0u;
        // 0x1e37d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37d0) {
            ctx->pc = 0x1E3810u;
            return;
        }
    }
    ctx->pc = 0x1E37D8u;
}
