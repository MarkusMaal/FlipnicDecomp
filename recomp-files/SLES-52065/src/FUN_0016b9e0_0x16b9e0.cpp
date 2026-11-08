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

// Function: FUN_0016b9e0
// Address: 0x16b9e0 - 0x16bb54
void FUN_0016b9e0_0x16b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b9e0_0x16b9e0");
#endif

    switch (ctx->pc) {
        case 0x16ba94u: goto label_16ba94;
        case 0x16bb18u: goto label_16bb18;
        default: break;
    }

    ctx->pc = 0x16b9e0u;

    // 0x16b9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b9e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b9e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b9ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16b9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16b9f0: 0x83838600  lb          $v1, -0x7A00($gp)
    ctx->pc = 0x16b9f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x16b9f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B9F4u;
    {
        const bool branch_taken_0x16b9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9F4u;
        // 0x16b9f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9f4) {
            ctx->pc = 0x16BA04u;
            goto label_16ba04;
        }
    }
    ctx->pc = 0x16B9FCu;
    // 0x16b9fc: 0xaf8085fc  sw          $zero, -0x7A04($gp)
    ctx->pc = 0x16b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 0));
    // 0x16ba00: 0xa3838600  sb          $v1, -0x7A00($gp)
    ctx->pc = 0x16ba00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936064), (uint8_t)GPR_U32(ctx, 3));
label_16ba04:
    // 0x16ba04: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16ba08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ba0c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16ba0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16ba10: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x16BA10u;
    {
        const bool branch_taken_0x16ba10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA10u;
        // 0x16ba14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba10) {
            ctx->pc = 0x16BB40u;
            goto label_16bb40;
        }
    }
    ctx->pc = 0x16BA18u;
    // 0x16ba18: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA18u;
    {
        const bool branch_taken_0x16ba18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ba18) {
            ctx->pc = 0x16BA30u;
            goto label_16ba30;
        }
    }
    ctx->pc = 0x16BA20u;
    // 0x16ba20: 0xaf8085fc  sw          $zero, -0x7A04($gp)
    ctx->pc = 0x16ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 0));
    // 0x16ba24: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16ba28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16ba2c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x16ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_16ba30:
    // 0x16ba30: 0x8f8585fc  lw          $a1, -0x7A04($gp)
    ctx->pc = 0x16ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x16ba34: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x16ba34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x16ba38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BA38u;
    {
        const bool branch_taken_0x16ba38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA38u;
        // 0x16ba3c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba38) {
            ctx->pc = 0x16BA60u;
            goto label_16ba60;
        }
    }
    ctx->pc = 0x16BA40u;
    // 0x16ba40: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x16ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x16ba44: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16ba48: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x16ba48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0);
    // 0x16ba4c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16ba4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16ba50: 0xac207504  sw          $zero, 0x7504($at)
    ctx->pc = 0x16ba50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367504u, _value); } while (0);
    // 0x16ba54: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16ba58: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16BA58u;
    {
        const bool branch_taken_0x16ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA58u;
        // 0x16ba5c: 0xac207508  sw          $zero, 0x7508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba58) {
            ctx->pc = 0x16BB40u;
            goto label_16bb40;
        }
    }
    ctx->pc = 0x16BA60u;
label_16ba60:
    // 0x16ba60: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16ba64: 0xaf8385fc  sw          $v1, -0x7A04($gp)
    ctx->pc = 0x16ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 3));
    // 0x16ba68: 0x8f8385fc  lw          $v1, -0x7A04($gp)
    ctx->pc = 0x16ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x16ba6c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x16ba6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16ba70: 0x0  nop
    ctx->pc = 0x16ba70u;
    // NOP
    // 0x16ba74: 0x0  nop
    ctx->pc = 0x16ba74u;
    // NOP
    // 0x16ba78: 0x8010  mfhi        $s0
    ctx->pc = 0x16ba78u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x16ba7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BA7Cu;
    {
        const bool branch_taken_0x16ba7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA7Cu;
        // 0x16ba80: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba7c) {
            ctx->pc = 0x16BA8Cu;
            goto label_16ba8c;
        }
    }
    ctx->pc = 0x16BA84u;
    // 0x16ba84: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BADCu;
            goto label_16badc;
        }
    }
    ctx->pc = 0x16BA8Cu;
label_16ba8c:
    // 0x16ba8c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16BA8Cu;
    SET_GPR_U32(ctx, 31, 0x16BA94u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16BA8Cu, 0x16BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA94u;
label_16ba94:
    // 0x16ba94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ba94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ba98: 0x0  nop
    ctx->pc = 0x16ba98u;
    // NOP
    // 0x16ba9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ba9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16baa0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x16baa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16baa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16baa8: 0x0  nop
    ctx->pc = 0x16baa8u;
    // NOP
    // 0x16baac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16baacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16bab0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x16bab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bab8: 0x0  nop
    ctx->pc = 0x16bab8u;
    // NOP
    // 0x16babc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16babcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16bac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16bac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16bac4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16bac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16bac8: 0x0  nop
    ctx->pc = 0x16bac8u;
    // NOP
    // 0x16bacc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16bad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bad4: 0x0  nop
    ctx->pc = 0x16bad4u;
    // NOP
    // 0x16bad8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x16bad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_16badc:
    // 0x16badc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x16badcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bae0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16bae4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x16bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16bae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16bae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16baec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x16baf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16baf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16baf4: 0x0  nop
    ctx->pc = 0x16baf4u;
    // NOP
    // 0x16baf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16baf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16bafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bb00: 0x0  nop
    ctx->pc = 0x16bb00u;
    // NOP
    // 0x16bb04: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x16bb04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16bb08: 0x0  nop
    ctx->pc = 0x16bb08u;
    // NOP
    // 0x16bb0c: 0x0  nop
    ctx->pc = 0x16bb0cu;
    // NOP
    // 0x16bb10: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x16BB10u;
    SET_GPR_U32(ctx, 31, 0x16BB18u);
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16BB10u, 0x16BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB18u;
label_16bb18:
    // 0x16bb18: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x16bb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16bb1c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16bb20: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x16bb20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0);
    // 0x16bb24: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16bb28: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x16bb28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367508u, _value); } while (0);
    // 0x16bb2c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16bb30: 0xc78085fc  lwc1        $f0, -0x7A04($gp)
    ctx->pc = 0x16bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bb34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16bb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16bb38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16bb38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16bb3c: 0xe4207504  swc1        $f0, 0x7504($at)
    ctx->pc = 0x16bb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x367504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367504u, _value); } while (0); }
label_16bb40:
    // 0x16bb40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bb44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16bb48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16bb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB4Cu;
        // 0x16bb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BB54u;
}
