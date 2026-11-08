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

// Function: entry_001ca260
// Address: 0x1ca260 - 0x1ca288
void entry_001ca260_0x1ca260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca260_0x1ca260");
#endif

    switch (ctx->pc) {
        case 0x1ca268u: goto label_1ca268;
        case 0x1ca270u: goto label_1ca270;
        default: break;
    }

    ctx->pc = 0x1ca260u;

    // 0x1ca260: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA260u;
    SET_GPR_U32(ctx, 31, 0x1CA268u);
    ctx->pc = 0x1CA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA260u;
    // 0x1ca264: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA260u, 0x1CA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA268u;
label_1ca268:
    // 0x1ca268: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA268u;
    SET_GPR_U32(ctx, 31, 0x1CA270u);
    ctx->pc = 0x1CA26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA268u;
    // 0x1ca26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA268u, 0x1CA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA270u;
label_1ca270:
    // 0x1ca270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ca274: 0x26e30008  addiu       $v1, $s7, 0x8
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1ca278: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1ca278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ca27c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ca280: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x1CA280u;
    {
        const bool branch_taken_0x1ca280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA280u;
        // 0x1ca284: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca280) {
            ctx->pc = 0x1CA090u;
            return;
        }
    }
    ctx->pc = 0x1CA288u;
}
