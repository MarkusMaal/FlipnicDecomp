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

// Function: entry_00152234
// Address: 0x152234 - 0x152278
void entry_00152234_0x152234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152234_0x152234");
#endif

    ctx->pc = 0x152234u;

    // 0x152234: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x152238: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x152238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15223c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x15223cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152240: 0x0  nop
    ctx->pc = 0x152240u;
    // NOP
    // 0x152244: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x152244u;
    {
        const bool branch_taken_0x152244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152244u;
        // 0x152248: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152244) {
            ctx->pc = 0x152278u;
            return;
        }
    }
    ctx->pc = 0x15224Cu;
    // 0x15224c: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x15224cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152250: 0x0  nop
    ctx->pc = 0x152250u;
    // NOP
    // 0x152254: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x152254u;
    {
        const bool branch_taken_0x152254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152254u;
        // 0x152258: 0x46006041  sub.s       $f1, $f12, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152254) {
            ctx->pc = 0x152278u;
            return;
        }
    }
    ctx->pc = 0x15225Cu;
    // 0x15225c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x15225cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x152260: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x152260u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x152264: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x152264u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152268: 0x0  nop
    ctx->pc = 0x152268u;
    // NOP
    // 0x15226c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15226cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152270u;
    {
        const bool branch_taken_0x152270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152270u;
        // 0x152274: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152270) {
            ctx->pc = 0x152298u;
            return;
        }
    }
    ctx->pc = 0x152278u;
}
