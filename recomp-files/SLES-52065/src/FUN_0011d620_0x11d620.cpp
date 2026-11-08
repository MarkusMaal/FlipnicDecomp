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

// Function: FUN_0011d620
// Address: 0x11d620 - 0x11dca8
void FUN_0011d620_0x11d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d620_0x11d620");
#endif

    switch (ctx->pc) {
        case 0x11d678u: goto label_11d678;
        case 0x11d690u: goto label_11d690;
        case 0x11d6b0u: goto label_11d6b0;
        case 0x11d6c8u: goto label_11d6c8;
        case 0x11d6e8u: goto label_11d6e8;
        case 0x11d6fcu: goto label_11d6fc;
        case 0x11d708u: goto label_11d708;
        case 0x11d718u: goto label_11d718;
        case 0x11d724u: goto label_11d724;
        case 0x11d748u: goto label_11d748;
        case 0x11d75cu: goto label_11d75c;
        case 0x11d77cu: goto label_11d77c;
        case 0x11d7b0u: goto label_11d7b0;
        case 0x11d7bcu: goto label_11d7bc;
        case 0x11d7c4u: goto label_11d7c4;
        case 0x11d7dcu: goto label_11d7dc;
        case 0x11d804u: goto label_11d804;
        case 0x11d820u: goto label_11d820;
        case 0x11d87cu: goto label_11d87c;
        case 0x11d8b0u: goto label_11d8b0;
        case 0x11d8bcu: goto label_11d8bc;
        case 0x11d8c8u: goto label_11d8c8;
        case 0x11d8d4u: goto label_11d8d4;
        case 0x11d8f4u: goto label_11d8f4;
        case 0x11d900u: goto label_11d900;
        case 0x11d914u: goto label_11d914;
        case 0x11d918u: goto label_11d918;
        case 0x11d924u: goto label_11d924;
        case 0x11d948u: goto label_11d948;
        case 0x11d980u: goto label_11d980;
        case 0x11d98cu: goto label_11d98c;
        case 0x11d9a4u: goto label_11d9a4;
        case 0x11d9ccu: goto label_11d9cc;
        case 0x11d9fcu: goto label_11d9fc;
        case 0x11da48u: goto label_11da48;
        case 0x11dac4u: goto label_11dac4;
        case 0x11dad0u: goto label_11dad0;
        case 0x11dad8u: goto label_11dad8;
        case 0x11dae4u: goto label_11dae4;
        case 0x11dafcu: goto label_11dafc;
        case 0x11db14u: goto label_11db14;
        case 0x11db3cu: goto label_11db3c;
        case 0x11db44u: goto label_11db44;
        case 0x11db4cu: goto label_11db4c;
        case 0x11db8cu: goto label_11db8c;
        case 0x11dbbcu: goto label_11dbbc;
        case 0x11dbc4u: goto label_11dbc4;
        case 0x11dbccu: goto label_11dbcc;
        case 0x11dc0cu: goto label_11dc0c;
        case 0x11dc5cu: goto label_11dc5c;
        case 0x11dc74u: goto label_11dc74;
        default: break;
    }

    ctx->pc = 0x11d620u;

    // 0x11d620: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x11d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
    // 0x11d624: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11d624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11d628: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11d628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x11d62c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x11d630: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x11d630u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d634: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11d638: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x11d638u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d63c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11d63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11d640: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x11d640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d644: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11d644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11d648: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11d64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11d650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11d654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11d654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11d65c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11d65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11d664: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11d664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d668: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x11d668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d66c: 0xafab00ac  sw          $t3, 0xAC($sp)
    ctx->pc = 0x11d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
    // 0x11d670: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11D670u;
    SET_GPR_U32(ctx, 31, 0x11D678u);
    ctx->pc = 0x11D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D670u;
    // 0x11d674: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11D670u, 0x11D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D678u;
label_11d678:
    // 0x11d678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D678u;
    {
        const bool branch_taken_0x11d678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D678u;
        // 0x11d67c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d678) {
            ctx->pc = 0x11D688u;
            goto label_11d688;
        }
    }
    ctx->pc = 0x11D680u;
    // 0x11d680: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x11D680u;
    {
        const bool branch_taken_0x11d680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D680u;
        // 0x11d684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d680) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11D688u;
label_11d688:
    // 0x11d688: 0xc04772c  jal         func_11DCB0
    ctx->pc = 0x11D688u;
    SET_GPR_U32(ctx, 31, 0x11D690u);
    ctx->pc = 0x11D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D688u;
    // 0x11d68c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DCB0u, 0x11D688u, 0x11D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D690u;
label_11d690:
    // 0x11d690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D690u;
    {
        const bool branch_taken_0x11d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D690u;
        // 0x11d694: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d690) {
            ctx->pc = 0x11D6A0u;
            goto label_11d6a0;
        }
    }
    ctx->pc = 0x11D698u;
    // 0x11d698: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x11D698u;
    {
        const bool branch_taken_0x11d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D698u;
        // 0x11d69c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d698) {
            ctx->pc = 0x11DC7Cu;
            goto label_11dc7c;
        }
    }
    ctx->pc = 0x11D6A0u;
