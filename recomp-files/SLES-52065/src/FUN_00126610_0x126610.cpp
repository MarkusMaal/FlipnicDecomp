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

// Function: FUN_00126610
// Address: 0x126610 - 0x1266c0
void FUN_00126610_0x126610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126610_0x126610");
#endif

    switch (ctx->pc) {
        case 0x126624u: goto label_126624;
        case 0x126660u: goto label_126660;
        default: break;
    }

    ctx->pc = 0x126610u;

    // 0x126610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126618: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x126618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x12661c: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x12661Cu;
    SET_GPR_U32(ctx, 31, 0x126624u);
    ctx->pc = 0x126620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12661Cu;
    // 0x126620: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x12661Cu, 0x126624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126624u;
label_126624:
    // 0x126624: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126628: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12662c: 0x24638990  addiu       $v1, $v1, -0x7670
    ctx->pc = 0x12662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936976));
    // 0x126630: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x126634: 0x24a5eb08  addiu       $a1, $a1, -0x14F8
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961928));
    // 0x126638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x126638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12663c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126640: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x126640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x126644: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126648: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x126648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x12664c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x12664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126650: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x126650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x126654: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126658: 0xc080702  jal         func_201C08
    ctx->pc = 0x126658u;
    SET_GPR_U32(ctx, 31, 0x126660u);
    ctx->pc = 0x12665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126658u;
    // 0x12665c: 0x24440100  addiu       $a0, $v0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x126658u, 0x126660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126660u;
label_126660:
    // 0x126660: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126668: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x126668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12666c: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x12666cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x126670: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126674: 0xac440140  sw          $a0, 0x140($v0)
    ctx->pc = 0x126674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 4));
    // 0x126678: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12667c: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x12667cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x126680: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126684: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x126684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x126688: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12668c: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x12668cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x126690: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x126694: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x126694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x126698: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x126698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12669c: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x12669cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
    // 0x1266a0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1266a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1266a4: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x1266a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x1266a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1266ac: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x1266acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x1266b0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1266b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1266b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1266b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1266b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1266B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1266BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266B8u;
        // 0x1266bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1266C0u;
}
