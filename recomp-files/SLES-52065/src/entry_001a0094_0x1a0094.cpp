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

// Function: entry_001a0094
// Address: 0x1a0094 - 0x1a00f0
void entry_001a0094_0x1a0094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0094_0x1a0094");
#endif

    switch (ctx->pc) {
        case 0x1a00acu: goto label_1a00ac;
        default: break;
    }

    ctx->pc = 0x1a0094u;

    // 0x1a0094: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a0098: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a0098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a009c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a009cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a00a0: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x1a00a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a00a4: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A00A4u;
    SET_GPR_U32(ctx, 31, 0x1A00ACu);
    ctx->pc = 0x1A00A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00A4u;
    // 0x1a00a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A00A4u, 0x1A00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00ACu;
label_1a00ac:
    // 0x1a00ac: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a00acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a00b0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a00b4: 0x8e460664  lw          $a2, 0x664($s2)
    ctx->pc = 0x1a00b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
    // 0x1a00b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a00bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a00c0: 0x8c852cd8  lw          $a1, 0x2CD8($a0)
    ctx->pc = 0x1a00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1a00c4: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x1a00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1a00c8: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1A00C8u;
    {
        const bool branch_taken_0x1a00c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00C8u;
        // 0x1a00cc: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00c8) {
            ctx->pc = 0x1A01D8u;
            return;
        }
    }
    ctx->pc = 0x1A00D0u;
    // 0x1a00d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a00d4: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A00D4u;
    {
        const bool branch_taken_0x1a00d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a00d4) {
            ctx->pc = 0x1A0164u;
            return;
        }
    }
    ctx->pc = 0x1A00DCu;
    // 0x1a00dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a00e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00E0u;
    {
        const bool branch_taken_0x1a00e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a00e0) {
            ctx->pc = 0x1A00F0u;
            return;
        }
    }
    ctx->pc = 0x1A00E8u;
    // 0x1a00e8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1A00E8u;
    {
        const bool branch_taken_0x1a00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00e8) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A00F0u;
}