label_11d6a0:
    // 0x11d6a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D6A8u;
    SET_GPR_U32(ctx, 31, 0x11D6B0u);
    ctx->pc = 0x11D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6A8u;
    // 0x11d6ac: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D6A8u, 0x11D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6B0u;
label_11d6b0:
    // 0x11d6b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11d6b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6c0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D6C0u;
    SET_GPR_U32(ctx, 31, 0x11D6C8u);
    ctx->pc = 0x11D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6C0u;
    // 0x11d6c4: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D6C0u, 0x11D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6C8u;
label_11d6c8:
    // 0x11d6c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d6cc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D6CCu;
    {
        const bool branch_taken_0x11d6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6CCu;
        // 0x11d6d0: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6cc) {
            ctx->pc = 0x11D6E0u;
            goto label_11d6e0;
        }
    }
    ctx->pc = 0x11D6D4u;
    // 0x11d6d4: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x11d6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d6d8: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x11D6D8u;
    {
        const bool branch_taken_0x11d6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d6d8) {
            ctx->pc = 0x11D884u;
            goto label_11d884;
        }
    }
    ctx->pc = 0x11D6E0u;
label_11d6e0:
    // 0x11d6e0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D6E0u;
    SET_GPR_U32(ctx, 31, 0x11D6E8u);
    ctx->pc = 0x11D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6E0u;
    // 0x11d6e4: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D6E0u, 0x11D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6E8u;
label_11d6e8:
    // 0x11d6e8: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D6E8u;
    {
        const bool branch_taken_0x11d6e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D6E8u;
        // 0x11d6ec: 0x27a40370  addiu       $a0, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e8) {
            ctx->pc = 0x11D710u;
            goto label_11d710;
        }
    }
    ctx->pc = 0x11D6F0u;
    // 0x11d6f0: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x11d6f4: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D6F4u;
    SET_GPR_U32(ctx, 31, 0x11D6FCu);
    ctx->pc = 0x11D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6F4u;
    // 0x11d6f8: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D6F4u, 0x11D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6FCu;
label_11d6fc:
    // 0x11d6fc: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x11d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x11d700: 0xc080664  jal         func_201990
    ctx->pc = 0x11D700u;
    SET_GPR_U32(ctx, 31, 0x11D708u);
    ctx->pc = 0x11D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D700u;
    // 0x11d704: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D700u, 0x11D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D708u;
label_11d708:
    // 0x11d708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D708u;
    {
        const bool branch_taken_0x11d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D708u;
        // 0x11d70c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d708) {
            ctx->pc = 0x11D71Cu;
            goto label_11d71c;
        }
    }
    ctx->pc = 0x11D710u;
label_11d710:
    // 0x11d710: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D710u;
    SET_GPR_U32(ctx, 31, 0x11D718u);
    ctx->pc = 0x11D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D710u;
    // 0x11d714: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D710u, 0x11D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D718u;
label_11d718:
    // 0x11d718: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_11d71c:
    // 0x11d71c: 0xc080664  jal         func_201990
    ctx->pc = 0x11D71Cu;
    SET_GPR_U32(ctx, 31, 0x11D724u);
    ctx->pc = 0x11D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D71Cu;
    // 0x11d720: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D71Cu, 0x11D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D724u;
label_11d724:
    // 0x11d724: 0x8e620538  lw          $v0, 0x538($s3)
    ctx->pc = 0x11d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x11d728: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11d728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d72c: 0x14540025  bne         $v0, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x11D72Cu;
    {
        const bool branch_taken_0x11d72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x11D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D72Cu;
        // 0x11d730: 0x24150040  addiu       $s5, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d72c) {
            ctx->pc = 0x11D7C4u;
            goto label_11d7c4;
        }
    }
    ctx->pc = 0x11D734u;
    // 0x11d734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d73c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d740: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D740u;
    SET_GPR_U32(ctx, 31, 0x11D748u);
    ctx->pc = 0x11D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D740u;
    // 0x11d744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D740u, 0x11D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D748u;
