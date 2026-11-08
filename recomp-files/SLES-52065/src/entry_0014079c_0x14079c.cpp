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

// Function: entry_0014079c
// Address: 0x14079c - 0x1407d0
void entry_0014079c_0x14079c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014079c_0x14079c");
#endif

    switch (ctx->pc) {
        case 0x1407a8u: goto label_1407a8;
        case 0x1407c8u: goto label_1407c8;
        default: break;
    }

    ctx->pc = 0x14079cu;

    // 0x14079c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x14079cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1407a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1407A0u;
    SET_GPR_U32(ctx, 31, 0x1407A8u);
    ctx->pc = 0x1407A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407A0u;
    // 0x1407a4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1407A0u, 0x1407A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407A8u;
label_1407a8:
    // 0x1407a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1407a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407ac: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1407ACu;
    {
        const bool branch_taken_0x1407ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1407B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407ACu;
        // 0x1407b0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407ac) {
            ctx->pc = 0x1407D0u;
            return;
        }
    }
    ctx->pc = 0x1407B4u;
    // 0x1407b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1407b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1407b8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1407b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1407bc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1407bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1407c0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1407C0u;
    SET_GPR_U32(ctx, 31, 0x1407C8u);
    ctx->pc = 0x1407C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1407C0u;
    // 0x1407c4: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1407C0u, 0x1407C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C8u;
label_1407c8:
    // 0x1407c8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1407C8u;
    SET_GPR_U32(ctx, 31, 0x1407D0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1407C8u, 0x1407D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407D0u;
}
