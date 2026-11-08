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

// Function: entry_001def60
// Address: 0x1def60 - 0x1def98
void entry_001def60_0x1def60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001def60_0x1def60");
#endif

    switch (ctx->pc) {
        case 0x1def68u: goto label_1def68;
        default: break;
    }

    ctx->pc = 0x1def60u;

    // 0x1def60: 0xc080664  jal         func_201990
    ctx->pc = 0x1DEF60u;
    SET_GPR_U32(ctx, 31, 0x1DEF68u);
    ctx->pc = 0x1DEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF60u;
    // 0x1def64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1DEF60u, 0x1DEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF68u;
label_1def68:
    // 0x1def68: 0x2a230030  slti        $v1, $s1, 0x30
    ctx->pc = 0x1def68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1def6c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DEF6Cu;
    {
        const bool branch_taken_0x1def6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF6Cu;
        // 0x1def70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def6c) {
            ctx->pc = 0x1DEF18u;
            return;
        }
    }
    ctx->pc = 0x1DEF74u;
    // 0x1def74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1def74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1def78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1def7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1def7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1def80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1def80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1def84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1def84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1def88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1def88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1def8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1def8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1def90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF90u;
        // 0x1def94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEF98u;
}
