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

// Function: FUN_0014bb60
// Address: 0x14bb60 - 0x14bde8
void FUN_0014bb60_0x14bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014bb60_0x14bb60");
#endif

    switch (ctx->pc) {
        case 0x14bbb4u: goto label_14bbb4;
        case 0x14bbbcu: goto label_14bbbc;
        case 0x14bc54u: goto label_14bc54;
        case 0x14bc74u: goto label_14bc74;
        case 0x14bc7cu: goto label_14bc7c;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bdb4u: goto label_14bdb4;
        default: break;
    }

    ctx->pc = 0x14bb60u;

    // 0x14bb60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14bb64: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x14bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x14bb68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14bb6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14bb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14bb70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14bb74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14bb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14bb78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14bb78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14bb80: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x14bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x14bb84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14bb88: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x14bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x14bb8c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bb90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14bb94: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BB94u;
    {
        const bool branch_taken_0x14bb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB94u;
        // 0x14bb98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb94) {
            ctx->pc = 0x14BBBCu;
            goto label_14bbbc;
        }
    }
    ctx->pc = 0x14BB9Cu;
    // 0x14bb9c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14bb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14bba0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14bba4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14bba8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14bbac: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14BBACu;
    SET_GPR_U32(ctx, 31, 0x14BBB4u);
    ctx->pc = 0x14BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBACu;
    // 0x14bbb0: 0x24a5f270  addiu       $a1, $a1, -0xD90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14BBACu, 0x14BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBB4u;
label_14bbb4:
    // 0x14bbb4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14BBB4u;
    SET_GPR_U32(ctx, 31, 0x14BBBCu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14BBB4u, 0x14BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBBCu;
label_14bbbc:
    // 0x14bbbc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bbc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bbc4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14bbc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14bbc8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14BBC8u;
    {
        const bool branch_taken_0x14bbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bbc8) {
            ctx->pc = 0x14BC18u;
            goto label_14bc18;
        }
    }
    ctx->pc = 0x14BBD0u;
    // 0x14bbd0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bbd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BBD4u;
    {
        const bool branch_taken_0x14bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bbd4) {
            ctx->pc = 0x14BBE8u;
            goto label_14bbe8;
        }
    }
    ctx->pc = 0x14BBDCu;
    // 0x14bbdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14bbe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14BBE0u;
    {
        const bool branch_taken_0x14bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBE0u;
        // 0x14bbe4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbe0) {
            ctx->pc = 0x14BBF0u;
            goto label_14bbf0;
        }
    }
    ctx->pc = 0x14BBE8u;
label_14bbe8:
    // 0x14bbe8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x14bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14bbec: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_14bbf0:
    // 0x14bbf0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bbf4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bbf8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14bbfc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14bc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14bc04: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14bc08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bc0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bc10: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x14BC10u;
    {
        const bool branch_taken_0x14bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC10u;
        // 0x14bc14: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc10) {
            ctx->pc = 0x14BDCCu;
            goto label_14bdcc;
        }
    }
    ctx->pc = 0x14BC18u;
label_14bc18:
    // 0x14bc18: 0x8f8280a8  lw          $v0, -0x7F58($gp)
    ctx->pc = 0x14bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x14bc1c: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x14bc1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bc20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BC20u;
    {
        const bool branch_taken_0x14bc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC20u;
        // 0x14bc24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc20) {
            ctx->pc = 0x14BC30u;
            goto label_14bc30;
        }
    }
    ctx->pc = 0x14BC28u;
    // 0x14bc28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14BC28u;
    {
        const bool branch_taken_0x14bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC28u;
        // 0x14bc2c: 0x278280a8  addiu       $v0, $gp, -0x7F58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc28) {
            ctx->pc = 0x14BC34u;
            goto label_14bc34;
        }
    }
    ctx->pc = 0x14BC30u;
label_14bc30:
    // 0x14bc30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14bc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bc34:
    // 0x14bc34: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x14bc34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bc38: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x14bc38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14bc3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BC3Cu;
    {
        const bool branch_taken_0x14bc3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC3Cu;
        // 0x14bc40: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc3c) {
            ctx->pc = 0x14BC4Cu;
            goto label_14bc4c;
        }
    }
    ctx->pc = 0x14BC44u;
    // 0x14bc44: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x14bc44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x14bc48: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_14bc4c:
    // 0x14bc4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14BC4Cu;
    SET_GPR_U32(ctx, 31, 0x14BC54u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14BC4Cu, 0x14BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC54u;
label_14bc54:
    // 0x14bc54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14bc54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc58: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BC58u;
    {
        const bool branch_taken_0x14bc58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC58u;
        // 0x14bc5c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc58) {
            ctx->pc = 0x14BC7Cu;
            goto label_14bc7c;
        }
    }
    ctx->pc = 0x14BC60u;
    // 0x14bc60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14bc64: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14bc68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14bc6c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14BC6Cu;
    SET_GPR_U32(ctx, 31, 0x14BC74u);
    ctx->pc = 0x14BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC6Cu;
    // 0x14bc70: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14BC6Cu, 0x14BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC74u;
