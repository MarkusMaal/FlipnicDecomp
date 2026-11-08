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

// Function: entry_0013386c
// Address: 0x13386c - 0x1338c4
void entry_0013386c_0x13386c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013386c_0x13386c");
#endif

    switch (ctx->pc) {
        case 0x133878u: goto label_133878;
        case 0x133884u: goto label_133884;
        case 0x1338a0u: goto label_1338a0;
        case 0x1338bcu: goto label_1338bc;
        default: break;
    }

    ctx->pc = 0x13386cu;

    // 0x13386c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x13386cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x133870: 0xc04c554  jal         func_131550
    ctx->pc = 0x133870u;
    SET_GPR_U32(ctx, 31, 0x133878u);
    ctx->pc = 0x133874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133870u;
    // 0x133874: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x133870u, 0x133878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133878u;
label_133878:
    // 0x133878: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x133878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13387c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x13387Cu;
    SET_GPR_U32(ctx, 31, 0x133884u);
    ctx->pc = 0x133880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13387Cu;
    // 0x133880: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13387Cu, 0x133884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133884u;
label_133884:
    // 0x133884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133888: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x13388c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13388Cu;
    {
        const bool branch_taken_0x13388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13388Cu;
        // 0x133890: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13388c) {
            ctx->pc = 0x1338C4u;
            return;
        }
    }
    ctx->pc = 0x133894u;
    // 0x133894: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x133894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x133898: 0xc04ca54  jal         func_132950
    ctx->pc = 0x133898u;
    SET_GPR_U32(ctx, 31, 0x1338A0u);
    ctx->pc = 0x13389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133898u;
    // 0x13389c: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x133898u, 0x1338A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A0u;
label_1338a0:
    // 0x1338a0: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1338a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x1338a4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1338a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1338a8: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1338a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1338ac: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x1338acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x1338b0: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x1338b4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1338B4u;
    SET_GPR_U32(ctx, 31, 0x1338BCu);
    ctx->pc = 0x1338B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338B4u;
    // 0x1338b8: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1338B4u, 0x1338BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338BCu;
label_1338bc:
    // 0x1338bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1338bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1338c0: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x1338c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1338c4u;
}
