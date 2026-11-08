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

// Function: entry_001a12a4
// Address: 0x1a12a4 - 0x1a12e4
void entry_001a12a4_0x1a12a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a12a4_0x1a12a4");
#endif

    switch (ctx->pc) {
        case 0x1a12e0u: goto label_1a12e0;
        default: break;
    }

    ctx->pc = 0x1a12a4u;

    // 0x1a12a4: 0x0  nop
    ctx->pc = 0x1a12a4u;
    // NOP
    // 0x1a12a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a12a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a12ac: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1a12acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a12b0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A12B0u;
    {
        const bool branch_taken_0x1a12b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12B0u;
        // 0x1a12b4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12b0) {
            ctx->pc = 0x1A125Cu;
            return;
        }
    }
    ctx->pc = 0x1A12B8u;
    // 0x1a12b8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a12b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a12bc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1a12c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a12c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a12c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a12c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a12c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a12cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a12ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a12d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a12d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a12d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a12d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a12d8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A12D8u;
    SET_GPR_U32(ctx, 31, 0x1A12E0u);
    ctx->pc = 0x1A12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12D8u;
    // 0x1a12dc: 0xae82067c  sw          $v0, 0x67C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A12D8u, 0x1A12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12E0u;
label_1a12e0:
    // 0x1a12e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a12e4u;
}
