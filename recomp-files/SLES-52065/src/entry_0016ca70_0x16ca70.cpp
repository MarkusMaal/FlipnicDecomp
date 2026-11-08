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

// Function: entry_0016ca70
// Address: 0x16ca70 - 0x16caa4
void entry_0016ca70_0x16ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ca70_0x16ca70");
#endif

    ctx->pc = 0x16ca70u;

    // 0x16ca70: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16CA70u;
    {
        const bool branch_taken_0x16ca70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA70u;
        // 0x16ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca70) {
            ctx->pc = 0x16CAA8u;
            return;
        }
    }
    ctx->pc = 0x16CA78u;
    // 0x16ca78: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ca7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16ca80: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x16ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16ca84: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16ca84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ca88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ca8c: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ca90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ca94: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x16ca94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x16ca98: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x16ca98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16ca9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16ca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16caa0: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x16caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    ctx->pc = 0x16caa4u;
}
