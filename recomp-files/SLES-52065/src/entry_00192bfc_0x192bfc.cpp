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

// Function: entry_00192bfc
// Address: 0x192bfc - 0x192c0c
void entry_00192bfc_0x192bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192bfc_0x192bfc");
#endif

    ctx->pc = 0x192bfcu;

    // 0x192bfc: 0x0  nop
    ctx->pc = 0x192bfcu;
    // NOP
    // 0x192c00: 0x8a482a  slt         $t1, $a0, $t2
    ctx->pc = 0x192c00u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x192c04: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x192C04u;
    {
        const bool branch_taken_0x192c04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C04u;
        // 0x192c08: 0x16c4821  addu        $t1, $t3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c04) {
            ctx->pc = 0x192B98u;
            return;
        }
    }
    ctx->pc = 0x192C0Cu;
}
