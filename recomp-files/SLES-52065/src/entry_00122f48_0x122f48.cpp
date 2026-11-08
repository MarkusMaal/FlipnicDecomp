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

// Function: entry_00122f48
// Address: 0x122f48 - 0x122f70
void entry_00122f48_0x122f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f48_0x122f48");
#endif

    ctx->pc = 0x122f48u;

    // 0x122f48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x122f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x122f4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122f54: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x122f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x122f58: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x122f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x122f5c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x122f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x122f60: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122f60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122f64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x122F64u;
    {
        const bool branch_taken_0x122f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F64u;
        // 0x122f68: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f64) {
            ctx->pc = 0x122F70u;
            return;
        }
    }
    ctx->pc = 0x122F6Cu;
    // 0x122f6c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x122f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x122f70u;
}
