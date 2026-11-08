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

// Function: FUN_00116c80
// Address: 0x116c80 - 0x116cf8
void FUN_00116c80_0x116c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116c80_0x116c80");
#endif

    switch (ctx->pc) {
        case 0x116c90u: goto label_116c90;
        default: break;
    }

    ctx->pc = 0x116c80u;

    // 0x116c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116c88: 0xc045994  jal         func_116650
    ctx->pc = 0x116C88u;
    SET_GPR_U32(ctx, 31, 0x116C90u);
    ctx->pc = 0x116650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116650u, 0x116C88u, 0x116C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C90u;
label_116c90:
    // 0x116c90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116c94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x116c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x116c98: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x116c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x116c9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x116c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x116ca0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116ca4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116ca8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116CA8u;
    {
        const bool branch_taken_0x116ca8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x116CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CA8u;
        // 0x116cac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ca8) {
            ctx->pc = 0x116CBCu;
            goto label_116cbc;
        }
    }
    ctx->pc = 0x116CB0u;
    // 0x116cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x116cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116cb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116CB4u;
    {
        const bool branch_taken_0x116cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CB4u;
        // 0x116cb8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cb4) {
            ctx->pc = 0x116CD4u;
            goto label_116cd4;
        }
    }
    ctx->pc = 0x116CBCu;
label_116cbc:
    // 0x116cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116cc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x116cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x116cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116cc8: 0x0  nop
    ctx->pc = 0x116cc8u;
    // NOP
    // 0x116ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x116cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x116cd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x116cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_116cd4:
    // 0x116cd4: 0x3c024b00  lui         $v0, 0x4B00
    ctx->pc = 0x116cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19200 << 16));
    // 0x116cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x116cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116cdc: 0x0  nop
    ctx->pc = 0x116cdcu;
    // NOP
    // 0x116ce0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x116ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x116ce4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x116ce4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x116ce8: 0x0  nop
    ctx->pc = 0x116ce8u;
    // NOP
    // 0x116cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x116CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CF0u;
        // 0x116cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116CF8u;
}
