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

// Function: entry_00118cb8
// Address: 0x118cb8 - 0x118ce0
void entry_00118cb8_0x118cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118cb8_0x118cb8");
#endif

    switch (ctx->pc) {
        case 0x118cc0u: goto label_118cc0;
        case 0x118cd0u: goto label_118cd0;
        default: break;
    }

    ctx->pc = 0x118cb8u;

    // 0x118cb8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118CB8u;
    SET_GPR_U32(ctx, 31, 0x118CC0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118CB8u, 0x118CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CC0u;
label_118cc0:
    // 0x118cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x118cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118cc8: 0xc062c88  jal         func_18B220
    ctx->pc = 0x118CC8u;
    SET_GPR_U32(ctx, 31, 0x118CD0u);
    ctx->pc = 0x118CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CC8u;
    // 0x118ccc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B220u, 0x118CC8u, 0x118CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CD0u;
label_118cd0:
    // 0x118cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118CD0u;
    {
        const bool branch_taken_0x118cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118cd0) {
            ctx->pc = 0x118CE0u;
            return;
        }
    }
    ctx->pc = 0x118CD8u;
    // 0x118cd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x118CD8u;
    {
        const bool branch_taken_0x118cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CD8u;
        // 0x118cdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cd8) {
            ctx->pc = 0x118D24u;
            return;
        }
    }
    ctx->pc = 0x118CE0u;
}
