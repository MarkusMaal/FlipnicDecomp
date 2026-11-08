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

// Function: FUN_001e80d0
// Address: 0x1e80d0 - 0x1e8698
void FUN_001e80d0_0x1e80d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e80d0_0x1e80d0");
#endif

    switch (ctx->pc) {
        case 0x1e8174u: goto label_1e8174;
        case 0x1e817cu: goto label_1e817c;
        case 0x1e81a8u: goto label_1e81a8;
        case 0x1e81ccu: goto label_1e81cc;
        case 0x1e81dcu: goto label_1e81dc;
        case 0x1e81e4u: goto label_1e81e4;
        case 0x1e8200u: goto label_1e8200;
        case 0x1e8224u: goto label_1e8224;
        case 0x1e8274u: goto label_1e8274;
        case 0x1e82d4u: goto label_1e82d4;
        case 0x1e833cu: goto label_1e833c;
        case 0x1e83c4u: goto label_1e83c4;
        case 0x1e8400u: goto label_1e8400;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84d4u: goto label_1e84d4;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8584u: goto label_1e8584;
        case 0x1e8630u: goto label_1e8630;
        case 0x1e8668u: goto label_1e8668;
        default: break;
    }

    ctx->pc = 0x1e80d0u;

    // 0x1e80d0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e80d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1e80d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e80d8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1e80d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1e80dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e80dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e80e0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e80e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e80e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e80ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e80ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e80f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e80f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e80f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e80fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e80fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e8104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8108: 0x12200157  beqz        $s1, . + 4 + (0x157 << 2)
    ctx->pc = 0x1E8108u;
    {
        const bool branch_taken_0x1e8108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8108u;
        // 0x1e810c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8108) {
            ctx->pc = 0x1E8668u;
            goto label_1e8668;
        }
    }
    ctx->pc = 0x1E8110u;
    // 0x1e8110: 0x3c031fff  lui         $v1, 0x1FFF
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8191 << 16));
    // 0x1e8114: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e8118: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e8118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e811c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E811Cu;
    {
        const bool branch_taken_0x1e811c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e811c) {
            ctx->pc = 0x1E8138u;
            goto label_1e8138;
        }
    }
    ctx->pc = 0x1E8124u;
    // 0x1e8124: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e8124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8128: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e812c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1e812cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e8130: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E8130u;
    {
        const bool branch_taken_0x1e8130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8130) {
            ctx->pc = 0x1E8224u;
            goto label_1e8224;
        }
    }
    ctx->pc = 0x1E8138u;
label_1e8138:
    // 0x1e8138: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e813c: 0x27d40168  addiu       $s4, $fp, 0x168
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 360));
    // 0x1e8140: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e8144: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e8144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e8148: 0xafc20168  sw          $v0, 0x168($fp)
    ctx->pc = 0x1e8148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 360), GPR_U32(ctx, 2));
    // 0x1e814c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e814cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e8150: 0xafd40188  sw          $s4, 0x188($fp)
    ctx->pc = 0x1e8150u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 20));
    // 0x1e8154: 0x2463c320  addiu       $v1, $v1, -0x3CE0
    ctx->pc = 0x1e8154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951712));
    // 0x1e8158: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e815c: 0x24843ed0  addiu       $a0, $a0, 0x3ED0
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16080));
    // 0x1e8160: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e8160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e8164: 0x8fc20188  lw          $v0, 0x188($fp)
    ctx->pc = 0x1e8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1e8168: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e816c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E816Cu;
    SET_GPR_U32(ctx, 31, 0x1E8174u);
    ctx->pc = 0x1E8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E816Cu;
    // 0x1e8170: 0xafc2018c  sw          $v0, 0x18C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E816Cu, 0x1E8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8174u;
label_1e8174:
    // 0x1e8174: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E8174u;
    SET_GPR_U32(ctx, 31, 0x1E817Cu);
    ctx->pc = 0x1E8178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8174u;
    // 0x1e8178: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E8174u, 0x1E817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E817Cu;
