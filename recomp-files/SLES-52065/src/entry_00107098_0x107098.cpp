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

// Function: entry_00107098
// Address: 0x107098 - 0x1070f0
void entry_00107098_0x107098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107098_0x107098");
#endif

    switch (ctx->pc) {
        case 0x1070b0u: goto label_1070b0;
        case 0x1070c0u: goto label_1070c0;
        case 0x1070dcu: goto label_1070dc;
        default: break;
    }

    ctx->pc = 0x107098u;

label_107098:
    // 0x107098: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x107098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
label_10709c:
    // 0x10709c: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1070a0:
    // 0x1070a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1070a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1070a4:
    // 0x1070a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1070a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1070a8:
    // 0x1070a8: 0x320f809  jalr        $t9
label_1070ac:
    if (ctx->pc == 0x1070ACu) {
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070B0u;
        goto label_1070b0;
    }
    ctx->pc = 0x1070A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1070B0u);
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070A8u, 0x1070B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1070B0u;
label_1070b0:
    // 0x1070b0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1070b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1070b4:
    // 0x1070b4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1070b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_1070b8:
    // 0x1070b8: 0xc04ae68  jal         func_12B9A0
label_1070bc:
    if (ctx->pc == 0x1070BCu) {
        ctx->pc = 0x1070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070B8u;
        // 0x1070bc: 0x24a5fd70  addiu       $a1, $a1, -0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070C0u;
        goto label_1070c0;
    }
    ctx->pc = 0x1070B8u;
    SET_GPR_U32(ctx, 31, 0x1070C0u);
    ctx->pc = 0x1070BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B8u;
    // 0x1070bc: 0x24a5fd70  addiu       $a1, $a1, -0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9A0u, 0x1070B8u, 0x1070C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070C0u;
label_1070c0:
    // 0x1070c0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1070c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_1070c4:
    // 0x1070c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1070c8:
    // 0x1070c8: 0x24a5e0d0  addiu       $a1, $a1, -0x1F30
    ctx->pc = 0x1070c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959312));
label_1070cc:
    // 0x1070cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1070ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1070d0:
    // 0x1070d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1070d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1070d4:
    // 0x1070d4: 0x320f809  jalr        $t9
label_1070d8:
    if (ctx->pc == 0x1070D8u) {
        ctx->pc = 0x1070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D4u;
        // 0x1070d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070DCu;
        goto label_1070dc;
    }
    ctx->pc = 0x1070D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1070DCu);
        ctx->pc = 0x1070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070D4u;
        // 0x1070d8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070D4u, 0x1070DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1070DCu;
label_1070dc:
    // 0x1070dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1070dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1070e0:
    // 0x1070e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1070e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1070e4:
    // 0x1070e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1070e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1070e8:
    // 0x1070e8: 0x3e00008  jr          $ra
label_1070ec:
    if (ctx->pc == 0x1070ECu) {
        ctx->pc = 0x1070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E8u;
        // 0x1070ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070F0u;
        goto label_fallthrough_0x1070e8;
    }
    ctx->pc = 0x1070E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E8u;
        // 0x1070ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1070E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1070e8:
    ctx->pc = 0x1070F0u;
}
