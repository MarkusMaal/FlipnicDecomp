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

// Function: FUN_0020a898
// Address: 0x20a898 - 0x20ab30
void FUN_0020a898_0x20a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a898_0x20a898");
#endif

    switch (ctx->pc) {
        case 0x20a8f4u: goto label_20a8f4;
        case 0x20a91cu: goto label_20a91c;
        case 0x20a938u: goto label_20a938;
        case 0x20a954u: goto label_20a954;
        case 0x20a970u: goto label_20a970;
        case 0x20a9b8u: goto label_20a9b8;
        case 0x20a9e8u: goto label_20a9e8;
        case 0x20aa8cu: goto label_20aa8c;
        default: break;
    }

    ctx->pc = 0x20a898u;

    // 0x20a898: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20a89c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x20a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20a8a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x20a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x20a8a4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x20a8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x20a8a8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x20a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x20a8ac: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x20a8acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x20a8b0: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x20a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x20a8b4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x20a8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x20a8b8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x20a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x20a8bc: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x20a8bcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x20a8c0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x20a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x20a8c4: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x20a8c4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20a8c8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20a8cc: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x20a8ccu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x20a8d0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x20a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x20a8d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20a8d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8d8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x20a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x20a8dc: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
    // 0x20a8e0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x20a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x20a8e4: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x20a8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a8e8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x20a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x20a8ec: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x20A8ECu;
    SET_GPR_U32(ctx, 31, 0x20A8F4u);
    ctx->pc = 0x20A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A8ECu;
    // 0x20a8f0: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x20A8ECu, 0x20A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8F4u;
label_20a8f4:
    // 0x20a8f4: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x20a8f4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20a8f8: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
    // 0x20a8fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x20a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20a900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a904: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20a904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a908: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a90c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20a90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a914: 0xc0827f0  jal         func_209FC0
    ctx->pc = 0x20A914u;
    SET_GPR_U32(ctx, 31, 0x20A91Cu);
    ctx->pc = 0x20A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A914u;
    // 0x20a918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FC0u, 0x20A914u, 0x20A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A91Cu;
label_20a91c:
    // 0x20a91c: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x20a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x20a920: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20a920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a924: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a928: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20a928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a92c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a92cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a930: 0xc0827f0  jal         func_209FC0
    ctx->pc = 0x20A930u;
    SET_GPR_U32(ctx, 31, 0x20A938u);
    ctx->pc = 0x20A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A930u;
    // 0x20a934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FC0u, 0x20A930u, 0x20A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A938u;
label_20a938:
    // 0x20a938: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x20a938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x20a93c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a940: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a944: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20a944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a948: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20a948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a94c: 0xc082930  jal         func_20A4C0
    ctx->pc = 0x20A94Cu;
    SET_GPR_U32(ctx, 31, 0x20A954u);
    ctx->pc = 0x20A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A94Cu;
    // 0x20a950: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A4C0u, 0x20A94Cu, 0x20A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A954u;
label_20a954:
    // 0x20a954: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x20a954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a958: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x20a95c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20a95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a960: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a964: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20a964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a968: 0xc082930  jal         func_20A4C0
    ctx->pc = 0x20A968u;
    SET_GPR_U32(ctx, 31, 0x20A970u);
    ctx->pc = 0x20A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A968u;
    // 0x20a96c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A4C0u, 0x20A968u, 0x20A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A970u;
label_20a970:
    // 0x20a970: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x20A970u;
    {
        const bool branch_taken_0x20a970 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A970u;
        // 0x20a974: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a970) {
            ctx->pc = 0x20A9E8u;
            goto label_20a9e8;
        }
    }
    ctx->pc = 0x20A978u;
    // 0x20a978: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x20a97c: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x20a97cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
    // 0x20a980: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20a980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20a984: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x20a988: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20a988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20a98c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x20a98cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20a990: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x20a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x20a994: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x20a994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x20a998: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20a998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a99c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20a99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20a9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20a9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9a8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x20a9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a9acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9b0: 0xc0829aa  jal         func_20A6A8
    ctx->pc = 0x20A9B0u;
    SET_GPR_U32(ctx, 31, 0x20A9B8u);
    ctx->pc = 0x20A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A9B0u;
    // 0x20a9b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A6A8u, 0x20A9B0u, 0x20A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9B8u;
