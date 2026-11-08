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

// Function: entry_00187dfc
// Address: 0x187dfc - 0x187e20
void entry_00187dfc_0x187dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187dfc_0x187dfc");
#endif

    ctx->pc = 0x187dfcu;

label_187dfc:
    // 0x187dfc: 0x0  nop
    ctx->pc = 0x187dfcu;
    // NOP
    // 0x187e00: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x187e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x187e04: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x187e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x187e08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x187e0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x187e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187e10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x187e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x187e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187e18: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x187E18u;
    {
        const bool branch_taken_0x187e18 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x187E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E18u;
        // 0x187e1c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e18) {
            ctx->pc = 0x187DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187dfc;
        }
    }
    ctx->pc = 0x187E20u;
}
