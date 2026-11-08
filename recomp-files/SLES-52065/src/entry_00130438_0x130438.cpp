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

// Function: entry_00130438
// Address: 0x130438 - 0x13048c
void entry_00130438_0x130438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130438_0x130438");
#endif

    switch (ctx->pc) {
        case 0x130448u: goto label_130448;
        case 0x130468u: goto label_130468;
        case 0x130484u: goto label_130484;
        default: break;
    }

    ctx->pc = 0x130438u;

    // 0x130438: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x130438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13043c: 0x24a5ed68  addiu       $a1, $a1, -0x1298
    ctx->pc = 0x13043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962536));
    // 0x130440: 0xc080796  jal         func_201E58
    ctx->pc = 0x130440u;
    SET_GPR_U32(ctx, 31, 0x130448u);
    ctx->pc = 0x130444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130440u;
    // 0x130444: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x130440u, 0x130448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130448u;
label_130448:
    // 0x130448: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x130448u;
    {
        const bool branch_taken_0x130448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130448u;
        // 0x13044c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130448) {
            ctx->pc = 0x1304C8u;
            return;
        }
    }
    ctx->pc = 0x130450u;
    // 0x130450: 0x83828510  lb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935824)));
    // 0x130454: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x130454u;
    {
        const bool branch_taken_0x130454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130454) {
            ctx->pc = 0x13048Cu;
            return;
        }
    }
    ctx->pc = 0x13045Cu;
    // 0x13045c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130460: 0xc04c4b8  jal         func_1312E0
    ctx->pc = 0x130460u;
    SET_GPR_U32(ctx, 31, 0x130468u);
    ctx->pc = 0x130464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130460u;
    // 0x130464: 0x24846280  addiu       $a0, $a0, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312E0u, 0x130460u, 0x130468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130468u;
label_130468:
    // 0x130468: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x130468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x13046c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x13046cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x130470: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x130470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x130474: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130478: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x130478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x13047c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x13047Cu;
    SET_GPR_U32(ctx, 31, 0x130484u);
    ctx->pc = 0x130480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13047Cu;
    // 0x130480: 0x24c66270  addiu       $a2, $a2, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x13047Cu, 0x130484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130484u;
label_130484:
    // 0x130484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130488: 0xa3828510  sb          $v0, -0x7AF0($gp)
    ctx->pc = 0x130488u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935824), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13048cu;
}
