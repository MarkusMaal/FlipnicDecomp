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

// Function: entry_00152510
// Address: 0x152510 - 0x152564
void entry_00152510_0x152510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152510_0x152510");
#endif

    switch (ctx->pc) {
        case 0x152544u: goto label_152544;
        default: break;
    }

    ctx->pc = 0x152510u;

    // 0x152510: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x152510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x152514: 0x0  nop
    ctx->pc = 0x152514u;
    // NOP
    // 0x152518: 0x4618a832  c.eq.s      $f21, $f24
    ctx->pc = 0x152518u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15251c: 0x0  nop
    ctx->pc = 0x15251cu;
    // NOP
    // 0x152520: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x152520u;
    {
        const bool branch_taken_0x152520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152520) {
            ctx->pc = 0x152564u;
            return;
        }
    }
    ctx->pc = 0x152528u;
    // 0x152528: 0x0  nop
    ctx->pc = 0x152528u;
    // NOP
    // 0x15252c: 0x0  nop
    ctx->pc = 0x15252cu;
    // NOP
    // 0x152530: 0x4618b303  div.s       $f12, $f22, $f24
    ctx->pc = 0x152530u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[24]); }
    // 0x152534: 0x0  nop
    ctx->pc = 0x152534u;
    // NOP
    // 0x152538: 0x0  nop
    ctx->pc = 0x152538u;
    // NOP
    // 0x15253c: 0xc07ef00  jal         func_1FBC00
    ctx->pc = 0x15253Cu;
    SET_GPR_U32(ctx, 31, 0x152544u);
    ctx->pc = 0x1FBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC00u, 0x15253Cu, 0x152544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152544u;
label_152544:
    // 0x152544: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x152544u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x152548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15254c: 0x0  nop
    ctx->pc = 0x15254cu;
    // NOP
    // 0x152550: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x152550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152554: 0x0  nop
    ctx->pc = 0x152554u;
    // NOP
    // 0x152558: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x152558u;
    {
        const bool branch_taken_0x152558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152558) {
            ctx->pc = 0x152564u;
            return;
        }
    }
    ctx->pc = 0x152560u;
    // 0x152560: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x152560u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    ctx->pc = 0x152564u;
}