label_1e817c:
    // 0x1e817c: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e8180: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8184: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e8188: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e8188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e818c: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e8190: 0xafdd0164  sw          $sp, 0x164($fp)
    ctx->pc = 0x1e8190u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 356), GPR_U32(ctx, 29));
    // 0x1e8194: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e8194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8198: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8198u;
    {
        const bool branch_taken_0x1e8198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8198u;
        // 0x1e819c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8198) {
            ctx->pc = 0x1E81ECu;
            goto label_1e81ec;
        }
    }
    ctx->pc = 0x1E81A0u;
    // 0x1e81a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E81A0u;
    SET_GPR_U32(ctx, 31, 0x1E81A8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E81A0u, 0x1E81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81A8u;
label_1e81a8:
    // 0x1e81a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E81A8u;
    {
        const bool branch_taken_0x1e81a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81A8u;
        // 0x1e81ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81a8) {
            ctx->pc = 0x1E81B4u;
            goto label_1e81b4;
        }
    }
    ctx->pc = 0x1E81B0u;
    // 0x1e81b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e81b4:
    // 0x1e81b4: 0x8fc3018c  lw          $v1, 0x18C($fp)
    ctx->pc = 0x1e81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e81b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E81B8u;
    {
        const bool branch_taken_0x1e81b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E81B8u;
        // 0x1e81bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e81b8) {
            ctx->pc = 0x1E81ECu;
            goto label_1e81ec;
        }
    }
    ctx->pc = 0x1E81C0u;
    // 0x1e81c0: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e81c4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E81C4u;
    SET_GPR_U32(ctx, 31, 0x1E81CCu);
    ctx->pc = 0x1E81C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81C4u;
    // 0x1e81c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E81C4u, 0x1E81CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81CCu;
label_1e81cc:
    // 0x1e81cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e81d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E81D4u;
    SET_GPR_U32(ctx, 31, 0x1E81DCu);
    ctx->pc = 0x1E81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81D4u;
    // 0x1e81d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E81D4u, 0x1E81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81DCu;
label_1e81dc:
    // 0x1e81dc: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E81DCu;
    SET_GPR_U32(ctx, 31, 0x1E81E4u);
    ctx->pc = 0x1E81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81DCu;
    // 0x1e81e0: 0x27c40150  addiu       $a0, $fp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E81DCu, 0x1E81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81E4u;
label_1e81e4:
    // 0x1e81e4: 0x8fdd0164  lw          $sp, 0x164($fp)
    ctx->pc = 0x1e81e4u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
    // 0x1e81e8: 0x0  nop
    ctx->pc = 0x1e81e8u;
    // NOP
label_1e81ec:
    // 0x1e81ec: 0x8fc2018c  lw          $v0, 0x18C($fp)
    ctx->pc = 0x1e81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 396)));
    // 0x1e81f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e81f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e81f8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E81F8u;
    SET_GPR_U32(ctx, 31, 0x1E8200u);
    ctx->pc = 0x1E81FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81F8u;
    // 0x1e81fc: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E81F8u, 0x1E8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8200u;
label_1e8200:
    // 0x1e8200: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8204: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e8204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e8208: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x1e8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x1e820c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e820cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e8210: 0x24843ef0  addiu       $a0, $a0, 0x3EF0
    ctx->pc = 0x1e8210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
    // 0x1e8214: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e8214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1e8218: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e821c: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E821Cu;
    SET_GPR_U32(ctx, 31, 0x1E8224u);
    ctx->pc = 0x1E8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E821Cu;
    // 0x1e8220: 0x24c67980  addiu       $a2, $a2, 0x7980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E821Cu, 0x1E8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8224u;
