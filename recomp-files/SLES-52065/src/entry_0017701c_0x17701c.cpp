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

// Function: entry_0017701c
// Address: 0x17701c - 0x177058
void entry_0017701c_0x17701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017701c_0x17701c");
#endif

    ctx->pc = 0x17701cu;

    // 0x17701c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17701cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x177020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177024: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x177024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177028: 0x46010044  c1          0x10044
    ctx->pc = 0x177028u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17702c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x177030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177034: 0x0  nop
    ctx->pc = 0x177034u;
    // NOP
    // 0x177038: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x177038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17703c: 0x46000004  c1          0x4
    ctx->pc = 0x17703cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x177040: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x177040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x177044: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x177044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x177048: 0x0  nop
    ctx->pc = 0x177048u;
    // NOP
    // 0x17704c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17704cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x177050: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x177050u;
    {
        const bool branch_taken_0x177050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177050u;
        // 0x177054: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177050) {
            ctx->pc = 0x177188u;
            return;
        }
    }
    ctx->pc = 0x177058u;
}