label_11d748:
    // 0x11d748: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11d74c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d750: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d754: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11D754u;
    SET_GPR_U32(ctx, 31, 0x11D75Cu);
    ctx->pc = 0x11D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D754u;
    // 0x11d758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11D754u, 0x11D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D75Cu;
label_11d75c:
    // 0x11d75c: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x11d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x11d760: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x11d760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x11d764: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D764u;
    {
        const bool branch_taken_0x11d764 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D764u;
        // 0x11d768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d764) {
            ctx->pc = 0x11D774u;
            goto label_11d774;
        }
    }
    ctx->pc = 0x11D76Cu;
    // 0x11d76c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x11D76Cu;
    {
        const bool branch_taken_0x11d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D76Cu;
        // 0x11d770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d76c) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11D774u;
label_11d774:
    // 0x11d774: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D774u;
    SET_GPR_U32(ctx, 31, 0x11D77Cu);
    ctx->pc = 0x11D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D774u;
    // 0x11d778: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D774u, 0x11D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D77Cu;
label_11d77c:
    // 0x11d77c: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x11d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x11d780: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D780u;
    {
        const bool branch_taken_0x11d780 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D780u;
        // 0x11d784: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d780) {
            ctx->pc = 0x11D790u;
            goto label_11d790;
        }
    }
    ctx->pc = 0x11D788u;
    // 0x11d788: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11d78c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11d78cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_11d790:
    // 0x11d790: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x11d790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x11d794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d798: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x11d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11d79c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11d7a0: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x11d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x11d7a4: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x11d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x11d7a8: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D7A8u;
    SET_GPR_U32(ctx, 31, 0x11D7B0u);
    ctx->pc = 0x11D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7A8u;
    // 0x11d7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D7A8u, 0x11D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7B0u;
label_11d7b0:
    // 0x11d7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7b4: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D7B4u;
    SET_GPR_U32(ctx, 31, 0x11D7BCu);
    ctx->pc = 0x11D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7B4u;
    // 0x11d7b8: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D7B4u, 0x11D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7BCu;
label_11d7bc:
    // 0x11d7bc: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x11D7BCu;
    {
        const bool branch_taken_0x11d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7bc) {
            ctx->pc = 0x11DA5Cu;
            goto label_11da5c;
        }
    }
    ctx->pc = 0x11D7C4u;
label_11d7c4:
    // 0x11d7c4: 0x8e620524  lw          $v0, 0x524($s3)
    ctx->pc = 0x11d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d7c8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11d7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11d7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7d0: 0x24c6e770  addiu       $a2, $a2, -0x1890
    ctx->pc = 0x11d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961008));
    // 0x11d7d4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D7D4u;
    SET_GPR_U32(ctx, 31, 0x11D7DCu);
    ctx->pc = 0x11D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7D4u;
    // 0x11d7d8: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D7D4u, 0x11D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7DCu;
label_11d7dc:
    // 0x11d7dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d7e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D7E0u;
    {
        const bool branch_taken_0x11d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d7e0) {
            ctx->pc = 0x11D7F0u;
            goto label_11d7f0;
        }
    }
    ctx->pc = 0x11D7E8u;
    // 0x11d7e8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x11D7E8u;
    {
        const bool branch_taken_0x11d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7E8u;
        // 0x11d7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e8) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11D7F0u;
label_11d7f0:
    // 0x11d7f0: 0x8e620524  lw          $v0, 0x524($s3)
    ctx->pc = 0x11d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d7f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7f8: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x11d7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x11d7fc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D7FCu;
    SET_GPR_U32(ctx, 31, 0x11D804u);
    ctx->pc = 0x11D800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7FCu;
    // 0x11d800: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D7FCu, 0x11D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D804u;
label_11d804:
    // 0x11d804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d808: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11D808u;
    {
        const bool branch_taken_0x11d808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D808u;
        // 0x11d80c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d808) {
            ctx->pc = 0x11D864u;
            goto label_11d864;
        }
    }
    ctx->pc = 0x11D810u;
    // 0x11d810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d818: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D818u;
    SET_GPR_U32(ctx, 31, 0x11D820u);
    ctx->pc = 0x11D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D818u;
    // 0x11d81c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D818u, 0x11D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D820u;
