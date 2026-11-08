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

// Function: FUN_00166450
// Address: 0x166450 - 0x1664b4
void FUN_00166450_0x166450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00166450_0x166450");
#endif

    switch (ctx->pc) {
        case 0x166480u: goto label_166480;
        default: break;
    }

    ctx->pc = 0x166450u;

    // 0x166450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166454: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x166454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x166458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16645c: 0x244274f0  addiu       $v0, $v0, 0x74F0
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29936));
    // 0x166460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166464: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x166464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166468: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x166468u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3674F0u));
    // 0x16646c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16646cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166470: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x166470u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x166474: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x166474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166478: 0xc054d0c  jal         func_153430
    ctx->pc = 0x166478u;
    SET_GPR_U32(ctx, 31, 0x166480u);
    ctx->pc = 0x16647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166478u;
    // 0x16647c: 0x26060300  addiu       $a2, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x166478u, 0x166480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166480u;
label_166480:
    // 0x166480: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x166480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166484: 0x0  nop
    ctx->pc = 0x166484u;
    // NOP
    // 0x166488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x166488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16648c: 0x0  nop
    ctx->pc = 0x16648cu;
    // NOP
    // 0x166490: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x166490u;
    {
        const bool branch_taken_0x166490 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166490u;
        // 0x166494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166490) {
            ctx->pc = 0x1664A4u;
            goto label_1664a4;
        }
    }
    ctx->pc = 0x166498u;
    // 0x166498: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x166498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x16649c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1664a0: 0xa60301ea  sh          $v1, 0x1EA($s0)
    ctx->pc = 0x1664a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 3));
label_1664a4:
    // 0x1664a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1664a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1664a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1664a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1664ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1664ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1664B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664ACu;
        // 0x1664b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1664ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1664B4u;
}
