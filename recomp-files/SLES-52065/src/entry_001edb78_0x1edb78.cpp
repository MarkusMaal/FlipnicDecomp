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

// Function: entry_001edb78
// Address: 0x1edb78 - 0x1edbe4
void entry_001edb78_0x1edb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edb78_0x1edb78");
#endif

    switch (ctx->pc) {
        case 0x1edbc8u: goto label_1edbc8;
        case 0x1edbdcu: goto label_1edbdc;
        default: break;
    }

    ctx->pc = 0x1edb78u;

    // 0x1edb78: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1edb7c: 0x8c44c7e0  lw          $a0, -0x3820($v0)
    ctx->pc = 0x1edb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38C7E0u));
    // 0x1edb80: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1edb84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1edb84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1edb88: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1edb8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1edb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1edb90: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1edb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1edb94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1edb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1edb98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1edb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1edb9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1edb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1edba0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1edba4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1edba8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1edba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1edbac: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1edbacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1edbb0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1edbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1edbb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1edbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1edbb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1edbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbc0: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EDBC0u;
    SET_GPR_U32(ctx, 31, 0x1EDBC8u);
    ctx->pc = 0x1EDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBC0u;
    // 0x1edbc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EDBC0u, 0x1EDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBC8u;
label_1edbc8:
    // 0x1edbc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1edbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1edbcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDBCCu;
    {
        const bool branch_taken_0x1edbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBCCu;
        // 0x1edbd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbcc) {
            ctx->pc = 0x1EDBE4u;
            return;
        }
    }
    ctx->pc = 0x1EDBD4u;
    // 0x1edbd4: 0xc07ae7c  jal         func_1EB9F0
    ctx->pc = 0x1EDBD4u;
    SET_GPR_U32(ctx, 31, 0x1EDBDCu);
    ctx->pc = 0x1EDBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBD4u;
    // 0x1edbd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9F0u, 0x1EDBD4u, 0x1EDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBDCu;
label_1edbdc:
    // 0x1edbdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDBDCu;
    {
        const bool branch_taken_0x1edbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBDCu;
        // 0x1edbe0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbdc) {
            ctx->pc = 0x1EDBF0u;
            return;
        }
    }
    ctx->pc = 0x1EDBE4u;
}
