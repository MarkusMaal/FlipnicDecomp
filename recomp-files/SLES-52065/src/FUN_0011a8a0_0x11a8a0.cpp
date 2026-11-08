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

// Function: FUN_0011a8a0
// Address: 0x11a8a0 - 0x11a9b0
void FUN_0011a8a0_0x11a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a8a0_0x11a8a0");
#endif

    switch (ctx->pc) {
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a904u: goto label_11a904;
        case 0x11a910u: goto label_11a910;
        case 0x11a918u: goto label_11a918;
        case 0x11a924u: goto label_11a924;
        case 0x11a938u: goto label_11a938;
        case 0x11a958u: goto label_11a958;
        case 0x11a960u: goto label_11a960;
        case 0x11a978u: goto label_11a978;
        case 0x11a980u: goto label_11a980;
        case 0x11a998u: goto label_11a998;
        default: break;
    }

    ctx->pc = 0x11a8a0u;

    // 0x11a8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8b4: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x11A8B4u;
    {
        const bool branch_taken_0x11a8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8B4u;
        // 0x11a8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8b4) {
            ctx->pc = 0x11A998u;
            goto label_11a998;
        }
    }
    ctx->pc = 0x11A8BCu;
    // 0x11a8bc: 0x8f8383c0  lw          $v1, -0x7C40($gp)
    ctx->pc = 0x11a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
    // 0x11a8c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a8c4:
    // 0x11a8c4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x11A8C4u;
    {
        const bool branch_taken_0x11a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8C4u;
        // 0x11a8c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8c4) {
            ctx->pc = 0x11A984u;
            goto label_11a984;
        }
    }
    ctx->pc = 0x11A8CCu;
    // 0x11a8cc: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A8CCu;
    {
        const bool branch_taken_0x11a8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x11a8cc) {
            ctx->pc = 0x11A8E0u;
            goto label_11a8e0;
        }
    }
    ctx->pc = 0x11A8D4u;
    // 0x11a8d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8d8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A8D8u;
    {
        const bool branch_taken_0x11a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D8u;
        // 0x11a8dc: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8d8) {
            ctx->pc = 0x11A8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a8c4;
        }
    }
    ctx->pc = 0x11A8E0u;
label_11a8e0:
    // 0x11a8e0: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11A8E0u;
    {
        const bool branch_taken_0x11a8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a8e0) {
            ctx->pc = 0x11A944u;
            goto label_11a944;
        }
    }
    ctx->pc = 0x11A8E8u;
    // 0x11a8e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a8ec: 0xaf8283c0  sw          $v0, -0x7C40($gp)
    ctx->pc = 0x11a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935488), GPR_U32(ctx, 2));
    // 0x11a8f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a8f4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11A8F4u;
    {
        const bool branch_taken_0x11a8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F4u;
        // 0x11a8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8f4) {
            ctx->pc = 0x11A950u;
            goto label_11a950;
        }
    }
    ctx->pc = 0x11A8FCu;
    // 0x11a8fc: 0xc07b040  jal         func_1EC100
    ctx->pc = 0x11A8FCu;
    SET_GPR_U32(ctx, 31, 0x11A904u);
    ctx->pc = 0x11A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8FCu;
    // 0x11a900: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC100u, 0x11A8FCu, 0x11A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A904u;
label_11a904:
    // 0x11a904: 0x8f8583c8  lw          $a1, -0x7C38($gp)
    ctx->pc = 0x11a904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935496)));
    // 0x11a908: 0xc07acc8  jal         func_1EB320
    ctx->pc = 0x11A908u;
    SET_GPR_U32(ctx, 31, 0x11A910u);
    ctx->pc = 0x11A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A908u;
    // 0x11a90c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB320u, 0x11A908u, 0x11A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A910u;
label_11a910:
    // 0x11a910: 0xc07ad0c  jal         func_1EB430
    ctx->pc = 0x11A910u;
    SET_GPR_U32(ctx, 31, 0x11A918u);
    ctx->pc = 0x11A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A910u;
    // 0x11a914: 0x8f8483cc  lw          $a0, -0x7C34($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB430u, 0x11A910u, 0x11A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A918u;
