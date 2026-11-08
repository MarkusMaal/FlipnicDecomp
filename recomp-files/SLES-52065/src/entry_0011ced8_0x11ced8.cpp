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

// Function: entry_0011ced8
// Address: 0x11ced8 - 0x11cee4
void entry_0011ced8_0x11ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ced8_0x11ced8");
#endif

    ctx->pc = 0x11ced8u;

    // 0x11ced8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cedc: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x11CEDCu;
    {
        const bool branch_taken_0x11cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEDCu;
        // 0x11cee0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cedc) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CEE4u;
}
