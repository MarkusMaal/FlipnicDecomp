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

// Function: FUN_001eab50
// Address: 0x1eab50 - 0x1ead0c
void FUN_001eab50_0x1eab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eab50_0x1eab50");
#endif

    switch (ctx->pc) {
        case 0x1eab80u: goto label_1eab80;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacbcu: goto label_1eacbc;
        default: break;
    }

    ctx->pc = 0x1eab50u;

    // 0x1eab50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eab54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eab58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eab5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eab60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1eab60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eab64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eab68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1eab68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1eab6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eab6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab70: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1eab70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1eab74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab78: 0xc07ab98  jal         func_1EAE60
    ctx->pc = 0x1EAB78u;
    SET_GPR_U32(ctx, 31, 0x1EAB80u);
    ctx->pc = 0x1EAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB78u;
    // 0x1eab7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE60u, 0x1EAB78u, 0x1EAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB80u;
label_1eab80:
    // 0x1eab80: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1EAB80u;
    {
        const bool branch_taken_0x1eab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB80u;
        // 0x1eab84: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab80) {
            ctx->pc = 0x1EACF4u;
            goto label_1eacf4;
        }
    }
    ctx->pc = 0x1EAB88u;
    // 0x1eab88: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1eab8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eab8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eab90: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1eab94: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1eab94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1eab98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eab98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab9c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1eaba0: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x1eaba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eaba4: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x1eaba8: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1eaba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x1eabac: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1eabb0: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1eabb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eabb4: 0x0  nop
    ctx->pc = 0x1eabb4u;
    // NOP
    // 0x1eabb8: 0x0  nop
    ctx->pc = 0x1eabb8u;
    // NOP
    // 0x1eabbc: 0x2010  mfhi        $a0
    ctx->pc = 0x1eabbcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1eabc0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1eabc4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1eabc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1eabc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1eabcc: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eabd0: 0xe0082a  slt         $at, $a3, $zero
    ctx->pc = 0x1eabd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1eabd4: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EABD4u;
    {
        const bool branch_taken_0x1eabd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABD4u;
        // 0x1eabd8: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabd4) {
            ctx->pc = 0x1EAC44u;
            goto label_1eac44;
        }
    }
    ctx->pc = 0x1EABDCu;
    // 0x1eabdc: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_1eabe0:
    // 0x1eabe0: 0x44043  sra         $t0, $a0, 1
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1eabe4: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1eabe8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1eabe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1eabec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eabf0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eabf4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eabf8: 0x20a082b  sltu        $at, $s0, $t2
    ctx->pc = 0x1eabf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1eabfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EABFCu;
    {
        const bool branch_taken_0x1eabfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eabfc) {
            ctx->pc = 0x1EAC0Cu;
            goto label_1eac0c;
        }
    }
    ctx->pc = 0x1EAC04u;
    // 0x1eac04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EAC04u;
    {
        const bool branch_taken_0x1eac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC04u;
        // 0x1eac08: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac04) {
            ctx->pc = 0x1EAC38u;
            goto label_1eac38;
        }
    }
    ctx->pc = 0x1EAC0Cu;
label_1eac0c:
    // 0x1eac0c: 0x0  nop
    ctx->pc = 0x1eac0cu;
    // NOP
    // 0x1eac10: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eac14: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1eac18: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1eac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1eac1c: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1eac1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1eac20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC20u;
    {
        const bool branch_taken_0x1eac20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC20u;
        // 0x1eac24: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac20) {
            ctx->pc = 0x1EAC30u;
            goto label_1eac30;
        }
    }
    ctx->pc = 0x1EAC28u;
    // 0x1eac28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAC28u;
    {
        const bool branch_taken_0x1eac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC28u;
        // 0x1eac2c: 0xe9082a  slt         $at, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac28) {
            ctx->pc = 0x1EAC3Cu;
            goto label_1eac3c;
        }
    }
    ctx->pc = 0x1EAC30u;
label_1eac30:
    // 0x1eac30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAC30u;
    {
        const bool branch_taken_0x1eac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac30) {
            ctx->pc = 0x1EAC4Cu;
            goto label_1eac4c;
        }
    }
    ctx->pc = 0x1EAC38u;
