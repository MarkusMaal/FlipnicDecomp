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

// Function: FUN_0012ceb0
// Address: 0x12ceb0 - 0x12d074
void FUN_0012ceb0_0x12ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ceb0_0x12ceb0");
#endif

    switch (ctx->pc) {
        case 0x12cf20u: goto label_12cf20;
        case 0x12cf2cu: goto label_12cf2c;
        case 0x12cf6cu: goto label_12cf6c;
        case 0x12cf98u: goto label_12cf98;
        case 0x12cfa8u: goto label_12cfa8;
        case 0x12cff4u: goto label_12cff4;
        case 0x12d010u: goto label_12d010;
        case 0x12d020u: goto label_12d020;
        case 0x12d03cu: goto label_12d03c;
        case 0x12d058u: goto label_12d058;
        default: break;
    }

    ctx->pc = 0x12ceb0u;

    // 0x12ceb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12ceb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ceb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12cebc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x12cebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12cec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cec8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12cec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ced0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x12ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x12ced4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12ced4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ced8: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x12ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x12cedc: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x12cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x12cee0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x12cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x12cee4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x12cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x12cee8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x12cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x12ceec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CEECu;
    {
        const bool branch_taken_0x12ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEECu;
        // 0x12cef0: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceec) {
            ctx->pc = 0x12CEFCu;
            goto label_12cefc;
        }
    }
    ctx->pc = 0x12CEF4u;
    // 0x12cef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12CEF4u;
    {
        const bool branch_taken_0x12cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEF4u;
        // 0x12cef8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cef4) {
            ctx->pc = 0x12CF08u;
            goto label_12cf08;
        }
    }
    ctx->pc = 0x12CEFCu;
label_12cefc:
    // 0x12cefc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12cf00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cf04: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x12cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12cf08:
    // 0x12cf08: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cf0c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12cf10: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12cf14: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cf18: 0xc081798  jal         func_205E60
    ctx->pc = 0x12CF18u;
    SET_GPR_U32(ctx, 31, 0x12CF20u);
    ctx->pc = 0x12CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF18u;
    // 0x12cf1c: 0x24842f60  addiu       $a0, $a0, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x12CF18u, 0x12CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF20u;
label_12cf20:
    // 0x12cf20: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12cf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12cf24: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12CF24u;
    SET_GPR_U32(ctx, 31, 0x12CF2Cu);
    ctx->pc = 0x12CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF24u;
    // 0x12cf28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12CF24u, 0x12CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF2Cu;
label_12cf2c:
    // 0x12cf2c: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x12cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x12cf30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cf34: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12CF34u;
    {
        const bool branch_taken_0x12cf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF34u;
        // 0x12cf38: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf34) {
            ctx->pc = 0x12CF8Cu;
            goto label_12cf8c;
        }
    }
    ctx->pc = 0x12CF3Cu;
    // 0x12cf3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cf40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CF40u;
    {
        const bool branch_taken_0x12cf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF40u;
        // 0x12cf44: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf40) {
            ctx->pc = 0x12CF60u;
            goto label_12cf60;
        }
    }
    ctx->pc = 0x12CF48u;
    // 0x12cf48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CF48u;
    {
        const bool branch_taken_0x12cf48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf48) {
            ctx->pc = 0x12CF58u;
            goto label_12cf58;
        }
    }
    ctx->pc = 0x12CF50u;
    // 0x12cf50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12CF50u;
    {
        const bool branch_taken_0x12cf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF50u;
        // 0x12cf54: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf50) {
            ctx->pc = 0x12CFA0u;
            goto label_12cfa0;
        }
    }
    ctx->pc = 0x12CF58u;
label_12cf58:
    // 0x12cf58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12CF58u;
    {
        const bool branch_taken_0x12cf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF58u;
        // 0x12cf5c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf58) {
            ctx->pc = 0x12CF9Cu;
            goto label_12cf9c;
        }
    }
    ctx->pc = 0x12CF60u;
label_12cf60:
    // 0x12cf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf64: 0xc04b65c  jal         func_12D970
    ctx->pc = 0x12CF64u;
    SET_GPR_U32(ctx, 31, 0x12CF6Cu);
    ctx->pc = 0x12CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF64u;
    // 0x12cf68: 0x24a52f60  addiu       $a1, $a1, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D970u, 0x12CF64u, 0x12CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF6Cu;
label_12cf6c:
    // 0x12cf6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12cf70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12cf74: 0x0  nop
    ctx->pc = 0x12cf74u;
    // NOP
    // 0x12cf78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12cf78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12cf7c: 0x0  nop
    ctx->pc = 0x12cf7cu;
    // NOP
    // 0x12cf80: 0x0  nop
    ctx->pc = 0x12cf80u;
    // NOP
    // 0x12cf84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CF84u;
    {
        const bool branch_taken_0x12cf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF84u;
        // 0x12cf88: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf84) {
            ctx->pc = 0x12CF9Cu;
            goto label_12cf9c;
        }
    }
    ctx->pc = 0x12CF8Cu;
