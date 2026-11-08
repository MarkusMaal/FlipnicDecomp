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

// Function: FUN_00133970
// Address: 0x133970 - 0x133a84
void FUN_00133970_0x133970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133970_0x133970");
#endif

    switch (ctx->pc) {
        case 0x133970u: goto label_133970;
        case 0x133974u: goto label_133974;
        case 0x133978u: goto label_133978;
        case 0x13397cu: goto label_13397c;
        case 0x133980u: goto label_133980;
        case 0x133984u: goto label_133984;
        case 0x133988u: goto label_133988;
        case 0x13398cu: goto label_13398c;
        case 0x133990u: goto label_133990;
        case 0x133994u: goto label_133994;
        case 0x133998u: goto label_133998;
        case 0x13399cu: goto label_13399c;
        case 0x1339a0u: goto label_1339a0;
        case 0x1339a4u: goto label_1339a4;
        case 0x1339a8u: goto label_1339a8;
        case 0x1339acu: goto label_1339ac;
        case 0x1339b0u: goto label_1339b0;
        case 0x1339b4u: goto label_1339b4;
        case 0x1339b8u: goto label_1339b8;
        case 0x1339bcu: goto label_1339bc;
        case 0x1339c0u: goto label_1339c0;
        case 0x1339c4u: goto label_1339c4;
        case 0x1339c8u: goto label_1339c8;
        case 0x1339ccu: goto label_1339cc;
        case 0x1339d0u: goto label_1339d0;
        case 0x1339d4u: goto label_1339d4;
        case 0x1339d8u: goto label_1339d8;
        case 0x1339dcu: goto label_1339dc;
        case 0x1339e0u: goto label_1339e0;
        case 0x1339e4u: goto label_1339e4;
        case 0x1339e8u: goto label_1339e8;
        case 0x1339ecu: goto label_1339ec;
        case 0x1339f0u: goto label_1339f0;
        case 0x1339f4u: goto label_1339f4;
        case 0x1339f8u: goto label_1339f8;
        case 0x1339fcu: goto label_1339fc;
        case 0x133a00u: goto label_133a00;
        case 0x133a04u: goto label_133a04;
        case 0x133a08u: goto label_133a08;
        case 0x133a0cu: goto label_133a0c;
        case 0x133a10u: goto label_133a10;
        case 0x133a14u: goto label_133a14;
        case 0x133a18u: goto label_133a18;
        case 0x133a1cu: goto label_133a1c;
        case 0x133a20u: goto label_133a20;
        case 0x133a24u: goto label_133a24;
        case 0x133a28u: goto label_133a28;
        case 0x133a2cu: goto label_133a2c;
        case 0x133a30u: goto label_133a30;
        case 0x133a34u: goto label_133a34;
        case 0x133a38u: goto label_133a38;
        case 0x133a3cu: goto label_133a3c;
        case 0x133a40u: goto label_133a40;
        case 0x133a44u: goto label_133a44;
        case 0x133a48u: goto label_133a48;
        case 0x133a4cu: goto label_133a4c;
        case 0x133a50u: goto label_133a50;
        case 0x133a54u: goto label_133a54;
        case 0x133a58u: goto label_133a58;
        case 0x133a5cu: goto label_133a5c;
        case 0x133a60u: goto label_133a60;
        case 0x133a64u: goto label_133a64;
        case 0x133a68u: goto label_133a68;
        case 0x133a6cu: goto label_133a6c;
        case 0x133a70u: goto label_133a70;
        case 0x133a74u: goto label_133a74;
        case 0x133a78u: goto label_133a78;
        case 0x133a7cu: goto label_133a7c;
        case 0x133a80u: goto label_133a80;
        default: break;
    }

    ctx->pc = 0x133970u;

label_133970:
    // 0x133970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x133970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_133974:
    // 0x133974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x133974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_133978:
    // 0x133978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13397c:
    // 0x13397c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_133980:
    // 0x133980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_133984:
    // 0x133984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133988:
    // 0x133988: 0xc0401bc  jal         func_1006F0
label_13398c:
    if (ctx->pc == 0x13398Cu) {
        ctx->pc = 0x13398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133988u;
        // 0x13398c: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133990u;
        goto label_133990;
    }
    ctx->pc = 0x133988u;
    SET_GPR_U32(ctx, 31, 0x133990u);
    ctx->pc = 0x13398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133988u;
    // 0x13398c: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x133988u, 0x133990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133990u;
label_133990:
    // 0x133990: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x133990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133994:
    // 0x133994: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_133998:
    if (ctx->pc == 0x133998u) {
        ctx->pc = 0x133998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133994u;
        // 0x133998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13399Cu;
        goto label_13399c;
    }
    ctx->pc = 0x133994u;
    {
        const bool branch_taken_0x133994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133994u;
        // 0x133998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133994) {
            ctx->pc = 0x1339A8u;
            goto label_1339a8;
        }
    }
    ctx->pc = 0x13399Cu;
label_13399c:
    // 0x13399c: 0xc0510e8  jal         func_1443A0