label_11a918:
    // 0x11a918: 0x8f8583d8  lw          $a1, -0x7C28($gp)
    ctx->pc = 0x11a918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935512)));
    // 0x11a91c: 0xc07ad2c  jal         func_1EB4B0
    ctx->pc = 0x11A91Cu;
    SET_GPR_U32(ctx, 31, 0x11A924u);
    ctx->pc = 0x11A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A91Cu;
    // 0x11a920: 0x8f8483d4  lw          $a0, -0x7C2C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4B0u, 0x11A91Cu, 0x11A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A924u;
label_11a924:
    // 0x11a924: 0x8f8283bc  lw          $v0, -0x7C44($gp)
    ctx->pc = 0x11a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935484)));
    // 0x11a928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A928u;
    {
        const bool branch_taken_0x11a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a928) {
            ctx->pc = 0x11A93Cu;
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11A930u;
    // 0x11a930: 0xc074e1c  jal         func_1D3870
    ctx->pc = 0x11A930u;
    SET_GPR_U32(ctx, 31, 0x11A938u);
    ctx->pc = 0x1D3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3870u, 0x11A930u, 0x11A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A938u;
label_11a938:
    // 0x11a938: 0xaf8083bc  sw          $zero, -0x7C44($gp)
    ctx->pc = 0x11a938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935484), GPR_U32(ctx, 0));
label_11a93c:
    // 0x11a93c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A93Cu;
    {
        const bool branch_taken_0x11a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A93Cu;
        // 0x11a940: 0xaf8083b4  sw          $zero, -0x7C4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a93c) {
            ctx->pc = 0x11A94Cu;
            goto label_11a94c;
        }
    }
    ctx->pc = 0x11A944u;
label_11a944:
    // 0x11a944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a948: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11a948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_11a94c:
    // 0x11a94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a950:
    // 0x11a950: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x11A950u;
    SET_GPR_U32(ctx, 31, 0x11A958u);
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x11A950u, 0x11A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A958u;
label_11a958:
    // 0x11a958: 0xc046c6c  jal         func_11B1B0
    ctx->pc = 0x11A958u;
    SET_GPR_U32(ctx, 31, 0x11A960u);
    ctx->pc = 0x11A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A958u;
    // 0x11a95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B1B0u, 0x11A958u, 0x11A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A960u;
label_11a960:
    // 0x11a960: 0x8e230538  lw          $v1, 0x538($s1)
    ctx->pc = 0x11a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1336)));
    // 0x11a964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a968: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A968u;
    {
        const bool branch_taken_0x11a968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a968) {
            ctx->pc = 0x11A980u;
            goto label_11a980;
        }
    }
    ctx->pc = 0x11A970u;
    // 0x11a970: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11A970u;
    SET_GPR_U32(ctx, 31, 0x11A978u);
    ctx->pc = 0x11A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A970u;
    // 0x11a974: 0x8e240530  lw          $a0, 0x530($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11A970u, 0x11A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A978u;
label_11a978:
    // 0x11a978: 0xc046efc  jal         func_11BBF0
    ctx->pc = 0x11A978u;
    SET_GPR_U32(ctx, 31, 0x11A980u);
    ctx->pc = 0x11A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A978u;
    // 0x11a97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBF0u, 0x11A978u, 0x11A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A980u;
label_11a980:
    // 0x11a980: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x11a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_11a984:
    // 0x11a984: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11a984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11a988: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A988u;
    {
        const bool branch_taken_0x11a988 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A988u;
        // 0x11a98c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a988) {
            ctx->pc = 0x11A99Cu;
            goto label_11a99c;
        }
    }
    ctx->pc = 0x11A990u;
    // 0x11a990: 0xc0401a4  jal         func_100690
    ctx->pc = 0x11A990u;
    SET_GPR_U32(ctx, 31, 0x11A998u);
    ctx->pc = 0x11A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A990u;
    // 0x11a994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x11A990u, 0x11A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A998u;
label_11a998:
    // 0x11a998: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a99c:
    // 0x11a99c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9A8u;
        // 0x11a9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A9B0u;
}
