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

// Function: entry_0017c628
// Address: 0x17c628 - 0x17c688
void entry_0017c628_0x17c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c628_0x17c628");
#endif

    switch (ctx->pc) {
        case 0x17c634u: goto label_17c634;
        default: break;
    }

    ctx->pc = 0x17c628u;

    // 0x17c628: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x17c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x17c62c: 0xc05f330  jal         func_17CCC0
    ctx->pc = 0x17C62Cu;
    SET_GPR_U32(ctx, 31, 0x17C634u);
    ctx->pc = 0x17C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C62Cu;
    // 0x17c630: 0x26260210  addiu       $a2, $s1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCC0u, 0x17C62Cu, 0x17C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C634u;
label_17c634:
    // 0x17c634: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x17c634u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x17c638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c63c: 0x0  nop
    ctx->pc = 0x17c63cu;
    // NOP
    // 0x17c640: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x17c640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c644: 0x0  nop
    ctx->pc = 0x17c644u;
    // NOP
    // 0x17c648: 0x45010077  bc1t        . + 4 + (0x77 << 2)
    ctx->pc = 0x17C648u;
    {
        const bool branch_taken_0x17c648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C648u;
        // 0x17c64c: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c648) {
            ctx->pc = 0x17C828u;
            return;
        }
    }
    ctx->pc = 0x17C650u;
    // 0x17c650: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c654: 0x822201d1  lb          $v0, 0x1D1($s1)
    ctx->pc = 0x17c654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 465)));
    // 0x17c658: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17C658u;
    {
        const bool branch_taken_0x17c658 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C658u;
        // 0x17c65c: 0xc4740054  lwc1        $f20, 0x54($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c658) {
            ctx->pc = 0x17C6A0u;
            return;
        }
    }
    ctx->pc = 0x17C660u;
    // 0x17c660: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x17c664: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x17c668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c66c: 0x0  nop
    ctx->pc = 0x17c66cu;
    // NOP
    // 0x17c670: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x17c670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c674: 0x0  nop
    ctx->pc = 0x17c674u;
    // NOP
    // 0x17c678: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C678u;
    {
        const bool branch_taken_0x17c678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C678u;
        // 0x17c67c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c678) {
            ctx->pc = 0x17C688u;
            return;
        }
    }
    ctx->pc = 0x17C680u;
    // 0x17c680: 0xc042118  jal         func_108460
    ctx->pc = 0x17C680u;
    SET_GPR_U32(ctx, 31, 0x17C688u);
    ctx->pc = 0x17C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C680u;
    // 0x17c684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C680u, 0x17C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C688u;
}
