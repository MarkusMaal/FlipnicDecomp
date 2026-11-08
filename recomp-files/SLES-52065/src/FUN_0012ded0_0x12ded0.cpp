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

// Function: FUN_0012ded0
// Address: 0x12ded0 - 0x12df4c
void FUN_0012ded0_0x12ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ded0_0x12ded0");
#endif

    switch (ctx->pc) {
        case 0x12df0cu: goto label_12df0c;
        case 0x12df18u: goto label_12df18;
        case 0x12df30u: goto label_12df30;
        default: break;
    }

    ctx->pc = 0x12ded0u;

    // 0x12ded0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ded4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ded8: 0x838284ac  lb          $v0, -0x7B54($gp)
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935724)));
    // 0x12dedc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12DEDCu;
    {
        const bool branch_taken_0x12dedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEDCu;
        // 0x12dee0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dedc) {
            ctx->pc = 0x12DF38u;
            goto label_12df38;
        }
    }
    ctx->pc = 0x12DEE4u;
    // 0x12dee4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12dee8: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x12dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x12deec: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x12deecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x12def0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x12def0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x12def4: 0x24a5db70  addiu       $a1, $a1, -0x2490
    ctx->pc = 0x12def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957936));
    // 0x12def8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12defc: 0x24c6db00  addiu       $a2, $a2, -0x2500
    ctx->pc = 0x12defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957824));
    // 0x12df00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12df04: 0xc07a3d8  jal         func_1E8F60
    ctx->pc = 0x12DF04u;
    SET_GPR_U32(ctx, 31, 0x12DF0Cu);
    ctx->pc = 0x12DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF04u;
    // 0x12df08: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F60u, 0x12DF04u, 0x12DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF0Cu;
label_12df0c:
    // 0x12df0c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12df10: 0xc04b7d4  jal         func_12DF50
    ctx->pc = 0x12DF10u;
    SET_GPR_U32(ctx, 31, 0x12DF18u);
    ctx->pc = 0x12DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF10u;
    // 0x12df14: 0x24440038  addiu       $a0, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF50u, 0x12DF10u, 0x12DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF18u;
label_12df18:
    // 0x12df18: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x12df18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12df1c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12df20: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x12df24: 0x24a5dba0  addiu       $a1, $a1, -0x2460
    ctx->pc = 0x12df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957984));
    // 0x12df28: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x12DF28u;
    SET_GPR_U32(ctx, 31, 0x12DF30u);
    ctx->pc = 0x12DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF28u;
    // 0x12df2c: 0x24c635f8  addiu       $a2, $a2, 0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x12DF28u, 0x12DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF30u;
label_12df30:
    // 0x12df30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df34: 0xa38284ac  sb          $v0, -0x7B54($gp)
    ctx->pc = 0x12df34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935724), (uint8_t)GPR_U32(ctx, 2));
label_12df38:
    // 0x12df38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12df38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12df3c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12df40: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x12df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x12df44: 0x3e00008  jr          $ra
    ctx->pc = 0x12DF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF44u;
        // 0x12df48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DF4Cu;
}