label_11d820:
    // 0x11d820: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11d824: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x11d824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x11d828: 0x8e630524  lw          $v1, 0x524($s3)
    ctx->pc = 0x11d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d82c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d830: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d834: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x11d834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d838: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x11d838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x11d83c: 0x8e630524  lw          $v1, 0x524($s3)
    ctx->pc = 0x11d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x11d840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11d840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d844: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x11d848: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x11d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11d84c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d850: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x11d850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x11d854: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x11d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11d858: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11d858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11d85c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D85Cu;
    {
        const bool branch_taken_0x11d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D85Cu;
        // 0x11d860: 0xac43008c  sw          $v1, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d85c) {
            ctx->pc = 0x11D870u;
            goto label_11d870;
        }
    }
    ctx->pc = 0x11D864u;
label_11d864:
    // 0x11d864: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x11d864u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x11d868: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x11D868u;
    {
        const bool branch_taken_0x11d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D868u;
        // 0x11d86c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d868) {
            ctx->pc = 0x11D7C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d7c4;
        }
    }
    ctx->pc = 0x11D870u;
label_11d870:
    // 0x11d870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d874: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D874u;
    SET_GPR_U32(ctx, 31, 0x11D87Cu);
    ctx->pc = 0x11D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D874u;
    // 0x11d878: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D874u, 0x11D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D87Cu;
label_11d87c:
    // 0x11d87c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x11D87Cu;
    {
        const bool branch_taken_0x11d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d87c) {
            ctx->pc = 0x11DA5Cu;
            goto label_11da5c;
        }
    }
    ctx->pc = 0x11D884u;
label_11d884:
    // 0x11d884: 0x826203c4  lb          $v0, 0x3C4($s3)
    ctx->pc = 0x11d884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 964)));
    // 0x11d888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D888u;
    {
        const bool branch_taken_0x11d888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D888u;
        // 0x11d88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d888) {
            ctx->pc = 0x11D898u;
            goto label_11d898;
        }
    }
    ctx->pc = 0x11D890u;
    // 0x11d890: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x11D890u;
    {
        const bool branch_taken_0x11d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d890) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11D898u;
label_11d898:
    // 0x11d898: 0x8e620538  lw          $v0, 0x538($s3)
    ctx->pc = 0x11d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x11d89c: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x11D89Cu;
    {
        const bool branch_taken_0x11d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D89Cu;
        // 0x11d8a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d89c) {
            ctx->pc = 0x11D988u;
            goto label_11d988;
        }
    }
    ctx->pc = 0x11D8A4u;
    // 0x11d8a4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8a8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D8A8u;
    SET_GPR_U32(ctx, 31, 0x11D8B0u);
    ctx->pc = 0x11D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8A8u;
    // 0x11d8ac: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D8A8u, 0x11D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8B0u;
label_11d8b0:
    // 0x11d8b0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8b4: 0xc080664  jal         func_201990
    ctx->pc = 0x11D8B4u;
    SET_GPR_U32(ctx, 31, 0x11D8BCu);
    ctx->pc = 0x11D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8B4u;
    // 0x11d8b8: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D8B4u, 0x11D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8BCu;
label_11d8bc:
    // 0x11d8bc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8c0: 0xc080664  jal         func_201990
    ctx->pc = 0x11D8C0u;
    SET_GPR_U32(ctx, 31, 0x11D8C8u);
    ctx->pc = 0x11D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8C0u;
    // 0x11d8c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11D8C0u, 0x11D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8C8u;
label_11d8c8:
    // 0x11d8c8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x11d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x11d8cc: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11D8CCu;
    SET_GPR_U32(ctx, 31, 0x11D8D4u);
    ctx->pc = 0x11D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8CCu;
    // 0x11d8d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11D8CCu, 0x11D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8D4u;
