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

// Function: entry_001490a4
// Address: 0x1490a4 - 0x14910c
void entry_001490a4_0x1490a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001490a4_0x1490a4");
#endif

    switch (ctx->pc) {
        case 0x1490f0u: goto label_1490f0;
        default: break;
    }

    ctx->pc = 0x1490a4u;

    // 0x1490a4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1490a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1490a8: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x1490a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1490ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1490acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1490b0: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x1490b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1490b4: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1490b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1490b8: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1490bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1490bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1490c0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1490c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1490c4: 0xe2f023  subu        $fp, $a3, $v0
    ctx->pc = 0x1490c4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1490c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1490c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1490cc: 0x5e082b  sltu        $at, $v0, $fp
    ctx->pc = 0x1490ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1490d0: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x1490D0u;
    {
        const bool branch_taken_0x1490d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1490D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490D0u;
        // 0x1490d4: 0x838023  subu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490d0) {
            ctx->pc = 0x1492D0u;
            return;
        }
    }
    ctx->pc = 0x1490D8u;
    // 0x1490d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1490D8u;
    {
        const bool branch_taken_0x1490d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1490DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490D8u;
        // 0x1490dc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490d8) {
            ctx->pc = 0x14910Cu;
            return;
        }
    }
    ctx->pc = 0x1490E0u;
    // 0x1490e0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1490e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1490e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e8: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x1490E8u;
    SET_GPR_U32(ctx, 31, 0x1490F0u);
    ctx->pc = 0x1490ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490E8u;
    // 0x1490ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x1490E8u, 0x1490F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490F0u;
label_1490f0:
    // 0x1490f0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1490f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1490f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1490f8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x1490f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x1490fc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1490fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x149100: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x149100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149104: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x149104u;
    {
        const bool branch_taken_0x149104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149104u;
        // 0x149108: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149104) {
            ctx->pc = 0x1495E8u;
            return;
        }
    }
    ctx->pc = 0x14910Cu;
}
