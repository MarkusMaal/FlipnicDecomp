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

// Function: entry_00121904
// Address: 0x121904 - 0x121918
void entry_00121904_0x121904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121904_0x121904");
#endif

    ctx->pc = 0x121904u;

    // 0x121904: 0x0  nop
    ctx->pc = 0x121904u;
    // NOP
    // 0x121908: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x121908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12190c: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x12190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x121910: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x121910u;
    {
        const bool branch_taken_0x121910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121910u;
        // 0x121914: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121910) {
            ctx->pc = 0x1218E8u;
            return;
        }
    }
    ctx->pc = 0x121918u;
}
