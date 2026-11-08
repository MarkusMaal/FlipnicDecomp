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

// Function: entry_00126f80
// Address: 0x126f80 - 0x126fd4
void entry_00126f80_0x126f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f80_0x126f80");
#endif

    switch (ctx->pc) {
        case 0x126f88u: goto label_126f88;
        default: break;
    }

    ctx->pc = 0x126f80u;

    // 0x126f80: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x126F80u;
    SET_GPR_U32(ctx, 31, 0x126F88u);
    ctx->pc = 0x126F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F80u;
    // 0x126f84: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x126F80u, 0x126F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F88u;
label_126f88:
    // 0x126f88: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x126f8c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x126f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126f94: 0x0  nop
    ctx->pc = 0x126f94u;
    // NOP
    // 0x126f98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x126f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f9c: 0x0  nop
    ctx->pc = 0x126f9cu;
    // NOP
    // 0x126fa0: 0x4500ffe5  bc1f        . + 4 + (-0x1B << 2)
    ctx->pc = 0x126FA0u;
    {
        const bool branch_taken_0x126fa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126fa0) {
            ctx->pc = 0x126F38u;
            return;
        }
    }
    ctx->pc = 0x126FA8u;
    // 0x126fa8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x126FA8u;
    {
        const bool branch_taken_0x126fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FA8u;
        // 0x126fac: 0x461aa802  mul.s       $f0, $f21, $f26 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fa8) {
            ctx->pc = 0x127028u;
            return;
        }
    }
    ctx->pc = 0x126FB0u;
    // 0x126fb0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x126fb4: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x126fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126fb8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x126fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x126fbc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126fc0: 0x461905c0  add.s       $f23, $f0, $f25
    ctx->pc = 0x126fc0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x126fc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126fcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x126FCCu;
    {
        const bool branch_taken_0x126fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fcc) {
            ctx->pc = 0x126FDCu;
            return;
        }
    }
    ctx->pc = 0x126FD4u;
}
