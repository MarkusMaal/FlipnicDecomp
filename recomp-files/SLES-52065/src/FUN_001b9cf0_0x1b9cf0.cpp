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

// Function: FUN_001b9cf0
// Address: 0x1b9cf0 - 0x1b9d74
void FUN_001b9cf0_0x1b9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9cf0_0x1b9cf0");
#endif

    switch (ctx->pc) {
        case 0x1b9d24u: goto label_1b9d24;
        case 0x1b9d50u: goto label_1b9d50;
        case 0x1b9d5cu: goto label_1b9d5c;
        default: break;
    }

    ctx->pc = 0x1b9cf0u;

    // 0x1b9cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b9cf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b9cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b9cf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b9cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9d00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9d08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b9d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d10: 0xac900070  sw          $s0, 0x70($a0)
    ctx->pc = 0x1b9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 16));
    // 0x1b9d14: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x1b9d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1b9d18: 0xac870074  sw          $a3, 0x74($a0)
    ctx->pc = 0x1b9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 7));
    // 0x1b9d1c: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1B9D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D24u);
    ctx->pc = 0x1B9D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D1Cu;
    // 0x1b9d20: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1B9D1Cu, 0x1B9D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D24u;
label_1b9d24:
    // 0x1b9d24: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b9d24u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9d28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9d30: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1b9d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1b9d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9d38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b9d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9d3c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b9d3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b9d40: 0x0  nop
    ctx->pc = 0x1b9d40u;
    // NOP
    // 0x1b9d44: 0x0  nop
    ctx->pc = 0x1b9d44u;
    // NOP
    // 0x1b9d48: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1B9D48u;
    SET_GPR_U32(ctx, 31, 0x1B9D50u);
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1B9D48u, 0x1B9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D50u;
label_1b9d50:
    // 0x1b9d50: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1b9d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1b9d54: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B9D54u;
    SET_GPR_U32(ctx, 31, 0x1B9D5Cu);
    ctx->pc = 0x1B9D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D54u;
    // 0x1b9d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B9D54u, 0x1B9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D5Cu;
label_1b9d5c:
    // 0x1b9d5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9d60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D6Cu;
        // 0x1b9d70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D74u;
}
