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

// Function: FUN_00199bf0
// Address: 0x199bf0 - 0x199c94
void FUN_00199bf0_0x199bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199bf0_0x199bf0");
#endif

    switch (ctx->pc) {
        case 0x199c2cu: goto label_199c2c;
        case 0x199c58u: goto label_199c58;
        case 0x199c64u: goto label_199c64;
        case 0x199c7cu: goto label_199c7c;
        default: break;
    }

    ctx->pc = 0x199bf0u;

    // 0x199bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c04: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199C7Cu;
            goto label_199c7c;
        }
    }
    ctx->pc = 0x199C0Cu;
    // 0x199c0c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x199c10: 0x26220820  addiu       $v0, $s1, 0x820
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x199c14: 0x2463b2c0  addiu       $v1, $v1, -0x4D40
    ctx->pc = 0x199c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947520));
    // 0x199c18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x199C18u;
    {
        const bool branch_taken_0x199c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C18u;
        // 0x199c1c: 0xae23031c  sw          $v1, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c18) {
            ctx->pc = 0x199C58u;
            goto label_199c58;
        }
    }
    ctx->pc = 0x199C20u;
    // 0x199c20: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x199c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x199c24: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x199C24u;
    SET_GPR_U32(ctx, 31, 0x199C2Cu);
    ctx->pc = 0x199C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C24u;
    // 0x199c28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x199C24u, 0x199C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C2Cu;
label_199c2c:
    // 0x199c2c: 0x26240820  addiu       $a0, $s1, 0x820
    ctx->pc = 0x199c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x199c30: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x199C30u;
    {
        const bool branch_taken_0x199c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C30u;
        // 0x199c34: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c30) {
            ctx->pc = 0x199C58u;
            goto label_199c58;
        }
    }
    ctx->pc = 0x199C38u;
    // 0x199c38: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x199c3c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199C3Cu;
    {
        const bool branch_taken_0x199c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C3Cu;
        // 0x199c40: 0xae22082c  sw          $v0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c3c) {
            ctx->pc = 0x199C58u;
            goto label_199c58;
        }
    }
    ctx->pc = 0x199C44u;
    // 0x199c44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x199c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x199c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c4c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x199c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x199c50: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x199C50u;
    SET_GPR_U32(ctx, 31, 0x199C58u);
    ctx->pc = 0x199C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C50u;
    // 0x199c54: 0xae22082c  sw          $v0, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x199C50u, 0x199C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C58u;
label_199c58:
    // 0x199c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c5c: 0xc064324  jal         func_190C90
    ctx->pc = 0x199C5Cu;
    SET_GPR_U32(ctx, 31, 0x199C64u);
    ctx->pc = 0x199C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C5Cu;
    // 0x199c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x199C5Cu, 0x199C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C64u;
label_199c64:
    // 0x199c64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x199c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x199c68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x199c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x199c6c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199C6Cu;
    {
        const bool branch_taken_0x199c6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C6Cu;
        // 0x199c70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c6c) {
            ctx->pc = 0x199C80u;
            goto label_199c80;
        }
    }
    ctx->pc = 0x199C74u;
    // 0x199c74: 0xc0401a4  jal         func_100690
    ctx->pc = 0x199C74u;
    SET_GPR_U32(ctx, 31, 0x199C7Cu);
    ctx->pc = 0x199C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C74u;
    // 0x199c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x199C74u, 0x199C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C7Cu;
label_199c7c:
    // 0x199c7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x199c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199c80:
    // 0x199c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x199C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C8Cu;
        // 0x199c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C94u;
}