label_11d8d4:
    // 0x11d8d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d8d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8d8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8D8u;
    {
        const bool branch_taken_0x11d8d8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8D8u;
        // 0x11d8dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8d8) {
            ctx->pc = 0x11D8E8u;
            goto label_11d8e8;
        }
    }
    ctx->pc = 0x11D8E0u;
    // 0x11d8e0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x11D8E0u;
    {
        const bool branch_taken_0x11d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8E0u;
        // 0x11d8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e0) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11D8E8u;
label_11d8e8:
    // 0x11d8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8ec: 0xc07bef2  jal         func_1EFBC8
    ctx->pc = 0x11D8ECu;
    SET_GPR_U32(ctx, 31, 0x11D8F4u);
    ctx->pc = 0x11D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8ECu;
    // 0x11d8f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFBC8u, 0x11D8ECu, 0x11D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8F4u;
label_11d8f4:
    // 0x11d8f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11d8f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8f8: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x11D8F8u;
    SET_GPR_U32(ctx, 31, 0x11D900u);
    ctx->pc = 0x11D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8F8u;
    // 0x11d8fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x11D8F8u, 0x11D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D900u;
label_11d900:
    // 0x11d900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d90c: 0xc046b94  jal         func_11AE50
    ctx->pc = 0x11D90Cu;
    SET_GPR_U32(ctx, 31, 0x11D914u);
    ctx->pc = 0x11D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D90Cu;
    // 0x11d910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE50u, 0x11D90Cu, 0x11D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D914u;
label_11d914:
    // 0x11d914: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d918:
    // 0x11d918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d91c: 0xc046c90  jal         func_11B240
    ctx->pc = 0x11D91Cu;
    SET_GPR_U32(ctx, 31, 0x11D924u);
    ctx->pc = 0x11D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D91Cu;
    // 0x11d920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B240u, 0x11D91Cu, 0x11D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D924u;
label_11d924:
    // 0x11d924: 0x0  nop
    ctx->pc = 0x11d924u;
    // NOP
    // 0x11d928: 0x0  nop
    ctx->pc = 0x11d928u;
    // NOP
    // 0x11d92c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D92Cu;
    {
        const bool branch_taken_0x11d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d92c) {
            ctx->pc = 0x11D918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d918;
        }
    }
    ctx->pc = 0x11D934u;
    // 0x11d934: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d938: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x11d938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d93c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d940: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D940u;
    SET_GPR_U32(ctx, 31, 0x11D948u);
    ctx->pc = 0x11D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D940u;
    // 0x11d944: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D940u, 0x11D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D948u;
label_11d948:
    // 0x11d948: 0x26a307ff  addiu       $v1, $s5, 0x7FF
    ctx->pc = 0x11d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2047));
    // 0x11d94c: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11d950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d954: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D954u;
    {
        const bool branch_taken_0x11d954 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D954u;
        // 0x11d958: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d954) {
            ctx->pc = 0x11D964u;
            goto label_11d964;
        }
    }
    ctx->pc = 0x11D95Cu;
    // 0x11d95c: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11d960: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_11d964:
    // 0x11d964: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x11d964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x11d968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d96c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x11d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11d970: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11d974: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11d974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11d978: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D978u;
    SET_GPR_U32(ctx, 31, 0x11D980u);
    ctx->pc = 0x11D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D978u;
    // 0x11d97c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D978u, 0x11D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D980u;
label_11d980:
    // 0x11d980: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x11D980u;
    {
        const bool branch_taken_0x11d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d980) {
            ctx->pc = 0x11DA5Cu;
            goto label_11da5c;
        }
    }
    ctx->pc = 0x11D988u;
label_11d988:
    // 0x11d988: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11d988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d98c:
    // 0x11d98c: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11d990: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11d990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11d994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d998: 0x24c6e730  addiu       $a2, $a2, -0x18D0
    ctx->pc = 0x11d998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    // 0x11d99c: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D99Cu;
    SET_GPR_U32(ctx, 31, 0x11D9A4u);
    ctx->pc = 0x11D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D99Cu;
    // 0x11d9a0: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D99Cu, 0x11D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9A4u;
label_11d9a4:
    // 0x11d9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D9A8u;
    {
        const bool branch_taken_0x11d9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d9a8) {
            ctx->pc = 0x11D9B8u;
            goto label_11d9b8;
        }
    }
    ctx->pc = 0x11D9B0u;
    // 0x11d9b0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x11D9B0u;
    {
        const bool branch_taken_0x11d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9B0u;
        // 0x11d9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d9b0) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11D9B8u;
label_11d9b8:
    // 0x11d9b8: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11d9bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9c0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11d9c4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11D9C4u;
    SET_GPR_U32(ctx, 31, 0x11D9CCu);
    ctx->pc = 0x11D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9C4u;
    // 0x11d9c8: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11D9C4u, 0x11D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9CCu;
label_11d9cc:
    // 0x11d9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9d0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x11D9D0u;
    {
        const bool branch_taken_0x11d9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11d9d0) {
            ctx->pc = 0x11DA50u;
            goto label_11da50;
        }
    }
    ctx->pc = 0x11D9D8u;
    // 0x11d9d8: 0x8e63052c  lw          $v1, 0x52C($s3)
    ctx->pc = 0x11d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11d9dc: 0x15a180  sll         $s4, $s5, 6
    ctx->pc = 0x11d9dcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x11d9e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d9ec: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x11d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x11d9f0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11d9f4: 0xc047798  jal         func_11DE60
    ctx->pc = 0x11D9F4u;
    SET_GPR_U32(ctx, 31, 0x11D9FCu);
    ctx->pc = 0x11D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9F4u;
    // 0x11d9f8: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE60u, 0x11D9F4u, 0x11D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9FCu;
