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

// Function: entry_001aafcc
// Address: 0x1aafcc - 0x1ab040
void entry_001aafcc_0x1aafcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafcc_0x1aafcc");
#endif

    switch (ctx->pc) {
        case 0x1ab030u: goto label_1ab030;
        case 0x1ab038u: goto label_1ab038;
        default: break;
    }

    ctx->pc = 0x1aafccu;

    // 0x1aafcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aafccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aafd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aafd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aafd4: 0x0  nop
    ctx->pc = 0x1aafd4u;
    // NOP
    // 0x1aafd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aafd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aafdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aafdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aafe0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aafe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aafe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aafe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aafe8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aafe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aafec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aafecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aaff0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aaff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1aaff4: 0x0  nop
    ctx->pc = 0x1aaff4u;
    // NOP
    // 0x1aaff8: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1aaff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
    // 0x1aaffc: 0xae8006c8  sw          $zero, 0x6C8($s4)
    ctx->pc = 0x1aaffcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1736), GPR_U32(ctx, 0));
    // 0x1ab000: 0xae8006cc  sw          $zero, 0x6CC($s4)
    ctx->pc = 0x1ab000u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 0));
    // 0x1ab004: 0xae8006d0  sw          $zero, 0x6D0($s4)
    ctx->pc = 0x1ab004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1744), GPR_U32(ctx, 0));
    // 0x1ab008: 0xae800670  sw          $zero, 0x670($s4)
    ctx->pc = 0x1ab008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 0));
    // 0x1ab00c: 0xa280068c  sb          $zero, 0x68C($s4)
    ctx->pc = 0x1ab00cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab010: 0xae800690  sw          $zero, 0x690($s4)
    ctx->pc = 0x1ab010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 0));
    // 0x1ab014: 0xa2800694  sb          $zero, 0x694($s4)
    ctx->pc = 0x1ab014u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1684), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab018: 0xae80069c  sw          $zero, 0x69C($s4)
    ctx->pc = 0x1ab018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 0));
    // 0x1ab01c: 0xa28006b8  sb          $zero, 0x6B8($s4)
    ctx->pc = 0x1ab01cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab020: 0xae8006bc  sw          $zero, 0x6BC($s4)
    ctx->pc = 0x1ab020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 0));
    // 0x1ab024: 0xa28006c0  sb          $zero, 0x6C0($s4)
    ctx->pc = 0x1ab024u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1728), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab028: 0xc058018  jal         func_160060
    ctx->pc = 0x1AB028u;
    SET_GPR_U32(ctx, 31, 0x1AB030u);
    ctx->pc = 0x1AB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB028u;
    // 0x1ab02c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AB028u, 0x1AB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB030u;
label_1ab030:
    // 0x1ab030: 0xc06adec  jal         func_1AB7B0
    ctx->pc = 0x1AB030u;
    SET_GPR_U32(ctx, 31, 0x1AB038u);
    ctx->pc = 0x1AB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB030u;
    // 0x1ab034: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB7B0u, 0x1AB030u, 0x1AB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB038u;
label_1ab038:
    // 0x1ab038: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB038u;
    SET_GPR_U32(ctx, 31, 0x1AB040u);
    ctx->pc = 0x1AB03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB038u;
    // 0x1ab03c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB038u, 0x1AB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB040u;
}
