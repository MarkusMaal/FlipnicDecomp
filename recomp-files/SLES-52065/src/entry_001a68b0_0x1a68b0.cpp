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

// Function: entry_001a68b0
// Address: 0x1a68b0 - 0x1a6938
void entry_001a68b0_0x1a68b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a68b0_0x1a68b0");
#endif

    switch (ctx->pc) {
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a6910u: goto label_1a6910;
        default: break;
    }

    ctx->pc = 0x1a68b0u;

label_1a68b0:
    // 0x1a68b0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1a68b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1a68b4:
    // 0x1a68b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a68b8:
    // 0x1a68b8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a68bc:
    // 0x1a68bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a68bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a68c0:
    // 0x1a68c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a68c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a68c4:
    // 0x1a68c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a68c8:
    // 0x1a68c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a68cc:
    // 0x1a68cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a68ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a68d0:
    // 0x1a68d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a68d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a68d4:
    // 0x1a68d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a68d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a68d8:
    // 0x1a68d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a68d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a68dc:
    // 0x1a68dc: 0x0  nop
    ctx->pc = 0x1a68dcu;
    // NOP
label_1a68e0:
    // 0x1a68e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a68e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a68e4:
    // 0x1a68e4: 0x0  nop
    ctx->pc = 0x1a68e4u;
    // NOP
label_1a68e8:
    // 0x1a68e8: 0x0  nop
    ctx->pc = 0x1a68e8u;
    // NOP
label_1a68ec:
    // 0x1a68ec: 0x3012  mflo        $a2
    ctx->pc = 0x1a68ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1a68f0:
    // 0x1a68f0: 0xc0805c8  jal         func_201720
label_1a68f4:
    if (ctx->pc == 0x1A68F4u) {
        ctx->pc = 0x1A68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68F0u;
        // 0x1a68f4: 0x24a506d8  addiu       $a1, $a1, 0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68F8u;
        goto label_1a68f8;
    }
    ctx->pc = 0x1A68F0u;
    SET_GPR_U32(ctx, 31, 0x1A68F8u);
    ctx->pc = 0x1A68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68F0u;
    // 0x1a68f4: 0x24a506d8  addiu       $a1, $a1, 0x6D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A68F0u, 0x1A68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68F8u;
label_1a68f8:
    // 0x1a68f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a68fc:
    // 0x1a68fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a6900:
    // 0x1a6900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6904:
    // 0x1a6904: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a6904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a6908:
    // 0x1a6908: 0x320f809  jalr        $t9
label_1a690c:
    if (ctx->pc == 0x1A690Cu) {
        ctx->pc = 0x1A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6908u;
        // 0x1a690c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6910u;
        goto label_1a6910;
    }
    ctx->pc = 0x1A6908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6910u);
        ctx->pc = 0x1A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6908u;
        // 0x1a690c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6908u, 0x1A6910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6910u;
label_1a6910:
    // 0x1a6910: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6914:
    // 0x1a6914: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x1a6914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a6918:
    // 0x1a6918: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_1a691c:
    if (ctx->pc == 0x1A691Cu) {
        ctx->pc = 0x1A691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6918u;
        // 0x1a691c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6920u;
        goto label_1a6920;
    }
    ctx->pc = 0x1A6918u;
    {
        const bool branch_taken_0x1a6918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6918u;
        // 0x1a691c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6918) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
    ctx->pc = 0x1A6920u;
label_1a6920:
    // 0x1a6920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6924:
    // 0x1a6924: 0x246306e0  addiu       $v1, $v1, 0x6E0
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1760));
label_1a6928:
    // 0x1a6928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a692c:
    // 0x1a692c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6930:
    // 0x1a6930: 0x400008  jr          $v0
label_1a6934:
    if (ctx->pc == 0x1A6934u) {
        ctx->pc = 0x1A6938u;
        goto label_fallthrough_0x1a6930;
    }
    ctx->pc = 0x1A6930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a6930:
    ctx->pc = 0x1A6938u;
}
