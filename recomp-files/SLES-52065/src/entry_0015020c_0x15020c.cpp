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

// Function: entry_0015020c
// Address: 0x15020c - 0x15023c
void entry_0015020c_0x15020c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015020c_0x15020c");
#endif

    ctx->pc = 0x15020cu;

    // 0x15020c: 0x0  nop
    ctx->pc = 0x15020cu;
    // NOP
    // 0x150210: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x150214: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x150214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x150218: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15021c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150220: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x150220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150228: 0x0  nop
    ctx->pc = 0x150228u;
    // NOP
    // 0x15022c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15022Cu;
    {
        const bool branch_taken_0x15022c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15022Cu;
        // 0x150230: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15022c) {
            ctx->pc = 0x15023Cu;
            return;
        }
    }
    ctx->pc = 0x150234u;
    // 0x150234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150234u;
    {
        const bool branch_taken_0x150234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150234) {
            ctx->pc = 0x150244u;
            return;
        }
    }
    ctx->pc = 0x15023Cu;
}
