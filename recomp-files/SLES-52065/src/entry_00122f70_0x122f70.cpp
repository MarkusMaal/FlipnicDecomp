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

// Function: entry_00122f70
// Address: 0x122f70 - 0x122f90
void entry_00122f70_0x122f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f70_0x122f70");
#endif

    ctx->pc = 0x122f70u;

    // 0x122f70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122f74: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x122f78: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x122f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x122f7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x122f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122f80: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122f80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122f84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x122F84u;
    {
        const bool branch_taken_0x122f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F84u;
        // 0x122f88: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f84) {
            ctx->pc = 0x122F90u;
            return;
        }
    }
    ctx->pc = 0x122F8Cu;
    // 0x122f8c: 0x27a30044  addiu       $v1, $sp, 0x44
    ctx->pc = 0x122f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->pc = 0x122f90u;
}
