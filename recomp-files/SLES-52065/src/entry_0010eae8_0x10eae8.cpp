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

// Function: entry_0010eae8
// Address: 0x10eae8 - 0x10eafc
void entry_0010eae8_0x10eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eae8_0x10eae8");
#endif

    ctx->pc = 0x10eae8u;

    // 0x10eae8: 0x8e250224  lw          $a1, 0x224($s1)
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10eaec: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x10eaecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10eaf0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x10EAF0u;
    {
        const bool branch_taken_0x10eaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAF0u;
        // 0x10eaf4: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaf0) {
            ctx->pc = 0x10EA98u;
            return;
        }
    }
    ctx->pc = 0x10EAF8u;
    // 0x10eaf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10eaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10eafcu;
}
