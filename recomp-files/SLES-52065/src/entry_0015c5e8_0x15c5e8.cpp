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

// Function: entry_0015c5e8
// Address: 0x15c5e8 - 0x15c610
void entry_0015c5e8_0x15c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c5e8_0x15c5e8");
#endif

    switch (ctx->pc) {
        case 0x15c5f4u: goto label_15c5f4;
        default: break;
    }

    ctx->pc = 0x15c5e8u;

    // 0x15c5e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c5ec: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x15C5ECu;
    SET_GPR_U32(ctx, 31, 0x15C5F4u);
    ctx->pc = 0x15C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5ECu;
    // 0x15c5f0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x15C5ECu, 0x15C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5F4u;
label_15c5f4:
    // 0x15c5f4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x15c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5f8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x15c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c5fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c600: 0x0  nop
    ctx->pc = 0x15c600u;
    // NOP
    // 0x15c604: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C604u;
    {
        const bool branch_taken_0x15c604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c604) {
            ctx->pc = 0x15C610u;
            return;
        }
    }
    ctx->pc = 0x15C60Cu;
    // 0x15c60c: 0xe6810010  swc1        $f1, 0x10($s4)
    ctx->pc = 0x15c60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    ctx->pc = 0x15c610u;
}
