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

// Function: FUN_00141c50
// Address: 0x141c50 - 0x141ddc
void FUN_00141c50_0x141c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141c50_0x141c50");
#endif

    switch (ctx->pc) {
        case 0x141c88u: goto label_141c88;
        case 0x141d34u: goto label_141d34;
        case 0x141d5cu: goto label_141d5c;
        case 0x141d7cu: goto label_141d7c;
        case 0x141d88u: goto label_141d88;
        case 0x141d94u: goto label_141d94;
        case 0x141dacu: goto label_141dac;
        default: break;
    }

    ctx->pc = 0x141c50u;

    // 0x141c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x141c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x141c54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x141c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x141c58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x141c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x141c5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x141c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x141c60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x141c60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x141c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141c70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141c74: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x141c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x141c78: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x141c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x141c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141c80: 0xc05068c  jal         func_141A30
    ctx->pc = 0x141C80u;
    SET_GPR_U32(ctx, 31, 0x141C88u);
    ctx->pc = 0x141C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C80u;
    // 0x141c84: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A30u, 0x141C80u, 0x141C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C88u;
label_141c88:
    // 0x141c88: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x141c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x141c8c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x141C8Cu;
    {
        const bool branch_taken_0x141c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c8c) {
            ctx->pc = 0x141DB8u;
            goto label_141db8;
        }
    }
    ctx->pc = 0x141C94u;
    // 0x141c94: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x141c98: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x141C98u;
    {
        const bool branch_taken_0x141c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c98) {
            ctx->pc = 0x141D08u;
            goto label_141d08;
        }
    }
    ctx->pc = 0x141CA0u;
    // 0x141ca0: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x141ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x141ca4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x141ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x141ca8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x141cac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x141cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x141cb0: 0x0  nop
    ctx->pc = 0x141cb0u;
    // NOP
    // 0x141cb4: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x141cb4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x141cb8: 0x0  nop
    ctx->pc = 0x141cb8u;
    // NOP
    // 0x141cbc: 0x0  nop
    ctx->pc = 0x141cbcu;
    // NOP
    // 0x141cc0: 0x8012  mflo        $s0
    ctx->pc = 0x141cc0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x141cc4: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x141cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141cc8: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x141CC8u;
    {
        const bool branch_taken_0x141cc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x141CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CC8u;
        // 0x141ccc: 0xb01818  mult        $v1, $a1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141cc8) {
            ctx->pc = 0x141CE4u;
            goto label_141ce4;
        }
    }
    ctx->pc = 0x141CD0u;
    // 0x141cd0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x141cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141cd4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x141CD4u;
    {
        const bool branch_taken_0x141cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CD4u;
        // 0x141cd8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141cd4) {
            ctx->pc = 0x141CE0u;
            goto label_141ce0;
        }
    }
    ctx->pc = 0x141CDCu;
    // 0x141cdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x141cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141ce0:
    // 0x141ce0: 0xb01818  mult        $v1, $a1, $s0
    ctx->pc = 0x141ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_141ce4:
    // 0x141ce4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x141ce4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141ce8: 0x0  nop
    ctx->pc = 0x141ce8u;
    // NOP
    // 0x141cec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x141cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x141cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x141cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x141cf4: 0x0  nop
    ctx->pc = 0x141cf4u;
    // NOP
    // 0x141cf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x141cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x141cfc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x141cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x141d00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x141d00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x141d04: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x141d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_141d08:
    // 0x141d08: 0x92a30029  lbu         $v1, 0x29($s5)
    ctx->pc = 0x141d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 41)));
    // 0x141d0c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x141D0Cu;
    {
        const bool branch_taken_0x141d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D0Cu;
        // 0x141d10: 0x26b2003c  addiu       $s2, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d0c) {
            ctx->pc = 0x141D74u;
            goto label_141d74;
        }
    }
    ctx->pc = 0x141D14u;
    // 0x141d14: 0x92a40028  lbu         $a0, 0x28($s5)
    ctx->pc = 0x141d14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x141d18: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x141d1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x141d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x141d20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141d24: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x141d24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141d28: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x141d28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141d2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x141D2Cu;
    {
        const bool branch_taken_0x141d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D2Cu;
        // 0x141d30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d2c) {
            ctx->pc = 0x141D60u;
            goto label_141d60;
        }
    }
    ctx->pc = 0x141D34u;
label_141d34:
    // 0x141d34: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x141d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x141d38: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x141d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x141d3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d44: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x141d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141d48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x141d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141d50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x141d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141d54: 0xc050850  jal         func_142140
    ctx->pc = 0x141D54u;
    SET_GPR_U32(ctx, 31, 0x141D5Cu);
    ctx->pc = 0x141D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D54u;
    // 0x141d58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142140u, 0x141D54u, 0x141D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D5Cu;
label_141d5c:
    // 0x141d5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x141d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_141d60:
    // 0x141d60: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x141d64: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x141D64u;
    {
        const bool branch_taken_0x141d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d64) {
            ctx->pc = 0x141D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141d34;
        }
    }
    ctx->pc = 0x141D6Cu;
    // 0x141d6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x141D6Cu;
    {
        const bool branch_taken_0x141d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d6c) {
            ctx->pc = 0x141DB8u;
            goto label_141db8;
        }
    }
    ctx->pc = 0x141D74u;
label_141d74:
    // 0x141d74: 0xc05077c  jal         func_141DF0
    ctx->pc = 0x141D74u;
    SET_GPR_U32(ctx, 31, 0x141D7Cu);
    ctx->pc = 0x141D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D74u;
    // 0x141d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DF0u, 0x141D74u, 0x141D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D7Cu;
label_141d7c:
    // 0x141d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d80: 0xc050778  jal         func_141DE0
    ctx->pc = 0x141D80u;
    SET_GPR_U32(ctx, 31, 0x141D88u);
    ctx->pc = 0x141D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D80u;
    // 0x141d84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DE0u, 0x141D80u, 0x141D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D88u;
label_141d88:
    // 0x141d88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x141d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d8c: 0x1272000a  beq         $s3, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x141D8Cu;
    {
        const bool branch_taken_0x141d8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x141d8c) {
            ctx->pc = 0x141DB8u;
            goto label_141db8;
        }
    }
    ctx->pc = 0x141D94u;
label_141d94:
    // 0x141d94: 0x92a50028  lbu         $a1, 0x28($s5)
    ctx->pc = 0x141d94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x141d98: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x141d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x141d9c: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x141da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141da4: 0xc050850  jal         func_142140
    ctx->pc = 0x141DA4u;
    SET_GPR_U32(ctx, 31, 0x141DACu);
    ctx->pc = 0x141DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DA4u;
    // 0x141da8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142140u, 0x141DA4u, 0x141DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DACu;
label_141dac:
    // 0x141dac: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x141dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x141db0: 0x1672fff8  bne         $s3, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x141DB0u;
    {
        const bool branch_taken_0x141db0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x141db0) {
            ctx->pc = 0x141D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141d94;
        }
    }
    ctx->pc = 0x141DB8u;
label_141db8:
    // 0x141db8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141dbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x141dbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141dc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x141dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x141DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DD4u;
        // 0x141dd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141DDCu;
}
