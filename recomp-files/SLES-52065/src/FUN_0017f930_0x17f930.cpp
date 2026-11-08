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

// Function: FUN_0017f930
// Address: 0x17f930 - 0x17f9ac
void FUN_0017f930_0x17f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f930_0x17f930");
#endif

    switch (ctx->pc) {
        case 0x17f968u: goto label_17f968;
        case 0x17f978u: goto label_17f978;
        case 0x17f990u: goto label_17f990;
        default: break;
    }

    ctx->pc = 0x17f930u;

    // 0x17f930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f938: 0x83828658  lb          $v0, -0x79A8($gp)
    ctx->pc = 0x17f938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x17f93c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17F93Cu;
    {
        const bool branch_taken_0x17f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F93Cu;
        // 0x17f940: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f93c) {
            ctx->pc = 0x17F998u;
            goto label_17f998;
        }
    }
    ctx->pc = 0x17F944u;
    // 0x17f944: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x17f948: 0x244287a0  addiu       $v0, $v0, -0x7860
    ctx->pc = 0x17f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936480));
    // 0x17f94c: 0x2463b128  addiu       $v1, $v1, -0x4ED8
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947112));
    // 0x17f950: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x17f950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x17f954: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x17f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17f958: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17f958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17f95c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x17f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17f960: 0xc04b7d4  jal         func_12DF50
    ctx->pc = 0x17F960u;
    SET_GPR_U32(ctx, 31, 0x17F968u);
    ctx->pc = 0x17F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F960u;
    // 0x17f964: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF50u, 0x17F960u, 0x17F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F968u;
label_17f968:
    // 0x17f968: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x17f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17f96c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x17f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17f970: 0xc04a098  jal         func_128260
    ctx->pc = 0x17F970u;
    SET_GPR_U32(ctx, 31, 0x17F978u);
    ctx->pc = 0x17F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F970u;
    // 0x17f974: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128260u, 0x17F970u, 0x17F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F978u;
label_17f978:
    // 0x17f978: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x17f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x17f97c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17f980: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x17f980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x17f984: 0x24a5f8c0  addiu       $a1, $a1, -0x740
    ctx->pc = 0x17f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    // 0x17f988: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x17F988u;
    SET_GPR_U32(ctx, 31, 0x17F990u);
    ctx->pc = 0x17F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F988u;
    // 0x17f98c: 0x24c68790  addiu       $a2, $a2, -0x7870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x17F988u, 0x17F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F990u;
label_17f990:
    // 0x17f990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f994: 0xa3828658  sb          $v0, -0x79A8($gp)
    ctx->pc = 0x17f994u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936152), (uint8_t)GPR_U32(ctx, 2));
label_17f998:
    // 0x17f998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f99c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17f9a0: 0x244287a0  addiu       $v0, $v0, -0x7860
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936480));
    // 0x17f9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9A4u;
        // 0x17f9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F9ACu;
}
