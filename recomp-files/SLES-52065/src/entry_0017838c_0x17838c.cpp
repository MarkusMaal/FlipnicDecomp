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

// Function: entry_0017838c
// Address: 0x17838c - 0x1783b8
void entry_0017838c_0x17838c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017838c_0x17838c");
#endif

    switch (ctx->pc) {
        case 0x1783a4u: goto label_1783a4;
        default: break;
    }

    ctx->pc = 0x17838cu;

    // 0x17838c: 0x0  nop
    ctx->pc = 0x17838cu;
    // NOP
    // 0x178390: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x178390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x178394: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x178394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x178398: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17839c: 0xc07ef92  jal         func_1FBE48
    ctx->pc = 0x17839Cu;
    SET_GPR_U32(ctx, 31, 0x1783A4u);
    ctx->pc = 0x1783A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17839Cu;
    // 0x1783a0: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE48u, 0x17839Cu, 0x1783A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783A4u;
label_1783a4:
    // 0x1783a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1783a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1783a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1783a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1783ac: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1783acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1783b0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1783b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1783b4: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x1783b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    ctx->pc = 0x1783b8u;
}
