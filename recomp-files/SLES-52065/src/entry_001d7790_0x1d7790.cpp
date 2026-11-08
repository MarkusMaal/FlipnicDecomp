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

// Function: entry_001d7790
// Address: 0x1d7790 - 0x1d77d0
void entry_001d7790_0x1d7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7790_0x1d7790");
#endif

    ctx->pc = 0x1d7790u;

    // 0x1d7790: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7794: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d7798: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d7798u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d779c: 0x8c860550  lw          $a2, 0x550($a0)
    ctx->pc = 0x1d779cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370550u));
    // 0x1d77a0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1d77a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d77a4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1d77a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d77a8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d77ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d77acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d77b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d77b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d77b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d77bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d77c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d77c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D77C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77C4u;
        // 0x1d77c8: 0xac4402a8  sw          $a0, 0x2A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D77C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D77CCu;
    // 0x1d77cc: 0x0  nop
    ctx->pc = 0x1d77ccu;
    // NOP
    ctx->pc = 0x1d77d0u;
}
