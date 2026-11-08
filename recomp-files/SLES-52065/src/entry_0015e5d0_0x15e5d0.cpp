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

// Function: entry_0015e5d0
// Address: 0x15e5d0 - 0x15e650
void entry_0015e5d0_0x15e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e5d0_0x15e5d0");
#endif

    switch (ctx->pc) {
        case 0x15e5e4u: goto label_15e5e4;
        case 0x15e60cu: goto label_15e60c;
        case 0x15e61cu: goto label_15e61c;
        case 0x15e640u: goto label_15e640;
        default: break;
    }

    ctx->pc = 0x15e5d0u;

label_15e5d0:
    // 0x15e5d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15e5d4:
    // 0x15e5d4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_15e5d8:
    // 0x15e5d8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15e5dc:
    // 0x15e5dc: 0xc042580  jal         func_109600
label_15e5e0:
    if (ctx->pc == 0x15E5E0u) {
        ctx->pc = 0x15E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5DCu;
        // 0x15e5e0: 0x24532cd8  addiu       $s3, $v0, 0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5E4u;
        goto label_15e5e4;
    }
    ctx->pc = 0x15E5DCu;
    SET_GPR_U32(ctx, 31, 0x15E5E4u);
    ctx->pc = 0x15E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5DCu;
    // 0x15e5e0: 0x24532cd8  addiu       $s3, $v0, 0x2CD8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109600u, 0x15E5DCu, 0x15E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5E4u;
label_15e5e4:
    // 0x15e5e4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_15e5e8:
    if (ctx->pc == 0x15E5E8u) {
        ctx->pc = 0x15E5ECu;
        goto label_15e5ec;
    }
    ctx->pc = 0x15E5E4u;
    {
        const bool branch_taken_0x15e5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e5e4) {
            ctx->pc = 0x15E668u;
            return;
        }
    }
    ctx->pc = 0x15E5ECu;
label_15e5ec:
    // 0x15e5ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e5f0:
    // 0x15e5f0: 0x26540040  addiu       $s4, $s2, 0x40
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_15e5f4:
    // 0x15e5f4: 0x26950210  addiu       $s5, $s4, 0x210
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 528));
label_15e5f8:
    // 0x15e5f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e5fc:
    // 0x15e5fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e600:
    // 0x15e600: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15e604:
    // 0x15e604: 0xc055fa0  jal         func_157E80
label_15e608:
    if (ctx->pc == 0x15E608u) {
        ctx->pc = 0x15E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E604u;
        // 0x15e608: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E60Cu;
        goto label_15e60c;
    }
    ctx->pc = 0x15E604u;
    SET_GPR_U32(ctx, 31, 0x15E60Cu);
    ctx->pc = 0x15E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E604u;
    // 0x15e608: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E80u, 0x15E604u, 0x15E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E60Cu;
label_15e60c:
    // 0x15e60c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e610:
    // 0x15e610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e614:
    // 0x15e614: 0xc0563e4  jal         func_158F90
label_15e618:
    if (ctx->pc == 0x15E618u) {
        ctx->pc = 0x15E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E614u;
        // 0x15e618: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E61Cu;
        goto label_15e61c;
    }
    ctx->pc = 0x15E614u;
    SET_GPR_U32(ctx, 31, 0x15E61Cu);
    ctx->pc = 0x15E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E614u;
    // 0x15e618: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F90u, 0x15E614u, 0x15E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E61Cu;
label_15e61c:
    // 0x15e61c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e620:
    // 0x15e620: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_15e624:
    if (ctx->pc == 0x15E624u) {
        ctx->pc = 0x15E628u;
        goto label_15e628;
    }
    ctx->pc = 0x15E620u;
    {
        const bool branch_taken_0x15e620 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e620) {
            ctx->pc = 0x15E650u;
            return;
        }
    }
    ctx->pc = 0x15E628u;
label_15e628:
    // 0x15e628: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e62c:
    // 0x15e62c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e630:
    // 0x15e630: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e634:
    // 0x15e634: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15e638:
    // 0x15e638: 0x320f809  jalr        $t9
label_15e63c:
    if (ctx->pc == 0x15E63Cu) {
        ctx->pc = 0x15E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E638u;
        // 0x15e63c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E640u;
        goto label_15e640;
    }
    ctx->pc = 0x15E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E640u);
        ctx->pc = 0x15E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E638u;
        // 0x15e63c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E638u, 0x15E640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E640u;
label_15e640:
    // 0x15e640: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e644:
    // 0x15e644: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_15e648:
    if (ctx->pc == 0x15E648u) {
        ctx->pc = 0x15E64Cu;
        goto label_15e64c;
    }
    ctx->pc = 0x15E644u;
    {
        const bool branch_taken_0x15e644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e644) {
            ctx->pc = 0x15E650u;
            return;
        }
    }
    ctx->pc = 0x15E64Cu;
label_15e64c:
    // 0x15e64c: 0xae510240  sw          $s1, 0x240($s2)
    ctx->pc = 0x15e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 17));
    ctx->pc = 0x15e650u;
}
