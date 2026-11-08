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

// Function: entry_0020a64c
// Address: 0x20a64c - 0x20a670
void entry_0020a64c_0x20a64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a64c_0x20a64c");
#endif

    ctx->pc = 0x20a64cu;

    // 0x20a64c: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x20a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x20a650: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x20a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x20a654: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A654u;
    {
        const bool branch_taken_0x20a654 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A654u;
        // 0x20a658: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a654) {
            ctx->pc = 0x20A670u;
            return;
        }
    }
    ctx->pc = 0x20A65Cu;
    // 0x20a65c: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x20a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x20a660: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20a664: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x20a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x20a668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A668u;
    {
        const bool branch_taken_0x20a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A668u;
        // 0x20a66c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a668) {
            ctx->pc = 0x20A674u;
            return;
        }
    }
    ctx->pc = 0x20A670u;
}
