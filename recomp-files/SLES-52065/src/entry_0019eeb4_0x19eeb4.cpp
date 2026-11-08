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

// Function: entry_0019eeb4
// Address: 0x19eeb4 - 0x19eec4
void entry_0019eeb4_0x19eeb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eeb4_0x19eeb4");
#endif

    ctx->pc = 0x19eeb4u;

    // 0x19eeb4: 0x0  nop
    ctx->pc = 0x19eeb4u;
    // NOP
    // 0x19eeb8: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x19eeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19eebc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19EEBCu;
    {
        const bool branch_taken_0x19eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEBCu;
        // 0x19eec0: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eebc) {
            ctx->pc = 0x19EE9Cu;
            return;
        }
    }
    ctx->pc = 0x19EEC4u;
}
