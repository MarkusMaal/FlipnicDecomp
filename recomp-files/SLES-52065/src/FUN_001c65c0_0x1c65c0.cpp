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

// Function: FUN_001c65c0
// Address: 0x1c65c0 - 0x1c6658
void FUN_001c65c0_0x1c65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c65c0_0x1c65c0");
#endif

    switch (ctx->pc) {
        case 0x1c65d8u: goto label_1c65d8;
        case 0x1c65e8u: goto label_1c65e8;
        case 0x1c65f8u: goto label_1c65f8;
        case 0x1c6604u: goto label_1c6604;
        case 0x1c6614u: goto label_1c6614;
        case 0x1c6624u: goto label_1c6624;
        case 0x1c6634u: goto label_1c6634;
        case 0x1c6648u: goto label_1c6648;
        default: break;
    }

    ctx->pc = 0x1c65c0u;

    // 0x1c65c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c65c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c65c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c65c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c65c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c65cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c65ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65d0: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1C65D0u;
    SET_GPR_U32(ctx, 31, 0x1C65D8u);
    ctx->pc = 0x1C65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65D0u;
    // 0x1c65d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1C65D0u, 0x1C65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65D8u;
label_1c65d8:
    // 0x1c65d8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C65D8u;
    {
        const bool branch_taken_0x1c65d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65d8) {
            ctx->pc = 0x1C6648u;
            goto label_1c6648;
        }
    }
    ctx->pc = 0x1C65E0u;
    // 0x1c65e0: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1C65E0u;
    SET_GPR_U32(ctx, 31, 0x1C65E8u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1C65E0u, 0x1C65E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65E8u;
label_1c65e8:
    // 0x1c65e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C65E8u;
    {
        const bool branch_taken_0x1c65e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65E8u;
        // 0x1c65ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65e8) {
            ctx->pc = 0x1C660Cu;
            goto label_1c660c;
        }
    }
    ctx->pc = 0x1C65F0u;
    // 0x1c65f0: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1C65F0u;
    SET_GPR_U32(ctx, 31, 0x1C65F8u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1C65F0u, 0x1C65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65F8u;
label_1c65f8:
    // 0x1c65f8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c65fc: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1C65FCu;
    SET_GPR_U32(ctx, 31, 0x1C6604u);
    ctx->pc = 0x1C6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65FCu;
    // 0x1c6600: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1C65FCu, 0x1C6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6604u;
label_1c6604:
    // 0x1c6604: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6604u;
    {
        const bool branch_taken_0x1c6604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6604u;
        // 0x1c6608: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6604) {
            ctx->pc = 0x1C664Cu;
            goto label_1c664c;
        }
    }
    ctx->pc = 0x1C660Cu;
label_1c660c:
    // 0x1c660c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C660Cu;
    SET_GPR_U32(ctx, 31, 0x1C6614u);
    ctx->pc = 0x1C6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C660Cu;
    // 0x1c6610: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C660Cu, 0x1C6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6614u;
label_1c6614:
    // 0x1c6614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6614u;
    {
        const bool branch_taken_0x1c6614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6614u;
        // 0x1c6618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6614) {
            ctx->pc = 0x1C662Cu;
            goto label_1c662c;
        }
    }
    ctx->pc = 0x1C661Cu;
    // 0x1c661c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C661Cu;
    SET_GPR_U32(ctx, 31, 0x1C6624u);
    ctx->pc = 0x1C6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C661Cu;
    // 0x1c6620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C661Cu, 0x1C6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6624u;
label_1c6624:
    // 0x1c6624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6624u;
    {
        const bool branch_taken_0x1c6624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6624) {
            ctx->pc = 0x1C6648u;
            goto label_1c6648;
        }
    }
    ctx->pc = 0x1C662Cu;
label_1c662c:
    // 0x1c662c: 0xc060014  jal         func_180050
    ctx->pc = 0x1C662Cu;
    SET_GPR_U32(ctx, 31, 0x1C6634u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1C662Cu, 0x1C6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6634u;
label_1c6634:
    // 0x1c6634: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c6634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c6638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c663c: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x1c663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
    // 0x1c6640: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C6640u;
    SET_GPR_U32(ctx, 31, 0x1C6648u);
    ctx->pc = 0x1C6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6640u;
    // 0x1c6644: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C6640u, 0x1C6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6648u;
label_1c6648:
    // 0x1c6648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c664c:
    // 0x1c664c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c664cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6650: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6650u;
        // 0x1c6654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6658u;
}
