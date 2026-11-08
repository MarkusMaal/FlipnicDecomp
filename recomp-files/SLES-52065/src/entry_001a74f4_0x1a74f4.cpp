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

// Function: entry_001a74f4
// Address: 0x1a74f4 - 0x1a7554
void entry_001a74f4_0x1a74f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a74f4_0x1a74f4");
#endif

    switch (ctx->pc) {
        case 0x1a7514u: goto label_1a7514;
        case 0x1a7524u: goto label_1a7524;
        default: break;
    }

    ctx->pc = 0x1a74f4u;

    // 0x1a74f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A74F4u;
    {
        const bool branch_taken_0x1a74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74f4) {
            ctx->pc = 0x1A7554u;
            return;
        }
    }
    ctx->pc = 0x1A74FCu;
    // 0x1a74fc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a7500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7504: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7504u;
    {
        const bool branch_taken_0x1a7504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7504) {
            ctx->pc = 0x1A7554u;
            return;
        }
    }
    ctx->pc = 0x1A750Cu;
    // 0x1a750c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A750Cu;
    SET_GPR_U32(ctx, 31, 0x1A7514u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A750Cu, 0x1A7514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7514u;
label_1a7514:
    // 0x1a7514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7518: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a751c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A751Cu;
    SET_GPR_U32(ctx, 31, 0x1A7524u);
    ctx->pc = 0x1A7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A751Cu;
    // 0x1a7520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A751Cu, 0x1A7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7524u;
label_1a7524:
    // 0x1a7524: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1a7524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1a7528: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a752c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a753c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a753cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7540: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7544: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a7544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a7548: 0x0  nop
    ctx->pc = 0x1a7548u;
    // NOP
    // 0x1a754c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1a754cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1a7550: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a7550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1a7554u;
}
