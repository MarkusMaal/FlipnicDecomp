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

// Function: entry_00197b1c
// Address: 0x197b1c - 0x197bbc
void entry_00197b1c_0x197b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b1c_0x197b1c");
#endif

    switch (ctx->pc) {
        case 0x197b90u: goto label_197b90;
        case 0x197bacu: goto label_197bac;
        default: break;
    }

    ctx->pc = 0x197b1cu;

label_197b1c:
    // 0x197b1c: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
label_197b20:
    if (ctx->pc == 0x197B20u) {
        ctx->pc = 0x197B24u;
        goto label_197b24;
    }
    ctx->pc = 0x197B1Cu;
    {
        const bool branch_taken_0x197b1c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x197b1c) {
            ctx->pc = 0x197BBCu;
            return;
        }
    }
    ctx->pc = 0x197B24u;
label_197b24:
    // 0x197b24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_197b28:
    // 0x197b28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_197b2c:
    // 0x197b2c: 0xaea30328  sw          $v1, 0x328($s5)
    ctx->pc = 0x197b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 3));
label_197b30:
    // 0x197b30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x197b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197b34:
    // 0x197b34: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x197b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197b38:
    // 0x197b38: 0x8ea306e0  lw          $v1, 0x6E0($s5)
    ctx->pc = 0x197b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1760)));
label_197b3c:
    // 0x197b3c: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x197b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_197b40:
    // 0x197b40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_197b44:
    // 0x197b44: 0x8ea20328  lw          $v0, 0x328($s5)
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_197b48:
    // 0x197b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_197b4c:
    // 0x197b4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_197b50:
    // 0x197b50: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_197b54:
    // 0x197b54: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x197b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_197b58:
    // 0x197b58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x197b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_197b5c:
    // 0x197b5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_197b60:
    // 0x197b60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197b64:
    // 0x197b64: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x197b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_197b68:
    // 0x197b68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_197b6c:
    // 0x197b6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197b70:
    // 0x197b70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x197b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_197b74:
    // 0x197b74: 0x0  nop
    ctx->pc = 0x197b74u;
    // NOP
label_197b78:
    // 0x197b78: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x197b78u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_197b7c:
    // 0x197b7c: 0x0  nop
    ctx->pc = 0x197b7cu;
    // NOP
label_197b80:
    // 0x197b80: 0x0  nop
    ctx->pc = 0x197b80u;
    // NOP
label_197b84:
    // 0x197b84: 0x3012  mflo        $a2
    ctx->pc = 0x197b84u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_197b88:
    // 0x197b88: 0xc04bf38  jal         func_12FCE0
label_197b8c:
    if (ctx->pc == 0x197B8Cu) {
        ctx->pc = 0x197B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B88u;
        // 0x197b8c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B90u;
        goto label_197b90;
    }
    ctx->pc = 0x197B88u;
    SET_GPR_U32(ctx, 31, 0x197B90u);
    ctx->pc = 0x197B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B88u;
    // 0x197b8c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x197B88u, 0x197B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B90u;
label_197b90:
    // 0x197b90: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197b94:
    // 0x197b94: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x197b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_197b98:
    // 0x197b98: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_197b9c:
    // 0x197b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197ba0:
    // 0x197ba0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_197ba4:
    // 0x197ba4: 0x320f809  jalr        $t9
label_197ba8:
    if (ctx->pc == 0x197BA8u) {
        ctx->pc = 0x197BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BA4u;
        // 0x197ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BACu;
        goto label_197bac;
    }
    ctx->pc = 0x197BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197BACu);
        ctx->pc = 0x197BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BA4u;
        // 0x197ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197BA4u, 0x197BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197BACu;
label_197bac:
    // 0x197bac: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x197bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_197bb0:
    // 0x197bb0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_197bb4:
    if (ctx->pc == 0x197BB4u) {
        ctx->pc = 0x197BB8u;
        goto label_197bb8;
    }
    ctx->pc = 0x197BB0u;
    {
        const bool branch_taken_0x197bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197bb0) {
            ctx->pc = 0x197BBCu;
            return;
        }
    }
    ctx->pc = 0x197BB8u;
label_197bb8:
    // 0x197bb8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x197bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x197bbcu;
}
