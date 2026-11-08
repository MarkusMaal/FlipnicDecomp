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

// Function: entry_00150244
// Address: 0x150244 - 0x150274
void entry_00150244_0x150244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150244_0x150244");
#endif

    ctx->pc = 0x150244u;

    // 0x150244: 0x0  nop
    ctx->pc = 0x150244u;
    // NOP
    // 0x150248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x150248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15024c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x15024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x150250: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x150250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x150254: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x150254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x150258: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15025c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15025cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150260: 0x0  nop
    ctx->pc = 0x150260u;
    // NOP
    // 0x150264: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x150264u;
    {
        const bool branch_taken_0x150264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150264) {
            ctx->pc = 0x150274u;
            return;
        }
    }
    ctx->pc = 0x15026Cu;
    // 0x15026c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15026Cu;
    {
        const bool branch_taken_0x15026c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15026Cu;
        // 0x150270: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15026c) {
            ctx->pc = 0x150278u;
            return;
        }
    }
    ctx->pc = 0x150274u;
}
