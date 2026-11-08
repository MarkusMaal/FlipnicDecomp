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

// Function: entry_001e07f0
// Address: 0x1e07f0 - 0x1e0820
void entry_001e07f0_0x1e07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e07f0_0x1e07f0");
#endif

    ctx->pc = 0x1e07f0u;

    // 0x1e07f0: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e07f4: 0x2543a310  addiu       $v1, $t2, -0x5CF0
    ctx->pc = 0x1e07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x1e07f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e07fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0804: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e080c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1e080cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e0810: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0814: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E0814u;
    {
        const bool branch_taken_0x1e0814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0814u;
        // 0x1e0818: 0xa0690000  sb          $t1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0814) {
            ctx->pc = 0x1E0948u;
            return;
        }
    }
    ctx->pc = 0x1E081Cu;
    // 0x1e081c: 0x0  nop
    ctx->pc = 0x1e081cu;
    // NOP
    ctx->pc = 0x1e0820u;
}
