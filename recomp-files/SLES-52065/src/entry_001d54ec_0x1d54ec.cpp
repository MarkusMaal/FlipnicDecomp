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

// Function: entry_001d54ec
// Address: 0x1d54ec - 0x1d54f8
void entry_001d54ec_0x1d54ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d54ec_0x1d54ec");
#endif

    ctx->pc = 0x1d54ecu;

    // 0x1d54ec: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1d54f0: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1D54F0u;
    {
        const bool branch_taken_0x1d54f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F0u;
        // 0x1d54f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54f0) {
            ctx->pc = 0x1D53B0u;
            return;
        }
    }
    ctx->pc = 0x1D54F8u;
}
