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

// Function: entry_001098b8
// Address: 0x1098b8 - 0x10994c
void entry_001098b8_0x1098b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098b8_0x1098b8");
#endif

    switch (ctx->pc) {
        case 0x1098c0u: goto label_1098c0;
        case 0x10990cu: goto label_10990c;
        case 0x109944u: goto label_109944;
        default: break;
    }

    ctx->pc = 0x1098b8u;

    // 0x1098b8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1098B8u;
    SET_GPR_U32(ctx, 31, 0x1098C0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1098B8u, 0x1098C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098C0u;
label_1098c0:
    // 0x1098c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1098c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1098c4: 0x0  nop
    ctx->pc = 0x1098c4u;
    // NOP
    // 0x1098c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1098c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1098cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1098ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1098d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1098d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1098d4: 0x0  nop
    ctx->pc = 0x1098d4u;
    // NOP
    // 0x1098d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1098d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1098dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1098e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1098e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1098e4: 0x0  nop
    ctx->pc = 0x1098e4u;
    // NOP
    // 0x1098e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1098e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1098ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1098ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1098f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1098f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1098f4: 0x0  nop
    ctx->pc = 0x1098f4u;
    // NOP
    // 0x1098f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1098f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1098fc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1098FCu;
    {
        const bool branch_taken_0x1098fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x109900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098FCu;
        // 0x109900: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098fc) {
            ctx->pc = 0x109970u;
            return;
        }
    }
    ctx->pc = 0x109904u;
    // 0x109904: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x109904u;
    SET_GPR_U32(ctx, 31, 0x10990Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x109904u, 0x10990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10990Cu;
label_10990c:
    // 0x10990c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10990cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109910: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x109910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x109914: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x109914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x109918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x109918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10991c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x10991cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x109920: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x109924: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x109924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x109928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10992c: 0x0  nop
    ctx->pc = 0x10992cu;
    // NOP
    // 0x109930: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x109930u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x109934: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x109934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x109938: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x109938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10993c: 0xc042118  jal         func_108460
    ctx->pc = 0x10993Cu;
    SET_GPR_U32(ctx, 31, 0x109944u);
    ctx->pc = 0x109940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10993Cu;
    // 0x109940: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10993Cu, 0x109944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109944u;
label_109944:
    // 0x109944: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x109944u;
    {
        const bool branch_taken_0x109944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109944) {
            ctx->pc = 0x10996Cu;
            return;
        }
    }
    ctx->pc = 0x10994Cu;
}
