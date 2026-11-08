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

// Function: entry_001a7570
// Address: 0x1a7570 - 0x1a75cc
void entry_001a7570_0x1a7570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7570_0x1a7570");
#endif

    switch (ctx->pc) {
        case 0x1a758cu: goto label_1a758c;
        case 0x1a759cu: goto label_1a759c;
        default: break;
    }

    ctx->pc = 0x1a7570u;

    // 0x1a7570: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7570u;
    {
        const bool branch_taken_0x1a7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7570u;
        // 0x1a7574: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7570) {
            ctx->pc = 0x1A75D0u;
            return;
        }
    }
    ctx->pc = 0x1A7578u;
    // 0x1a7578: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a757c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A757Cu;
    {
        const bool branch_taken_0x1a757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a757c) {
            ctx->pc = 0x1A75CCu;
            return;
        }
    }
    ctx->pc = 0x1A7584u;
    // 0x1a7584: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A7584u;
    SET_GPR_U32(ctx, 31, 0x1A758Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A7584u, 0x1A758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A758Cu;
label_1a758c:
    // 0x1a758c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7590: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7594: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A7594u;
    SET_GPR_U32(ctx, 31, 0x1A759Cu);
    ctx->pc = 0x1A7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7594u;
    // 0x1a7598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A7594u, 0x1A759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A759Cu;
label_1a759c:
    // 0x1a759c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a75a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a75a4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1a75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1a75a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a75a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a75ac: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a75acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a75b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a75b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a75b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a75b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a75b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a75b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a75bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a75bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a75c0: 0x0  nop
    ctx->pc = 0x1a75c0u;
    // NOP
    // 0x1a75c4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1a75c8: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1a75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1a75ccu;
}
