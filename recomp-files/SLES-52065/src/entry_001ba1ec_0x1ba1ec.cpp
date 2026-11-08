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

// Function: entry_001ba1ec
// Address: 0x1ba1ec - 0x1ba204
void entry_001ba1ec_0x1ba1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba1ec_0x1ba1ec");
#endif

    ctx->pc = 0x1ba1ecu;

    // 0x1ba1ec: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1ba1f0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1ba1f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA1F4u;
    {
        const bool branch_taken_0x1ba1f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F4u;
        // 0x1ba1f8: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1f4) {
            ctx->pc = 0x1BA204u;
            return;
        }
    }
    ctx->pc = 0x1BA1FCu;
    // 0x1ba1fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba200: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ba200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1ba204u;
}
