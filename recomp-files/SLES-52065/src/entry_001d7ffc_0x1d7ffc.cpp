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

// Function: entry_001d7ffc
// Address: 0x1d7ffc - 0x1d8030
void entry_001d7ffc_0x1d7ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7ffc_0x1d7ffc");
#endif

    ctx->pc = 0x1d7ffcu;

    // 0x1d7ffc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d8000: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d8000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8004: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8008: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d800c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8010: 0x8ca40550  lw          $a0, 0x550($a1)
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
    // 0x1d8014: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8018: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d8018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d801c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d801cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8020: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1d8020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1d8024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8028: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8028u;
        // 0x1d802c: 0xa4430306  sh          $v1, 0x306($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 774), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8030u;
}
