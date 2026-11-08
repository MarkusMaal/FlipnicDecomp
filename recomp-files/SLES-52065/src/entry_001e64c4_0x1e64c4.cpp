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

// Function: entry_001e64c4
// Address: 0x1e64c4 - 0x1e64f0
void entry_001e64c4_0x1e64c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e64c4_0x1e64c4");
#endif

    switch (ctx->pc) {
        case 0x1e64dcu: goto label_1e64dc;
        default: break;
    }

    ctx->pc = 0x1e64c4u;

    // 0x1e64c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e64c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e64c8: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x1e64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e64cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e64d0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e64d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e64d4: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E64D4u;
    SET_GPR_U32(ctx, 31, 0x1E64DCu);
    ctx->pc = 0x1E64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64D4u;
    // 0x1e64d8: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E64D4u, 0x1E64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64DCu;
label_1e64dc:
    // 0x1e64dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e64e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E64E0u;
    {
        const bool branch_taken_0x1e64e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e64e0) {
            ctx->pc = 0x1E64F0u;
            return;
        }
    }
    ctx->pc = 0x1E64E8u;
    // 0x1e64e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E64E8u;
    {
        const bool branch_taken_0x1e64e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64e8) {
            ctx->pc = 0x1E6500u;
            return;
        }
    }
    ctx->pc = 0x1E64F0u;
}
