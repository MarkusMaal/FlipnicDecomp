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

// Function: entry_0011af14
// Address: 0x11af14 - 0x11af40
void entry_0011af14_0x11af14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011af14_0x11af14");
#endif

    switch (ctx->pc) {
        case 0x11af1cu: goto label_11af1c;
        case 0x11af34u: goto label_11af34;
        default: break;
    }

    ctx->pc = 0x11af14u;

    // 0x11af14: 0xc080664  jal         func_201990
    ctx->pc = 0x11AF14u;
    SET_GPR_U32(ctx, 31, 0x11AF1Cu);
    ctx->pc = 0x11AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF14u;
    // 0x11af18: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AF14u, 0x11AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF1Cu;
label_11af1c:
    // 0x11af1c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11af20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af24: 0x266500f8  addiu       $a1, $s3, 0xF8
    ctx->pc = 0x11af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    // 0x11af28: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x11af28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x11af2c: 0xc046e18  jal         func_11B860
    ctx->pc = 0x11AF2Cu;
    SET_GPR_U32(ctx, 31, 0x11AF34u);
    ctx->pc = 0x11AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF2Cu;
    // 0x11af30: 0x27a701c0  addiu       $a3, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B860u, 0x11AF2Cu, 0x11AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF34u;
label_11af34:
    // 0x11af34: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x11af34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x11af38: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x11AF38u;
    {
        const bool branch_taken_0x11af38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF38u;
        // 0x11af3c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af38) {
            ctx->pc = 0x11B02Cu;
            return;
        }
    }
    ctx->pc = 0x11AF40u;
}
