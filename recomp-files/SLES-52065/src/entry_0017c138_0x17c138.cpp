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

// Function: entry_0017c138
// Address: 0x17c138 - 0x17c180
void entry_0017c138_0x17c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c138_0x17c138");
#endif

    ctx->pc = 0x17c138u;

    // 0x17c138: 0x8483021a  lh          $v1, 0x21A($a0)
    ctx->pc = 0x17c138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 538)));
    // 0x17c13c: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17C13Cu;
    {
        const bool branch_taken_0x17c13c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17c13c) {
            ctx->pc = 0x17C180u;
            return;
        }
    }
    ctx->pc = 0x17C144u;
    // 0x17c144: 0x84850214  lh          $a1, 0x214($a0)
    ctx->pc = 0x17c144u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x17c148: 0xc4810210  lwc1        $f1, 0x210($a0)
    ctx->pc = 0x17c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c14c: 0x84830216  lh          $v1, 0x216($a0)
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x17c150: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c150u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c154: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x17c154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17c158: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17c158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c15c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17c15cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17c160: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17c160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c168: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17c168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17c16c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17c16cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17c170: 0x0  nop
    ctx->pc = 0x17c170u;
    // NOP
    // 0x17c174: 0x0  nop
    ctx->pc = 0x17c174u;
    // NOP
    // 0x17c178: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17C178u;
    {
        const bool branch_taken_0x17c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C178u;
        // 0x17c17c: 0xe48001c4  swc1        $f0, 0x1C4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c178) {
            ctx->pc = 0x17C1B4u;
            return;
        }
    }
    ctx->pc = 0x17C180u;
}
