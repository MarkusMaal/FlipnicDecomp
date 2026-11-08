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

// Function: entry_001d9a80
// Address: 0x1d9a80 - 0x1d9ac0
void entry_001d9a80_0x1d9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9a80_0x1d9a80");
#endif

    switch (ctx->pc) {
        case 0x1d9aacu: goto label_1d9aac;
        default: break;
    }

    ctx->pc = 0x1d9a80u;

    // 0x1d9a80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9a88: 0x5462004c  bnel        $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1D9A88u;
    {
        const bool branch_taken_0x1d9a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9a88) {
            ctx->pc = 0x1D9A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A88u;
            // 0x1d9a8c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BBCu;
            return;
        }
    }
    ctx->pc = 0x1D9A90u;
    // 0x1d9a90: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x1d9a94: 0xafc071d4  sw          $zero, 0x71D4($fp)
    ctx->pc = 0x1d9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 29140), GPR_U32(ctx, 0));
    // 0x1d9a98: 0xae8071d0  sw          $zero, 0x71D0($s4)
    ctx->pc = 0x1d9a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3871D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3871D0u, _value); } while (0);
    // 0x1d9a9c: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x1d9a9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d9aa0: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x1d9aa0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d9aa4: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1D9AA4u;
    SET_GPR_U32(ctx, 31, 0x1D9AACu);
    ctx->pc = 0x1D9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AA4u;
    // 0x1d9aa8: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1D9AA4u, 0x1D9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AACu;
label_1d9aac:
    // 0x1d9aac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1d9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1d9ab0: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1d9ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1d9ab4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1D9AB4u;
    {
        const bool branch_taken_0x1d9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AB4u;
        // 0x1d9ab8: 0x24739f90  addiu       $s3, $v1, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ab4) {
            ctx->pc = 0x1D9B8Cu;
            return;
        }
    }
    ctx->pc = 0x1D9ABCu;
    // 0x1d9abc: 0x0  nop
    ctx->pc = 0x1d9abcu;
    // NOP
    ctx->pc = 0x1d9ac0u;
}
