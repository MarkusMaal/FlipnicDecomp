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

// Function: entry_00209f54
// Address: 0x209f54 - 0x209f78
void entry_00209f54_0x209f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209f54_0x209f54");
#endif

    switch (ctx->pc) {
        case 0x209f6cu: goto label_209f6c;
        default: break;
    }

    ctx->pc = 0x209f54u;

    // 0x209f54: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x209f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x209f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209F58u;
    {
        const bool branch_taken_0x209f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F58u;
        // 0x209f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f58) {
            ctx->pc = 0x209F78u;
            return;
        }
    }
    ctx->pc = 0x209F60u;
    // 0x209f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f64: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x209F64u;
    SET_GPR_U32(ctx, 31, 0x209F6Cu);
    ctx->pc = 0x209F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F64u;
    // 0x209f68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x209F64u, 0x209F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F6Cu;
label_209f6c:
    // 0x209f6c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x209f6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209f70: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x209F70u;
    {
        const bool branch_taken_0x209f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F70u;
        // 0x209f74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f70) {
            ctx->pc = 0x209F50u;
            return;
        }
    }
    ctx->pc = 0x209F78u;
}
