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

// Function: entry_0016b234
// Address: 0x16b234 - 0x16b264
void entry_0016b234_0x16b234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b234_0x16b234");
#endif

    switch (ctx->pc) {
        case 0x16b244u: goto label_16b244;
        default: break;
    }

    ctx->pc = 0x16b234u;

    // 0x16b234: 0xc6200238  lwc1        $f0, 0x238($s1)
    ctx->pc = 0x16b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b238: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b23c: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B23Cu;
    SET_GPR_U32(ctx, 31, 0x16B244u);
    ctx->pc = 0x16B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B23Cu;
    // 0x16b240: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B23Cu, 0x16B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B244u;
label_16b244:
    // 0x16b244: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b248: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b24c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b24cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b250: 0x0  nop
    ctx->pc = 0x16b250u;
    // NOP
    // 0x16b254: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B254u;
    {
        const bool branch_taken_0x16b254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b254) {
            ctx->pc = 0x16B264u;
            return;
        }
    }
    ctx->pc = 0x16B25Cu;
    // 0x16b25c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x16B25Cu;
    {
        const bool branch_taken_0x16b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B25Cu;
        // 0x16b260: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b25c) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B264u;
}