label_11d9fc:
    // 0x11d9fc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x11d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x11da00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11da00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da04: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11da08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x11da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11da0c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11da10: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11da14: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11da14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11da18: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x11da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x11da1c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DA1Cu;
    {
        const bool branch_taken_0x11da1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA1Cu;
        // 0x11da20: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da1c) {
            ctx->pc = 0x11DA2Cu;
            goto label_11da2c;
        }
    }
    ctx->pc = 0x11DA24u;
    // 0x11da24: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11da28: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_11da2c:
    // 0x11da2c: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x11da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x11da30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da34: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11da38: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x11da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11da3c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11da40: 0xc080702  jal         func_201C08
    ctx->pc = 0x11DA40u;
    SET_GPR_U32(ctx, 31, 0x11DA48u);
    ctx->pc = 0x11DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA40u;
    // 0x11da44: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11DA40u, 0x11DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA48u;
label_11da48:
    // 0x11da48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11DA48u;
    {
        const bool branch_taken_0x11da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da48) {
            ctx->pc = 0x11DA5Cu;
            goto label_11da5c;
        }
    }
    ctx->pc = 0x11DA50u;
label_11da50:
    // 0x11da50: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x11da50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x11da54: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x11DA54u;
    {
        const bool branch_taken_0x11da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA54u;
        // 0x11da58: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da54) {
            ctx->pc = 0x11D98Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d98c;
        }
    }
    ctx->pc = 0x11DA5Cu;
label_11da5c:
    // 0x11da5c: 0x0  nop
    ctx->pc = 0x11da5cu;
    // NOP
    // 0x11da60: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11da64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11da68: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x11DA68u;
    {
        const bool branch_taken_0x11da68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA68u;
        // 0x11da6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da68) {
            ctx->pc = 0x11DC14u;
            goto label_11dc14;
        }
    }
    ctx->pc = 0x11DA70u;
    // 0x11da70: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x11DA70u;
    {
        const bool branch_taken_0x11da70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11da70) {
            ctx->pc = 0x11DC14u;
            goto label_11dc14;
        }
    }
    ctx->pc = 0x11DA78u;
    // 0x11da78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11da7c: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11DA7Cu;
    {
        const bool branch_taken_0x11da7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA7Cu;
        // 0x11da80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da7c) {
            ctx->pc = 0x11DB94u;
            goto label_11db94;
        }
    }
    ctx->pc = 0x11DA84u;
    // 0x11da84: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11DA84u;
    {
        const bool branch_taken_0x11da84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11da84) {
            ctx->pc = 0x11DB94u;
            goto label_11db94;
        }
    }
    ctx->pc = 0x11DA8Cu;
    // 0x11da8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11da90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DA90u;
    {
        const bool branch_taken_0x11da90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA90u;
        // 0x11da94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da90) {
            ctx->pc = 0x11DAA8u;
            goto label_11daa8;
        }
    }
    ctx->pc = 0x11DA98u;
    // 0x11da98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DA98u;
    {
        const bool branch_taken_0x11da98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11da98) {
            ctx->pc = 0x11DAA8u;
            goto label_11daa8;
        }
    }
    ctx->pc = 0x11DAA0u;
    // 0x11daa0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x11DAA0u;
    {
        const bool branch_taken_0x11daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAA0u;
        // 0x11daa4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11daa0) {
            ctx->pc = 0x11DC2Cu;
            goto label_11dc2c;
        }
    }
    ctx->pc = 0x11DAA8u;
label_11daa8:
    // 0x11daa8: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x11daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x11daac: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x11daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x11dab0: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x11dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x11dab4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x11dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x11dab8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x11dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x11dabc: 0xc047bac  jal         func_11EEB0
    ctx->pc = 0x11DABCu;
    SET_GPR_U32(ctx, 31, 0x11DAC4u);
    ctx->pc = 0x11DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DABCu;
    // 0x11dac0: 0xae4000ac  sw          $zero, 0xAC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EEB0u, 0x11DABCu, 0x11DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAC4u;
