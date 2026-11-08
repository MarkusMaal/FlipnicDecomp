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

// Function: entry_0012159c
// Address: 0x12159c - 0x1215b4
void entry_0012159c_0x12159c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012159c_0x12159c");
#endif

    ctx->pc = 0x12159cu;

    // 0x12159c: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x12159cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x1215a0: 0x1e3080  sll         $a2, $fp, 2
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1215a4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x1215a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1215a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1215a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215ac: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1215ACu;
    {
        const bool branch_taken_0x1215ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215ACu;
        // 0x1215b0: 0x662021  addu        $a0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215ac) {
            ctx->pc = 0x1215D0u;
            return;
        }
    }
    ctx->pc = 0x1215B4u;
}