label_1e8224:
    // 0x1e8224: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e8224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8228: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e8228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e822c: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1e822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e8230: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1e8230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e8234: 0x1420007f  bnez        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x1E8234u;
    {
        const bool branch_taken_0x1e8234 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8234) {
            ctx->pc = 0x1E8434u;
            goto label_1e8434;
        }
    }
    ctx->pc = 0x1E823Cu;
    // 0x1e823c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e8240: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1e8240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e8244: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1e8244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e8248: 0xb22023  subu        $a0, $a1, $s2
    ctx->pc = 0x1e8248u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1e824c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E824Cu;
    {
        const bool branch_taken_0x1e824c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E824Cu;
        // 0x1e8250: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e824c) {
            ctx->pc = 0x1E825Cu;
            goto label_1e825c;
        }
    }
    ctx->pc = 0x1E8254u;
    // 0x1e8254: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1e8254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1e8258: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1e8258u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1e825c:
    // 0x1e825c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e825cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e8260: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E8260u;
    {
        const bool branch_taken_0x1e8260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8260u;
        // 0x1e8264: 0x1158c0  sll         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8260) {
            ctx->pc = 0x1E832Cu;
            goto label_1e832c;
        }
    }
    ctx->pc = 0x1E8268u;
    // 0x1e8268: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e8268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e826c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E826Cu;
    {
        const bool branch_taken_0x1e826c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E826Cu;
        // 0x1e8270: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e826c) {
            ctx->pc = 0x1E82C4u;
            goto label_1e82c4;
        }
    }
    ctx->pc = 0x1E8274u;
label_1e8274:
    // 0x1e8274: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8274u;
    {
        const bool branch_taken_0x1e8274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8274) {
            ctx->pc = 0x1E82A4u;
            goto label_1e82a4;
        }
    }
    ctx->pc = 0x1E827Cu;
    // 0x1e827c: 0x0  nop
    ctx->pc = 0x1e827cu;
    // NOP
    // 0x1e8280: 0xafdd00a4  sw          $sp, 0xA4($fp)
    ctx->pc = 0x1e8280u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    // 0x1e8284: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x1e8284u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8288: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e828c: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x1e828cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8290: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x1e8290u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1e8294: 0xa4890000  sh          $t1, 0x0($a0)
    ctx->pc = 0x1e8294u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e8298: 0xa4880002  sh          $t0, 0x2($a0)
    ctx->pc = 0x1e8298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e829c: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x1e829cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e82a0: 0xa4860006  sh          $a2, 0x6($a0)
    ctx->pc = 0x1e82a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
label_1e82a4:
    // 0x1e82a4: 0x0  nop
    ctx->pc = 0x1e82a4u;
    // NOP
    // 0x1e82a8: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e82a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e82ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e82acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e82b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e82b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e82b4: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e82b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e82b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e82b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e82bc: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E82BCu;
    {
        const bool branch_taken_0x1e82bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82BCu;
        // 0x1e82c0: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82bc) {
            ctx->pc = 0x1E8274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8274;
        }
    }
    ctx->pc = 0x1E82C4u;
label_1e82c4:
    // 0x1e82c4: 0x0  nop
    ctx->pc = 0x1e82c4u;
    // NOP
    // 0x1e82c8: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x1e82c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e82cc: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E82CCu;
    {
        const bool branch_taken_0x1e82cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82CCu;
        // 0x1e82d0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82cc) {
            ctx->pc = 0x1E83F4u;
            goto label_1e83f4;
        }
    }
    ctx->pc = 0x1E82D4u;
label_1e82d4:
    // 0x1e82d4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E82D4u;
    {
        const bool branch_taken_0x1e82d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e82d4) {
            ctx->pc = 0x1E8304u;
            goto label_1e8304;
        }
    }
    ctx->pc = 0x1E82DCu;
    // 0x1e82dc: 0x0  nop
    ctx->pc = 0x1e82dcu;
    // NOP
    // 0x1e82e0: 0xafdd00c4  sw          $sp, 0xC4($fp)
    ctx->pc = 0x1e82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 29));
    // 0x1e82e4: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x1e82e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e82e8: 0x85270002  lh          $a3, 0x2($t1)
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1e82ec: 0x85260004  lh          $a2, 0x4($t1)
    ctx->pc = 0x1e82ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1e82f0: 0x85230006  lh          $v1, 0x6($t1)
    ctx->pc = 0x1e82f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1e82f4: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x1e82f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e82f8: 0xa4870002  sh          $a3, 0x2($a0)
    ctx->pc = 0x1e82f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e82fc: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x1e82fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e8300: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1e8300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_1e8304:
    // 0x1e8304: 0x0  nop
    ctx->pc = 0x1e8304u;
    // NOP
    // 0x1e8308: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e8308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e830c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1e830cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1e8310: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e8310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e8314: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x1e8314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e8318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e831c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E831Cu;
    {
        const bool branch_taken_0x1e831c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E831Cu;
        // 0x1e8320: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e831c) {
            ctx->pc = 0x1E82D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e82d4;
        }
    }
    ctx->pc = 0x1E8324u;
    // 0x1e8324: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E8324u;
    {
        const bool branch_taken_0x1e8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8324) {
            ctx->pc = 0x1E83F4u;
            goto label_1e83f4;
        }
    }
    ctx->pc = 0x1E832Cu;
