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

// Function: entry_001d7f78
// Address: 0x1d7f78 - 0x1d7fd0
void entry_001d7f78_0x1d7f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f78_0x1d7f78");
#endif

    ctx->pc = 0x1d7f78u;

    // 0x1d7f78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7f7c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d7f80: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7f84: 0x8c670550  lw          $a3, 0x550($v1)
    ctx->pc = 0x1d7f84u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7f88: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1d7f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7f8c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1d7f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d7f90: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x1d7f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1d7f94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d7f98: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d7f9c: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x1d7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x1d7fa0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1d7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7fa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7fa8: 0x34660100  ori         $a2, $v1, 0x100
    ctx->pc = 0x1d7fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1d7fac: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1d7facu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d7fb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7fb4: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x1d7fb4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1d7fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7fbc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1d7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1d7fc0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d7fc4: 0x30637fc0  andi        $v1, $v1, 0x7FC0
    ctx->pc = 0x1d7fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32704);
    // 0x1d7fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FC8u;
        // 0x1d7fcc: 0xa4430308  sh          $v1, 0x308($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 776), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FD0u;
}
