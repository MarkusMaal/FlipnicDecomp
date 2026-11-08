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

// Function: entry_0016b30c
// Address: 0x16b30c - 0x16b340
void entry_0016b30c_0x16b30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b30c_0x16b30c");
#endif

    ctx->pc = 0x16b30cu;

    // 0x16b30c: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x16b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b310: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x16b314: 0xc6220238  lwc1        $f2, 0x238($s1)
    ctx->pc = 0x16b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b31c: 0x0  nop
    ctx->pc = 0x16b31cu;
    // NOP
    // 0x16b320: 0x46030302  mul.s       $f12, $f0, $f3
    ctx->pc = 0x16b320u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16b324: 0x460260c1  sub.s       $f3, $f12, $f2
    ctx->pc = 0x16b324u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x16b328: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x16b328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b32c: 0x0  nop
    ctx->pc = 0x16b32cu;
    // NOP
    // 0x16b330: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B330u;
    {
        const bool branch_taken_0x16b330 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B330u;
        // 0x16b334: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b330) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B338u;
    // 0x16b338: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B338u;
    {
        const bool branch_taken_0x16b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B338u;
        // 0x16b33c: 0x46020b01  sub.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b338) {
            ctx->pc = 0x16B35Cu;
            return;
        }
    }
    ctx->pc = 0x16B340u;
}