label_20a9b8:
    // 0x20a9b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20a9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20a9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20a9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20a9c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20a9cc: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x20a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x20a9d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x20a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x20a9d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20a9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9d8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x20a9d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9e0: 0xc0829aa  jal         func_20A6A8
    ctx->pc = 0x20A9E0u;
    SET_GPR_U32(ctx, 31, 0x20A9E8u);
    ctx->pc = 0x20A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A9E0u;
    // 0x20a9e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A6A8u, 0x20A9E0u, 0x20A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9E8u;
label_20a9e8:
    // 0x20a9e8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x20a9e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a9ec: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20a9f0: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x20a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x20a9f4: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x20a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x20a9f8: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x20a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
    // 0x20a9fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20aa00: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x20aa00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x20aa04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20aa08: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x20aa08u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x20aa0c: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x20aa0cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x20aa10: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20aa10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20aa14: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x20aa14u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x20aa18: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x20aa18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x20aa1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aa1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aa20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x20aa20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x20aa24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20aa28: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x20aa28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x20aa2c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x20aa2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x20aa30: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x20aa30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x20aa34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aa34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aa38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20aa3c: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x20aa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x20aa40: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20aa44: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20aa48: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x20aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x20aa4c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x20aa4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x20aa50: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x20aa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20aa54: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x20aa54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x20aa58: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x20aa58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x20aa5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x20aa5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x20aa60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aa60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aa64: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x20aa68: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x20aa68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x20aa6c: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x20aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x20aa70: 0xfe460140  sd          $a2, 0x140($s2)
    ctx->pc = 0x20aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 6));
    // 0x20aa74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20aa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa78: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x20aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
    // 0x20aa7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa80: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20aa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa84: 0xc0828fe  jal         func_20A3F8
    ctx->pc = 0x20AA84u;
    SET_GPR_U32(ctx, 31, 0x20AA8Cu);
    ctx->pc = 0x20AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA84u;
    // 0x20aa88: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3F8u, 0x20AA84u, 0x20AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA8Cu;
label_20aa8c:
    // 0x20aa8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aa90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20aa90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20aa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20aa9c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x20aa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x20aaa0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x20aaa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aaa4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20aaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20aaa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20aaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20aaac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20aab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20aab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20aab4: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AAB4u;
    {
        const bool branch_taken_0x20aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAB4u;
        // 0x20aab8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aab4) {
            ctx->pc = 0x20AAC8u;
            goto label_20aac8;
        }
    }
    ctx->pc = 0x20AABCu;
    // 0x20aabc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aac0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20AAC0u;
    {
        const bool branch_taken_0x20aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC0u;
        // 0x20aac4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aac0) {
            ctx->pc = 0x20AB04u;
            goto label_20ab04;
        }
    }
    ctx->pc = 0x20AAC8u;
label_20aac8:
    // 0x20aac8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x20aac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x20aacc: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x20aaccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x20aad0: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x20aad0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x20aad4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20aad8: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x20aadc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20aadcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20aae0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x20aae4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x20aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x20aae8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20aae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20aaec: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x20aaecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x20aaf0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20aaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20aaf4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20aaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20aaf8: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x20aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x20aafc: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x20aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
    // 0x20ab00: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x20ab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_20ab04:
    // 0x20ab04: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x20ab04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20ab08: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x20ab08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20ab0c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x20ab0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20ab10: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x20ab10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20ab14: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x20ab14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20ab18: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x20ab18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ab1c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x20ab1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ab20: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x20ab20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ab24: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x20ab24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ab28: 0x3e00008  jr          $ra
    ctx->pc = 0x20AB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB28u;
        // 0x20ab2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AB30u;
}
