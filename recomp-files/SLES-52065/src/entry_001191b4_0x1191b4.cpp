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

// Function: entry_001191b4
// Address: 0x1191b4 - 0x1191c4
void entry_001191b4_0x1191b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001191b4_0x1191b4");
#endif

    ctx->pc = 0x1191b4u;

    // 0x1191b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1191b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1191b8: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1191b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1191bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1191BCu;
    {
        const bool branch_taken_0x1191bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1191C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191BCu;
        // 0x1191c0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191bc) {
            ctx->pc = 0x119190u;
            return;
        }
    }
    ctx->pc = 0x1191C4u;
}