label_14bc74:
    // 0x14bc74: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14BC74u;
    SET_GPR_U32(ctx, 31, 0x14BC7Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14BC74u, 0x14BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC7Cu;
label_14bc7c:
    // 0x14bc7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14bc80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x14bc84: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14bc84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bc88: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x14BC88u;
    {
        const bool branch_taken_0x14bc88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bc88) {
            ctx->pc = 0x14BDA0u;
            goto label_14bda0;
        }
    }
    ctx->pc = 0x14BC90u;
    // 0x14bc90: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bc94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bc98: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14bc9c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x14bc9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14bca0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BCA0u;
    {
        const bool branch_taken_0x14bca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCA0u;
        // 0x14bca4: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bca0) {
            ctx->pc = 0x14BCC8u;
            goto label_14bcc8;
        }
    }
    ctx->pc = 0x14BCA8u;
    // 0x14bca8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x14bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14bcac: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x14bcacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bcb0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bcb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bcb8: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x14bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x14bcbc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x14bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x14bcc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14BCC0u;
    {
        const bool branch_taken_0x14bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC0u;
        // 0x14bcc4: 0xafb00060  sw          $s0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcc0) {
            ctx->pc = 0x14BCE8u;
            goto label_14bce8;
        }
    }
    ctx->pc = 0x14BCC8u;
label_14bcc8:
    // 0x14bcc8: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x14bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bccc: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x14bcccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bcd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bcd4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14bcd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bcdc: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x14bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x14bce0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x14bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x14bce4: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x14bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
label_14bce8:
    // 0x14bce8: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x14bce8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bcec: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x14bcecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14bcf0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x14bcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bcf4: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14bcf8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14bcfc: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x14bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x14bd00: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x14bd04: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x14bd04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x14bd08: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x14bd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x14bd0c: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x14bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    // 0x14bd10: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x14bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x14bd14: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x14bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x14bd18: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x14bd18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14bd1c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x14bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd20: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x14bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x14bd24: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x14bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x14bd28: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x14bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bd2c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x14bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bd30: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x14bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd34: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x14bd34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x14bd38: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x14bd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x14bd3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14BD3Cu;
    {
        const bool branch_taken_0x14bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD3Cu;
        // 0x14bd40: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd3c) {
            ctx->pc = 0x14BD8Cu;
            goto label_14bd8c;
        }
    }
    ctx->pc = 0x14BD44u;
label_14bd44:
    // 0x14bd44: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bd48: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14bd4c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x14bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x14bd50: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x14bd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bd54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14bd58: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x14bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x14bd5c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14bd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14bd60: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x14bd60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14bd64: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x14bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x14bd68: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14bd6c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14bd70: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x14bd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14bd74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14bd74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14bd78: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14bd7c: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14BD7Cu;
    {
        const bool branch_taken_0x14bd7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x14bd7c) {
            ctx->pc = 0x14BD88u;
            goto label_14bd88;
        }
    }
    ctx->pc = 0x14BD84u;
    // 0x14bd84: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x14bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_14bd88:
    // 0x14bd88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x14bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_14bd8c:
    // 0x14bd8c: 0x0  nop
    ctx->pc = 0x14bd8cu;
    // NOP
    // 0x14bd90: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bd94: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x14bd98: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x14BD98u;
    {
        const bool branch_taken_0x14bd98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x14bd98) {
            ctx->pc = 0x14BD44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bd44;
        }
    }
    ctx->pc = 0x14BDA0u;
label_14bda0:
    // 0x14bda0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bda4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BDA4u;
    {
        const bool branch_taken_0x14bda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bda4) {
            ctx->pc = 0x14BDB4u;
            goto label_14bdb4;
        }
    }
    ctx->pc = 0x14BDACu;
    // 0x14bdac: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14BDACu;
    SET_GPR_U32(ctx, 31, 0x14BDB4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14BDACu, 0x14BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDB4u;
label_14bdb4:
    // 0x14bdb4: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x14bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x14bdb8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bdbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bdc0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x14bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14bdc4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x14bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x14bdc8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_14bdcc:
    // 0x14bdcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14bdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bdd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14bdd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bdd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14bdd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bdd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14bdd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bde0: 0x3e00008  jr          $ra
    ctx->pc = 0x14BDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE0u;
        // 0x14bde4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BDE8u;
}
