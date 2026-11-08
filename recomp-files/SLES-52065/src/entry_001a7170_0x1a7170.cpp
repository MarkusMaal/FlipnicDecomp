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

// Function: entry_001a7170
// Address: 0x1a7170 - 0x1a71c8
void entry_001a7170_0x1a7170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7170_0x1a7170");
#endif

    switch (ctx->pc) {
        case 0x1a7188u: goto label_1a7188;
        case 0x1a7198u: goto label_1a7198;
        default: break;
    }

    ctx->pc = 0x1a7170u;

    // 0x1a7170: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7178: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7178u;
    {
        const bool branch_taken_0x1a7178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7178) {
            ctx->pc = 0x1A71C8u;
            return;
        }
    }
    ctx->pc = 0x1A7180u;
    // 0x1a7180: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A7180u;
    SET_GPR_U32(ctx, 31, 0x1A7188u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A7180u, 0x1A7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7188u;
label_1a7188:
    // 0x1a7188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a718c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7190: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A7190u;
    SET_GPR_U32(ctx, 31, 0x1A7198u);
    ctx->pc = 0x1A7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7190u;
    // 0x1a7194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A7190u, 0x1A7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7198u;
label_1a7198:
    // 0x1a7198: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1a7198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1a719c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a71a0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a71a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a71a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a71a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a71acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a71b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a71b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a71b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a71b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a71b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a71b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a71bc: 0x0  nop
    ctx->pc = 0x1a71bcu;
    // NOP
    // 0x1a71c0: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1a71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1a71c4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1a71c8u;
}
