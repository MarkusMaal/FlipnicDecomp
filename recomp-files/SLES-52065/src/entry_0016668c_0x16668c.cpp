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

// Function: entry_0016668c
// Address: 0x16668c - 0x1666d4
void entry_0016668c_0x16668c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016668c_0x16668c");
#endif

    switch (ctx->pc) {
        case 0x1666acu: goto label_1666ac;
        default: break;
    }

    ctx->pc = 0x16668cu;

    // 0x16668c: 0xc61401c0  lwc1        $f20, 0x1C0($s0)
    ctx->pc = 0x16668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166694: 0xc6350200  lwc1        $f21, 0x200($s1)
    ctx->pc = 0x166694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166698: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x166698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x16669c: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1666a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1666a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1666a4: 0xc054ed0  jal         func_153B40
    ctx->pc = 0x1666A4u;
    SET_GPR_U32(ctx, 31, 0x1666ACu);
    ctx->pc = 0x1666A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666A4u;
    // 0x1666a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153B40u, 0x1666A4u, 0x1666ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666ACu;
label_1666ac:
    // 0x1666ac: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1666acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1666b0: 0x0  nop
    ctx->pc = 0x1666b0u;
    // NOP
    // 0x1666b4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x1666b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1666b8: 0x0  nop
    ctx->pc = 0x1666b8u;
    // NOP
    // 0x1666bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1666BCu;
    {
        const bool branch_taken_0x1666bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0x26020300  addiu       $v0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666bc) {
            ctx->pc = 0x1666D4u;
            return;
        }
    }
    ctx->pc = 0x1666C4u;
    // 0x1666c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1666c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1666c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1666cc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1666CCu;
    {
        const bool branch_taken_0x1666cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666cc) {
            ctx->pc = 0x1667D4u;
            return;
        }
    }
    ctx->pc = 0x1666D4u;
}
