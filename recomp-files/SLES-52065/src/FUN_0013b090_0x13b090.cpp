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

// Function: FUN_0013b090
// Address: 0x13b090 - 0x13b1c0
void FUN_0013b090_0x13b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b090_0x13b090");
#endif

    switch (ctx->pc) {
        case 0x13b0f4u: goto label_13b0f4;
        case 0x13b118u: goto label_13b118;
        case 0x13b16cu: goto label_13b16c;
        default: break;
    }

    ctx->pc = 0x13b090u;

    // 0x13b090: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B090u;
    {
        const bool branch_taken_0x13b090 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x13B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B090u;
        // 0x13b094: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b090) {
            ctx->pc = 0x13B0A0u;
            goto label_13b0a0;
        }
    }
    ctx->pc = 0x13B098u;
    // 0x13b098: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x13B098u;
    {
        const bool branch_taken_0x13b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b098) {
            ctx->pc = 0x13B1B8u;
            goto label_13b1b8;
        }
    }
    ctx->pc = 0x13B0A0u;
label_13b0a0:
    // 0x13b0a0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x13b0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13b0a4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x13b0a8: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x13b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x13b0ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13b0b0: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x13b0b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13b0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13b0b8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x13b0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x13b0bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13b0c0: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b0c4: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x13b0c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b0c8: 0x0  nop
    ctx->pc = 0x13b0c8u;
    // NOP
    // 0x13b0cc: 0x0  nop
    ctx->pc = 0x13b0ccu;
    // NOP
    // 0x13b0d0: 0x1810  mfhi        $v1
    ctx->pc = 0x13b0d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13b0d4: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x13b0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x13b0d8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13b0d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13b0dc: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x13b0dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13b0e0: 0x1160001b  beqz        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x13B0E0u;
    {
        const bool branch_taken_0x13b0e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0E0u;
        // 0x13b0e4: 0xc2082b  sltu        $at, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0e0) {
            ctx->pc = 0x13B150u;
            goto label_13b150;
        }
    }
    ctx->pc = 0x13B0E8u;
    // 0x13b0e8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x13b0e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0ec: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13B0ECu;
    {
        const bool branch_taken_0x13b0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0ECu;
        // 0x13b0f0: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0ec) {
            ctx->pc = 0x13B150u;
            goto label_13b150;
        }
    }
    ctx->pc = 0x13B0F4u;
label_13b0f4:
    // 0x13b0f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x13b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13b0f8: 0x258a0010  addiu       $t2, $t4, 0x10
    ctx->pc = 0x13b0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x13b0fc: 0x25a90010  addiu       $t1, $t5, 0x10
    ctx->pc = 0x13b0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x13b100: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x13b100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b104: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x13b104u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x13b108: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x13b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x13b10c: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x13b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x13b110: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x13b110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x13b114: 0xada30008  sw          $v1, 0x8($t5)
    ctx->pc = 0x13b114u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 3));
label_13b118:
    // 0x13b118: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x13b118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13b11c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x13b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x13b120: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x13b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x13b124: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x13b124u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x13b128: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x13b128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x13b12c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x13b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x13b130: 0x1d00fff9  bgtz        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B130u;
    {
        const bool branch_taken_0x13b130 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x13B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B130u;
        // 0x13b134: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b130) {
            ctx->pc = 0x13B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b118;
        }
    }
    ctx->pc = 0x13B138u;
    // 0x13b138: 0x8d830050  lw          $v1, 0x50($t4)
    ctx->pc = 0x13b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x13b13c: 0xada30050  sw          $v1, 0x50($t5)
    ctx->pc = 0x13b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 3));
    // 0x13b140: 0x258c0060  addiu       $t4, $t4, 0x60
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
    // 0x13b144: 0x182182b  sltu        $v1, $t4, $v0
    ctx->pc = 0x13b144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b148: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13B148u;
    {
        const bool branch_taken_0x13b148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B148u;
        // 0x13b14c: 0x25ad0060  addiu       $t5, $t5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b148) {
            ctx->pc = 0x13B0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b0f4;
        }
    }
    ctx->pc = 0x13B150u;
label_13b150:
    // 0x13b150: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x13b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x13b154: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x13b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x13b158: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b15c: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x13b15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13b160: 0xe2082b  sltu        $at, $a3, $v0
    ctx->pc = 0x13b160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b164: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B164u;
    {
        const bool branch_taken_0x13b164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b164) {
            ctx->pc = 0x13B188u;
            goto label_13b188;
        }
    }
    ctx->pc = 0x13B16Cu;
label_13b16c:
    // 0x13b16c: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x13b16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x13b170: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x13b170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b174: 0x0  nop
    ctx->pc = 0x13b174u;
    // NOP
    // 0x13b178: 0x0  nop
    ctx->pc = 0x13b178u;
    // NOP
    // 0x13b17c: 0x0  nop
    ctx->pc = 0x13b17cu;
    // NOP
    // 0x13b180: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13B180u;
    {
        const bool branch_taken_0x13b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b180) {
            ctx->pc = 0x13B16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b16c;
        }
    }
    ctx->pc = 0x13B188u;
label_13b188:
    // 0x13b188: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x13b188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x13b18c: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x13b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13b190: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x13b190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x13b194: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x13b194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b198: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13b198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b19c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x13b1a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13b1a4: 0x2810  mfhi        $a1
    ctx->pc = 0x13b1a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x13b1a8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x13b1a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x13b1ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13b1b0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b1b4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_13b1b8:
    // 0x13b1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B1C0u;
}
