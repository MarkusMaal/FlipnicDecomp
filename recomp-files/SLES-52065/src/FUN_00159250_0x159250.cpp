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

// Function: FUN_00159250
// Address: 0x159250 - 0x1592a0
void FUN_00159250_0x159250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159250_0x159250");
#endif

    switch (ctx->pc) {
        case 0x159280u: goto label_159280;
        case 0x159294u: goto label_159294;
        default: break;
    }

    ctx->pc = 0x159250u;

    // 0x159250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15925c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15925cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159260: 0xc48c0070  lwc1        $f12, 0x70($a0)
    ctx->pc = 0x159260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159264: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x159264u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159268: 0x0  nop
    ctx->pc = 0x159268u;
    // NOP
    // 0x15926c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15926Cu;
    {
        const bool branch_taken_0x15926c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15926Cu;
        // 0x159270: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15926c) {
            ctx->pc = 0x159288u;
            goto label_159288;
        }
    }
    ctx->pc = 0x159274u;
    // 0x159274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159278: 0xc056010  jal         func_158040
    ctx->pc = 0x159278u;
    SET_GPR_U32(ctx, 31, 0x159280u);
    ctx->pc = 0x15927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159278u;
    // 0x15927c: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158040u, 0x159278u, 0x159280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159280u;
label_159280:
    // 0x159280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159280u;
    {
        const bool branch_taken_0x159280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159280u;
        // 0x159284: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159280) {
            ctx->pc = 0x159298u;
            goto label_159298;
        }
    }
    ctx->pc = 0x159288u;
label_159288:
    // 0x159288: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15928c: 0xc05609c  jal         func_158270
    ctx->pc = 0x15928Cu;
    SET_GPR_U32(ctx, 31, 0x159294u);
    ctx->pc = 0x159290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15928Cu;
    // 0x159290: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158270u, 0x15928Cu, 0x159294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159294u;
label_159294:
    // 0x159294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159298:
    // 0x159298: 0x3e00008  jr          $ra
    ctx->pc = 0x159298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159298u;
        // 0x15929c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1592A0u;
}
