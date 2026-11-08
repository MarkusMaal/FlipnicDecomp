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

// Function: FUN_0015a1c0
// Address: 0x15a1c0 - 0x15a220
void FUN_0015a1c0_0x15a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a1c0_0x15a1c0");
#endif

    switch (ctx->pc) {
        case 0x15a1f4u: goto label_15a1f4;
        default: break;
    }

    ctx->pc = 0x15a1c0u;

    // 0x15a1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a1c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a1d0: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x15a1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x15a1d4: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x15a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x15a1d8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x15a1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a1dc: 0x8205002a  lb          $a1, 0x2A($s0)
    ctx->pc = 0x15a1dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15a1e0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x15a1e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15a1e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A1E4u;
    {
        const bool branch_taken_0x15a1e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1E4u;
        // 0x15a1e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1e4) {
            ctx->pc = 0x15A1F4u;
            goto label_15a1f4;
        }
    }
    ctx->pc = 0x15A1ECu;
    // 0x15a1ec: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15A1ECu;
    SET_GPR_U32(ctx, 31, 0x15A1F4u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15A1ECu, 0x15A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A1F4u;
label_15a1f4:
    // 0x15a1f4: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15a1f8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x15a1f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15a1fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A1FCu;
    {
        const bool branch_taken_0x15a1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1fc) {
            ctx->pc = 0x15A208u;
            goto label_15a208;
        }
    }
    ctx->pc = 0x15A204u;
    // 0x15a204: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x15a204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_15a208:
    // 0x15a208: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x15a208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x15a20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a218: 0x3e00008  jr          $ra
    ctx->pc = 0x15A218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A218u;
        // 0x15a21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A220u;
}
