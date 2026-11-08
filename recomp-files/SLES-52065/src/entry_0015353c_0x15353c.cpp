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

// Function: entry_0015353c
// Address: 0x15353c - 0x153590
void entry_0015353c_0x15353c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015353c_0x15353c");
#endif

    ctx->pc = 0x15353cu;

    // 0x15353c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15353cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153540: 0x0  nop
    ctx->pc = 0x153540u;
    // NOP
    // 0x153544: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x153544u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x153548: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x153548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15354c: 0x460508c0  add.s       $f3, $f1, $f5
    ctx->pc = 0x15354cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x153550: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x153550u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x153554: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153558: 0x0  nop
    ctx->pc = 0x153558u;
    // NOP
    // 0x15355c: 0x0  nop
    ctx->pc = 0x15355cu;
    // NOP
    // 0x153560: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x153560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153564: 0x0  nop
    ctx->pc = 0x153564u;
    // NOP
    // 0x153568: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x153568u;
    {
        const bool branch_taken_0x153568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153568u;
        // 0x15356c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153568) {
            ctx->pc = 0x153590u;
            return;
        }
    }
    ctx->pc = 0x153570u;
    // 0x153570: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153574: 0x0  nop
    ctx->pc = 0x153574u;
    // NOP
    // 0x153578: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x153578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15357c: 0x0  nop
    ctx->pc = 0x15357cu;
    // NOP
    // 0x153580: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153580u;
    {
        const bool branch_taken_0x153580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153580) {
            ctx->pc = 0x153590u;
            return;
        }
    }
    ctx->pc = 0x153588u;
    // 0x153588: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x153588u;
    {
        const bool branch_taken_0x153588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153588u;
        // 0x15358c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153588) {
            ctx->pc = 0x1535CCu;
            return;
        }
    }
    ctx->pc = 0x153590u;
}
