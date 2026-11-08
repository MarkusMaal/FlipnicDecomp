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

// Function: entry_00107da4
// Address: 0x107da4 - 0x107dbc
void entry_00107da4_0x107da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107da4_0x107da4");
#endif

    ctx->pc = 0x107da4u;

    // 0x107da4: 0x0  nop
    ctx->pc = 0x107da4u;
    // NOP
    // 0x107da8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x107da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x107dac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x107dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x107db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107db4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107DB4u;
    {
        const bool branch_taken_0x107db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DB4u;
        // 0x107db8: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107db4) {
            ctx->pc = 0x107DD0u;
            return;
        }
    }
    ctx->pc = 0x107DBCu;
}
