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

// Function: entry_001e8504
// Address: 0x1e8504 - 0x1e8524
void entry_001e8504_0x1e8504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8504_0x1e8504");
#endif

    ctx->pc = 0x1e8504u;

    // 0x1e8504: 0x0  nop
    ctx->pc = 0x1e8504u;
    // NOP
    // 0x1e8508: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e850c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e8510: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e8514: 0xb2302b  sltu        $a2, $a1, $s2
    ctx->pc = 0x1e8514u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e8518: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e851c: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E851Cu;
    {
        const bool branch_taken_0x1e851c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E851Cu;
        // 0x1e8520: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e851c) {
            ctx->pc = 0x1E84D4u;
            return;
        }
    }
    ctx->pc = 0x1E8524u;
}
