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

// Function: entry_00200fc0
// Address: 0x200fc0 - 0x200fe4
void entry_00200fc0_0x200fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200fc0_0x200fc0");
#endif

    ctx->pc = 0x200fc0u;

    // 0x200fc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200fc4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x200fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x200fc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200fcc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200fd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200fd4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200fd8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x200fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x200fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200FDCu;
    {
        const bool branch_taken_0x200fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FDCu;
        // 0x200fe0: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fdc) {
            ctx->pc = 0x200FF0u;
            return;
        }
    }
    ctx->pc = 0x200FE4u;
}