label_11dac4:
    // 0x11dac4: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x11dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x11dac8: 0xc047bd4  jal         func_11EF50
    ctx->pc = 0x11DAC8u;
    SET_GPR_U32(ctx, 31, 0x11DAD0u);
    ctx->pc = 0x11DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAC8u;
    // 0x11dacc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF50u, 0x11DAC8u, 0x11DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAD0u;
label_11dad0:
    // 0x11dad0: 0xc047be8  jal         func_11EFA0
    ctx->pc = 0x11DAD0u;
    SET_GPR_U32(ctx, 31, 0x11DAD8u);
    ctx->pc = 0x11DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAD0u;
    // 0x11dad4: 0x26440424  addiu       $a0, $s2, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFA0u, 0x11DAD0u, 0x11DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAD8u;
label_11dad8:
    // 0x11dad8: 0x26440424  addiu       $a0, $s2, 0x424
    ctx->pc = 0x11dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    // 0x11dadc: 0xc047cac  jal         func_11F2B0
    ctx->pc = 0x11DADCu;
    SET_GPR_U32(ctx, 31, 0x11DAE4u);
    ctx->pc = 0x11DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DADCu;
    // 0x11dae0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F2B0u, 0x11DADCu, 0x11DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAE4u;
label_11dae4:
    // 0x11dae4: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11dae8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x11dae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daec: 0x26440424  addiu       $a0, $s2, 0x424
    ctx->pc = 0x11daecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    // 0x11daf0: 0x24c6a2f0  addiu       $a2, $a2, -0x5D10
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943472));
    // 0x11daf4: 0xc047ca4  jal         func_11F290
    ctx->pc = 0x11DAF4u;
    SET_GPR_U32(ctx, 31, 0x11DAFCu);
    ctx->pc = 0x11DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAF4u;
    // 0x11daf8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F290u, 0x11DAF4u, 0x11DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAFCu;
label_11dafc:
    // 0x11dafc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x11db00: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11db00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11db04: 0x26440424  addiu       $a0, $s2, 0x424
    ctx->pc = 0x11db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1060));
    // 0x11db08: 0x24c6a410  addiu       $a2, $a2, -0x5BF0
    ctx->pc = 0x11db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943760));
    // 0x11db0c: 0xc047ca4  jal         func_11F290
    ctx->pc = 0x11DB0Cu;
    SET_GPR_U32(ctx, 31, 0x11DB14u);
    ctx->pc = 0x11DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB0Cu;
    // 0x11db10: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F290u, 0x11DB0Cu, 0x11DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB14u;
label_11db14:
    // 0x11db14: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x11db14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x11db18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11db18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db1c: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x11db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x11db20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db24: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x11db24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x11db28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db2c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x11db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x11db30: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x11db30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x11db34: 0xc047744  jal         func_11DD10
    ctx->pc = 0x11DB34u;
    SET_GPR_U32(ctx, 31, 0x11DB3Cu);
    ctx->pc = 0x11DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB34u;
    // 0x11db38: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD10u, 0x11DB34u, 0x11DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB3Cu;
label_11db3c:
    // 0x11db3c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x11DB3Cu;
    SET_GPR_U32(ctx, 31, 0x11DB44u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x11DB3Cu, 0x11DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB44u;
label_11db44:
    // 0x11db44: 0xc062990  jal         func_18A640
    ctx->pc = 0x11DB44u;
    SET_GPR_U32(ctx, 31, 0x11DB4Cu);
    ctx->pc = 0x11DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB44u;
    // 0x11db48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A640u, 0x11DB44u, 0x11DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB4Cu;
label_11db4c:
    // 0x11db4c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11db50: 0x3c038102  lui         $v1, 0x8102
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33026 << 16));
    // 0x11db54: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x11db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11db58: 0x34620409  ori         $v0, $v1, 0x409
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1033);
    // 0x11db5c: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11db60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11db64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11db68: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x11db68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11db6c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x11db6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11db70: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x11db74: 0x0  nop
    ctx->pc = 0x11db74u;
    // NOP
    // 0x11db78: 0x1010  mfhi        $v0
    ctx->pc = 0x11db78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11db7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11db80: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x11db80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x11db84: 0xc074fc2  jal         func_1D3F08
    ctx->pc = 0x11DB84u;
    SET_GPR_U32(ctx, 31, 0x11DB8Cu);
    ctx->pc = 0x11DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB84u;
    // 0x11db88: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F08u, 0x11DB84u, 0x11DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB8Cu;
