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

// Function: entry_001129dc
// Address: 0x1129dc - 0x112a00
void entry_001129dc_0x1129dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001129dc_0x1129dc");
#endif

    ctx->pc = 0x1129dcu;

    // 0x1129dc: 0x0  nop
    ctx->pc = 0x1129dcu;
    // NOP
    // 0x1129e0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1129e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1129e4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1129e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1129e8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1129E8u;
    {
        const bool branch_taken_0x1129e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1129e8) {
            ctx->pc = 0x1129ACu;
            return;
        }
    }
    ctx->pc = 0x1129F0u;
    // 0x1129f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1129f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1129f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1129f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1129f8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1129F8u;
    {
        const bool branch_taken_0x1129f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129F8u;
        // 0x1129fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129f8) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x112A00u;
}
