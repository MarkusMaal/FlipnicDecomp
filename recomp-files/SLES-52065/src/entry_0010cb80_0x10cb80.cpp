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

// Function: entry_0010cb80
// Address: 0x10cb80 - 0x10cbc0
void entry_0010cb80_0x10cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb80_0x10cb80");
#endif

    switch (ctx->pc) {
        case 0x10cbacu: goto label_10cbac;
        default: break;
    }

    ctx->pc = 0x10cb80u;

    // 0x10cb80: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x10cb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10cb84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10CB84u;
    {
        const bool branch_taken_0x10cb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB84u;
        // 0x10cb88: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb84) {
            ctx->pc = 0x10CB60u;
            return;
        }
    }
    ctx->pc = 0x10CB8Cu;
    // 0x10cb8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10cb90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cb94: 0xae02230c  sw          $v0, 0x230C($s0)
    ctx->pc = 0x10cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8972), GPR_U32(ctx, 2));
    // 0x10cb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb9c: 0xae022310  sw          $v0, 0x2310($s0)
    ctx->pc = 0x10cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8976), GPR_U32(ctx, 2));
    // 0x10cba0: 0xae052308  sw          $a1, 0x2308($s0)
    ctx->pc = 0x10cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8968), GPR_U32(ctx, 5));
    // 0x10cba4: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10CBA4u;
    SET_GPR_U32(ctx, 31, 0x10CBACu);
    ctx->pc = 0x10CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA4u;
    // 0x10cba8: 0xa20501d3  sb          $a1, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10CBA4u, 0x10CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBACu;
label_10cbac:
    // 0x10cbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10cbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cbb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10cbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB8u;
        // 0x10cbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CBC0u;
}
