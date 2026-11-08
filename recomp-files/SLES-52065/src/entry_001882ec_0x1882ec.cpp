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

// Function: entry_001882ec
// Address: 0x1882ec - 0x188310
void entry_001882ec_0x1882ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882ec_0x1882ec");
#endif

    ctx->pc = 0x1882ecu;

label_1882ec:
    // 0x1882ec: 0x0  nop
    ctx->pc = 0x1882ecu;
    // NOP
    // 0x1882f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1882f4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1882f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1882f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1882fc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1882fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188300: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x188300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x188304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188308: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188308u;
    {
        const bool branch_taken_0x188308 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188308u;
        // 0x18830c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188308) {
            ctx->pc = 0x1882ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1882ec;
        }
    }
    ctx->pc = 0x188310u;
}
