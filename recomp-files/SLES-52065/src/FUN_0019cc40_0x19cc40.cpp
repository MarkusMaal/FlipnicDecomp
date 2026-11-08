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

// Function: FUN_0019cc40
// Address: 0x19cc40 - 0x19cd88
void FUN_0019cc40_0x19cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019cc40_0x19cc40");
#endif

    switch (ctx->pc) {
        case 0x19cc64u: goto label_19cc64;
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19ccb8u: goto label_19ccb8;
        case 0x19cce4u: goto label_19cce4;
        case 0x19cd08u: goto label_19cd08;
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd70u: goto label_19cd70;
        default: break;
    }

    ctx->pc = 0x19cc40u;

    // 0x19cc40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19cc44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cc48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19cc4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cc50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19cc50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cc58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19cc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc5c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x19CC5Cu;
    {
        const bool branch_taken_0x19cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC5Cu;
        // 0x19cc60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc5c) {
            ctx->pc = 0x19CD10u;
            goto label_19cd10;
        }
    }
    ctx->pc = 0x19CC64u;
label_19cc64:
    // 0x19cc64: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19cc68: 0x8c6306a0  lw          $v1, 0x6A0($v1)
    ctx->pc = 0x19cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
    // 0x19cc6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19cc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cc74: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19cc78: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x19cc7c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19CC7Cu;
    {
        const bool branch_taken_0x19cc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc7c) {
            ctx->pc = 0x19CD08u;
            goto label_19cd08;
        }
    }
    ctx->pc = 0x19CC84u;
    // 0x19cc84: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x19CC84u;
    SET_GPR_U32(ctx, 31, 0x19CC8Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19CC84u, 0x19CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC8Cu;
label_19cc8c:
    // 0x19cc8c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19cc8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19cc90: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19cc94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19cc94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19cc98: 0x0  nop
    ctx->pc = 0x19cc98u;
    // NOP
    // 0x19cc9c: 0x0  nop
    ctx->pc = 0x19cc9cu;
    // NOP
    // 0x19cca0: 0x1810  mfhi        $v1
    ctx->pc = 0x19cca0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19cca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cca8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19CCA8u;
    {
        const bool branch_taken_0x19cca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19cca8) {
            ctx->pc = 0x19CCECu;
            goto label_19ccec;
        }
    }
    ctx->pc = 0x19CCB0u;
    // 0x19ccb0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x19CCB0u;
    SET_GPR_U32(ctx, 31, 0x19CCB8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19CCB0u, 0x19CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCB8u;
label_19ccb8:
    // 0x19ccb8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19ccb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ccbc: 0x8e460760  lw          $a2, 0x760($s2)
    ctx->pc = 0x19ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1888)));
    // 0x19ccc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ccc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccc8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19ccc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19cccc: 0x26450764  addiu       $a1, $s2, 0x764
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1892));
    // 0x19ccd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ccd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccd4: 0x1010  mfhi        $v0
    ctx->pc = 0x19ccd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19ccd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19ccdc: 0xc067364  jal         func_19CD90
    ctx->pc = 0x19CCDCu;
    SET_GPR_U32(ctx, 31, 0x19CCE4u);
    ctx->pc = 0x19CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCDCu;
    // 0x19cce0: 0x2c480001  sltiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD90u, 0x19CCDCu, 0x19CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCE4u;
label_19cce4:
    // 0x19cce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CCE4u;
    {
        const bool branch_taken_0x19cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cce4) {
            ctx->pc = 0x19CD08u;
            goto label_19cd08;
        }
    }
    ctx->pc = 0x19CCECu;
label_19ccec:
    // 0x19ccec: 0x0  nop
    ctx->pc = 0x19ccecu;
    // NOP
    // 0x19ccf0: 0x8e460824  lw          $a2, 0x824($s2)
    ctx->pc = 0x19ccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2084)));
    // 0x19ccf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccf8: 0x26450828  addiu       $a1, $s2, 0x828
    ctx->pc = 0x19ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2088));
    // 0x19ccfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ccfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd00: 0xc067364  jal         func_19CD90
    ctx->pc = 0x19CD00u;
    SET_GPR_U32(ctx, 31, 0x19CD08u);
    ctx->pc = 0x19CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD00u;
    // 0x19cd04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD90u, 0x19CD00u, 0x19CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD08u;
label_19cd08:
    // 0x19cd08: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x19cd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x19cd0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19cd10:
    // 0x19cd10: 0x8e42069c  lw          $v0, 0x69C($s2)
    ctx->pc = 0x19cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
    // 0x19cd14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19cd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19cd18: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x19CD18u;
    {
        const bool branch_taken_0x19cd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD18u;
        // 0x19cd1c: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd18) {
            ctx->pc = 0x19CC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cc64;
        }
    }
    ctx->pc = 0x19CD20u;
    // 0x19cd20: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cd24: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19cd28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19cd2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19cd30: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x19cd34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x19cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19cd38: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x19CD38u;
    SET_GPR_U32(ctx, 31, 0x19CD40u);
    ctx->pc = 0x19CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD38u;
    // 0x19cd3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x19CD38u, 0x19CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD40u;
label_19cd40:
    // 0x19cd40: 0x8e460824  lw          $a2, 0x824($s2)
    ctx->pc = 0x19cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2084)));
    // 0x19cd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd48: 0x26450828  addiu       $a1, $s2, 0x828
    ctx->pc = 0x19cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2088));
    // 0x19cd4c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cd50: 0xc06737c  jal         func_19CDF0
    ctx->pc = 0x19CD50u;
    SET_GPR_U32(ctx, 31, 0x19CD58u);
    ctx->pc = 0x19CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD50u;
    // 0x19cd54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDF0u, 0x19CD50u, 0x19CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD58u;
label_19cd58:
    // 0x19cd58: 0x8e460760  lw          $a2, 0x760($s2)
    ctx->pc = 0x19cd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1888)));
    // 0x19cd5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd60: 0x26450764  addiu       $a1, $s2, 0x764
    ctx->pc = 0x19cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1892));
    // 0x19cd64: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19cd68: 0xc06737c  jal         func_19CDF0
    ctx->pc = 0x19CD68u;
    SET_GPR_U32(ctx, 31, 0x19CD70u);
    ctx->pc = 0x19CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD68u;
    // 0x19cd6c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDF0u, 0x19CD68u, 0x19CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD70u;
label_19cd70:
    // 0x19cd70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cd74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19cd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd80: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD80u;
        // 0x19cd84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD88u;
}
