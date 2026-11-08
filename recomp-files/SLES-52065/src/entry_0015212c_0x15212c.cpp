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

// Function: entry_0015212c
// Address: 0x15212c - 0x15217c
void entry_0015212c_0x15212c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015212c_0x15212c");
#endif

    ctx->pc = 0x15212cu;

    // 0x15212c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152130: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x152130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152134: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x152134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152138: 0x0  nop
    ctx->pc = 0x152138u;
    // NOP
    // 0x15213c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x15213Cu;
    {
        const bool branch_taken_0x15213c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15213Cu;
        // 0x152140: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15213c) {
            ctx->pc = 0x152188u;
            return;
        }
    }
    ctx->pc = 0x152144u;
    // 0x152144: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x152144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152148: 0x0  nop
    ctx->pc = 0x152148u;
    // NOP
    // 0x15214c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15214Cu;
    {
        const bool branch_taken_0x15214c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15214c) {
            ctx->pc = 0x152188u;
            return;
        }
    }
    ctx->pc = 0x152154u;
    // 0x152154: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x152154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x152158: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x152158u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x15215c: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x15215cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x152160: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x152160u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x152164: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x152164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152168: 0x0  nop
    ctx->pc = 0x152168u;
    // NOP
    // 0x15216c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15216Cu;
    {
        const bool branch_taken_0x15216c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15216c) {
            ctx->pc = 0x15217Cu;
            return;
        }
    }
    ctx->pc = 0x152174u;
    // 0x152174: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152174u;
    {
        const bool branch_taken_0x152174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152174) {
            ctx->pc = 0x1521A0u;
            return;
        }
    }
    ctx->pc = 0x15217Cu;
}
