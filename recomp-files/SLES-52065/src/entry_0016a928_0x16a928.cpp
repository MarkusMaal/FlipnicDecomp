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

// Function: entry_0016a928
// Address: 0x16a928 - 0x16a954
void entry_0016a928_0x16a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a928_0x16a928");
#endif

    switch (ctx->pc) {
        case 0x16a934u: goto label_16a934;
        default: break;
    }

    ctx->pc = 0x16a928u;

    // 0x16a928: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x16a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a92c: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A92Cu;
    SET_GPR_U32(ctx, 31, 0x16A934u);
    ctx->pc = 0x16A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A92Cu;
    // 0x16a930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A92Cu, 0x16A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A934u;
label_16a934:
    // 0x16a934: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a938: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a93c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a940: 0x0  nop
    ctx->pc = 0x16a940u;
    // NOP
    // 0x16a944: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A944u;
    {
        const bool branch_taken_0x16a944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a944) {
            ctx->pc = 0x16A954u;
            return;
        }
    }
    ctx->pc = 0x16A94Cu;
    // 0x16a94c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16A94Cu;
    {
        const bool branch_taken_0x16a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A94Cu;
        // 0x16a950: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a94c) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A954u;
}
