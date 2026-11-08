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

// Function: entry_0016b35c
// Address: 0x16b35c - 0x16b38c
void entry_0016b35c_0x16b35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b35c_0x16b35c");
#endif

    switch (ctx->pc) {
        case 0x16b36cu: goto label_16b36c;
        default: break;
    }

    ctx->pc = 0x16b35cu;

    // 0x16b35c: 0xc6200238  lwc1        $f0, 0x238($s1)
    ctx->pc = 0x16b35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b360: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b364: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B364u;
    SET_GPR_U32(ctx, 31, 0x16B36Cu);
    ctx->pc = 0x16B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B364u;
    // 0x16b368: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B364u, 0x16B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B36Cu;
label_16b36c:
    // 0x16b36c: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b370: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b378: 0x0  nop
    ctx->pc = 0x16b378u;
    // NOP
    // 0x16b37c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B37Cu;
    {
        const bool branch_taken_0x16b37c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b37c) {
            ctx->pc = 0x16B38Cu;
            return;
        }
    }
    ctx->pc = 0x16B384u;
    // 0x16b384: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16B384u;
    {
        const bool branch_taken_0x16b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B384u;
        // 0x16b388: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b384) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B38Cu;
}
