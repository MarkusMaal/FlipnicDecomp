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

// Function: entry_0016a73c
// Address: 0x16a73c - 0x16a78c
void entry_0016a73c_0x16a73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a73c_0x16a73c");
#endif

    switch (ctx->pc) {
        case 0x16a76cu: goto label_16a76c;
        default: break;
    }

    ctx->pc = 0x16a73cu;

    // 0x16a73c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A73Cu;
    {
        const bool branch_taken_0x16a73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a73c) {
            ctx->pc = 0x16A7A8u;
            return;
        }
    }
    ctx->pc = 0x16A744u;
    // 0x16a744: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A744u;
    {
        const bool branch_taken_0x16a744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A744u;
        // 0x16a748: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a744) {
            ctx->pc = 0x16A7A8u;
            return;
        }
    }
    ctx->pc = 0x16A74Cu;
    // 0x16a74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a754: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a758: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a75c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a760: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x16a760u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16a764: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A764u;
    SET_GPR_U32(ctx, 31, 0x16A76Cu);
    ctx->pc = 0x16A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A764u;
    // 0x16a768: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A764u, 0x16A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A76Cu;
label_16a76c:
    // 0x16a76c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a770: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a774: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a778: 0x0  nop
    ctx->pc = 0x16a778u;
    // NOP
    // 0x16a77c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A77Cu;
    {
        const bool branch_taken_0x16a77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a77c) {
            ctx->pc = 0x16A78Cu;
            return;
        }
    }
    ctx->pc = 0x16A784u;
    // 0x16a784: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x16A784u;
    {
        const bool branch_taken_0x16a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A784u;
        // 0x16a788: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a784) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A78Cu;
}