label_1339a0:
    if (ctx->pc == 0x1339A0u) {
        ctx->pc = 0x1339A4u;
        goto label_1339a4;
    }
    ctx->pc = 0x13399Cu;
    SET_GPR_U32(ctx, 31, 0x1339A4u);
    ctx->pc = 0x1443A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1443A0u, 0x13399Cu, 0x1339A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339A4u;
label_1339a4:
    // 0x1339a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1339a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1339a8:
    // 0x1339a8: 0xc04d988  jal         func_136620
label_1339ac:
    if (ctx->pc == 0x1339ACu) {
        ctx->pc = 0x1339B0u;
        goto label_1339b0;
    }
    ctx->pc = 0x1339A8u;
    SET_GPR_U32(ctx, 31, 0x1339B0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1339A8u, 0x1339B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339B0u;
label_1339b0:
    // 0x1339b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1339b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1339b4:
    // 0x1339b4: 0xc04c558  jal         func_131560
label_1339b8:
    if (ctx->pc == 0x1339B8u) {
        ctx->pc = 0x1339B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339B4u;
        // 0x1339b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339BCu;
        goto label_1339bc;
    }
    ctx->pc = 0x1339B4u;
    SET_GPR_U32(ctx, 31, 0x1339BCu);
    ctx->pc = 0x1339B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339B4u;
    // 0x1339b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x1339B4u, 0x1339BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339BCu;
label_1339bc:
    // 0x1339bc: 0x264400fc  addiu       $a0, $s2, 0xFC
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 252));
label_1339c0:
    // 0x1339c0: 0xc080702  jal         func_201C08
label_1339c4:
    if (ctx->pc == 0x1339C4u) {
        ctx->pc = 0x1339C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C0u;
        // 0x1339c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339C8u;
        goto label_1339c8;
    }
    ctx->pc = 0x1339C0u;
    SET_GPR_U32(ctx, 31, 0x1339C8u);
    ctx->pc = 0x1339C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339C0u;
    // 0x1339c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1339C0u, 0x1339C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339C8u;
label_1339c8:
    // 0x1339c8: 0xc04c260  jal         func_130980
label_1339cc:
    if (ctx->pc == 0x1339CCu) {
        ctx->pc = 0x1339D0u;
        goto label_1339d0;
    }
    ctx->pc = 0x1339C8u;
    SET_GPR_U32(ctx, 31, 0x1339D0u);
    ctx->pc = 0x130980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130980u, 0x1339C8u, 0x1339D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339D0u;
label_1339d0:
    // 0x1339d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1339d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1339d4:
    // 0x1339d4: 0xc080702  jal         func_201C08
label_1339d8:
    if (ctx->pc == 0x1339D8u) {
        ctx->pc = 0x1339D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339D4u;
        // 0x1339d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339DCu;
        goto label_1339dc;
    }
    ctx->pc = 0x1339D4u;
    SET_GPR_U32(ctx, 31, 0x1339DCu);
    ctx->pc = 0x1339D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339D4u;
    // 0x1339d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1339D4u, 0x1339DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339DCu;
label_1339dc:
    // 0x1339dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1339dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1339e0:
    // 0x1339e0: 0xc080664  jal         func_201990
label_1339e4:
    if (ctx->pc == 0x1339E4u) {
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E0u;
        // 0x1339e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1339E8u;
        goto label_1339e8;
    }
    ctx->pc = 0x1339E0u;
    SET_GPR_U32(ctx, 31, 0x1339E8u);
    ctx->pc = 0x1339E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339E0u;
    // 0x1339e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1339E0u, 0x1339E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339E8u;
label_1339e8:
    // 0x1339e8: 0xc047a3c  jal         func_11E8F0
label_1339ec:
    if (ctx->pc == 0x1339ECu) {
        ctx->pc = 0x1339F0u;
        goto label_1339f0;
    }
    ctx->pc = 0x1339E8u;
    SET_GPR_U32(ctx, 31, 0x1339F0u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1339E8u, 0x1339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339F0u;
label_1339f0:
    // 0x1339f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1339f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1339f4:
    // 0x1339f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1339f8:
    // 0x1339f8: 0xc046b90  jal         func_11AE40
label_1339fc:
    if (ctx->pc == 0x1339FCu) {
        ctx->pc = 0x1339FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339F8u;
        // 0x1339fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A00u;
        goto label_133a00;
    }
    ctx->pc = 0x1339F8u;
    SET_GPR_U32(ctx, 31, 0x133A00u);
    ctx->pc = 0x1339FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339F8u;
    // 0x1339fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1339F8u, 0x133A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A00u;
label_133a00:
    // 0x133a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133a04:
    // 0x133a04: 0xc046c8c  jal         func_11B230
label_133a08:
    if (ctx->pc == 0x133A08u) {
        ctx->pc = 0x133A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A04u;
        // 0x133a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A0Cu;
        goto label_133a0c;
    }
    ctx->pc = 0x133A04u;
    SET_GPR_U32(ctx, 31, 0x133A0Cu);
    ctx->pc = 0x133A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A04u;
    // 0x133a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x133A04u, 0x133A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A0Cu;
label_133a0c:
    // 0x133a0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_133a10:
    if (ctx->pc == 0x133A10u) {
        ctx->pc = 0x133A14u;
        goto label_133a14;
    }
    ctx->pc = 0x133A0Cu;
    {
        const bool branch_taken_0x133a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a0c) {
            ctx->pc = 0x133A30u;
            goto label_133a30;
        }
    }
    ctx->pc = 0x133A14u;