label_1e832c:
    // 0x1e832c: 0xab4823  subu        $t1, $a1, $t3
    ctx->pc = 0x1e832cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1e8330: 0x125082b  sltu        $at, $t1, $a1
    ctx->pc = 0x1e8330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e8334: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E8334u;
    {
        const bool branch_taken_0x1e8334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8334u;
        // 0x1e8338: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8334) {
            ctx->pc = 0x1E838Cu;
            goto label_1e838c;
        }
    }
    ctx->pc = 0x1E833Cu;
label_1e833c:
    // 0x1e833c: 0x1140000b  beqz        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1E833Cu;
    {
        const bool branch_taken_0x1e833c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e833c) {
            ctx->pc = 0x1E836Cu;
            goto label_1e836c;
        }
    }
    ctx->pc = 0x1E8344u;
    // 0x1e8344: 0x0  nop
    ctx->pc = 0x1e8344u;
    // NOP
    // 0x1e8348: 0xafdd00e4  sw          $sp, 0xE4($fp)
    ctx->pc = 0x1e8348u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 29));
    // 0x1e834c: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x1e834cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e8350: 0x85270002  lh          $a3, 0x2($t1)
    ctx->pc = 0x1e8350u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1e8354: 0x85260004  lh          $a2, 0x4($t1)
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1e8358: 0x85240006  lh          $a0, 0x6($t1)
    ctx->pc = 0x1e8358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1e835c: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x1e835cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e8360: 0xa5470002  sh          $a3, 0x2($t2)
    ctx->pc = 0x1e8360u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8364: 0xa5460004  sh          $a2, 0x4($t2)
    ctx->pc = 0x1e8364u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e8368: 0xa5440006  sh          $a0, 0x6($t2)
    ctx->pc = 0x1e8368u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 4));
label_1e836c:
    // 0x1e836c: 0x0  nop
    ctx->pc = 0x1e836cu;
    // NOP
    // 0x1e8370: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e8370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8374: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1e8374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1e8378: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1e8378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1e837c: 0x125202b  sltu        $a0, $t1, $a1
    ctx->pc = 0x1e837cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e8380: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8384: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E8384u;
    {
        const bool branch_taken_0x1e8384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8384u;
        // 0x1e8388: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8384) {
            ctx->pc = 0x1E833Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e833c;
        }
    }
    ctx->pc = 0x1E838Cu;
label_1e838c:
    // 0x1e838c: 0x0  nop
    ctx->pc = 0x1e838cu;
    // NOP
    // 0x1e8390: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1e8390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e8394: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1e8394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e8398: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e839c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x1e839cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e83a0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E83A0u;
    {
        const bool branch_taken_0x1e83a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83A0u;
        // 0x1e83a4: 0x205082b  sltu        $at, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83a0) {
            ctx->pc = 0x1E83B4u;
            goto label_1e83b4;
        }
    }
    ctx->pc = 0x1E83A8u;
    // 0x1e83a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E83A8u;
    {
        const bool branch_taken_0x1e83a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83a8) {
            ctx->pc = 0x1E83B4u;
            goto label_1e83b4;
        }
    }
    ctx->pc = 0x1E83B0u;
    // 0x1e83b0: 0x20b8021  addu        $s0, $s0, $t3
    ctx->pc = 0x1e83b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_1e83b4:
    // 0x1e83b4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e83b8: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1e83b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e83bc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E83BCu;
    {
        const bool branch_taken_0x1e83bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83bc) {
            ctx->pc = 0x1E83F4u;
            goto label_1e83f4;
        }
    }
    ctx->pc = 0x1E83C4u;
