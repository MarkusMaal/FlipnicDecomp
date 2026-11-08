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

// Function: entry_0020ada8
// Address: 0x20ada8 - 0x20adb4
void entry_0020ada8_0x20ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ada8_0x20ada8");
#endif

    ctx->pc = 0x20ada8u;

    // 0x20ada8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x20ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x20adac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20ADACu;
    {
        const bool branch_taken_0x20adac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADACu;
        // 0x20adb0: 0x24845e28  addiu       $a0, $a0, 0x5E28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adac) {
            ctx->pc = 0x20ADBCu;
            return;
        }
    }
    ctx->pc = 0x20ADB4u;
}
