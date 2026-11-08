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

// Function: entry_00195b98
// Address: 0x195b98 - 0x195be8
void entry_00195b98_0x195b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195b98_0x195b98");
#endif

    switch (ctx->pc) {
        case 0x195bd8u: goto label_195bd8;
        case 0x195be4u: goto label_195be4;
        default: break;
    }

    ctx->pc = 0x195b98u;

    // 0x195b98: 0x18600072  blez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x195B98u;
    {
        const bool branch_taken_0x195b98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x195b98) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195BA0u;
    // 0x195ba0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x195ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x195ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195ba8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x195ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x195bac: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x195bb0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x195bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195bb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x195bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x195bb8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x195bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x195bbc: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x195bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x195bc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x195bc4: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x195bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x195bc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195BC8u;
    {
        const bool branch_taken_0x195bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BC8u;
        // 0x195bcc: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bc8) {
            ctx->pc = 0x195BE8u;
            return;
        }
    }
    ctx->pc = 0x195BD0u;
    // 0x195bd0: 0xc047a50  jal         func_11E940
    ctx->pc = 0x195BD0u;
    SET_GPR_U32(ctx, 31, 0x195BD8u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195BD0u, 0x195BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BD8u;
label_195bd8:
    // 0x195bd8: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x195bdc: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x195BDCu;
    SET_GPR_U32(ctx, 31, 0x195BE4u);
    ctx->pc = 0x195BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195BDCu;
    // 0x195be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195BDCu, 0x195BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BE4u;
label_195be4:
    // 0x195be4: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195be4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->pc = 0x195be8u;
}
