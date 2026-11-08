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

// Function: entry_001ea3bc
// Address: 0x1ea3bc - 0x1ea3d4
void entry_001ea3bc_0x1ea3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea3bc_0x1ea3bc");
#endif

    switch (ctx->pc) {
        case 0x1ea3ccu: goto label_1ea3cc;
        default: break;
    }

    ctx->pc = 0x1ea3bcu;

label_1ea3bc:
    // 0x1ea3bc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1ea3c0:
    // 0x1ea3c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea3c4:
    // 0x1ea3c4: 0xc0f809  jalr        $a2
label_1ea3c8:
    if (ctx->pc == 0x1EA3C8u) {
        ctx->pc = 0x1EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3C4u;
        // 0x1ea3c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3CCu;
        goto label_1ea3cc;
    }
    ctx->pc = 0x1EA3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA3CCu);
        ctx->pc = 0x1EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3C4u;
        // 0x1ea3c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3C4u, 0x1EA3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA3CCu;
label_1ea3cc:
    // 0x1ea3cc: 0x10000104  b           . + 4 + (0x104 << 2)
label_1ea3d0:
    if (ctx->pc == 0x1EA3D0u) {
        ctx->pc = 0x1EA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3CCu;
        // 0x1ea3d0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3D4u;
        goto label_fallthrough_0x1ea3cc;
    }
    ctx->pc = 0x1EA3CCu;
    {
        const bool branch_taken_0x1ea3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3CCu;
        // 0x1ea3d0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3cc) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
label_fallthrough_0x1ea3cc:
    ctx->pc = 0x1EA3D4u;
}
