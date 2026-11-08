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

// Function: entry_001225ec
// Address: 0x1225ec - 0x12260c
void entry_001225ec_0x1225ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001225ec_0x1225ec");
#endif

    ctx->pc = 0x1225ecu;

    // 0x1225ec: 0x0  nop
    ctx->pc = 0x1225ecu;
    // NOP
    // 0x1225f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1225f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1225f4: 0x0  nop
    ctx->pc = 0x1225f4u;
    // NOP
    // 0x1225f8: 0x0  nop
    ctx->pc = 0x1225f8u;
    // NOP
    // 0x1225fc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1225FCu;
    {
        const bool branch_taken_0x1225fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225fc) {
            ctx->pc = 0x1225E8u;
            return;
        }
    }
    ctx->pc = 0x122604u;
    // 0x122604: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x122604u;
    {
        const bool branch_taken_0x122604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122604u;
        // 0x122608: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122604) {
            ctx->pc = 0x122630u;
            return;
        }
    }
    ctx->pc = 0x12260Cu;
}