label_1e83c4:
    // 0x1e83c4: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1e83c8: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1e83cc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1e83ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e83d0: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1e83d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e83d4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1e83d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e83d8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1e83d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e83dc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e83dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e83e0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1e83e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e83e4: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x1e83e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e83e8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x1e83e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1e83ec: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E83ECu;
    {
        const bool branch_taken_0x1e83ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83ECu;
        // 0x1e83f0: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e83ec) {
            ctx->pc = 0x1E83C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e83c4;
        }
    }
    ctx->pc = 0x1E83F4u;
label_1e83f4:
    // 0x1e83f4: 0x0  nop
    ctx->pc = 0x1e83f4u;
    // NOP
    // 0x1e83f8: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x1E83F8u;
    {
        const bool branch_taken_0x1e83f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83f8) {
            ctx->pc = 0x1E8668u;
            goto label_1e8668;
        }
    }
    ctx->pc = 0x1E8400u;
label_1e8400:
    // 0x1e8400: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e8400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8404: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e8404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e8408: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1e8408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e840c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1e840cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e8410: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1e8410u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e8414: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1e8414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8418: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x1e8418u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e841c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1e841cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1e8420: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x1e8420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e8424: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E8424u;
    {
        const bool branch_taken_0x1e8424 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8424u;
        // 0x1e8428: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8424) {
            ctx->pc = 0x1E8400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E842Cu;
    // 0x1e842c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1E842Cu;
    {
        const bool branch_taken_0x1e842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E842Cu;
        // 0x1e8430: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e842c) {
            ctx->pc = 0x1E866Cu;
            goto label_1e866c;
        }
    }
    ctx->pc = 0x1E8434u;
label_1e8434:
    // 0x1e8434: 0xafc00178  sw          $zero, 0x178($fp)
    ctx->pc = 0x1e8434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 0));
    // 0x1e8438: 0x27d5017c  addiu       $s5, $fp, 0x17C
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 380));
    // 0x1e843c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e843cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e8440: 0x27d60180  addiu       $s6, $fp, 0x180
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 384));
    // 0x1e8444: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1e8444u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1e8448: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e844c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e8450: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8450u;
    {
        const bool branch_taken_0x1e8450 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8450u;
        // 0x1e8454: 0x511821  addu        $v1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8450) {
            ctx->pc = 0x1E8460u;
            goto label_1e8460;
        }
    }
    ctx->pc = 0x1E8458u;
    // 0x1e8458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8458u;
    {
        const bool branch_taken_0x1e8458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8458u;
        // 0x1e845c: 0x283082b  sltu        $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8458) {
            ctx->pc = 0x1E8468u;
            goto label_1e8468;
        }
    }
    ctx->pc = 0x1E8460u;
label_1e8460:
    // 0x1e8460: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e8460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8464: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8468:
    // 0x1e8468: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1E8468u;
    {
        const bool branch_taken_0x1e8468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8468u;
        // 0x1e846c: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8468) {
            ctx->pc = 0x1E84A4u;
            goto label_1e84a4;
        }
    }
    ctx->pc = 0x1E8470u;
    // 0x1e8470: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
label_1e8474:
    // 0x1e8474: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1e8474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1e8478: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x1e8478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e847c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E847Cu;
    {
        const bool branch_taken_0x1e847c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e847c) {
            ctx->pc = 0x1E848Cu;
            goto label_1e848c;
        }
    }
    ctx->pc = 0x1E8484u;
    // 0x1e8484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8484u;
    {
        const bool branch_taken_0x1e8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8484u;
        // 0x1e8488: 0x14a040  sll         $s4, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8484) {
            ctx->pc = 0x1E8494u;
            goto label_1e8494;
        }
    }
    ctx->pc = 0x1E848Cu;
label_1e848c:
    // 0x1e848c: 0x0  nop
    ctx->pc = 0x1e848cu;
    // NOP
    // 0x1e8490: 0x3454ffff  ori         $s4, $v0, 0xFFFF
    ctx->pc = 0x1e8490u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1e8494:
    // 0x1e8494: 0x0  nop
    ctx->pc = 0x1e8494u;
    // NOP
    // 0x1e8498: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e8498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e849c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E849Cu;
    {
        const bool branch_taken_0x1e849c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E849Cu;
        // 0x1e84a0: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e849c) {
            ctx->pc = 0x1E8474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8474;
        }
    }
    ctx->pc = 0x1E84A4u;
