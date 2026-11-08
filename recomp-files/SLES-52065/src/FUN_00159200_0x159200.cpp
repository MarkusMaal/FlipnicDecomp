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

// Function: FUN_00159200
// Address: 0x159200 - 0x159250
void FUN_00159200_0x159200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159200_0x159200");
#endif

    switch (ctx->pc) {
        case 0x159230u: goto label_159230;
        case 0x159244u: goto label_159244;
        default: break;
    }

    ctx->pc = 0x159200u;

    // 0x159200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15920c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15920cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159210: 0xc48c0070  lwc1        $f12, 0x70($a0)
    ctx->pc = 0x159210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159214: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x159214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159218: 0x0  nop
    ctx->pc = 0x159218u;
    // NOP
    // 0x15921c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15921Cu;
    {
        const bool branch_taken_0x15921c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15921Cu;
        // 0x159220: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15921c) {
            ctx->pc = 0x159238u;
            goto label_159238;
        }
    }
    ctx->pc = 0x159224u;
    // 0x159224: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159228: 0xc055fd8  jal         func_157F60
    ctx->pc = 0x159228u;
    SET_GPR_U32(ctx, 31, 0x159230u);
    ctx->pc = 0x15922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159228u;
    // 0x15922c: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157F60u, 0x159228u, 0x159230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159230u;
label_159230:
    // 0x159230: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159230u;
    {
        const bool branch_taken_0x159230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159230u;
        // 0x159234: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159230) {
            ctx->pc = 0x159248u;
            goto label_159248;
        }
    }
    ctx->pc = 0x159238u;
label_159238:
    // 0x159238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x159238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15923c: 0xc05604c  jal         func_158130
    ctx->pc = 0x15923Cu;
    SET_GPR_U32(ctx, 31, 0x159244u);
    ctx->pc = 0x159240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15923Cu;
    // 0x159240: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158130u, 0x15923Cu, 0x159244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159244u;
label_159244:
    // 0x159244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159248:
    // 0x159248: 0x3e00008  jr          $ra
    ctx->pc = 0x159248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159248u;
        // 0x15924c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159250u;
}
