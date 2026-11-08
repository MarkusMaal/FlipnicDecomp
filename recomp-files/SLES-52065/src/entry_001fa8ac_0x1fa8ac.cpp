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

// Function: entry_001fa8ac
// Address: 0x1fa8ac - 0x1fa938
void entry_001fa8ac_0x1fa8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa8ac_0x1fa8ac");
#endif

    switch (ctx->pc) {
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8d0u: goto label_1fa8d0;
        default: break;
    }

    ctx->pc = 0x1fa8acu;

    // 0x1fa8ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fa8acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fa8b0: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FA8B0u;
    SET_GPR_U32(ctx, 31, 0x1FA8B8u);
    ctx->pc = 0x1FA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8B0u;
    // 0x1fa8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FA8B0u, 0x1FA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B8u;
label_1fa8b8:
    // 0x1fa8b8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1fa8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fa8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa8c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1fa8c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1fa8c4: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x1fa8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x1fa8c8: 0xc07ee06  jal         func_1FB818
    ctx->pc = 0x1FA8C8u;
    SET_GPR_U32(ctx, 31, 0x1FA8D0u);
    ctx->pc = 0x1FA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8C8u;
    // 0x1fa8cc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB818u, 0x1FA8C8u, 0x1FA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8D0u;
label_1fa8d0:
    // 0x1fa8d0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1fa8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1fa8d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa8d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa8dc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1fa8dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1fa8e0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa8e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fa8e4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1fa8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1fa8e8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1fa8e8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa8ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa8f0: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA8F0u;
    {
        const bool branch_taken_0x1fa8f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8F0u;
        // 0x1fa8f4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8f0) {
            ctx->pc = 0x1FA938u;
            return;
        }
    }
    ctx->pc = 0x1FA8F8u;
    // 0x1fa8f8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fa8fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa904: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fa908: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa90c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1fa90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fa910: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fa910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fa914: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x1fa914u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1fa918: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x1fa918u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fa91c: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fa920: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1fa924: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa928: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x1fa928u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fa92c: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x1fa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x1fa930: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA930u;
    {
        const bool branch_taken_0x1fa930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA930u;
        // 0x1fa934: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa930) {
            ctx->pc = 0x1FA974u;
            return;
        }
    }
    ctx->pc = 0x1FA938u;
}