label_1e84a4:
    // 0x1e84a4: 0x0  nop
    ctx->pc = 0x1e84a4u;
    // NOP
    // 0x1e84a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E84A8u;
    SET_GPR_U32(ctx, 31, 0x1E84B0u);
    ctx->pc = 0x1E84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84A8u;
    // 0x1e84ac: 0x1420c0  sll         $a0, $s4, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E84A8u, 0x1E84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84B0u;
label_1e84b0:
    // 0x1e84b0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1e84b4: 0xafd40178  sw          $s4, 0x178($fp)
    ctx->pc = 0x1e84b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 20));
    // 0x1e84b8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e84bc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e84c0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e84c4: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x1e84c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e84c8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e84cc: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E84CCu;
    {
        const bool branch_taken_0x1e84cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84CCu;
        // 0x1e84d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84cc) {
            ctx->pc = 0x1E8524u;
            goto label_1e8524;
        }
    }
    ctx->pc = 0x1E84D4u;
label_1e84d4:
    // 0x1e84d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E84D4u;
    {
        const bool branch_taken_0x1e84d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84d4) {
            ctx->pc = 0x1E8504u;
            goto label_1e8504;
        }
    }
    ctx->pc = 0x1E84DCu;
    // 0x1e84dc: 0x0  nop
    ctx->pc = 0x1e84dcu;
    // NOP
    // 0x1e84e0: 0xafdd0104  sw          $sp, 0x104($fp)
    ctx->pc = 0x1e84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 29));
    // 0x1e84e4: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x1e84e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e84e8: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x1e84e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e84ec: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x1e84ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e84f0: 0x84a60006  lh          $a2, 0x6($a1)
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1e84f4: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1e84f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e84f8: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x1e84f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e84fc: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x1e84fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8500: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1e8500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
label_1e8504:
    // 0x1e8504: 0x0  nop
    ctx->pc = 0x1e8504u;
    // NOP
    // 0x1e8508: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e8508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e850c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e8510: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e8514: 0xb2302b  sltu        $a2, $a1, $s2
    ctx->pc = 0x1e8514u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e8518: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e851c: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E851Cu;
    {
        const bool branch_taken_0x1e851c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E851Cu;
        // 0x1e8520: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e851c) {
            ctx->pc = 0x1E84D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e84d4;
        }
    }
    ctx->pc = 0x1E8524u;
label_1e8524:
    // 0x1e8524: 0x0  nop
    ctx->pc = 0x1e8524u;
    // NOP
    // 0x1e8528: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8528u;
    {
        const bool branch_taken_0x1e8528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8528) {
            ctx->pc = 0x1E8578u;
            goto label_1e8578;
        }
    }
    ctx->pc = 0x1E8530u;
label_1e8530:
    // 0x1e8530: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8530u;
    {
        const bool branch_taken_0x1e8530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8530) {
            ctx->pc = 0x1E855Cu;
            goto label_1e855c;
        }
    }
    ctx->pc = 0x1E8538u;
    // 0x1e8538: 0xafdd0124  sw          $sp, 0x124($fp)
    ctx->pc = 0x1e8538u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 292), GPR_U32(ctx, 29));
    // 0x1e853c: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x1e853cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8540: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e8544: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x1e8544u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8548: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1e854c: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1e854cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e8550: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x1e8550u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e8554: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x1e8554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8558: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1e8558u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
label_1e855c:
    // 0x1e855c: 0x0  nop
    ctx->pc = 0x1e855cu;
    // NOP
    // 0x1e8560: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1e8560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8564: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e8564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e8568: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e8568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e856c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e856cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8570: 0x1620ffef  bnez        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E8570u;
    {
        const bool branch_taken_0x1e8570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8570u;
        // 0x1e8574: 0xaea60000  sw          $a2, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8570) {
            ctx->pc = 0x1E8530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8530;
        }
    }
    ctx->pc = 0x1E8578u;
label_1e8578:
    // 0x1e8578: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e8578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e857c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E857Cu;
    {
        const bool branch_taken_0x1e857c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e857c) {
            ctx->pc = 0x1E85D4u;
            goto label_1e85d4;
        }
    }
    ctx->pc = 0x1E8584u;
