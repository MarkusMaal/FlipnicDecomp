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

// Function: entry_00176f4c
// Address: 0x176f4c - 0x176f70
void entry_00176f4c_0x176f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176f4c_0x176f4c");
#endif

    ctx->pc = 0x176f4cu;

label_176f4c:
    // 0x176f4c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x176f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176f50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x176f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x176f54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x176f54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x176f58: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x176f5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x176f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x176f60: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176F60u;
    {
        const bool branch_taken_0x176f60 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x176f60) {
            ctx->pc = 0x176F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f4c;
        }
    }
    ctx->pc = 0x176F68u;
    // 0x176f68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x176F68u;
    {
        const bool branch_taken_0x176f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F68u;
        // 0x176f6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f68) {
            ctx->pc = 0x176F90u;
            return;
        }
    }
    ctx->pc = 0x176F70u;
}
