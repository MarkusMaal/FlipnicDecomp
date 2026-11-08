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

// Function: entry_00196a70
// Address: 0x196a70 - 0x196adc
void entry_00196a70_0x196a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196a70_0x196a70");
#endif

    switch (ctx->pc) {
        case 0x196aacu: goto label_196aac;
        case 0x196ad4u: goto label_196ad4;
        default: break;
    }

    ctx->pc = 0x196a70u;

    // 0x196a70: 0x8ea40674  lw          $a0, 0x674($s5)
    ctx->pc = 0x196a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
    // 0x196a74: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196a78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x196a7c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x196a80: 0x8c840450  lw          $a0, 0x450($a0)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
    // 0x196a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x196a88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196a8c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x196a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x196a90: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x196a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x196a94: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x196A94u;
    {
        const bool branch_taken_0x196a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a94) {
            ctx->pc = 0x196B00u;
            return;
        }
    }
    ctx->pc = 0x196A9Cu;
    // 0x196a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196aa4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x196AA4u;
    SET_GPR_U32(ctx, 31, 0x196AACu);
    ctx->pc = 0x196AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AA4u;
    // 0x196aa8: 0xaea00678  sw          $zero, 0x678($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196AA4u, 0x196AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AACu;
label_196aac:
    // 0x196aac: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x196aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196ab0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x196ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x196ab4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x196ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196ab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196ac0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196ac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196ac8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x196ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x196acc: 0xc063de0  jal         func_18F780
    ctx->pc = 0x196ACCu;
    SET_GPR_U32(ctx, 31, 0x196AD4u);
    ctx->pc = 0x196AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ACCu;
    // 0x196ad0: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x196ACCu, 0x196AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AD4u;
label_196ad4:
    // 0x196ad4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x196AD4u;
    {
        const bool branch_taken_0x196ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ad4) {
            ctx->pc = 0x196B00u;
            return;
        }
    }
    ctx->pc = 0x196ADCu;
}
