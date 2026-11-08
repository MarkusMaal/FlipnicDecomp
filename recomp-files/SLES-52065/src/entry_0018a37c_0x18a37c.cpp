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

// Function: entry_0018a37c
// Address: 0x18a37c - 0x18a39c
void entry_0018a37c_0x18a37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a37c_0x18a37c");
#endif

    ctx->pc = 0x18a37cu;

    // 0x18a37c: 0x0  nop
    ctx->pc = 0x18a37cu;
    // NOP
    // 0x18a380: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x18a380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a384: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18A384u;
    {
        const bool branch_taken_0x18a384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A384u;
        // 0x18a388: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a384) {
            ctx->pc = 0x18A310u;
            return;
        }
    }
    ctx->pc = 0x18A38Cu;
    // 0x18a38c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x18a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x18a390: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A390u;
    {
        const bool branch_taken_0x18a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a390) {
            ctx->pc = 0x18A39Cu;
            return;
        }
    }
    ctx->pc = 0x18A398u;
    // 0x18a398: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18a398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x18a39cu;
}
