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

// Function: entry_001e3d34
// Address: 0x1e3d34 - 0x1e3d44
void entry_001e3d34_0x1e3d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3d34_0x1e3d34");
#endif

    ctx->pc = 0x1e3d34u;

    // 0x1e3d34: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3D34u;
    {
        const bool branch_taken_0x1e3d34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D34u;
        // 0x1e3d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d34) {
            ctx->pc = 0x1E3D44u;
            return;
        }
    }
    ctx->pc = 0x1E3D3Cu;
    // 0x1e3d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3D3Cu;
    {
        const bool branch_taken_0x1e3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3d3c) {
            ctx->pc = 0x1E3D58u;
            return;
        }
    }
    ctx->pc = 0x1E3D44u;
}