label_12cf8c:
    // 0x12cf8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf90: 0xc04b65c  jal         func_12D970
    ctx->pc = 0x12CF90u;
    SET_GPR_U32(ctx, 31, 0x12CF98u);
    ctx->pc = 0x12CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF90u;
    // 0x12cf94: 0x24a52f60  addiu       $a1, $a1, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D970u, 0x12CF90u, 0x12CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF98u;
label_12cf98:
    // 0x12cf98: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x12cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_12cf9c:
    // 0x12cf9c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_12cfa0:
    // 0x12cfa0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x12CFA0u;
    {
        const bool branch_taken_0x12cfa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFA0u;
        // 0x12cfa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfa0) {
            ctx->pc = 0x12D050u;
            goto label_12d050;
        }
    }
    ctx->pc = 0x12CFA8u;
label_12cfa8:
    // 0x12cfa8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12cfac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12cfb0: 0x24632f60  addiu       $v1, $v1, 0x2F60
    ctx->pc = 0x12cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12128));
    // 0x12cfb4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12cfb8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x12cfb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12cfbc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12CFBCu;
    {
        const bool branch_taken_0x12cfbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFBCu;
        // 0x12cfc0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfbc) {
            ctx->pc = 0x12D018u;
            goto label_12d018;
        }
    }
    ctx->pc = 0x12CFC4u;
    // 0x12cfc4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12CFC4u;
    {
        const bool branch_taken_0x12cfc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12cfc4) {
            ctx->pc = 0x12CFFCu;
            goto label_12cffc;
        }
    }
    ctx->pc = 0x12CFCCu;
    // 0x12cfcc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12cfd0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CFD0u;
    {
        const bool branch_taken_0x12cfd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12cfd0) {
            ctx->pc = 0x12CFE0u;
            goto label_12cfe0;
        }
    }
    ctx->pc = 0x12CFD8u;
    // 0x12cfd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12CFD8u;
    {
        const bool branch_taken_0x12cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cfd8) {
            ctx->pc = 0x12D028u;
            goto label_12d028;
        }
    }
    ctx->pc = 0x12CFE0u;
label_12cfe0:
    // 0x12cfe0: 0xa2400010  sb          $zero, 0x10($s2)
    ctx->pc = 0x12cfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cfe4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x12cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cfe8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x12cfec: 0xc04b440  jal         func_12D100
    ctx->pc = 0x12CFECu;
    SET_GPR_U32(ctx, 31, 0x12CFF4u);
    ctx->pc = 0x12CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFECu;
    // 0x12cff0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D100u, 0x12CFECu, 0x12CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFF4u;
label_12cff4:
    // 0x12cff4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12CFF4u;
    {
        const bool branch_taken_0x12cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cff4) {
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12CFFCu;
label_12cffc:
    // 0x12cffc: 0x0  nop
    ctx->pc = 0x12cffcu;
    // NOP
    // 0x12d000: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x12d004: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x12d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d008: 0xc04b420  jal         func_12D080
    ctx->pc = 0x12D008u;
    SET_GPR_U32(ctx, 31, 0x12D010u);
    ctx->pc = 0x12D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D008u;
    // 0x12d00c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D080u, 0x12D008u, 0x12D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D010u;
label_12d010:
    // 0x12d010: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D010u;
    {
        const bool branch_taken_0x12d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d010) {
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D018u;
label_12d018:
    // 0x12d018: 0xc04b44c  jal         func_12D130
    ctx->pc = 0x12D018u;
    SET_GPR_U32(ctx, 31, 0x12D020u);
    ctx->pc = 0x12D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D018u;
    // 0x12d01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D130u, 0x12D018u, 0x12D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D020u;
label_12d020:
    // 0x12d020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D020u;
    {
        const bool branch_taken_0x12d020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d020) {
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D028u;
label_12d028:
    // 0x12d028: 0x92420010  lbu         $v0, 0x10($s2)
    ctx->pc = 0x12d028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12d02c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D02Cu;
    {
        const bool branch_taken_0x12d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D02Cu;
        // 0x12d030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d02c) {
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D034u;
    // 0x12d034: 0xc04b490  jal         func_12D240
    ctx->pc = 0x12D034u;
    SET_GPR_U32(ctx, 31, 0x12D03Cu);
    ctx->pc = 0x12D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D240u, 0x12D034u, 0x12D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D03Cu;
label_12d03c:
    // 0x12d03c: 0x0  nop
    ctx->pc = 0x12d03cu;
    // NOP
    // 0x12d040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12d040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12d044: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x12d044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12d048: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x12D048u;
    {
        const bool branch_taken_0x12d048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d048) {
            ctx->pc = 0x12CFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cfa8;
        }
    }
    ctx->pc = 0x12D050u;
label_12d050:
    // 0x12d050: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12D050u;
    SET_GPR_U32(ctx, 31, 0x12D058u);
    ctx->pc = 0x12D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D050u;
    // 0x12d054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12D050u, 0x12D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D058u;
label_12d058:
    // 0x12d058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12d058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d05c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12d060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D06Cu;
        // 0x12d070: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D074u;
}
