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

// Function: entry_00122c90
// Address: 0x122c90 - 0x122cc0
void entry_00122c90_0x122c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122c90_0x122c90");
#endif

    switch (ctx->pc) {
        case 0x122c98u: goto label_122c98;
        case 0x122cb8u: goto label_122cb8;
        default: break;
    }

    ctx->pc = 0x122c90u;

    // 0x122c90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122C90u;
    SET_GPR_U32(ctx, 31, 0x122C98u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122C90u, 0x122C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C98u;
label_122c98:
    // 0x122c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c9c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x122C9Cu;
    {
        const bool branch_taken_0x122c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C9Cu;
        // 0x122ca0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c9c) {
            ctx->pc = 0x122CC0u;
            return;
        }
    }
    ctx->pc = 0x122CA4u;
    // 0x122ca4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122ca8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122cac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122cb0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122CB0u;
    SET_GPR_U32(ctx, 31, 0x122CB8u);
    ctx->pc = 0x122CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CB0u;
    // 0x122cb4: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122CB0u, 0x122CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CB8u;
label_122cb8:
    // 0x122cb8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122CB8u;
    SET_GPR_U32(ctx, 31, 0x122CC0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122CB8u, 0x122CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CC0u;
}
