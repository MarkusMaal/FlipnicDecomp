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

// Function: entry_001143d0
// Address: 0x1143d0 - 0x11444c
void entry_001143d0_0x1143d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001143d0_0x1143d0");
#endif

    switch (ctx->pc) {
        case 0x1143d8u: goto label_1143d8;
        case 0x1143ecu: goto label_1143ec;
        default: break;
    }

    ctx->pc = 0x1143d0u;

label_1143d0:
    // 0x1143d0: 0xc042118  jal         func_108460
label_1143d4:
    if (ctx->pc == 0x1143D4u) {
        ctx->pc = 0x1143D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143D0u;
        // 0x1143d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143D8u;
        goto label_1143d8;
    }
    ctx->pc = 0x1143D0u;
    SET_GPR_U32(ctx, 31, 0x1143D8u);
    ctx->pc = 0x1143D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143D0u;
    // 0x1143d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1143D0u, 0x1143D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143D8u;
label_1143d8:
    // 0x1143d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1143d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1143dc:
    // 0x1143dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1143dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1143e0:
    // 0x1143e0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1143e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1143e4:
    // 0x1143e4: 0x320f809  jalr        $t9
label_1143e8:
    if (ctx->pc == 0x1143E8u) {
        ctx->pc = 0x1143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E4u;
        // 0x1143e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143ECu;
        goto label_1143ec;
    }
    ctx->pc = 0x1143E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1143ECu);
        ctx->pc = 0x1143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E4u;
        // 0x1143e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143E4u, 0x1143ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1143ECu;
label_1143ec:
    // 0x1143ec: 0xc6400280  lwc1        $f0, 0x280($s2)
    ctx->pc = 0x1143ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1143f0:
    // 0x1143f0: 0x8f84824c  lw          $a0, -0x7DB4($gp)
    ctx->pc = 0x1143f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_1143f4:
    // 0x1143f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1143f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1143f8:
    // 0x1143f8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1143f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1143fc:
    // 0x1143fc: 0x0  nop
    ctx->pc = 0x1143fcu;
    // NOP
label_114400:
    // 0x114400: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
label_114404:
    if (ctx->pc == 0x114404u) {
        ctx->pc = 0x114408u;
        goto label_114408;
    }
    ctx->pc = 0x114400u;
    {
        const bool branch_taken_0x114400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x114400) {
            ctx->pc = 0x114490u;
            return;
        }
    }
    ctx->pc = 0x114408u;
label_114408:
    // 0x114408: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x114408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11440c:
    // 0x11440c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x11440cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_114410:
    // 0x114410: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x114410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_114414:
    // 0x114414: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x114414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_114418:
    // 0x114418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x114418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11441c:
    // 0x11441c: 0x0  nop
    ctx->pc = 0x11441cu;
    // NOP
label_114420:
    // 0x114420: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x114420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_114424:
    // 0x114424: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x114424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_114428:
    // 0x114428: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_11442c:
    // 0x11442c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11442cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_114430:
    // 0x114430: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x114430u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_114434:
    // 0x114434: 0x0  nop
    ctx->pc = 0x114434u;
    // NOP
label_114438:
    // 0x114438: 0x0  nop
    ctx->pc = 0x114438u;
    // NOP
label_11443c:
    // 0x11443c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x11443cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_114440:
    // 0x114440: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_114444:
    if (ctx->pc == 0x114444u) {
        ctx->pc = 0x114448u;
        goto label_114448;
    }
    ctx->pc = 0x114440u;
    {
        const bool branch_taken_0x114440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x114440) {
            ctx->pc = 0x11444Cu;
            return;
        }
    }
    ctx->pc = 0x114448u;
label_114448:
    // 0x114448: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x114448u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x11444cu;
}