label_133a14:
    // 0x133a14: 0xc046c8c  jal         func_11B230
label_133a18:
    if (ctx->pc == 0x133A18u) {
        ctx->pc = 0x133A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A14u;
        // 0x133a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A1Cu;
        goto label_133a1c;
    }
    ctx->pc = 0x133A14u;
    SET_GPR_U32(ctx, 31, 0x133A1Cu);
    ctx->pc = 0x133A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A14u;
    // 0x133a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x133A14u, 0x133A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A1Cu;
label_133a1c:
    // 0x133a1c: 0x0  nop
    ctx->pc = 0x133a1cu;
    // NOP
label_133a20:
    // 0x133a20: 0x0  nop
    ctx->pc = 0x133a20u;
    // NOP
label_133a24:
    // 0x133a24: 0x0  nop
    ctx->pc = 0x133a24u;
    // NOP
label_133a28:
    // 0x133a28: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_133a2c:
    if (ctx->pc == 0x133A2Cu) {
        ctx->pc = 0x133A30u;
        goto label_133a30;
    }
    ctx->pc = 0x133A28u;
    {
        const bool branch_taken_0x133a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a28) {
            ctx->pc = 0x133A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133a14;
        }
    }
    ctx->pc = 0x133A30u;
label_133a30:
    // 0x133a30: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_133a34:
    if (ctx->pc == 0x133A34u) {
        ctx->pc = 0x133A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A30u;
        // 0x133a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A38u;
        goto label_133a38;
    }
    ctx->pc = 0x133A30u;
    {
        const bool branch_taken_0x133a30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A30u;
        // 0x133a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a30) {
            ctx->pc = 0x133A4Cu;
            goto label_133a4c;
        }
    }
    ctx->pc = 0x133A38u;
label_133a38:
    // 0x133a38: 0xc05115c  jal         func_144570
label_133a3c:
    if (ctx->pc == 0x133A3Cu) {
        ctx->pc = 0x133A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A38u;
        // 0x133a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A40u;
        goto label_133a40;
    }
    ctx->pc = 0x133A38u;
    SET_GPR_U32(ctx, 31, 0x133A40u);
    ctx->pc = 0x133A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A38u;
    // 0x133a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144570u, 0x133A38u, 0x133A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A40u;
label_133a40:
    // 0x133a40: 0xae5100f4  sw          $s1, 0xF4($s2)
    ctx->pc = 0x133a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 17));
label_133a44:
    // 0x133a44: 0x10000009  b           . + 4 + (0x9 << 2)
label_133a48:
    if (ctx->pc == 0x133A48u) {
        ctx->pc = 0x133A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A44u;
        // 0x133a48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A4Cu;
        goto label_133a4c;
    }
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A44u;
        // 0x133a48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A6Cu;
            goto label_133a6c;
        }
    }
    ctx->pc = 0x133A4Cu;
label_133a4c:
    // 0x133a4c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_133a50:
    if (ctx->pc == 0x133A50u) {
        ctx->pc = 0x133A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A4Cu;
        // 0x133a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A54u;
        goto label_133a54;
    }
    ctx->pc = 0x133A4Cu;
    {
        const bool branch_taken_0x133a4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A4Cu;
        // 0x133a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a4c) {
            ctx->pc = 0x133A6Cu;
            goto label_133a6c;
        }
    }
    ctx->pc = 0x133A54u;
label_133a54:
    // 0x133a54: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_133a58:
    // 0x133a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_133a5c:
    // 0x133a5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_133a60:
    // 0x133a60: 0x320f809  jalr        $t9
label_133a64:
    if (ctx->pc == 0x133A64u) {
        ctx->pc = 0x133A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A60u;
        // 0x133a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A68u;
        goto label_133a68;
    }
    ctx->pc = 0x133A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133A68u);
        ctx->pc = 0x133A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A60u;
        // 0x133a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133A60u, 0x133A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133A68u;
label_133a68:
    // 0x133a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133a6c:
    // 0x133a6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x133a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_133a70:
    // 0x133a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_133a74:
    // 0x133a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_133a78:
    // 0x133a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_133a7c:
    // 0x133a7c: 0x3e00008  jr          $ra
label_133a80:
    if (ctx->pc == 0x133A80u) {
        ctx->pc = 0x133A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A7Cu;
        // 0x133a80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133A84u;
        goto label_fallthrough_0x133a7c;
    }
    ctx->pc = 0x133A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A7Cu;
        // 0x133a80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x133a7c:
    ctx->pc = 0x133A84u;
}
