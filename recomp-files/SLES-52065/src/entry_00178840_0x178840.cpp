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

// Function: entry_00178840
// Address: 0x178840 - 0x178878
void entry_00178840_0x178840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178840_0x178840");
#endif

    switch (ctx->pc) {
        case 0x17884cu: goto label_17884c;
        default: break;
    }

    ctx->pc = 0x178840u;

    // 0x178840: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x178844: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x178844u;
    SET_GPR_U32(ctx, 31, 0x17884Cu);
    ctx->pc = 0x178848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178844u;
    // 0x178848: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x178844u, 0x17884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17884Cu;
label_17884c:
    // 0x17884c: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x178850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178854: 0x0  nop
    ctx->pc = 0x178854u;
    // NOP
    // 0x178858: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x178858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17885c: 0x0  nop
    ctx->pc = 0x17885cu;
    // NOP
    // 0x178860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x178860u;
    {
        const bool branch_taken_0x178860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178860u;
        // 0x178864: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178860) {
            ctx->pc = 0x178878u;
            return;
        }
    }
    ctx->pc = 0x178868u;
    // 0x178868: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17886c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x17886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178870: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x178870u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x178874: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x178874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x178878u;
}
