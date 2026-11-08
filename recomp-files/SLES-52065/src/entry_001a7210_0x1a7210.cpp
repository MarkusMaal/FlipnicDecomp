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

// Function: entry_001a7210
// Address: 0x1a7210 - 0x1a7264
void entry_001a7210_0x1a7210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7210_0x1a7210");
#endif

    switch (ctx->pc) {
        case 0x1a7224u: goto label_1a7224;
        case 0x1a7234u: goto label_1a7234;
        default: break;
    }

    ctx->pc = 0x1a7210u;

    // 0x1a7210: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7214: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7214u;
    {
        const bool branch_taken_0x1a7214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7214) {
            ctx->pc = 0x1A7264u;
            return;
        }
    }
    ctx->pc = 0x1A721Cu;
    // 0x1a721c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A721Cu;
    SET_GPR_U32(ctx, 31, 0x1A7224u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A721Cu, 0x1A7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7224u;
label_1a7224:
    // 0x1a7224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7228: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a722c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A722Cu;
    SET_GPR_U32(ctx, 31, 0x1A7234u);
    ctx->pc = 0x1A7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A722Cu;
    // 0x1a7230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A722Cu, 0x1A7234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7234u;
label_1a7234:
    // 0x1a7234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7238: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a723c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1a723cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x1a7240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7244: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a7244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a724c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a724cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7254: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a7254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a7258: 0x0  nop
    ctx->pc = 0x1a7258u;
    // NOP
    // 0x1a725c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a725cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a7260: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x1a7260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x1a7264u;
}
