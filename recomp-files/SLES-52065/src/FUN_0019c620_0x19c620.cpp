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

// Function: FUN_0019c620
// Address: 0x19c620 - 0x19c730
void FUN_0019c620_0x19c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c620_0x19c620");
#endif

    switch (ctx->pc) {
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6b8u: goto label_19c6b8;
        default: break;
    }

    ctx->pc = 0x19c620u;

    // 0x19c620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c634: 0x8c8408ec  lw          $a0, 0x8EC($a0)
    ctx->pc = 0x19c634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2284)));
    // 0x19c638: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x19C638u;
    {
        const bool branch_taken_0x19c638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C638u;
        // 0x19c63c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c638) {
            ctx->pc = 0x19C6D0u;
            goto label_19c6d0;
        }
    }
    ctx->pc = 0x19C640u;
    // 0x19c640: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C640u;
    {
        const bool branch_taken_0x19c640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c640) {
            ctx->pc = 0x19C664u;
            goto label_19c664;
        }
    }
    ctx->pc = 0x19C648u;
    // 0x19c648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C648u;
    {
        const bool branch_taken_0x19c648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c648) {
            ctx->pc = 0x19C658u;
            goto label_19c658;
        }
    }
    ctx->pc = 0x19C650u;
    // 0x19c650: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19C650u;
    {
        const bool branch_taken_0x19c650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C650u;
        // 0x19c654: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c650) {
            ctx->pc = 0x19C724u;
            goto label_19c724;
        }
    }
    ctx->pc = 0x19C658u;
label_19c658:
    // 0x19c658: 0xae000900  sw          $zero, 0x900($s0)
    ctx->pc = 0x19c658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 0));
    // 0x19c65c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x19C65Cu;
    {
        const bool branch_taken_0x19c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C65Cu;
        // 0x19c660: 0xae0308ec  sw          $v1, 0x8EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c65c) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C664u;
label_19c664:
    // 0x19c664: 0x8e030900  lw          $v1, 0x900($s0)
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2304)));
    // 0x19c668: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x19C668u;
    {
        const bool branch_taken_0x19c668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c668) {
            ctx->pc = 0x19C6C4u;
            goto label_19c6c4;
        }
    }
    ctx->pc = 0x19C670u;
    // 0x19c670: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19c674: 0x8e030924  lw          $v1, 0x924($s0)
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
    // 0x19c678: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x19c678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x19c67c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x19c67cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19c680: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x19C680u;
    {
        const bool branch_taken_0x19c680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c680) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C688u;
    // 0x19c688: 0x92030938  lbu         $v1, 0x938($s0)
    ctx->pc = 0x19c688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x19c68c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x19C68Cu;
    {
        const bool branch_taken_0x19c68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c68c) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C694u;
    // 0x19c694: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x19C694u;
    SET_GPR_U32(ctx, 31, 0x19C69Cu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x19C694u, 0x19C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C69Cu;
label_19c69c:
    // 0x19c69c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19C69Cu;
    {
        const bool branch_taken_0x19c69c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19c69c) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C6A4u;
    // 0x19c6a4: 0x8e020664  lw          $v0, 0x664($s0)
    ctx->pc = 0x19c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x19c6a8: 0x8e0508e8  lw          $a1, 0x8E8($s0)
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x19c6ac: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19c6b0: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x19C6B0u;
    SET_GPR_U32(ctx, 31, 0x19C6B8u);
    ctx->pc = 0x19C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6B0u;
    // 0x19c6b4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x19C6B0u, 0x19C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6B8u;
label_19c6b8:
    // 0x19c6b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c6bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19C6BCu;
    {
        const bool branch_taken_0x19c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6BCu;
        // 0x19c6c0: 0xae0308ec  sw          $v1, 0x8EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6bc) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C6C4u;
label_19c6c4:
    // 0x19c6c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c6c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19C6C8u;
    {
        const bool branch_taken_0x19c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6C8u;
        // 0x19c6cc: 0xae030900  sw          $v1, 0x900($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6c8) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C6D0u;
label_19c6d0:
    // 0x19c6d0: 0x8e0508e8  lw          $a1, 0x8E8($s0)
    ctx->pc = 0x19c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x19c6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c6d8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19c6dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19c6e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19c6e4: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x19c6e8: 0x8c8401fc  lw          $a0, 0x1FC($a0)
    ctx->pc = 0x19c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x19c6ec: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19C6ECu;
    {
        const bool branch_taken_0x19c6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c6ec) {
            ctx->pc = 0x19C720u;
            goto label_19c720;
        }
    }
    ctx->pc = 0x19C6F4u;
    // 0x19c6f4: 0xae0308ec  sw          $v1, 0x8EC($s0)
    ctx->pc = 0x19c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 3));
    // 0x19c6f8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c6fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19c700: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19c700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c704: 0x0  nop
    ctx->pc = 0x19c704u;
    // NOP
    // 0x19c708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c70c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c710: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c714: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19c714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19c718: 0x0  nop
    ctx->pc = 0x19c718u;
    // NOP
    // 0x19c71c: 0xae030900  sw          $v1, 0x900($s0)
    ctx->pc = 0x19c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 3));
label_19c720:
    // 0x19c720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c724:
    // 0x19c724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c728: 0x3e00008  jr          $ra
    ctx->pc = 0x19C728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C728u;
        // 0x19c72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C730u;
}
