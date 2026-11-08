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

// Function: entry_001a5820
// Address: 0x1a5820 - 0x1a583c
void entry_001a5820_0x1a5820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5820_0x1a5820");
#endif

    ctx->pc = 0x1a5820u;

label_1a5820:
    // 0x1a5820: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1a5824: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a5828: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x1a5828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x1a582c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a5830: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x1a5830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5834: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5834u;
    {
        const bool branch_taken_0x1a5834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5834) {
            ctx->pc = 0x1A5820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5820;
        }
    }
    ctx->pc = 0x1A583Cu;
}
