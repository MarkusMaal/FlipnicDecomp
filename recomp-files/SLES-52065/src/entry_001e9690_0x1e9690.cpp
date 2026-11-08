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

// Function: entry_001e9690
// Address: 0x1e9690 - 0x1e96b4
void entry_001e9690_0x1e9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9690_0x1e9690");
#endif

    ctx->pc = 0x1e9690u;

    // 0x1e9690: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e9690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e9694: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9694u;
    {
        const bool branch_taken_0x1e9694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9694u;
        // 0x1e9698: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9694) {
            ctx->pc = 0x1E96B4u;
            return;
        }
    }
    ctx->pc = 0x1E969Cu;
    // 0x1e969c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e969cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e96a0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1e96a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1e96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e96a8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e96a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e96ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E96ACu;
    {
        const bool branch_taken_0x1e96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96ACu;
        // 0x1e96b0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96ac) {
            ctx->pc = 0x1E9708u;
            return;
        }
    }
    ctx->pc = 0x1E96B4u;
}
