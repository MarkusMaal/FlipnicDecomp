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

// Function: entry_0012fc7c
// Address: 0x12fc7c - 0x12fcd4
void entry_0012fc7c_0x12fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc7c_0x12fc7c");
#endif

    switch (ctx->pc) {
        case 0x12fcb0u: goto label_12fcb0;
        default: break;
    }

    ctx->pc = 0x12fc7cu;

    // 0x12fc7c: 0x0  nop
    ctx->pc = 0x12fc7cu;
    // NOP
    // 0x12fc80: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x12fc84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12fc88: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x12fc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fc8c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12FC8Cu;
    {
        const bool branch_taken_0x12fc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC8Cu;
        // 0x12fc90: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc8c) {
            ctx->pc = 0x12FAC8u;
            return;
        }
    }
    ctx->pc = 0x12FC94u;
    // 0x12fc94: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12fc98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12fca0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x12fca4: 0xa4400170  sh          $zero, 0x170($v0)
    ctx->pc = 0x12fca4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fca8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x12FCA8u;
    SET_GPR_U32(ctx, 31, 0x12FCB0u);
    ctx->pc = 0x12FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCA8u;
    // 0x12fcac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x12FCA8u, 0x12FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCB0u;
label_12fcb0:
    // 0x12fcb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12fcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fcb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12fcb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fcb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12fcb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fcbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12fcbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fcc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12fcc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fcc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12fcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fcc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12fcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fccc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCCCu;
        // 0x12fcd0: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FCD4u;
}
