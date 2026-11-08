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

// Function: entry_001365fc
// Address: 0x1365fc - 0x136618
void entry_001365fc_0x1365fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001365fc_0x1365fc");
#endif

    ctx->pc = 0x1365fcu;

label_1365fc:
    // 0x1365fc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1365fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x136600: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x136604: 0x0  nop
    ctx->pc = 0x136604u;
    // NOP
    // 0x136608: 0x0  nop
    ctx->pc = 0x136608u;
    // NOP
    // 0x13660c: 0x0  nop
    ctx->pc = 0x13660cu;
    // NOP
    // 0x136610: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136610u;
    {
        const bool branch_taken_0x136610 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x136610) {
            ctx->pc = 0x1365FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1365fc;
        }
    }
    ctx->pc = 0x136618u;
}
