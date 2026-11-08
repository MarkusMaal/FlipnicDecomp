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

// Function: FUN_00131300
// Address: 0x131300 - 0x131394
void FUN_00131300_0x131300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131300_0x131300");
#endif

    switch (ctx->pc) {
        case 0x131328u: goto label_131328;
        case 0x13133cu: goto label_13133c;
        default: break;
    }

    ctx->pc = 0x131300u;

    // 0x131300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131304: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x131304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x131308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13130c: 0x24638ba0  addiu       $v1, $v1, -0x7460
    ctx->pc = 0x13130cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937504));
    // 0x131310: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x131310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x131314: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131318: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x131318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13131c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x13131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131320: 0xc04c998  jal         func_132660
    ctx->pc = 0x131320u;
    SET_GPR_U32(ctx, 31, 0x131328u);
    ctx->pc = 0x131324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131320u;
    // 0x131324: 0x24440058  addiu       $a0, $v0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132660u, 0x131320u, 0x131328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131328u;
label_131328:
    // 0x131328: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x13132c: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x13132cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x131330: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131334: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131334u;
    SET_GPR_U32(ctx, 31, 0x13133Cu);
    ctx->pc = 0x131338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131334u;
    // 0x131338: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131334u, 0x13133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13133Cu;
label_13133c:
    // 0x13133c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x13133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131344: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x131344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x131348: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x131348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13134c: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x13134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x131350: 0xa0450055  sb          $a1, 0x55($v0)
    ctx->pc = 0x131350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 85), (uint8_t)GPR_U32(ctx, 5));
    // 0x131354: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131358: 0xa0400054  sb          $zero, 0x54($v0)
    ctx->pc = 0x131358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x13135c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x13135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131360: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x131360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x131364: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131368: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x131368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x13136c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x13136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131370: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x131370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
    // 0x131374: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131378: 0xac440074  sw          $a0, 0x74($v0)
    ctx->pc = 0x131378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 4));
    // 0x13137c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x13137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131380: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x131380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x131384: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13138c: 0x3e00008  jr          $ra
    ctx->pc = 0x13138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13138Cu;
        // 0x131390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13138Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131394u;
}
