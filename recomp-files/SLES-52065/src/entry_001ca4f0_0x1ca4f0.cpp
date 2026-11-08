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

// Function: entry_001ca4f0
// Address: 0x1ca4f0 - 0x1ca540
void entry_001ca4f0_0x1ca4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4f0_0x1ca4f0");
#endif

    switch (ctx->pc) {
        case 0x1ca500u: goto label_1ca500;
        case 0x1ca514u: goto label_1ca514;
        case 0x1ca528u: goto label_1ca528;
        default: break;
    }

    ctx->pc = 0x1ca4f0u;

    // 0x1ca4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ca4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f8: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CA4F8u;
    SET_GPR_U32(ctx, 31, 0x1CA500u);
    ctx->pc = 0x1CA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4F8u;
    // 0x1ca4fc: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CA4F8u, 0x1CA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA500u;
label_1ca500:
    // 0x1ca500: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca508: 0x24a57190  addiu       $a1, $a1, 0x7190
    ctx->pc = 0x1ca508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29072));
    // 0x1ca50c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CA50Cu;
    SET_GPR_U32(ctx, 31, 0x1CA514u);
    ctx->pc = 0x1CA510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA50Cu;
    // 0x1ca510: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CA50Cu, 0x1CA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA514u;
label_1ca514:
    // 0x1ca514: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca51c: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x1ca51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x1ca520: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CA520u;
    SET_GPR_U32(ctx, 31, 0x1CA528u);
    ctx->pc = 0x1CA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA520u;
    // 0x1ca524: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CA520u, 0x1CA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA528u;
label_1ca528:
    // 0x1ca528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca52c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca538: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA538u;
        // 0x1ca53c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA540u;
}
