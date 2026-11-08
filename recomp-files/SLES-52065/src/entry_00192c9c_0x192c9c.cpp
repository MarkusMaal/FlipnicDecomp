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

// Function: entry_00192c9c
// Address: 0x192c9c - 0x192cf4
void entry_00192c9c_0x192c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192c9c_0x192c9c");
#endif

    ctx->pc = 0x192c9cu;

    // 0x192c9c: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x192c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x192ca0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x192ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x192ca4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x192ca4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x192ca8: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x192ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
    // 0x192cac: 0x84c328d8  lh          $v1, 0x28D8($a2)
    ctx->pc = 0x192cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
    // 0x192cb0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x192cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x192cb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x192cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x192cb8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x192cbc: 0x3012  mflo        $a2
    ctx->pc = 0x192cbcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x192cc0: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x192cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    // 0x192cc4: 0x2810  mfhi        $a1
    ctx->pc = 0x192cc4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x192cc8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x192cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192ccc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x192cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x192cd0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x192cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x192cd4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x192cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x192cd8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x192cdc: 0xfc832818  sd          $v1, 0x2818($a0)
    ctx->pc = 0x192cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
    // 0x192ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192cec: 0x3e00008  jr          $ra
    ctx->pc = 0x192CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CECu;
        // 0x192cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CF4u;
}
