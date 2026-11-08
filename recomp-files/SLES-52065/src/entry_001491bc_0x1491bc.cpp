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

// Function: entry_001491bc
// Address: 0x1491bc - 0x149274
void entry_001491bc_0x1491bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001491bc_0x1491bc");
#endif

    switch (ctx->pc) {
        case 0x1491d8u: goto label_1491d8;
        case 0x1491fcu: goto label_1491fc;
        case 0x149220u: goto label_149220;
        case 0x149230u: goto label_149230;
        case 0x149258u: goto label_149258;
        default: break;
    }

    ctx->pc = 0x1491bcu;

    // 0x1491bc: 0x0  nop
    ctx->pc = 0x1491bcu;
    // NOP
    // 0x1491c0: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x1491c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x1491c4: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x1491c8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1491C8u;
    {
        const bool branch_taken_0x1491c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1491CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491C8u;
        // 0x1491cc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491c8) {
            ctx->pc = 0x14919Cu;
            return;
        }
    }
    ctx->pc = 0x1491D0u;
    // 0x1491d0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1491D0u;
    SET_GPR_U32(ctx, 31, 0x1491D8u);
    ctx->pc = 0x1491D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491D0u;
    // 0x1491d4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1491D0u, 0x1491D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491D8u;
label_1491d8:
    // 0x1491d8: 0x8fa601fc  lw          $a2, 0x1FC($sp)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x1491dc: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1491dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1491e0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1491e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1491e4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1491e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1491e8: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1491ec: 0xafa6015c  sw          $a2, 0x15C($sp)
    ctx->pc = 0x1491ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 6));
    // 0x1491f0: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x1491f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x1491f4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1491F4u;
    SET_GPR_U32(ctx, 31, 0x1491FCu);
    ctx->pc = 0x1491F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1491F4u;
    // 0x1491f8: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1491F4u, 0x1491FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491FCu;
label_1491fc:
    // 0x1491fc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1491fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149200: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x149200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x149204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149208: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x149208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    // 0x14920c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149210: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x149210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x149214: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x149214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149218: 0xc051898  jal         func_146260
    ctx->pc = 0x149218u;
    SET_GPR_U32(ctx, 31, 0x149220u);
    ctx->pc = 0x14921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149218u;
    // 0x14921c: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149218u, 0x149220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149220u;
label_149220:
    // 0x149220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149224: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x149228: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149228u;
    SET_GPR_U32(ctx, 31, 0x149230u);
    ctx->pc = 0x14922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149228u;
    // 0x14922c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149228u, 0x149230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149230u;
label_149230:
    // 0x149230: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x149234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149238: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x149238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14923c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14923cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x149240: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x149240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x149244: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149248: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x149248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x14924c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149250: 0xc052dbc  jal         func_14B6F0
    ctx->pc = 0x149250u;
    SET_GPR_U32(ctx, 31, 0x149258u);
    ctx->pc = 0x149254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149250u;
    // 0x149254: 0xafa20184  sw          $v0, 0x184($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F0u, 0x149250u, 0x149258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149258u;
label_149258:
    // 0x149258: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14925c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149260: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x149260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x149264: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x149264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x149268: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14926c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14926Cu;
    {
        const bool branch_taken_0x14926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14926Cu;
        // 0x149270: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14926c) {
            ctx->pc = 0x1492A4u;
            return;
        }
    }
    ctx->pc = 0x149274u;
}
