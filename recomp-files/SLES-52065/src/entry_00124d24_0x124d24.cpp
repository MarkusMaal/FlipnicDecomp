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

// Function: entry_00124d24
// Address: 0x124d24 - 0x124d40
void entry_00124d24_0x124d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124d24_0x124d24");
#endif

    ctx->pc = 0x124d24u;

    // 0x124d24: 0x0  nop
    ctx->pc = 0x124d24u;
    // NOP
    // 0x124d28: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x124d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x124d2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x124d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124d30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x124D30u;
    {
        const bool branch_taken_0x124d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D30u;
        // 0x124d34: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d30) {
            ctx->pc = 0x124CF8u;
            return;
        }
    }
    ctx->pc = 0x124D38u;
    // 0x124d38: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x124d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x124d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124d40u;
}
