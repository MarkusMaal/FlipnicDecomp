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

// Function: entry_0014944c
// Address: 0x14944c - 0x149500
void entry_0014944c_0x14944c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014944c_0x14944c");
#endif

    switch (ctx->pc) {
        case 0x149470u: goto label_149470;
        case 0x149494u: goto label_149494;
        case 0x1494c0u: goto label_1494c0;
        case 0x1494d0u: goto label_1494d0;
        case 0x1494f8u: goto label_1494f8;
        default: break;
    }

    ctx->pc = 0x14944cu;

    // 0x14944c: 0x0  nop
    ctx->pc = 0x14944cu;
    // NOP
    // 0x149450: 0x27b302bc  addiu       $s3, $sp, 0x2BC
    ctx->pc = 0x149450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
    // 0x149454: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x149454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149458: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x14945c: 0x1462ffc6  bne         $v1, $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x14945Cu;
    {
        const bool branch_taken_0x14945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x149460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14945Cu;
        // 0x149460: 0x27b2027c  addiu       $s2, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14945c) {
            ctx->pc = 0x149378u;
            return;
        }
    }
    ctx->pc = 0x149464u;
    // 0x149464: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x149464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x149468: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149468u;
    SET_GPR_U32(ctx, 31, 0x149470u);
    ctx->pc = 0x14946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149468u;
    // 0x14946c: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149468u, 0x149470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149470u;
label_149470:
    // 0x149470: 0x8fa6027c  lw          $a2, 0x27C($sp)
    ctx->pc = 0x149470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x149474: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x149474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x149478: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x149478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x14947c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x149480: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x149480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x149484: 0xafa601bc  sw          $a2, 0x1BC($sp)
    ctx->pc = 0x149484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 6));
    // 0x149488: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x149488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x14948c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14948Cu;
    SET_GPR_U32(ctx, 31, 0x149494u);
    ctx->pc = 0x149490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14948Cu;
    // 0x149490: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14948Cu, 0x149494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149494u;
label_149494:
    // 0x149494: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x149494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x149498: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x149498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14949c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494a0: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1494a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1494a8: 0xafa302dc  sw          $v1, 0x2DC($sp)
    ctx->pc = 0x1494a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 3));
    // 0x1494ac: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1494acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x1494b0: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1494b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1494b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1494b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494b8: 0xc051898  jal         func_146260
    ctx->pc = 0x1494B8u;
    SET_GPR_U32(ctx, 31, 0x1494C0u);
    ctx->pc = 0x1494BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494B8u;
    // 0x1494bc: 0xafa202e4  sw          $v0, 0x2E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x1494B8u, 0x1494C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494C0u;
label_1494c0:
    // 0x1494c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494c4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1494c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1494c8: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1494C8u;
    SET_GPR_U32(ctx, 31, 0x1494D0u);
    ctx->pc = 0x1494CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494C8u;
    // 0x1494cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1494C8u, 0x1494D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494D0u;
label_1494d0:
    // 0x1494d0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1494d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1494d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494d8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1494d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1494dc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1494dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1494e0: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x1494e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x1494e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1494e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1494e8: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1494e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1494ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1494f0: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x1494F0u;
    SET_GPR_U32(ctx, 31, 0x1494F8u);
    ctx->pc = 0x1494F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494F0u;
    // 0x1494f4: 0xafa201e4  sw          $v0, 0x1E4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x1494F0u, 0x1494F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494F8u;
label_1494f8:
    // 0x1494f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1494F8u;
    {
        const bool branch_taken_0x1494f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494f8) {
            ctx->pc = 0x149530u;
            return;
        }
    }
    ctx->pc = 0x149500u;
}
