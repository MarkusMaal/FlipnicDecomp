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

// Function: entry_0017808c
// Address: 0x17808c - 0x1780a8
void entry_0017808c_0x17808c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017808c_0x17808c");
#endif

    ctx->pc = 0x17808cu;

    // 0x17808c: 0x0  nop
    ctx->pc = 0x17808cu;
    // NOP
    // 0x178090: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x178094: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x178094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178098: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x178098u;
    {
        const bool branch_taken_0x178098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178098) {
            ctx->pc = 0x178038u;
            return;
        }
    }
    ctx->pc = 0x1780A0u;
    // 0x1780a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1780A0u;
    {
        const bool branch_taken_0x1780a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780A0u;
        // 0x1780a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780a0) {
            ctx->pc = 0x1780CCu;
            return;
        }
    }
    ctx->pc = 0x1780A8u;
}
