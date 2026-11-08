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

// Function: FUN_0019a8a0
// Address: 0x19a8a0 - 0x19a9d8
void FUN_0019a8a0_0x19a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a8a0_0x19a8a0");
#endif

    switch (ctx->pc) {
        case 0x19a8a0u: goto label_19a8a0;
        case 0x19a8a4u: goto label_19a8a4;
        case 0x19a8a8u: goto label_19a8a8;
        case 0x19a8acu: goto label_19a8ac;
        case 0x19a8b0u: goto label_19a8b0;
        case 0x19a8b4u: goto label_19a8b4;
        case 0x19a8b8u: goto label_19a8b8;
        case 0x19a8bcu: goto label_19a8bc;
        case 0x19a8c0u: goto label_19a8c0;
        case 0x19a8c4u: goto label_19a8c4;
        case 0x19a8c8u: goto label_19a8c8;
        case 0x19a8ccu: goto label_19a8cc;
        case 0x19a8d0u: goto label_19a8d0;
        case 0x19a8d4u: goto label_19a8d4;
        case 0x19a8d8u: goto label_19a8d8;
        case 0x19a8dcu: goto label_19a8dc;
        case 0x19a8e0u: goto label_19a8e0;
        case 0x19a8e4u: goto label_19a8e4;
        case 0x19a8e8u: goto label_19a8e8;
        case 0x19a8ecu: goto label_19a8ec;
        case 0x19a8f0u: goto label_19a8f0;
        case 0x19a8f4u: goto label_19a8f4;
        case 0x19a8f8u: goto label_19a8f8;
        case 0x19a8fcu: goto label_19a8fc;
        case 0x19a900u: goto label_19a900;
        case 0x19a904u: goto label_19a904;
        case 0x19a908u: goto label_19a908;
        case 0x19a90cu: goto label_19a90c;
        case 0x19a910u: goto label_19a910;
        case 0x19a914u: goto label_19a914;
        case 0x19a918u: goto label_19a918;
        case 0x19a91cu: goto label_19a91c;
        case 0x19a920u: goto label_19a920;
        case 0x19a924u: goto label_19a924;
        case 0x19a928u: goto label_19a928;
        case 0x19a92cu: goto label_19a92c;
        case 0x19a930u: goto label_19a930;
        case 0x19a934u: goto label_19a934;
        case 0x19a938u: goto label_19a938;
        case 0x19a93cu: goto label_19a93c;
        case 0x19a940u: goto label_19a940;
        case 0x19a944u: goto label_19a944;
        case 0x19a948u: goto label_19a948;
        case 0x19a94cu: goto label_19a94c;
        case 0x19a950u: goto label_19a950;
        case 0x19a954u: goto label_19a954;
        case 0x19a958u: goto label_19a958;
        case 0x19a95cu: goto label_19a95c;
        case 0x19a960u: goto label_19a960;
        case 0x19a964u: goto label_19a964;
        case 0x19a968u: goto label_19a968;
        case 0x19a96cu: goto label_19a96c;
        case 0x19a970u: goto label_19a970;
        case 0x19a974u: goto label_19a974;
        case 0x19a978u: goto label_19a978;
        case 0x19a97cu: goto label_19a97c;
        case 0x19a980u: goto label_19a980;
        case 0x19a984u: goto label_19a984;
        case 0x19a988u: goto label_19a988;
        case 0x19a98cu: goto label_19a98c;
        case 0x19a990u: goto label_19a990;
        case 0x19a994u: goto label_19a994;
        case 0x19a998u: goto label_19a998;
        case 0x19a99cu: goto label_19a99c;
        case 0x19a9a0u: goto label_19a9a0;
        case 0x19a9a4u: goto label_19a9a4;
        case 0x19a9a8u: goto label_19a9a8;
        case 0x19a9acu: goto label_19a9ac;
        case 0x19a9b0u: goto label_19a9b0;
        case 0x19a9b4u: goto label_19a9b4;
        case 0x19a9b8u: goto label_19a9b8;
        case 0x19a9bcu: goto label_19a9bc;
        case 0x19a9c0u: goto label_19a9c0;
        case 0x19a9c4u: goto label_19a9c4;
        case 0x19a9c8u: goto label_19a9c8;
        case 0x19a9ccu: goto label_19a9cc;
        case 0x19a9d0u: goto label_19a9d0;
        case 0x19a9d4u: goto label_19a9d4;
        default: break;
    }

    ctx->pc = 0x19a8a0u;

