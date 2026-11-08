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

// Function: entry_001e5964
// Address: 0x1e5964 - 0x1e5990
void entry_001e5964_0x1e5964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5964_0x1e5964");
#endif

    switch (ctx->pc) {
        case 0x1e597cu: goto label_1e597c;
        default: break;
    }

    ctx->pc = 0x1e5964u;

    // 0x1e5964: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e5964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e5968: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x1e5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e596c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e5970: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e5970u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5974: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E5974u;
    SET_GPR_U32(ctx, 31, 0x1E597Cu);
    ctx->pc = 0x1E5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5974u;
    // 0x1e5978: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E5974u, 0x1E597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E597Cu;
label_1e597c:
    // 0x1e597c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5980: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5980u;
    {
        const bool branch_taken_0x1e5980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5980) {
            ctx->pc = 0x1E5990u;
            return;
        }
    }
    ctx->pc = 0x1E5988u;
    // 0x1e5988: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5988u;
    {
        const bool branch_taken_0x1e5988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5988u;
        // 0x1e598c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5988) {
            ctx->pc = 0x1E59A0u;
            return;
        }
    }
    ctx->pc = 0x1E5990u;
}
