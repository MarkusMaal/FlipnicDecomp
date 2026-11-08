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

// Function: entry_001128b4
// Address: 0x1128b4 - 0x1128d8
void entry_001128b4_0x1128b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001128b4_0x1128b4");
#endif

    ctx->pc = 0x1128b4u;

    // 0x1128b4: 0x0  nop
    ctx->pc = 0x1128b4u;
    // NOP
    // 0x1128b8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1128b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1128bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1128bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1128c0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1128C0u;
    {
        const bool branch_taken_0x1128c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1128c0) {
            ctx->pc = 0x112884u;
            return;
        }
    }
    ctx->pc = 0x1128C8u;
    // 0x1128c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1128cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1128ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1128d0: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1128D0u;
    {
        const bool branch_taken_0x1128d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128D0u;
        // 0x1128d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128d0) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x1128D8u;
}