label_19a8a0:
    // 0x19a8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19a8a4:
    // 0x19a8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19a8a8:
    // 0x19a8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19a8ac:
    // 0x19a8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19a8b0:
    // 0x19a8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a8b4:
    // 0x19a8b4: 0xc067f08  jal         func_19FC20
label_19a8b8:
    if (ctx->pc == 0x19A8B8u) {
        ctx->pc = 0x19A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8B4u;
        // 0x19a8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8BCu;
        goto label_19a8bc;
    }
    ctx->pc = 0x19A8B4u;
    SET_GPR_U32(ctx, 31, 0x19A8BCu);
    ctx->pc = 0x19A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8B4u;
    // 0x19a8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19A8B4u, 0x19A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8BCu;
label_19a8bc:
    // 0x19a8bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a8c0:
    // 0x19a8c0: 0xc067f0c  jal         func_19FC30
label_19a8c4:
    if (ctx->pc == 0x19A8C4u) {
        ctx->pc = 0x19A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8C0u;
        // 0x19a8c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8C8u;
        goto label_19a8c8;
    }
    ctx->pc = 0x19A8C0u;
    SET_GPR_U32(ctx, 31, 0x19A8C8u);
    ctx->pc = 0x19A8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8C0u;
    // 0x19a8c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x19A8C0u, 0x19A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A8C8u;
label_19a8c8:
    // 0x19a8c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19a8cc:
    // 0x19a8cc: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_19a8d0:
    if (ctx->pc == 0x19A8D0u) {
        ctx->pc = 0x19A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8CCu;
        // 0x19a8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8D4u;
        goto label_19a8d4;
    }
    ctx->pc = 0x19A8CCu;
    {
        const bool branch_taken_0x19a8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8CCu;
        // 0x19a8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8cc) {
            ctx->pc = 0x19A910u;
            goto label_19a910;
        }
    }
    ctx->pc = 0x19A8D4u;
label_19a8d4:
    // 0x19a8d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a8d8:
    // 0x19a8d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_19a8dc:
    if (ctx->pc == 0x19A8DCu) {
        ctx->pc = 0x19A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8D8u;
        // 0x19a8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8E0u;
        goto label_19a8e0;
    }
    ctx->pc = 0x19A8D8u;
    {
        const bool branch_taken_0x19a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8D8u;
        // 0x19a8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8d8) {
            ctx->pc = 0x19A8F0u;
            goto label_19a8f0;
        }
    }
    ctx->pc = 0x19A8E0u;
label_19a8e0:
    // 0x19a8e0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x19a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19a8e4:
    // 0x19a8e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a8e8:
    // 0x19a8e8: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_19a8ec:
    // 0x19a8ec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19a8f0:
    // 0x19a8f0: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x19a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_19a8f4:
    // 0x19a8f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19a8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19a8f8:
    // 0x19a8f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19a8fc:
    if (ctx->pc == 0x19A8FCu) {
        ctx->pc = 0x19A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8F8u;
        // 0x19a8fc: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A900u;
        goto label_19a900;
    }
    ctx->pc = 0x19A8F8u;
    {
        const bool branch_taken_0x19a8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8F8u;
        // 0x19a8fc: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8f8) {
            ctx->pc = 0x19A8E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a8e4;
        }
    }
    ctx->pc = 0x19A900u;
label_19a900:
    // 0x19a900: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a904:
    // 0x19a904: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x19a904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_19a908:
    // 0x19a908: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19a908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19a90c:
    // 0x19a90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a910:
    // 0x19a910: 0xc063dd4  jal         func_18F750
