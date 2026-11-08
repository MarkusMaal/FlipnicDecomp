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

// Function: entry_0016a83c
// Address: 0x16a83c - 0x16a88c
void entry_0016a83c_0x16a83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a83c_0x16a83c");
#endif

    switch (ctx->pc) {
        case 0x16a86cu: goto label_16a86c;
        default: break;
    }

    ctx->pc = 0x16a83cu;

    // 0x16a83c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A83Cu;
    {
        const bool branch_taken_0x16a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a83c) {
            ctx->pc = 0x16A8A8u;
            return;
        }
    }
    ctx->pc = 0x16A844u;
    // 0x16a844: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A844u;
    {
        const bool branch_taken_0x16a844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A844u;
        // 0x16a848: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a844) {
            ctx->pc = 0x16A8A8u;
            return;
        }
    }
    ctx->pc = 0x16A84Cu;
    // 0x16a84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a854: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a858: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a85c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a860: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x16a860u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16a864: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A864u;
    SET_GPR_U32(ctx, 31, 0x16A86Cu);
    ctx->pc = 0x16A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A864u;
    // 0x16a868: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A864u, 0x16A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A86Cu;
label_16a86c:
    // 0x16a86c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a870: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a874: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a878: 0x0  nop
    ctx->pc = 0x16a878u;
    // NOP
    // 0x16a87c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A87Cu;
    {
        const bool branch_taken_0x16a87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a87c) {
            ctx->pc = 0x16A88Cu;
            return;
        }
    }
    ctx->pc = 0x16A884u;
    // 0x16a884: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16A884u;
    {
        const bool branch_taken_0x16a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A884u;
        // 0x16a888: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a884) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A88Cu;
}
