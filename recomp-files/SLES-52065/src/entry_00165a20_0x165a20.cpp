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

// Function: entry_00165a20
// Address: 0x165a20 - 0x165a50
void entry_00165a20_0x165a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a20_0x165a20");
#endif

    ctx->pc = 0x165a20u;

    // 0x165a20: 0xc4a201c0  lwc1        $f2, 0x1C0($a1)
    ctx->pc = 0x165a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165a24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x165a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x165a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165a2c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x165a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x165a30: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x165a30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x165a34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x165a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x165a38: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x165a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165a3c: 0x0  nop
    ctx->pc = 0x165a3cu;
    // NOP
    // 0x165a40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x165A40u;
    {
        const bool branch_taken_0x165a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A40u;
        // 0x165a44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a40) {
            ctx->pc = 0x165A50u;
            return;
        }
    }
    ctx->pc = 0x165A48u;
    // 0x165a48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165A48u;
    {
        const bool branch_taken_0x165a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a48) {
            ctx->pc = 0x165A70u;
            return;
        }
    }
    ctx->pc = 0x165A50u;
}