label_19a914:
    if (ctx->pc == 0x19A914u) {
        ctx->pc = 0x19A918u;
        goto label_19a918;
    }
    ctx->pc = 0x19A910u;
    SET_GPR_U32(ctx, 31, 0x19A918u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A910u, 0x19A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A918u;
label_19a918:
    // 0x19a918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a91c:
    // 0x19a91c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_19a920:
    if (ctx->pc == 0x19A920u) {
        ctx->pc = 0x19A924u;
        goto label_19a924;
    }
    ctx->pc = 0x19A91Cu;
    {
        const bool branch_taken_0x19a91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a91c) {
            ctx->pc = 0x19A988u;
            goto label_19a988;
        }
    }
    ctx->pc = 0x19A924u;
label_19a924:
    // 0x19a924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a928:
    // 0x19a928: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19a92c:
    if (ctx->pc == 0x19A92Cu) {
        ctx->pc = 0x19A930u;
        goto label_19a930;
    }
    ctx->pc = 0x19A928u;
    {
        const bool branch_taken_0x19a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a928) {
            ctx->pc = 0x19A95Cu;
            goto label_19a95c;
        }
    }
    ctx->pc = 0x19A930u;
label_19a930:
    // 0x19a930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19a934:
    if (ctx->pc == 0x19A934u) {
        ctx->pc = 0x19A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A930u;
        // 0x19a934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A938u;
        goto label_19a938;
    }
    ctx->pc = 0x19A930u;
    {
        const bool branch_taken_0x19a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A930u;
        // 0x19a934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a930) {
            ctx->pc = 0x19A944u;
            goto label_19a944;
        }
    }
    ctx->pc = 0x19A938u;
label_19a938:
    // 0x19a938: 0x10000019  b           . + 4 + (0x19 << 2)
label_19a93c:
    if (ctx->pc == 0x19A93Cu) {
        ctx->pc = 0x19A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A938u;
        // 0x19a93c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A940u;
        goto label_19a940;
    }
    ctx->pc = 0x19A938u;
    {
        const bool branch_taken_0x19a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A938u;
        // 0x19a93c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a938) {
            ctx->pc = 0x19A9A0u;
            goto label_19a9a0;
        }
    }
    ctx->pc = 0x19A940u;
label_19a940:
    // 0x19a940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a944:
    // 0x19a944: 0xc0667bc  jal         func_199EF0
label_19a948:
    if (ctx->pc == 0x19A948u) {
        ctx->pc = 0x19A94Cu;
        goto label_19a94c;
    }
    ctx->pc = 0x19A944u;
    SET_GPR_U32(ctx, 31, 0x19A94Cu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A944u, 0x19A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A94Cu;
label_19a94c:
    // 0x19a94c: 0xc063e14  jal         func_18F850
label_19a950:
    if (ctx->pc == 0x19A950u) {
        ctx->pc = 0x19A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A94Cu;
        // 0x19a950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A954u;
        goto label_19a954;
    }
    ctx->pc = 0x19A94Cu;
    SET_GPR_U32(ctx, 31, 0x19A954u);
    ctx->pc = 0x19A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A94Cu;
    // 0x19a950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A94Cu, 0x19A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A954u;
label_19a954:
    // 0x19a954: 0x10000011  b           . + 4 + (0x11 << 2)
label_19a958:
    if (ctx->pc == 0x19A958u) {
        ctx->pc = 0x19A95Cu;
        goto label_19a95c;
    }
    ctx->pc = 0x19A954u;
    {
        const bool branch_taken_0x19a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a954) {
            ctx->pc = 0x19A99Cu;
            goto label_19a99c;
        }
    }
    ctx->pc = 0x19A95Cu;
label_19a95c:
    // 0x19a95c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19a960:
    // 0x19a960: 0x8c452844  lw          $a1, 0x2844($v0)
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10308)));
label_19a964:
    // 0x19a964: 0xc0667e0  jal         func_199F80
label_19a968:
    if (ctx->pc == 0x19A968u) {
        ctx->pc = 0x19A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A964u;
        // 0x19a968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A96Cu;
        goto label_19a96c;
    }
    ctx->pc = 0x19A964u;
    SET_GPR_U32(ctx, 31, 0x19A96Cu);
    ctx->pc = 0x19A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A964u;
    // 0x19a968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A964u, 0x19A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A96Cu;
