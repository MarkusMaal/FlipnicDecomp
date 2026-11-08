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

// Function: entry_001ac1dc
// Address: 0x1ac1dc - 0x1ac250
void entry_001ac1dc_0x1ac1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac1dc_0x1ac1dc");
#endif

    switch (ctx->pc) {
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac248u: goto label_1ac248;
        default: break;
    }

    ctx->pc = 0x1ac1dcu;

    // 0x1ac1dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac1e4: 0x0  nop
    ctx->pc = 0x1ac1e4u;
    // NOP
    // 0x1ac1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ac1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac1f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac1f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ac1f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ac1f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ac1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ac1fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac1fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ac200: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ac200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ac204: 0x0  nop
    ctx->pc = 0x1ac204u;
    // NOP
    // 0x1ac208: 0xae2206dc  sw          $v0, 0x6DC($s1)
    ctx->pc = 0x1ac208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 2));
    // 0x1ac20c: 0xae2006c8  sw          $zero, 0x6C8($s1)
    ctx->pc = 0x1ac20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 0));
    // 0x1ac210: 0xae2006cc  sw          $zero, 0x6CC($s1)
    ctx->pc = 0x1ac210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 0));
    // 0x1ac214: 0xae2006d0  sw          $zero, 0x6D0($s1)
    ctx->pc = 0x1ac214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 0));
    // 0x1ac218: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1ac218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x1ac21c: 0xa220068c  sb          $zero, 0x68C($s1)
    ctx->pc = 0x1ac21cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1676), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac220: 0xae200690  sw          $zero, 0x690($s1)
    ctx->pc = 0x1ac220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 0));
    // 0x1ac224: 0xa2200694  sb          $zero, 0x694($s1)
    ctx->pc = 0x1ac224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1684), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac228: 0xae20069c  sw          $zero, 0x69C($s1)
    ctx->pc = 0x1ac228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 0));
    // 0x1ac22c: 0xa22006b8  sb          $zero, 0x6B8($s1)
    ctx->pc = 0x1ac22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1720), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac230: 0xae2006bc  sw          $zero, 0x6BC($s1)
    ctx->pc = 0x1ac230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1724), GPR_U32(ctx, 0));
    // 0x1ac234: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ac234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac238: 0xc058018  jal         func_160060
    ctx->pc = 0x1AC238u;
    SET_GPR_U32(ctx, 31, 0x1AC240u);
    ctx->pc = 0x1AC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC238u;
    // 0x1ac23c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AC238u, 0x1AC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC240u;
label_1ac240:
    // 0x1ac240: 0xc06b270  jal         func_1AC9C0
    ctx->pc = 0x1AC240u;
    SET_GPR_U32(ctx, 31, 0x1AC248u);
    ctx->pc = 0x1AC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC240u;
    // 0x1ac244: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC9C0u, 0x1AC240u, 0x1AC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC248u;
label_1ac248:
    // 0x1ac248: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC248u;
    SET_GPR_U32(ctx, 31, 0x1AC250u);
    ctx->pc = 0x1AC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC248u;
    // 0x1ac24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC248u, 0x1AC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC250u;
}
