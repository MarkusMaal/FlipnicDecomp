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

// Function: FUN_0019fa60
// Address: 0x19fa60 - 0x19fae4
void FUN_0019fa60_0x19fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fa60_0x19fa60");
#endif

    switch (ctx->pc) {
        case 0x19fa94u: goto label_19fa94;
        case 0x19fab4u: goto label_19fab4;
        case 0x19faccu: goto label_19facc;
        default: break;
    }

    ctx->pc = 0x19fa60u;

    // 0x19fa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fa64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fa70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa74: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19FA74u;
    {
        const bool branch_taken_0x19fa74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA74u;
        // 0x19fa78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa74) {
            ctx->pc = 0x19FACCu;
            goto label_19facc;
        }
    }
    ctx->pc = 0x19FA7Cu;
    // 0x19fa7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19fa80: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x19fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x19fa84: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x19fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x19fa88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19fa8c: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19FA8Cu;
    SET_GPR_U32(ctx, 31, 0x19FA94u);
    ctx->pc = 0x19FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA8Cu;
    // 0x19fa90: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19FA8Cu, 0x19FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA94u;
label_19fa94:
    // 0x19fa94: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FA94u;
    {
        const bool branch_taken_0x19fa94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA94u;
        // 0x19fa98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa94) {
            ctx->pc = 0x19FAB8u;
            goto label_19fab8;
        }
    }
    ctx->pc = 0x19FA9Cu;
    // 0x19fa9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19faa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faa4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x19faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x19faa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19faa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faac: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x19FAACu;
    SET_GPR_U32(ctx, 31, 0x19FAB4u);
    ctx->pc = 0x19FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAACu;
    // 0x19fab0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x19FAACu, 0x19FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAB4u;
label_19fab4:
    // 0x19fab4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19fab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_19fab8:
    // 0x19fab8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19fab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19fabc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FABCu;
    {
        const bool branch_taken_0x19fabc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FABCu;
        // 0x19fac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fabc) {
            ctx->pc = 0x19FAD0u;
            goto label_19fad0;
        }
    }
    ctx->pc = 0x19FAC4u;
    // 0x19fac4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19FAC4u;
    SET_GPR_U32(ctx, 31, 0x19FACCu);
    ctx->pc = 0x19FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAC4u;
    // 0x19fac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19FAC4u, 0x19FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FACCu;
label_19facc:
    // 0x19facc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19faccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19fad0:
    // 0x19fad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x19FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FADCu;
        // 0x19fae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FAE4u;
}
