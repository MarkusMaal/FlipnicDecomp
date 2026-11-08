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

// Function: entry_001cfaa8
// Address: 0x1cfaa8 - 0x1cfb00
void entry_001cfaa8_0x1cfaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfaa8_0x1cfaa8");
#endif

    switch (ctx->pc) {
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfae8u: goto label_1cfae8;
        default: break;
    }

    ctx->pc = 0x1cfaa8u;

    // 0x1cfaa8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cfaac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cfaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cfab0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cfab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cfab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfab8: 0x24a59860  addiu       $a1, $a1, -0x67A0
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940768));
    // 0x1cfabc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cfabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfac0: 0xac229890  sw          $v0, -0x6770($at)
    ctx->pc = 0x1cfac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x219890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x219890u, _value); } while (0);
    // 0x1cfac4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1cfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cfac8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1cfacc: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CFACCu;
    SET_GPR_U32(ctx, 31, 0x1CFAD4u);
    ctx->pc = 0x1CFAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFACCu;
    // 0x1cfad0: 0xac2298e0  sw          $v0, -0x6720($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940896), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CFACCu, 0x1CFAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAD4u;
label_1cfad4:
    // 0x1cfad4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cfad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cfad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfadc: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x1cfadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x1cfae0: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CFAE0u;
    SET_GPR_U32(ctx, 31, 0x1CFAE8u);
    ctx->pc = 0x1CFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAE0u;
    // 0x1cfae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CFAE0u, 0x1CFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAE8u;
label_1cfae8:
    // 0x1cfae8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1cfae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1cfaec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfaf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cfaf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfaf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF8u;
        // 0x1cfafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFB00u;
}
