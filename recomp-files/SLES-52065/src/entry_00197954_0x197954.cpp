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

// Function: entry_00197954
// Address: 0x197954 - 0x197a10
void entry_00197954_0x197954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197954_0x197954");
#endif

    switch (ctx->pc) {
        case 0x1979a4u: goto label_1979a4;
        case 0x1979b4u: goto label_1979b4;
        case 0x1979ccu: goto label_1979cc;
        case 0x1979d8u: goto label_1979d8;
        case 0x197a08u: goto label_197a08;
        default: break;
    }

    ctx->pc = 0x197954u;

label_197954:
    // 0x197954: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x197954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_197958:
    // 0x197958: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x197958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19795c:
    // 0x19795c: 0x8ca40674  lw          $a0, 0x674($a1)
    ctx->pc = 0x19795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1652)));
label_197960:
    // 0x197960: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_197964:
    // 0x197964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197968:
    // 0x197968: 0x8c732cd8  lw          $s3, 0x2CD8($v1)
    ctx->pc = 0x197968u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19796c:
    // 0x19796c: 0x8e6301fc  lw          $v1, 0x1FC($s3)
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 508)));
label_197970:
    // 0x197970: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_197974:
    if (ctx->pc == 0x197974u) {
        ctx->pc = 0x197974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197970u;
        // 0x197974: 0x24b10674  addiu       $s1, $a1, 0x674 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1652));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197978u;
        goto label_197978;
    }
    ctx->pc = 0x197970u;
    {
        const bool branch_taken_0x197970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197970u;
        // 0x197974: 0x24b10674  addiu       $s1, $a1, 0x674 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197970) {
            ctx->pc = 0x197A5Cu;
            return;
        }
    }
    ctx->pc = 0x197978u;
label_197978:
    // 0x197978: 0x8ca3068c  lw          $v1, 0x68C($a1)
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1676)));
label_19797c:
    // 0x19797c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197980:
    // 0x197980: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_197984:
    if (ctx->pc == 0x197984u) {
        ctx->pc = 0x197984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197980u;
        // 0x197984: 0x24b6068c  addiu       $s6, $a1, 0x68C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197988u;
        goto label_197988;
    }
    ctx->pc = 0x197980u;
    {
        const bool branch_taken_0x197980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197980u;
        // 0x197984: 0x24b6068c  addiu       $s6, $a1, 0x68C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197980) {
            ctx->pc = 0x197A40u;
            return;
        }
    }
    ctx->pc = 0x197988u;
label_197988:
    // 0x197988: 0x8ea306d0  lw          $v1, 0x6D0($s5)
    ctx->pc = 0x197988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_19798c:
    // 0x19798c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_197990:
    // 0x197990: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_197994:
    // 0x197994: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_197998:
    // 0x197998: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x197998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19799c:
    // 0x19799c: 0xc064b08  jal         func_192C20
label_1979a0:
    if (ctx->pc == 0x1979A0u) {
        ctx->pc = 0x1979A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19799Cu;
        // 0x1979a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979A4u;
        goto label_1979a4;
    }
    ctx->pc = 0x19799Cu;
    SET_GPR_U32(ctx, 31, 0x1979A4u);
    ctx->pc = 0x1979A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19799Cu;
    // 0x1979a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x19799Cu, 0x1979A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979A4u;
label_1979a4:
    // 0x1979a4: 0x8ea206d0  lw          $v0, 0x6D0($s5)
    ctx->pc = 0x1979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_1979a8:
    // 0x1979a8: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1979ac:
    // 0x1979ac: 0xc064ee0  jal         func_193B80
label_1979b0:
    if (ctx->pc == 0x1979B0u) {
        ctx->pc = 0x1979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979ACu;
        // 0x1979b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979B4u;
        goto label_1979b4;
    }
    ctx->pc = 0x1979ACu;
    SET_GPR_U32(ctx, 31, 0x1979B4u);
    ctx->pc = 0x1979B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979ACu;
    // 0x1979b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1979ACu, 0x1979B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979B4u;
label_1979b4:
    // 0x1979b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1979b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1979b8:
    // 0x1979b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1979b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1979bc:
    // 0x1979bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1979bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1979c0:
    // 0x1979c0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1979c4:
    // 0x1979c4: 0x320f809  jalr        $t9
label_1979c8:
    if (ctx->pc == 0x1979C8u) {
        ctx->pc = 0x1979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979C4u;
        // 0x1979c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979CCu;
        goto label_1979cc;
    }
    ctx->pc = 0x1979C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1979CCu);
        ctx->pc = 0x1979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979C4u;
        // 0x1979c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1979C4u, 0x1979CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1979CCu;
label_1979cc:
    // 0x1979cc: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1979ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1979d0:
    // 0x1979d0: 0xc05ee80  jal         func_17BA00
label_1979d4:
    if (ctx->pc == 0x1979D4u) {
        ctx->pc = 0x1979D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979D0u;
        // 0x1979d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979D8u;
        goto label_1979d8;
    }
    ctx->pc = 0x1979D0u;
    SET_GPR_U32(ctx, 31, 0x1979D8u);
    ctx->pc = 0x1979D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979D0u;
    // 0x1979d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1979D0u, 0x1979D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D8u;
label_1979d8:
    // 0x1979d8: 0x8ea20680  lw          $v0, 0x680($s5)
    ctx->pc = 0x1979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
label_1979dc:
    // 0x1979dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1979dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1979e0:
    // 0x1979e0: 0xaea20680  sw          $v0, 0x680($s5)
    ctx->pc = 0x1979e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 2));
label_1979e4:
    // 0x1979e4: 0x8ea30680  lw          $v1, 0x680($s5)
    ctx->pc = 0x1979e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
label_1979e8:
    // 0x1979e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1979ec:
    if (ctx->pc == 0x1979ECu) {
        ctx->pc = 0x1979F0u;
        goto label_1979f0;
    }
    ctx->pc = 0x1979E8u;
    {
        const bool branch_taken_0x1979e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1979e8) {
            ctx->pc = 0x197A10u;
            return;
        }
    }
    ctx->pc = 0x1979F0u;
label_1979f0:
    // 0x1979f0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1979f4:
    // 0x1979f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1979f8:
    // 0x1979f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1979f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1979fc:
    // 0x1979fc: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1979fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_197a00:
    // 0x197a00: 0xc064a88  jal         func_192A20
label_197a04:
    if (ctx->pc == 0x197A04u) {
        ctx->pc = 0x197A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A00u;
        // 0x197a04: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A08u;
        goto label_197a08;
    }
    ctx->pc = 0x197A00u;
    SET_GPR_U32(ctx, 31, 0x197A08u);
    ctx->pc = 0x197A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A00u;
    // 0x197a04: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x197A00u, 0x197A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A08u;
label_197a08:
    // 0x197a08: 0x10000014  b           . + 4 + (0x14 << 2)
label_197a0c:
    if (ctx->pc == 0x197A0Cu) {
        ctx->pc = 0x197A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A08u;
        // 0x197a0c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A10u;
        goto label_fallthrough_0x197a08;
    }
    ctx->pc = 0x197A08u;
    {
        const bool branch_taken_0x197a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A08u;
        // 0x197a0c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a08) {
            ctx->pc = 0x197A5Cu;
            return;
        }
    }
label_fallthrough_0x197a08:
    ctx->pc = 0x197A10u;
}
