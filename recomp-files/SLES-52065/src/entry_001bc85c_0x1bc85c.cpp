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

// Function: entry_001bc85c
// Address: 0x1bc85c - 0x1bc870
void entry_001bc85c_0x1bc85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc85c_0x1bc85c");
#endif

    ctx->pc = 0x1bc85cu;

    // 0x1bc85c: 0x0  nop
    ctx->pc = 0x1bc85cu;
    // NOP
    // 0x1bc860: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bc864: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1bc864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1bc868: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC868u;
        // 0x1bc86c: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC7D8u;
            return;
        }
    }
    ctx->pc = 0x1BC870u;
}
