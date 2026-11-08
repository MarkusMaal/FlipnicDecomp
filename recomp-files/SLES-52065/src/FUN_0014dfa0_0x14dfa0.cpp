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

// Function: FUN_0014dfa0
// Address: 0x14dfa0 - 0x14e0f0
void FUN_0014dfa0_0x14dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014dfa0_0x14dfa0");
#endif

    switch (ctx->pc) {
        case 0x14e030u: goto label_14e030;
        case 0x14e03cu: goto label_14e03c;
        case 0x14e06cu: goto label_14e06c;
        case 0x14e084u: goto label_14e084;
        default: break;
    }

    ctx->pc = 0x14dfa0u;

    // 0x14dfa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14dfa4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14dfa8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14dfac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14dfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14dfb0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14dfb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dfb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14dfb8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14dfb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dfbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14dfc0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14dfc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dfc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14dfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14dfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dfcc: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DFCCu;
    {
        const bool branch_taken_0x14dfcc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x14DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFCCu;
        // 0x14dfd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dfcc) {
            ctx->pc = 0x14DFDCu;
            goto label_14dfdc;
        }
    }
    ctx->pc = 0x14DFD4u;
    // 0x14dfd4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x14DFD4u;
    {
        const bool branch_taken_0x14dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFD4u;
        // 0x14dfd8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dfd4) {
            ctx->pc = 0x14E0C8u;
            goto label_14e0c8;
        }
    }
    ctx->pc = 0x14DFDCu;
label_14dfdc:
    // 0x14dfdc: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14dfe0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x14dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x14dfe4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14dfe8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x14dfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x14dfec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14dff0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14dff4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14dff8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x14dff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14dffc: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x14dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x14e000: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x14e000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14e004: 0x0  nop
    ctx->pc = 0x14e004u;
    // NOP
    // 0x14e008: 0x0  nop
    ctx->pc = 0x14e008u;
    // NOP
    // 0x14e00c: 0x1010  mfhi        $v0
    ctx->pc = 0x14e00cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e010: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x14e010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x14e014: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14e014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x14e018: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14e018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e01c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E01Cu;
    {
        const bool branch_taken_0x14e01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E01Cu;
        // 0x14e020: 0x293082b  sltu        $at, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e01c) {
            ctx->pc = 0x14E04Cu;
            goto label_14e04c;
        }
    }
    ctx->pc = 0x14E024u;
    // 0x14e024: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x14e024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e028: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E028u;
    {
        const bool branch_taken_0x14e028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E028u;
        // 0x14e02c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e028) {
            ctx->pc = 0x14E04Cu;
            goto label_14e04c;
        }
    }
    ctx->pc = 0x14E030u;
label_14e030:
    // 0x14e030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e034: 0xc05383c  jal         func_14E0F0
    ctx->pc = 0x14E034u;
    SET_GPR_U32(ctx, 31, 0x14E03Cu);
    ctx->pc = 0x14E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E034u;
    // 0x14e038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0F0u, 0x14E034u, 0x14E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E03Cu;
label_14e03c:
    // 0x14e03c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14e040: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x14e040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14E044u;
    {
        const bool branch_taken_0x14e044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E044u;
        // 0x14e048: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e044) {
            ctx->pc = 0x14E030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e030;
        }
    }
    ctx->pc = 0x14E04Cu;
label_14e04c:
    // 0x14e04c: 0x0  nop
    ctx->pc = 0x14e04cu;
    // NOP
    // 0x14e050: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14e054: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14e058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e05c: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x14e05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14e060: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x14e060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e064: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14E064u;
    {
        const bool branch_taken_0x14e064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e064) {
            ctx->pc = 0x14E098u;
            goto label_14e098;
        }
    }
    ctx->pc = 0x14E06Cu;
label_14e06c:
    // 0x14e06c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E06Cu;
    {
        const bool branch_taken_0x14e06c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e06c) {
            ctx->pc = 0x14E084u;
            goto label_14e084;
        }
    }
    ctx->pc = 0x14E074u;
    // 0x14e074: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E074u;
    {
        const bool branch_taken_0x14e074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E074u;
        // 0x14e078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e074) {
            ctx->pc = 0x14E084u;
            goto label_14e084;
        }
    }
    ctx->pc = 0x14E07Cu;
    // 0x14e07c: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14E07Cu;
    SET_GPR_U32(ctx, 31, 0x14E084u);
    ctx->pc = 0x14E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E07Cu;
    // 0x14e080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14E07Cu, 0x14E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E084u;
label_14e084:
    // 0x14e084: 0x0  nop
    ctx->pc = 0x14e084u;
    // NOP
    // 0x14e088: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e08c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x14e08cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e090: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14E090u;
    {
        const bool branch_taken_0x14e090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e090) {
            ctx->pc = 0x14E06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e06c;
        }
    }
    ctx->pc = 0x14E098u;
label_14e098:
    // 0x14e098: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14e098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14e09c: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x14e0a0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14e0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14e0a4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14e0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14e0a8: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x14e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14e0ac: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x14e0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0b0: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x14e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14e0b4: 0x2010  mfhi        $a0
    ctx->pc = 0x14e0b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14e0b8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x14e0b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x14e0bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e0c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e0c4: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x14e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_14e0c8:
    // 0x14e0c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14e0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e0cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14e0ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e0d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14e0d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e0d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e0d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e0d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e0d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e0dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e0e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E0E8u;
        // 0x14e0ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E0F0u;
}
