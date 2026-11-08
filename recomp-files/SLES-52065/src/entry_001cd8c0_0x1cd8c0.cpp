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

// Function: entry_001cd8c0
// Address: 0x1cd8c0 - 0x1cd958
void entry_001cd8c0_0x1cd8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd8c0_0x1cd8c0");
#endif

    switch (ctx->pc) {
        case 0x1cd8ccu: goto label_1cd8cc;
        case 0x1cd8dcu: goto label_1cd8dc;
        case 0x1cd8ecu: goto label_1cd8ec;
        case 0x1cd8f8u: goto label_1cd8f8;
        case 0x1cd920u: goto label_1cd920;
        case 0x1cd928u: goto label_1cd928;
        case 0x1cd938u: goto label_1cd938;
        case 0x1cd94cu: goto label_1cd94c;
        default: break;
    }

    ctx->pc = 0x1cd8c0u;

label_1cd8c0:
    // 0x1cd8c0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd8c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD8C4u;
    SET_GPR_U32(ctx, 31, 0x1CD8CCu);
    ctx->pc = 0x1CD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8C4u;
    // 0x1cd8c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD8C4u, 0x1CD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8CCu;
label_1cd8cc:
    // 0x1cd8cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd8d4: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1CD8D4u;
    SET_GPR_U32(ctx, 31, 0x1CD8DCu);
    ctx->pc = 0x1CD8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8D4u;
    // 0x1cd8d8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D80u, 0x1CD8D4u, 0x1CD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8DCu;
label_1cd8dc:
    // 0x1cd8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8e0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd8e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD8E4u;
    SET_GPR_U32(ctx, 31, 0x1CD8ECu);
    ctx->pc = 0x1CD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8E4u;
    // 0x1cd8e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD8E4u, 0x1CD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8ECu;
label_1cd8ec:
    // 0x1cd8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f0: 0xc06e764  jal         func_1B9D90
    ctx->pc = 0x1CD8F0u;
    SET_GPR_U32(ctx, 31, 0x1CD8F8u);
    ctx->pc = 0x1CD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8F0u;
    // 0x1cd8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D90u, 0x1CD8F0u, 0x1CD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd8fc: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cd900: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CD900u;
    {
        const bool branch_taken_0x1cd900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD900u;
        // 0x1cd904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd900) {
            ctx->pc = 0x1CD8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd8c0;
        }
    }
    ctx->pc = 0x1CD908u;
    // 0x1cd908: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1cd908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1cd90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd910: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1cd910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x1cd914: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x1cd914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cd918: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD918u;
    SET_GPR_U32(ctx, 31, 0x1CD920u);
    ctx->pc = 0x1CD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD918u;
    // 0x1cd91c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD918u, 0x1CD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD920u;
label_1cd920:
    // 0x1cd920: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CD920u;
    SET_GPR_U32(ctx, 31, 0x1CD928u);
    ctx->pc = 0x1CD924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD920u;
    // 0x1cd924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CD920u, 0x1CD928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD928u;
label_1cd928:
    // 0x1cd928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd92c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd930: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD930u;
    SET_GPR_U32(ctx, 31, 0x1CD938u);
    ctx->pc = 0x1CD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD930u;
    // 0x1cd934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD930u, 0x1CD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD938u;
label_1cd938:
    // 0x1cd938: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x1cd938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1cd93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd940: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd944: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD944u;
    SET_GPR_U32(ctx, 31, 0x1CD94Cu);
    ctx->pc = 0x1CD948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD944u;
    // 0x1cd948: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD944u, 0x1CD94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD94Cu;
label_1cd94c:
    // 0x1cd94c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1cd94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cd950: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cd950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd958u;
}