label_1e8584:
    // 0x1e8584: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8584u;
    {
        const bool branch_taken_0x1e8584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8584) {
            ctx->pc = 0x1E85B4u;
            goto label_1e85b4;
        }
    }
    ctx->pc = 0x1E858Cu;
    // 0x1e858c: 0x0  nop
    ctx->pc = 0x1e858cu;
    // NOP
    // 0x1e8590: 0xafdd0144  sw          $sp, 0x144($fp)
    ctx->pc = 0x1e8590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 29));
    // 0x1e8594: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8598: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e859c: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x1e859cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e85a0: 0x84a60006  lh          $a2, 0x6($a1)
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1e85a4: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1e85a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e85a8: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x1e85a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e85ac: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x1e85acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e85b0: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1e85b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
label_1e85b4:
    // 0x1e85b4: 0x0  nop
    ctx->pc = 0x1e85b4u;
    // NOP
    // 0x1e85b8: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1e85b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e85bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e85c0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e85c4: 0xa4302b  sltu        $a2, $a1, $a0
    ctx->pc = 0x1e85c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e85c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e85c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e85cc: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E85CCu;
    {
        const bool branch_taken_0x1e85cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85CCu;
        // 0x1e85d0: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85cc) {
            ctx->pc = 0x1E8584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8584;
        }
    }
    ctx->pc = 0x1E85D4u;
label_1e85d4:
    // 0x1e85d4: 0x0  nop
    ctx->pc = 0x1e85d4u;
    // NOP
    // 0x1e85d8: 0x27c30178  addiu       $v1, $fp, 0x178
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 376));
    // 0x1e85dc: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1E85DCu;
    {
        const bool branch_taken_0x1e85dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1e85dc) {
            ctx->pc = 0x1E8614u;
            goto label_1e8614;
        }
    }
    ctx->pc = 0x1E85E4u;
    // 0x1e85e4: 0x8fc40178  lw          $a0, 0x178($fp)
    ctx->pc = 0x1e85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 376)));
    // 0x1e85e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e85ec: 0xafc30178  sw          $v1, 0x178($fp)
    ctx->pc = 0x1e85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 3));
    // 0x1e85f0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1e85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1e85f4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e85f8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e85fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1e85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1e8600: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x1e8600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x1e8604: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1e8604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8608: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1e8608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e860c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1e860cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1e8610: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x1e8610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_1e8614:
    // 0x1e8614: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e8618: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e861c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e8620: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e8620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e8624: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1e8624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8628: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8628u;
    {
        const bool branch_taken_0x1e8628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8628) {
            ctx->pc = 0x1E8650u;
            goto label_1e8650;
        }
    }
    ctx->pc = 0x1E8630u;
label_1e8630:
    // 0x1e8630: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1e8634: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1e8634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8638: 0x0  nop
    ctx->pc = 0x1e8638u;
    // NOP
    // 0x1e863c: 0x0  nop
    ctx->pc = 0x1e863cu;
    // NOP
    // 0x1e8640: 0x0  nop
    ctx->pc = 0x1e8640u;
    // NOP
    // 0x1e8644: 0x0  nop
    ctx->pc = 0x1e8644u;
    // NOP
    // 0x1e8648: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8648u;
    {
        const bool branch_taken_0x1e8648 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8648) {
            ctx->pc = 0x1E8630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8630;
        }
    }
    ctx->pc = 0x1E8650u;
label_1e8650:
    // 0x1e8650: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e8650u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e8654: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e8654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8658: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8658u;
    {
        const bool branch_taken_0x1e8658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8658) {
            ctx->pc = 0x1E8668u;
            goto label_1e8668;
        }
    }
    ctx->pc = 0x1E8660u;
    // 0x1e8660: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E8660u;
    SET_GPR_U32(ctx, 31, 0x1E8668u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E8660u, 0x1E8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8668u;
label_1e8668:
    // 0x1e8668: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e866c:
    // 0x1e866c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e866cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8670: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1e8670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8674: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e8674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8678: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e8678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e867c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e867cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8680: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e868c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e868cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8690: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8690u;
        // 0x1e8694: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8698u;
}
