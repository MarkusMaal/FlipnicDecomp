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

// Function: entry_001a34dc
// Address: 0x1a34dc - 0x1a34f8
void entry_001a34dc_0x1a34dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a34dc_0x1a34dc");
#endif

    ctx->pc = 0x1a34dcu;

label_1a34dc:
    // 0x1a34dc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a34e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a34e4: 0xac400798  sw          $zero, 0x798($v0)
    ctx->pc = 0x1a34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1944), GPR_U32(ctx, 0));
    // 0x1a34e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a34ec: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x1a34ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a34f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A34F0u;
    {
        const bool branch_taken_0x1a34f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a34f0) {
            ctx->pc = 0x1A34DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a34dc;
        }
    }
    ctx->pc = 0x1A34F8u;
}
