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

// Function: entry_001432ec
// Address: 0x1432ec - 0x143308
void entry_001432ec_0x1432ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001432ec_0x1432ec");
#endif

    ctx->pc = 0x1432ecu;

    // 0x1432ec: 0x0  nop
    ctx->pc = 0x1432ecu;
    // NOP
    // 0x1432f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1432f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1432f4: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x1432f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1432f8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1432F8u;
    {
        const bool branch_taken_0x1432f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1432FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432F8u;
        // 0x1432fc: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432f8) {
            ctx->pc = 0x1432BCu;
            return;
        }
    }
    ctx->pc = 0x143300u;
    // 0x143300: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x143300u;
    {
        const bool branch_taken_0x143300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143300) {
            ctx->pc = 0x143358u;
            return;
        }
    }
    ctx->pc = 0x143308u;
}
