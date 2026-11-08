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

// Function: entry_001fd5fc
// Address: 0x1fd5fc - 0x1fd608
void entry_001fd5fc_0x1fd5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd5fc_0x1fd5fc");
#endif

    ctx->pc = 0x1fd5fcu;

    // 0x1fd5fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd600: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD600u;
    {
        const bool branch_taken_0x1fd600 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD600u;
        // 0x1fd604: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd600) {
            ctx->pc = 0x1FD61Cu;
            return;
        }
    }
    ctx->pc = 0x1FD608u;
}