label_19a96c:
    // 0x19a96c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19a970:
    if (ctx->pc == 0x19A970u) {
        ctx->pc = 0x19A974u;
        goto label_19a974;
    }
    ctx->pc = 0x19A96Cu;
    {
        const bool branch_taken_0x19a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a96c) {
            ctx->pc = 0x19A99Cu;
            goto label_19a99c;
        }
    }
    ctx->pc = 0x19A974u;
label_19a974:
    // 0x19a974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a978:
    // 0x19a978: 0xc063e08  jal         func_18F820
label_19a97c:
    if (ctx->pc == 0x19A97Cu) {
        ctx->pc = 0x19A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A978u;
        // 0x19a97c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A980u;
        goto label_19a980;
    }
    ctx->pc = 0x19A978u;
    SET_GPR_U32(ctx, 31, 0x19A980u);
    ctx->pc = 0x19A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A978u;
    // 0x19a97c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A978u, 0x19A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A980u;
label_19a980:
    // 0x19a980: 0x10000006  b           . + 4 + (0x6 << 2)
label_19a984:
    if (ctx->pc == 0x19A984u) {
        ctx->pc = 0x19A988u;
        goto label_19a988;
    }
    ctx->pc = 0x19A980u;
    {
        const bool branch_taken_0x19a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a980) {
            ctx->pc = 0x19A99Cu;
            goto label_19a99c;
        }
    }
    ctx->pc = 0x19A988u;
label_19a988:
    // 0x19a988: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a98c:
    // 0x19a98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a990:
    // 0x19a990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a994:
    // 0x19a994: 0xc063e08  jal         func_18F820
label_19a998:
    if (ctx->pc == 0x19A998u) {
        ctx->pc = 0x19A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A994u;
        // 0x19a998: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A99Cu;
        goto label_19a99c;
    }
    ctx->pc = 0x19A994u;
    SET_GPR_U32(ctx, 31, 0x19A99Cu);
    ctx->pc = 0x19A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A994u;
    // 0x19a998: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A994u, 0x19A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A99Cu;
label_19a99c:
    // 0x19a99c: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19a9a0:
    // 0x19a9a0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19a9a4:
    if (ctx->pc == 0x19A9A4u) {
        ctx->pc = 0x19A9A8u;
        goto label_19a9a8;
    }
    ctx->pc = 0x19A9A0u;
    {
        const bool branch_taken_0x19a9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a9a0) {
            ctx->pc = 0x19A9C4u;
            goto label_19a9c4;
        }
    }
    ctx->pc = 0x19A9A8u;
label_19a9a8:
    // 0x19a9a8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19a9ac:
    if (ctx->pc == 0x19A9ACu) {
        ctx->pc = 0x19A9B0u;
        goto label_19a9b0;
    }
    ctx->pc = 0x19A9A8u;
    {
        const bool branch_taken_0x19a9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a9a8) {
            ctx->pc = 0x19A9C4u;
            goto label_19a9c4;
        }
    }
    ctx->pc = 0x19A9B0u;
label_19a9b0:
    // 0x19a9b0: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19a9b4:
    // 0x19a9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a9b8:
    // 0x19a9b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19a9bc:
    // 0x19a9bc: 0x320f809  jalr        $t9
label_19a9c0:
    if (ctx->pc == 0x19A9C0u) {
        ctx->pc = 0x19A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9BCu;
        // 0x19a9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9C4u;
        goto label_19a9c4;
    }
    ctx->pc = 0x19A9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19A9C4u);
        ctx->pc = 0x19A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9BCu;
        // 0x19a9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9BCu, 0x19A9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A9C4u;
label_19a9c4:
    // 0x19a9c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a9c8:
    // 0x19a9c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19a9cc:
    // 0x19a9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a9d0:
    // 0x19a9d0: 0x3e00008  jr          $ra
label_19a9d4:
    if (ctx->pc == 0x19A9D4u) {
        ctx->pc = 0x19A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9D0u;
        // 0x19a9d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9D8u;
        goto label_fallthrough_0x19a9d0;
    }
    ctx->pc = 0x19A9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9D0u;
        // 0x19a9d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a9d0:
    ctx->pc = 0x19A9D8u;
}
