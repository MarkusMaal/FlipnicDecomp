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

// Function: entry_001d805c
// Address: 0x1d805c - 0x1d8090
void entry_001d805c_0x1d805c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d805c_0x1d805c");
#endif

    ctx->pc = 0x1d805cu;

    // 0x1d805c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d8060: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d8060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8064: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d8064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8068: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d8068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d806c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d806cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8070: 0x8ca40550  lw          $a0, 0x550($a1)
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
    // 0x1d8074: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d8074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d8078: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x1d8078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x1d807c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d807cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8080: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1d8080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1d8084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d8088: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8088u;
        // 0x1d808c: 0xa443030a  sh          $v1, 0x30A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 778), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8090u;
}