label_11db8c:
    // 0x11db8c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11DB8Cu;
    {
        const bool branch_taken_0x11db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11db8c) {
            ctx->pc = 0x11DC28u;
            goto label_11dc28;
        }
    }
    ctx->pc = 0x11DB94u;
label_11db94:
    // 0x11db94: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x11db94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x11db98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db9c: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x11db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x11dba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dba4: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x11dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x11dba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11dba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbac: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x11dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x11dbb0: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x11dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x11dbb4: 0xc047744  jal         func_11DD10
    ctx->pc = 0x11DBB4u;
    SET_GPR_U32(ctx, 31, 0x11DBBCu);
    ctx->pc = 0x11DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBB4u;
    // 0x11dbb8: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD10u, 0x11DBB4u, 0x11DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBBCu;
label_11dbbc:
    // 0x11dbbc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x11DBBCu;
    SET_GPR_U32(ctx, 31, 0x11DBC4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x11DBBCu, 0x11DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBC4u;
label_11dbc4:
    // 0x11dbc4: 0xc0629b8  jal         func_18A6E0
    ctx->pc = 0x11DBC4u;
    SET_GPR_U32(ctx, 31, 0x11DBCCu);
    ctx->pc = 0x11DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBC4u;
    // 0x11dbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A6E0u, 0x11DBC4u, 0x11DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBCCu;
label_11dbcc:
    // 0x11dbcc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11dbd0: 0x3c038102  lui         $v1, 0x8102
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33026 << 16));
    // 0x11dbd4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x11dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11dbd8: 0x34620409  ori         $v0, $v1, 0x409
    ctx->pc = 0x11dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1033);
    // 0x11dbdc: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11dbe0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11dbe4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11dbe8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x11dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11dbec: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x11dbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11dbf0: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x11dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x11dbf4: 0x0  nop
    ctx->pc = 0x11dbf4u;
    // NOP
    // 0x11dbf8: 0x1010  mfhi        $v0
    ctx->pc = 0x11dbf8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11dbfc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11dc00: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x11dc00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x11dc04: 0xc074fc2  jal         func_1D3F08
    ctx->pc = 0x11DC04u;
    SET_GPR_U32(ctx, 31, 0x11DC0Cu);
    ctx->pc = 0x11DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC04u;
    // 0x11dc08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F08u, 0x11DC04u, 0x11DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC0Cu;
label_11dc0c:
    // 0x11dc0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11DC0Cu;
    {
        const bool branch_taken_0x11dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc0c) {
            ctx->pc = 0x11DC28u;
            goto label_11dc28;
        }
    }
    ctx->pc = 0x11DC14u;
label_11dc14:
    // 0x11dc14: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x11dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x11dc18: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x11dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x11dc1c: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x11dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x11dc20: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x11dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x11dc24: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x11dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_11dc28:
    // 0x11dc28: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_11dc2c:
    // 0x11dc2c: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x11dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11dc30: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x11dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x11dc34: 0xae51004c  sw          $s1, 0x4C($s2)
    ctx->pc = 0x11dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 17));
    // 0x11dc38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11dc3c: 0xae560050  sw          $s6, 0x50($s2)
    ctx->pc = 0x11dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 22));
    // 0x11dc40: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x11dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x11dc44: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x11dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    // 0x11dc48: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x11dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    // 0x11dc4c: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x11dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x11dc50: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x11dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x11dc54: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11DC54u;
    SET_GPR_U32(ctx, 31, 0x11DC5Cu);
    ctx->pc = 0x11DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC54u;
    // 0x11dc58: 0xae400090  sw          $zero, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11DC54u, 0x11DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC5Cu;
label_11dc5c:
    // 0x11dc5c: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x11dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x11dc60: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x11dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x11dc64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DC64u;
    {
        const bool branch_taken_0x11dc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC64u;
        // 0x11dc68: 0xae720100  sw          $s2, 0x100($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc64) {
            ctx->pc = 0x11DC74u;
            goto label_11dc74;
        }
    }
    ctx->pc = 0x11DC6Cu;
    // 0x11dc6c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11DC6Cu;
    SET_GPR_U32(ctx, 31, 0x11DC74u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11DC6Cu, 0x11DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC74u;
label_11dc74:
    // 0x11dc74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11dc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11dc78:
    // 0x11dc78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11dc7c:
    // 0x11dc7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11dc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11dc80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11dc80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11dc84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11dc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11dc88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11dc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11dc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11dc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dc90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11dc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dc94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11dc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11dc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11dc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dca0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCA0u;
        // 0x11dca4: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DCA8u;
}
