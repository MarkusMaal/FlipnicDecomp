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

// Function: entry_0015e3b8
// Address: 0x15e3b8 - 0x15e3f8
void entry_0015e3b8_0x15e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e3b8_0x15e3b8");
#endif

    switch (ctx->pc) {
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3ecu: goto label_15e3ec;
        default: break;
    }

    ctx->pc = 0x15e3b8u;

    // 0x15e3b8: 0xc055c40  jal         func_157100
    ctx->pc = 0x15E3B8u;
    SET_GPR_U32(ctx, 31, 0x15E3C0u);
    ctx->pc = 0x15E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3B8u;
    // 0x15e3bc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x15E3B8u, 0x15E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3C0u;
label_15e3c0:
    // 0x15e3c0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e3c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e3c8: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x15e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x15e3cc: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e3d0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E3D0u;
    {
        const bool branch_taken_0x15e3d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3D0u;
        // 0x15e3d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3d0) {
            ctx->pc = 0x15E3F8u;
            return;
        }
    }
    ctx->pc = 0x15E3D8u;
    // 0x15e3d8: 0x8e652cd0  lw          $a1, 0x2CD0($s3)
    ctx->pc = 0x15e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x15e3dc: 0x14b10006  bne         $a1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E3DCu;
    {
        const bool branch_taken_0x15e3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x15E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3DCu;
        // 0x15e3e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3dc) {
            ctx->pc = 0x15E3F8u;
            return;
        }
    }
    ctx->pc = 0x15E3E4u;
    // 0x15e3e4: 0xc058048  jal         func_160120
    ctx->pc = 0x15E3E4u;
    SET_GPR_U32(ctx, 31, 0x15E3ECu);
    ctx->pc = 0x160120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160120u, 0x15E3E4u, 0x15E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3ECu;
label_15e3ec:
    // 0x15e3ec: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E3ECu;
    {
        const bool branch_taken_0x15e3ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15e3ec) {
            ctx->pc = 0x15E3F8u;
            return;
        }
    }
    ctx->pc = 0x15E3F4u;
    // 0x15e3f4: 0xae622cd0  sw          $v0, 0x2CD0($s3)
    ctx->pc = 0x15e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11472), GPR_U32(ctx, 2));
    ctx->pc = 0x15e3f8u;
}
