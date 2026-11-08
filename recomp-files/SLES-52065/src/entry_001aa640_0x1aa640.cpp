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

// Function: entry_001aa640
// Address: 0x1aa640 - 0x1aa660
void entry_001aa640_0x1aa640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa640_0x1aa640");
#endif

    ctx->pc = 0x1aa640u;

    // 0x1aa640: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1aa640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1aa644: 0x2b23821  addu        $a3, $s5, $s2
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1aa648: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1aa648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1aa64c: 0x24e8067c  addiu       $t0, $a3, 0x67C
    ctx->pc = 0x1aa64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1660));
    // 0x1aa650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA658u;
    {
        const bool branch_taken_0x1aa658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA658u;
        // 0x1aa65c: 0xace2067c  sw          $v0, 0x67C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa658) {
            ctx->pc = 0x1AA678u;
            return;
        }
    }
    ctx->pc = 0x1AA660u;
}
