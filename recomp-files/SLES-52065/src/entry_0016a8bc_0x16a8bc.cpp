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

// Function: entry_0016a8bc
// Address: 0x16a8bc - 0x16a90c
void entry_0016a8bc_0x16a8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a8bc_0x16a8bc");
#endif

    switch (ctx->pc) {
        case 0x16a8ecu: goto label_16a8ec;
        default: break;
    }

    ctx->pc = 0x16a8bcu;

    // 0x16a8bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A8BCu;
    {
        const bool branch_taken_0x16a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a8bc) {
            ctx->pc = 0x16A928u;
            return;
        }
    }
    ctx->pc = 0x16A8C4u;
    // 0x16a8c4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A8C4u;
    {
        const bool branch_taken_0x16a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8C4u;
        // 0x16a8c8: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8c4) {
            ctx->pc = 0x16A928u;
            return;
        }
    }
    ctx->pc = 0x16A8CCu;
    // 0x16a8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a8d4: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a8d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a8dc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8e0: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x16a8e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16a8e4: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A8E4u;
    SET_GPR_U32(ctx, 31, 0x16A8ECu);
    ctx->pc = 0x16A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8E4u;
    // 0x16a8e8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A8E4u, 0x16A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8ECu;
label_16a8ec:
    // 0x16a8ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a8f0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8f8: 0x0  nop
    ctx->pc = 0x16a8f8u;
    // NOP
    // 0x16a8fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A90Cu;
            return;
        }
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16A904u;
    {
        const bool branch_taken_0x16a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A904u;
        // 0x16a908: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a904) {
            ctx->pc = 0x16A96Cu;
            return;
        }
    }
    ctx->pc = 0x16A90Cu;
}
