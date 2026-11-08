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

// Function: entry_00200388
// Address: 0x200388 - 0x2003a4
void entry_00200388_0x200388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200388_0x200388");
#endif

    ctx->pc = 0x200388u;

label_200388:
    // 0x200388: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20038c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x200390: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x200390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x200394: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x200394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x200398: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x20039c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20039Cu;
    {
        const bool branch_taken_0x20039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20039c) {
            ctx->pc = 0x200388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200388;
        }
    }
    ctx->pc = 0x2003A4u;
}
