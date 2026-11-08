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

// Function: entry_00166c5c
// Address: 0x166c5c - 0x166ca8
void entry_00166c5c_0x166c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166c5c_0x166c5c");
#endif

    switch (ctx->pc) {
        case 0x166ca0u: goto label_166ca0;
        default: break;
    }

    ctx->pc = 0x166c5cu;

    // 0x166c5c: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x166c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x166c60: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x166C60u;
    {
        const bool branch_taken_0x166c60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x166C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C60u;
        // 0x166c64: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c60) {
            ctx->pc = 0x166CC4u;
            return;
        }
    }
    ctx->pc = 0x166C68u;
    // 0x166c68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166c6c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x166c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x166c70: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x166c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x166c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166c78: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166c7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x166c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166c80: 0x0  nop
    ctx->pc = 0x166c80u;
    // NOP
    // 0x166c84: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x166C84u;
    {
        const bool branch_taken_0x166c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166c84) {
            ctx->pc = 0x166CA8u;
            return;
        }
    }
    ctx->pc = 0x166C8Cu;
    // 0x166c8c: 0x822201d0  lb          $v0, 0x1D0($s1)
    ctx->pc = 0x166c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x166c90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166C90u;
    {
        const bool branch_taken_0x166c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C90u;
        // 0x166c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c90) {
            ctx->pc = 0x166CA8u;
            return;
        }
    }
    ctx->pc = 0x166C98u;
    // 0x166c98: 0xc042118  jal         func_108460
    ctx->pc = 0x166C98u;
    SET_GPR_U32(ctx, 31, 0x166CA0u);
    ctx->pc = 0x166C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C98u;
    // 0x166c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166C98u, 0x166CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CA0u;
label_166ca0:
    // 0x166ca0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x166ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x166ca4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x166ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x166ca8u;
}
