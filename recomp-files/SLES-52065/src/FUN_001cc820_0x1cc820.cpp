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

// Function: FUN_001cc820
// Address: 0x1cc820 - 0x1cc8b8
void FUN_001cc820_0x1cc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc820_0x1cc820");
#endif

    switch (ctx->pc) {
        case 0x1cc838u: goto label_1cc838;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc858u: goto label_1cc858;
        case 0x1cc864u: goto label_1cc864;
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc884u: goto label_1cc884;
        case 0x1cc894u: goto label_1cc894;
        case 0x1cc8a8u: goto label_1cc8a8;
        default: break;
    }

    ctx->pc = 0x1cc820u;

    // 0x1cc820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc830: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x1CC830u;
    SET_GPR_U32(ctx, 31, 0x1CC838u);
    ctx->pc = 0x1CC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC830u;
    // 0x1cc834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x1CC830u, 0x1CC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC838u;
label_1cc838:
    // 0x1cc838: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CC838u;
    {
        const bool branch_taken_0x1cc838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc838) {
            ctx->pc = 0x1CC8A8u;
            goto label_1cc8a8;
        }
    }
    ctx->pc = 0x1CC840u;
    // 0x1cc840: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CC840u;
    SET_GPR_U32(ctx, 31, 0x1CC848u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CC840u, 0x1CC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC848u;
label_1cc848:
    // 0x1cc848: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC848u;
    {
        const bool branch_taken_0x1cc848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC848u;
        // 0x1cc84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc848) {
            ctx->pc = 0x1CC86Cu;
            goto label_1cc86c;
        }
    }
    ctx->pc = 0x1CC850u;
    // 0x1cc850: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CC850u;
    SET_GPR_U32(ctx, 31, 0x1CC858u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CC850u, 0x1CC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC858u;
label_1cc858:
    // 0x1cc858: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cc858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cc85c: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CC85Cu;
    SET_GPR_U32(ctx, 31, 0x1CC864u);
    ctx->pc = 0x1CC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC85Cu;
    // 0x1cc860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CC85Cu, 0x1CC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC864u;
label_1cc864:
    // 0x1cc864: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC864u;
    {
        const bool branch_taken_0x1cc864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC864u;
        // 0x1cc868: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc864) {
            ctx->pc = 0x1CC8ACu;
            goto label_1cc8ac;
        }
    }
    ctx->pc = 0x1CC86Cu;
label_1cc86c:
    // 0x1cc86c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CC86Cu;
    SET_GPR_U32(ctx, 31, 0x1CC874u);
    ctx->pc = 0x1CC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC86Cu;
    // 0x1cc870: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CC86Cu, 0x1CC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC874u;
label_1cc874:
    // 0x1cc874: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC874u;
    {
        const bool branch_taken_0x1cc874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC874u;
        // 0x1cc878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc874) {
            ctx->pc = 0x1CC88Cu;
            goto label_1cc88c;
        }
    }
    ctx->pc = 0x1CC87Cu;
    // 0x1cc87c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CC87Cu;
    SET_GPR_U32(ctx, 31, 0x1CC884u);
    ctx->pc = 0x1CC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC87Cu;
    // 0x1cc880: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CC87Cu, 0x1CC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC884u;
label_1cc884:
    // 0x1cc884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC884u;
    {
        const bool branch_taken_0x1cc884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc884) {
            ctx->pc = 0x1CC8A8u;
            goto label_1cc8a8;
        }
    }
    ctx->pc = 0x1CC88Cu;
label_1cc88c:
    // 0x1cc88c: 0xc060014  jal         func_180050
    ctx->pc = 0x1CC88Cu;
    SET_GPR_U32(ctx, 31, 0x1CC894u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1CC88Cu, 0x1CC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC894u;
label_1cc894:
    // 0x1cc894: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc89c: 0x24a580d0  addiu       $a1, $a1, -0x7F30
    ctx->pc = 0x1cc89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934736));
    // 0x1cc8a0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CC8A0u;
    SET_GPR_U32(ctx, 31, 0x1CC8A8u);
    ctx->pc = 0x1CC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8A0u;
    // 0x1cc8a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CC8A0u, 0x1CC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8A8u;
label_1cc8a8:
    // 0x1cc8a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc8ac:
    // 0x1cc8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8B0u;
        // 0x1cc8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC8B8u;
}
