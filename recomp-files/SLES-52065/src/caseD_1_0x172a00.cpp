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

// Function: caseD_1
// Address: 0x172a00 - 0x172a64
void caseD_1_0x172a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x172a00");
#endif

    switch (ctx->pc) {
        case 0x172a20u: goto label_172a20;
        default: break;
    }

    ctx->pc = 0x172a00u;

    // 0x172a00: 0x92226033  lbu         $v0, 0x6033($s1)
    ctx->pc = 0x172a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24627)));
    // 0x172a04: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x172A04u;
    {
        const bool branch_taken_0x172a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a04) {
            ctx->pc = 0x172BE8u;
            return;
        }
    }
    ctx->pc = 0x172A0Cu;
    // 0x172a0c: 0x92226031  lbu         $v0, 0x6031($s1)
    ctx->pc = 0x172a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24625)));
    // 0x172a10: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x172A10u;
    {
        const bool branch_taken_0x172a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A10u;
        // 0x172a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a10) {
            ctx->pc = 0x172A64u;
            return;
        }
    }
    ctx->pc = 0x172A18u;
    // 0x172a18: 0xc05cc98  jal         func_173260
    ctx->pc = 0x172A18u;
    SET_GPR_U32(ctx, 31, 0x172A20u);
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172A18u, 0x172A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A20u;
label_172a20:
    // 0x172a20: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
    // 0x172a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x172a28: 0x1c400043  bgtz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x172A28u;
    {
        const bool branch_taken_0x172a28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A28u;
        // 0x172a2c: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a28) {
            ctx->pc = 0x172B38u;
            return;
        }
    }
    ctx->pc = 0x172A30u;
    // 0x172a30: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a34: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x172a38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x172a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x172a3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172a40: 0x0  nop
    ctx->pc = 0x172a40u;
    // NOP
    // 0x172a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x172a48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172a4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172a50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x172a54: 0x0  nop
    ctx->pc = 0x172a54u;
    // NOP
    // 0x172a58: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
    // 0x172a5c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x172A5Cu;
    {
        const bool branch_taken_0x172a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A5Cu;
        // 0x172a60: 0xa2206031  sb          $zero, 0x6031($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a5c) {
            ctx->pc = 0x172B38u;
            return;
        }
    }
    ctx->pc = 0x172A64u;
}
