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

// Function: FUN_0014abd0
// Address: 0x14abd0 - 0x14ad9c
void FUN_0014abd0_0x14abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014abd0_0x14abd0");
#endif

    switch (ctx->pc) {
        case 0x14ac04u: goto label_14ac04;
        case 0x14ac90u: goto label_14ac90;
        case 0x14ad50u: goto label_14ad50;
        default: break;
    }

    ctx->pc = 0x14abd0u;

label_14abd0:
    // 0x14abd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14abd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14abd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14abdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14abe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14abe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14abe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abe8: 0x6010036  bgez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x14ABE8u;
    {
        const bool branch_taken_0x14abe8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABE8u;
        // 0x14abec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abe8) {
            ctx->pc = 0x14ACC4u;
            goto label_14acc4;
        }
    }
    ctx->pc = 0x14ABF0u;
    // 0x14abf0: 0x108023  negu        $s0, $s0
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x14abf4: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ABF4u;
    {
        const bool branch_taken_0x14abf4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABF4u;
        // 0x14abf8: 0x102823  negu        $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abf4) {
            ctx->pc = 0x14AC0Cu;
            goto label_14ac0c;
        }
    }
    ctx->pc = 0x14ABFCu;
    // 0x14abfc: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14ABFCu;
    SET_GPR_U32(ctx, 31, 0x14AC04u);
    ctx->pc = 0x14ABD0u;
    goto label_14abd0;
    ctx->pc = 0x14AC04u;
label_14ac04:
    // 0x14ac04: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14AC04u;
    {
        const bool branch_taken_0x14ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac04) {
            ctx->pc = 0x14ACBCu;
            goto label_14acbc;
        }
    }
    ctx->pc = 0x14AC0Cu;
label_14ac0c:
    // 0x14ac0c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14ac10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14ac14: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x14ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14ac18: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ac1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ac20: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ac24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AC24u;
    {
        const bool branch_taken_0x14ac24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC24u;
        // 0x14ac28: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac24) {
            ctx->pc = 0x14AC34u;
            goto label_14ac34;
        }
    }
    ctx->pc = 0x14AC2Cu;
    // 0x14ac2c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14ac30: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_14ac34:
    // 0x14ac34: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x14ac34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ac38: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AC38u;
    {
        const bool branch_taken_0x14ac38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac38) {
            ctx->pc = 0x14AC54u;
            goto label_14ac54;
        }
    }
    ctx->pc = 0x14AC40u;
    // 0x14ac40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ac44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ac48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ac4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14AC4Cu;
    {
        const bool branch_taken_0x14ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC4Cu;
        // 0x14ac50: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac4c) {
            ctx->pc = 0x14ACB8u;
            goto label_14acb8;
        }
    }
    ctx->pc = 0x14AC54u;
label_14ac54:
    // 0x14ac54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ac58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ac5c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ac60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AC60u;
    {
        const bool branch_taken_0x14ac60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC60u;
        // 0x14ac64: 0x29083  sra         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac60) {
            ctx->pc = 0x14AC70u;
            goto label_14ac70;
        }
    }
    ctx->pc = 0x14AC68u;
    // 0x14ac68: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14ac6c: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
label_14ac70:
    // 0x14ac70: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14ac74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac78: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ac78u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ac7c: 0x0  nop
    ctx->pc = 0x14ac7cu;
    // NOP
    // 0x14ac80: 0x0  nop
    ctx->pc = 0x14ac80u;
    // NOP
    // 0x14ac84: 0x1012  mflo        $v0
    ctx->pc = 0x14ac84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14ac88: 0xc050184  jal         func_140610
    ctx->pc = 0x14AC88u;
    SET_GPR_U32(ctx, 31, 0x14AC90u);
    ctx->pc = 0x14AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC88u;
    // 0x14ac8c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14AC88u, 0x14AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC90u;
label_14ac90:
    // 0x14ac90: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ac90u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ac94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ac98: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x14ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ac9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14aca0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14aca4: 0x1810  mfhi        $v1
    ctx->pc = 0x14aca4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14aca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14acac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14acb0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x14acb4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_14acb8:
    // 0x14acb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14acb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14acbc:
    // 0x14acbc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14ACBCu;
    {
        const bool branch_taken_0x14acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACBCu;
        // 0x14acc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acbc) {
            ctx->pc = 0x14AD88u;
            goto label_14ad88;
        }
    }
    ctx->pc = 0x14ACC4u;
label_14acc4:
    // 0x14acc4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14acc8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x14acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14accc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x14acccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14acd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14acd4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14acd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14acdc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x14acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14ace0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ACE0u;
    {
        const bool branch_taken_0x14ace0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACE0u;
        // 0x14ace4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ace0) {
            ctx->pc = 0x14ACF0u;
            goto label_14acf0;
        }
    }
    ctx->pc = 0x14ACE8u;
    // 0x14ace8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14acec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_14acf0:
    // 0x14acf0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14acf4: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x14acf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14acf8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14ACF8u;
    {
        const bool branch_taken_0x14acf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14acf8) {
            ctx->pc = 0x14AD14u;
            goto label_14ad14;
        }
    }
    ctx->pc = 0x14AD00u;
    // 0x14ad00: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x14ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ad04: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ad08: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ad0c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14AD0Cu;
    {
        const bool branch_taken_0x14ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD0Cu;
        // 0x14ad10: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad0c) {
            ctx->pc = 0x14AD80u;
            goto label_14ad80;
        }
    }
    ctx->pc = 0x14AD14u;
label_14ad14:
    // 0x14ad14: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ad18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x14ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14ad1c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AD1Cu;
    {
        const bool branch_taken_0x14ad1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD1Cu;
        // 0x14ad20: 0x29083  sra         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad1c) {
            ctx->pc = 0x14AD2Cu;
            goto label_14ad2c;
        }
    }
    ctx->pc = 0x14AD24u;
    // 0x14ad24: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14ad28: 0x29083  sra         $s2, $v0, 2
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 2));
label_14ad2c:
    // 0x14ad2c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14ad2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14ad30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad34: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ad34u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ad38: 0x0  nop
    ctx->pc = 0x14ad38u;
    // NOP
    // 0x14ad3c: 0x0  nop
    ctx->pc = 0x14ad3cu;
    // NOP
    // 0x14ad40: 0x1012  mflo        $v0
    ctx->pc = 0x14ad40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14ad44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ad48: 0xc050184  jal         func_140610
    ctx->pc = 0x14AD48u;
    SET_GPR_U32(ctx, 31, 0x14AD50u);
    ctx->pc = 0x14AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD48u;
    // 0x14ad4c: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14AD48u, 0x14AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD50u;
label_14ad50:
    // 0x14ad50: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ad50u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ad54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ad58: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ad5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ad60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ad64: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14ad68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ad6c: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x14ad70: 0x1010  mfhi        $v0
    ctx->pc = 0x14ad70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14ad74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ad78: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ad7c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x14ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_14ad80:
    // 0x14ad80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14ad80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14ad88:
    // 0x14ad88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ad88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ad8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ad8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad94: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD94u;
        // 0x14ad98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD9Cu;
}