label_1eac38:
    // 0x1eac38: 0xe9082a  slt         $at, $a3, $t1
    ctx->pc = 0x1eac38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1eac3c:
    // 0x1eac3c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EAC3Cu;
    {
        const bool branch_taken_0x1eac3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC3Cu;
        // 0x1eac40: 0x1272021  addu        $a0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac3c) {
            ctx->pc = 0x1EABE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eabe0;
        }
    }
    ctx->pc = 0x1EAC44u;
label_1eac44:
    // 0x1eac44: 0x0  nop
    ctx->pc = 0x1eac44u;
    // NOP
    // 0x1eac48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac4c:
    // 0x1eac4c: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EAC4Cu;
    {
        const bool branch_taken_0x1eac4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac4c) {
            ctx->pc = 0x1EACF4u;
            goto label_1eacf4;
        }
    }
    ctx->pc = 0x1EAC54u;
    // 0x1eac54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eac58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eac5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC5Cu;
    {
        const bool branch_taken_0x1eac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC5Cu;
        // 0x1eac60: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac5c) {
            ctx->pc = 0x1EAC6Cu;
            goto label_1eac6c;
        }
    }
    ctx->pc = 0x1EAC64u;
    // 0x1eac64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC64u;
        // 0x1eac68: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EAC74u;
            goto label_1eac74;
        }
    }
    ctx->pc = 0x1EAC6Cu;
label_1eac6c:
    // 0x1eac6c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eac70: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1eac70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1eac74:
    // 0x1eac74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eac78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1eac78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1eac7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eac80: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1eac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1eac84: 0xc07ab84  jal         func_1EAE10
    ctx->pc = 0x1EAC84u;
    SET_GPR_U32(ctx, 31, 0x1EAC8Cu);
    ctx->pc = 0x1EAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC84u;
    // 0x1eac88: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE10u, 0x1EAC84u, 0x1EAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC8Cu;
label_1eac8c:
    // 0x1eac8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eac90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac94:
    // 0x1eac94: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAC94u;
    SET_GPR_U32(ctx, 31, 0x1EAC9Cu);
    ctx->pc = 0x1EAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC94u;
    // 0x1eac98: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAC94u, 0x1EAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC9Cu;
label_1eac9c:
    // 0x1eac9c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1eac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1eaca0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EACA0u;
    {
        const bool branch_taken_0x1eaca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA0u;
        // 0x1eaca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaca0) {
            ctx->pc = 0x1EACF4u;
            goto label_1eacf4;
        }
    }
    ctx->pc = 0x1EACA8u;
    // 0x1eaca8: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EACA8u;
    SET_GPR_U32(ctx, 31, 0x1EACB0u);
    ctx->pc = 0x1EACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EACA8u;
    // 0x1eacac: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EACA8u, 0x1EACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACB0u;
label_1eacb0:
    // 0x1eacb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eacb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacb4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EACB4u;
    SET_GPR_U32(ctx, 31, 0x1EACBCu);
    ctx->pc = 0x1EACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EACB4u;
    // 0x1eacb8: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EACB4u, 0x1EACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACBCu;
label_1eacbc:
    // 0x1eacbc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1eacbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1eacc0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1eacc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1eacc4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1eacc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1eacc8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EACC8u;
    {
        const bool branch_taken_0x1eacc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC8u;
        // 0x1eaccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc8) {
            ctx->pc = 0x1EACF4u;
            goto label_1eacf4;
        }
    }
    ctx->pc = 0x1EACD0u;
    // 0x1eacd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eacd4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1eacd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1eacd8: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x1eacd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1eacdc: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EACDCu;
    {
        const bool branch_taken_0x1eacdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eacdc) {
            ctx->pc = 0x1EAC94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eac94;
        }
    }
    ctx->pc = 0x1EACE4u;
    // 0x1eace4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1eace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1eace8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1eace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1eacec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eacecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eacf0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1eacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1eacf4:
    // 0x1eacf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eacf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eacf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eacf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eacfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eacfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ead00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ead00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ead04: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD04u;
        // 0x1ead08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAD0Cu;
}
