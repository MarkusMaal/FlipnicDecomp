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

// Function: entry_001b27c4
// Address: 0x1b27c4 - 0x1b27e4
void entry_001b27c4_0x1b27c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b27c4_0x1b27c4");
#endif

    ctx->pc = 0x1b27c4u;

    // 0x1b27c4: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x1b27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1b27c8: 0x2644ffa0  addiu       $a0, $s2, -0x60
    ctx->pc = 0x1b27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
    // 0x1b27cc: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1b27ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b27d0: 0x7e1823  subu        $v1, $v1, $fp
    ctx->pc = 0x1b27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1b27d4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B27D4u;
    {
        const bool branch_taken_0x1b27d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27D4u;
        // 0x1b27d8: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27d4) {
            ctx->pc = 0x1B27E4u;
            return;
        }
    }
    ctx->pc = 0x1B27DCu;
    // 0x1b27dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b27e0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1b27e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1b27e4u;
}
