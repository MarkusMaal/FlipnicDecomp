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

// Function: entry_00167814
// Address: 0x167814 - 0x167898
void entry_00167814_0x167814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167814_0x167814");
#endif

    switch (ctx->pc) {
        case 0x16781cu: goto label_16781c;
        case 0x16784cu: goto label_16784c;
        case 0x16786cu: goto label_16786c;
        default: break;
    }

    ctx->pc = 0x167814u;

    // 0x167814: 0xc059990  jal         func_166640
    ctx->pc = 0x167814u;
    SET_GPR_U32(ctx, 31, 0x16781Cu);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x167814u, 0x16781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16781Cu;
label_16781c:
    // 0x16781c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16781cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167820: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x167820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x167824: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x167824u;
    {
        const bool branch_taken_0x167824 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167824) {
            ctx->pc = 0x1678A4u;
            return;
        }
    }
    ctx->pc = 0x16782Cu;
    // 0x16782c: 0x86230226  lh          $v1, 0x226($s1)
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x167830: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167834: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16783c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167840: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x167840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x167844: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167844u;
    SET_GPR_U32(ctx, 31, 0x16784Cu);
    ctx->pc = 0x167848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167844u;
    // 0x167848: 0xa6220226  sh          $v0, 0x226($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 550), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167844u, 0x16784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16784Cu;
label_16784c:
    // 0x16784c: 0x86220226  lh          $v0, 0x226($s1)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x167850: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x167850u;
    {
        const bool branch_taken_0x167850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167850u;
        // 0x167854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167850) {
            ctx->pc = 0x1678A8u;
            return;
        }
    }
    ctx->pc = 0x167858u;
    // 0x167858: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16785c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167864: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167864u;
    SET_GPR_U32(ctx, 31, 0x16786Cu);
    ctx->pc = 0x167868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167864u;
    // 0x167868: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167864u, 0x16786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16786Cu;
label_16786c:
    // 0x16786c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x16786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167870: 0x3c0242ba  lui         $v0, 0x42BA
    ctx->pc = 0x167870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17082 << 16));
    // 0x167874: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167878: 0x0  nop
    ctx->pc = 0x167878u;
    // NOP
    // 0x16787c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16787cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x167880: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x167884: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167888: 0x0  nop
    ctx->pc = 0x167888u;
    // NOP
    // 0x16788c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16788Cu;
    {
        const bool branch_taken_0x16788c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16788c) {
            ctx->pc = 0x167898u;
            return;
        }
    }
    ctx->pc = 0x167894u;
    // 0x167894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x167898u;
}
