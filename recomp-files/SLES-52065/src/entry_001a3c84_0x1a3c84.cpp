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

// Function: entry_001a3c84
// Address: 0x1a3c84 - 0x1a3d0c
void entry_001a3c84_0x1a3c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c84_0x1a3c84");
#endif

    switch (ctx->pc) {
        case 0x1a3d00u: goto label_1a3d00;
        default: break;
    }

    ctx->pc = 0x1a3c84u;

    // 0x1a3c84: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a3c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3c88: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1a3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1a3c8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3c90: 0x0  nop
    ctx->pc = 0x1a3c90u;
    // NOP
    // 0x1a3c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a3c98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a3c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a3c9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a3ca0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a3ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a3ca4: 0x0  nop
    ctx->pc = 0x1a3ca4u;
    // NOP
    // 0x1a3ca8: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A3CA8u;
    {
        const bool branch_taken_0x1a3ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3ca8) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3CB0u;
    // 0x1a3cb0: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1a3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a3cb4: 0x8e230794  lw          $v1, 0x794($s1)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1940)));
    // 0x1a3cb8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a3cbc: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A3CBCu;
    {
        const bool branch_taken_0x1a3cbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cbc) {
            ctx->pc = 0x1A3D24u;
            return;
        }
    }
    ctx->pc = 0x1A3CC4u;
    // 0x1a3cc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3cc8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a3ccc: 0x8c650798  lw          $a1, 0x798($v1)
    ctx->pc = 0x1a3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1944)));
    // 0x1a3cd0: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A3CD0u;
    {
        const bool branch_taken_0x1a3cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cd0) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3CD8u;
    // 0x1a3cd8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x1a3cdc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3CDCu;
    {
        const bool branch_taken_0x1a3cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cdc) {
            ctx->pc = 0x1A3D0Cu;
            return;
        }
    }
    ctx->pc = 0x1A3CE4u;
    // 0x1a3ce4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1a3ce8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3cec: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A3CECu;
    {
        const bool branch_taken_0x1a3cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3cec) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3CF4u;
    // 0x1a3cf4: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a3cf8: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A3CF8u;
    SET_GPR_U32(ctx, 31, 0x1A3D00u);
    ctx->pc = 0x1A3CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CF8u;
    // 0x1a3cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3CF8u, 0x1A3D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D00u;
label_1a3d00:
    // 0x1a3d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3d04: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A3D04u;
    {
        const bool branch_taken_0x1a3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D04u;
        // 0x1a3d08: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d04) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3D0Cu;
}
