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

// Function: entry_00161298
// Address: 0x161298 - 0x1612c0
void entry_00161298_0x161298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161298_0x161298");
#endif

    ctx->pc = 0x161298u;

    // 0x161298: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x161298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16129c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16129cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1612a0: 0x0  nop
    ctx->pc = 0x1612a0u;
    // NOP
    // 0x1612a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1612A4u;
    {
        const bool branch_taken_0x1612a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1612a4) {
            ctx->pc = 0x1612E0u;
            return;
        }
    }
    ctx->pc = 0x1612ACu;
    // 0x1612ac: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1612ACu;
    {
        const bool branch_taken_0x1612ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1612B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612ACu;
        // 0x1612b0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612ac) {
            ctx->pc = 0x1612C0u;
            return;
        }
    }
    ctx->pc = 0x1612B4u;
    // 0x1612b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1612b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1612b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1612B8u;
    {
        const bool branch_taken_0x1612b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612B8u;
        // 0x1612bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612b8) {
            ctx->pc = 0x1612D8u;
            return;
        }
    }
    ctx->pc = 0x1612C0u;
}
