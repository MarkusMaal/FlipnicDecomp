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

// Function: FUN_0015a080
// Address: 0x15a080 - 0x15a0f0
void FUN_0015a080_0x15a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a080_0x15a080");
#endif

    switch (ctx->pc) {
        case 0x15a0b4u: goto label_15a0b4;
        default: break;
    }

    ctx->pc = 0x15a080u;

    // 0x15a080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a090: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x15a090u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a094: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x15a094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x15a098: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x15a098u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a09c: 0x8205002a  lb          $a1, 0x2A($s0)
    ctx->pc = 0x15a09cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15a0a0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x15a0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15a0a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A0A4u;
    {
        const bool branch_taken_0x15a0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0A4u;
        // 0x15a0a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0a4) {
            ctx->pc = 0x15A0B4u;
            goto label_15a0b4;
        }
    }
    ctx->pc = 0x15A0ACu;
    // 0x15a0ac: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15A0ACu;
    SET_GPR_U32(ctx, 31, 0x15A0B4u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15A0ACu, 0x15A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0B4u;
label_15a0b4:
    // 0x15a0b4: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x15a0b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15a0b8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15a0b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15a0bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A0BCu;
    {
        const bool branch_taken_0x15a0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a0bc) {
            ctx->pc = 0x15A0C8u;
            goto label_15a0c8;
        }
    }
    ctx->pc = 0x15A0C4u;
    // 0x15a0c4: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x15a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_15a0c8:
    // 0x15a0c8: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x15a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x15a0cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a0d0: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x15a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x15a0d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a0d8: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x15a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x15a0dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a0e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0E8u;
        // 0x15a0ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A0F0u;
}
