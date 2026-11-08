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

// Function: entry_001d80f8
// Address: 0x1d80f8 - 0x1d8138
void entry_001d80f8_0x1d80f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d80f8_0x1d80f8");
#endif

    ctx->pc = 0x1d80f8u;

    // 0x1d80f8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d80fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d8100: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d8100u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d8104: 0x8c860550  lw          $a2, 0x550($a0)
    ctx->pc = 0x1d8104u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8108: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1d8108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d810c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1d810cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d8110: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d8110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d8114: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d8114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d8118: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d8118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d811c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8128: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d812c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D812Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D812Cu;
        // 0x1d8130: 0xac4402c8  sw          $a0, 0x2C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 712), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D812Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8134u;
    // 0x1d8134: 0x0  nop
    ctx->pc = 0x1d8134u;
    // NOP
    ctx->pc = 0x1d8138u;
}
