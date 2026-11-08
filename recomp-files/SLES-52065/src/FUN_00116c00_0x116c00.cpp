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

// Function: FUN_00116c00
// Address: 0x116c00 - 0x116c74
void FUN_00116c00_0x116c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116c00_0x116c00");
#endif

    switch (ctx->pc) {
        case 0x116c10u: goto label_116c10;
        default: break;
    }

    ctx->pc = 0x116c00u;

    // 0x116c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116c08: 0xc045994  jal         func_116650
    ctx->pc = 0x116C08u;
    SET_GPR_U32(ctx, 31, 0x116C10u);
    ctx->pc = 0x116650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116650u, 0x116C08u, 0x116C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C10u;
label_116c10:
    // 0x116c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116c14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x116c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x116c18: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x116c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x116c1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x116c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x116c20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116c24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116c28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116C28u;
    {
        const bool branch_taken_0x116c28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x116C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C28u;
        // 0x116c2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c28) {
            ctx->pc = 0x116C3Cu;
            goto label_116c3c;
        }
    }
    ctx->pc = 0x116C30u;
    // 0x116c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x116c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116c34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116C34u;
    {
        const bool branch_taken_0x116c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C34u;
        // 0x116c38: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c34) {
            ctx->pc = 0x116C54u;
            goto label_116c54;
        }
    }
    ctx->pc = 0x116C3Cu;
label_116c3c:
    // 0x116c3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116c40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x116c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x116c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x116c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116c48: 0x0  nop
    ctx->pc = 0x116c48u;
    // NOP
    // 0x116c4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x116c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x116c50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x116c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_116c54:
    // 0x116c54: 0x3c024b80  lui         $v0, 0x4B80
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19328 << 16));
    // 0x116c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x116c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116c5c: 0x0  nop
    ctx->pc = 0x116c5cu;
    // NOP
    // 0x116c60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x116c60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x116c64: 0x0  nop
    ctx->pc = 0x116c64u;
    // NOP
    // 0x116c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x116C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C6Cu;
        // 0x116c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116C74u;
}
