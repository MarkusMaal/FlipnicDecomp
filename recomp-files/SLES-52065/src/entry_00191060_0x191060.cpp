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

// Function: entry_00191060
// Address: 0x191060 - 0x19107c
void entry_00191060_0x191060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191060_0x191060");
#endif

    ctx->pc = 0x191060u;

    // 0x191060: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x191060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x191064: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x191064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x191068: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191068u;
        // 0x19106c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191068) {
            ctx->pc = 0x19103Cu;
            return;
        }
    }
    ctx->pc = 0x191070u;
    // 0x191070: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x191070u;
    {
        const bool branch_taken_0x191070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191070) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191078u;
    // 0x191078: 0x2629002c  addiu       $t1, $s1, 0x2C
    ctx->pc = 0x191078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->pc = 0x19107cu;
}
