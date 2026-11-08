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

// Function: entry_00130ba4
// Address: 0x130ba4 - 0x130be8
void entry_00130ba4_0x130ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ba4_0x130ba4");
#endif

    switch (ctx->pc) {
        case 0x130bc8u: goto label_130bc8;
        default: break;
    }

    ctx->pc = 0x130ba4u;

    // 0x130ba4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x130ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130ba8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x130BA8u;
    {
        const bool branch_taken_0x130ba8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ba8) {
            ctx->pc = 0x130BE8u;
            return;
        }
    }
    ctx->pc = 0x130BB0u;
    // 0x130bb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x130bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130bbc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130bc0: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x130BC0u;
    SET_GPR_U32(ctx, 31, 0x130BC8u);
    ctx->pc = 0x130BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BC0u;
    // 0x130bc4: 0x2932821  addu        $a1, $s4, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x130BC0u, 0x130BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BC8u;
label_130bc8:
    // 0x130bc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130bcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130bd4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x130bd8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x130bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x130bdc: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x130bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x130be0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x130BE0u;
    SET_GPR_U32(ctx, 31, 0x130BE8u);
    ctx->pc = 0x130BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BE0u;
    // 0x130be4: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x130BE0u, 0x130BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BE8u;
}
