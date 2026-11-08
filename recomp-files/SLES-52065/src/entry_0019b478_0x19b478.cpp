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

// Function: entry_0019b478
// Address: 0x19b478 - 0x19b500
void entry_0019b478_0x19b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b478_0x19b478");
#endif

    switch (ctx->pc) {
        case 0x19b4dcu: goto label_19b4dc;
        case 0x19b4f8u: goto label_19b4f8;
        default: break;
    }

    ctx->pc = 0x19b478u;

label_19b478:
    // 0x19b478: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b47c:
    // 0x19b47c: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b480:
    // 0x19b480: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b484:
    // 0x19b484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b488:
    // 0x19b488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b48c:
    // 0x19b48c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b490:
    // 0x19b490: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b494:
    // 0x19b494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b498:
    // 0x19b498: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b49c:
    // 0x19b49c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b4a0:
    // 0x19b4a0: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b4a4:
    // 0x19b4a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b4a8:
    // 0x19b4a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b4ac:
    // 0x19b4ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b4b0:
    // 0x19b4b0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b4b4:
    // 0x19b4b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b4b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b4b8:
    // 0x19b4b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b4bc:
    // 0x19b4bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b4bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b4c0:
    // 0x19b4c0: 0x0  nop
    ctx->pc = 0x19b4c0u;
    // NOP
label_19b4c4:
    // 0x19b4c4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b4c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b4c8:
    // 0x19b4c8: 0x0  nop
    ctx->pc = 0x19b4c8u;
    // NOP
label_19b4cc:
    // 0x19b4cc: 0x0  nop
    ctx->pc = 0x19b4ccu;
    // NOP
label_19b4d0:
    // 0x19b4d0: 0x3012  mflo        $a2
    ctx->pc = 0x19b4d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b4d4:
    // 0x19b4d4: 0xc04bf38  jal         func_12FCE0
label_19b4d8:
    if (ctx->pc == 0x19B4D8u) {
        ctx->pc = 0x19B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D4u;
        // 0x19b4d8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4DCu;
        goto label_19b4dc;
    }
    ctx->pc = 0x19B4D4u;
    SET_GPR_U32(ctx, 31, 0x19B4DCu);
    ctx->pc = 0x19B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4D4u;
    // 0x19b4d8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B4D4u, 0x19B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4DCu;
label_19b4dc:
    // 0x19b4dc: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b4e0:
    // 0x19b4e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b4e4:
    // 0x19b4e4: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b4e8:
    // 0x19b4e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b4ec:
    // 0x19b4ec: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b4f0:
    // 0x19b4f0: 0x320f809  jalr        $t9
label_19b4f4:
    if (ctx->pc == 0x19B4F4u) {
        ctx->pc = 0x19B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F0u;
        // 0x19b4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4F8u;
        goto label_19b4f8;
    }
    ctx->pc = 0x19B4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B4F8u);
        ctx->pc = 0x19B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F0u;
        // 0x19b4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4F0u, 0x19B4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B4F8u;
label_19b4f8:
    // 0x19b4f8: 0x10000031  b           . + 4 + (0x31 << 2)
label_19b4fc:
    if (ctx->pc == 0x19B4FCu) {
        ctx->pc = 0x19B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F8u;
        // 0x19b4fc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B500u;
        goto label_fallthrough_0x19b4f8;
    }
    ctx->pc = 0x19B4F8u;
    {
        const bool branch_taken_0x19b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F8u;
        // 0x19b4fc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f8) {
            ctx->pc = 0x19B5C0u;
            return;
        }
    }
label_fallthrough_0x19b4f8:
    ctx->pc = 0x19B500u;
}
