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

// Function: entry_0010df80
// Address: 0x10df80 - 0x10dff8
void entry_0010df80_0x10df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df80_0x10df80");
#endif

    switch (ctx->pc) {
        case 0x10dfd8u: goto label_10dfd8;
        default: break;
    }

    ctx->pc = 0x10df80u;

label_10df80:
    // 0x10df80: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x10df80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10df84:
    // 0x10df84: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10df84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10df88:
    // 0x10df88: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10df8c:
    // 0x10df8c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x10df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_10df90:
    // 0x10df90: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10df90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_10df94:
    // 0x10df94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10df98:
    // 0x10df98: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10df98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10df9c:
    // 0x10df9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10dfa0:
    // 0x10dfa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10dfa4:
    // 0x10dfa4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10dfa8:
    // 0x10dfa8: 0x8c8301fc  lw          $v1, 0x1FC($a0)
    ctx->pc = 0x10dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_10dfac:
    // 0x10dfac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10dfacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10dfb0:
    // 0x10dfb0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_10dfb4:
    if (ctx->pc == 0x10DFB4u) {
        ctx->pc = 0x10DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB0u;
        // 0x10dfb4: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFB8u;
        goto label_10dfb8;
    }
    ctx->pc = 0x10DFB0u;
    {
        const bool branch_taken_0x10dfb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB0u;
        // 0x10dfb4: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfb0) {
            ctx->pc = 0x10DFF8u;
            return;
        }
    }
    ctx->pc = 0x10DFB8u;
label_10dfb8:
    // 0x10dfb8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_10dfbc:
    if (ctx->pc == 0x10DFBCu) {
        ctx->pc = 0x10DFC0u;
        goto label_10dfc0;
    }
    ctx->pc = 0x10DFB8u;
    {
        const bool branch_taken_0x10dfb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfb8) {
            ctx->pc = 0x10DFF8u;
            return;
        }
    }
    ctx->pc = 0x10DFC0u;
label_10dfc0:
    // 0x10dfc0: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x10dfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
label_10dfc4:
    // 0x10dfc4: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x10dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
label_10dfc8:
    // 0x10dfc8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10dfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10dfcc:
    // 0x10dfcc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10dfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10dfd0:
    // 0x10dfd0: 0x320f809  jalr        $t9
label_10dfd4:
    if (ctx->pc == 0x10DFD4u) {
        ctx->pc = 0x10DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD0u;
        // 0x10dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFD8u;
        goto label_10dfd8;
    }
    ctx->pc = 0x10DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DFD8u);
        ctx->pc = 0x10DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD0u;
        // 0x10dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DFD0u, 0x10DFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DFD8u;
label_10dfd8:
    // 0x10dfd8: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x10dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_10dfdc:
    // 0x10dfdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10dfe0:
    // 0x10dfe0: 0xae030234  sw          $v1, 0x234($s0)
    ctx->pc = 0x10dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
label_10dfe4:
    // 0x10dfe4: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x10dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_10dfe8:
    // 0x10dfe8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10dfec:
    if (ctx->pc == 0x10DFECu) {
        ctx->pc = 0x10DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFE8u;
        // 0x10dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFF0u;
        goto label_10dff0;
    }
    ctx->pc = 0x10DFE8u;
    {
        const bool branch_taken_0x10dfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFE8u;
        // 0x10dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfe8) {
            ctx->pc = 0x10DFF8u;
            return;
        }
    }
    ctx->pc = 0x10DFF0u;
label_10dff0:
    // 0x10dff0: 0xc043774  jal         func_10DDD0
label_10dff4:
    if (ctx->pc == 0x10DFF4u) {
        ctx->pc = 0x10DFF8u;
        goto label_fallthrough_0x10dff0;
    }
    ctx->pc = 0x10DFF0u;
    SET_GPR_U32(ctx, 31, 0x10DFF8u);
    ctx->pc = 0x10DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDD0u, 0x10DFF0u, 0x10DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x10dff0:
    ctx->pc = 0x10DFF8u;
}
