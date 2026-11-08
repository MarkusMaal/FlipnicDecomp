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

// Function: FUN_001f1938
// Address: 0x1f1938 - 0x1f1ad0
void FUN_001f1938_0x1f1938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1938_0x1f1938");
#endif

    switch (ctx->pc) {
        case 0x1f1974u: goto label_1f1974;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa4u: goto label_1f1aa4;
        default: break;
    }

    ctx->pc = 0x1f1938u;

    // 0x1f1938: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f193c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f1940: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1948: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f194c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f194cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1950: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f1954: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f1958: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f1958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1f195c: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f195cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1960: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f1960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f1964: 0x26d0e200  addiu       $s0, $s6, -0x1E00
    ctx->pc = 0x1f1964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f1968: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f1968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f196c: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F196Cu;
    SET_GPR_U32(ctx, 31, 0x1F1974u);
    ctx->pc = 0x1F1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F196Cu;
    // 0x1f1970: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F196Cu, 0x1F1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1974u;
label_1f1974:
    // 0x1f1974: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1978: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f1978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f197c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F197Cu;
    {
        const bool branch_taken_0x1f197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f197c) {
            ctx->pc = 0x1F1980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F197Cu;
            // 0x1f1980: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1990u;
            goto label_1f1990;
        }
    }
    ctx->pc = 0x1F1984u;
    // 0x1f1984: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F1984u;
    SET_GPR_U32(ctx, 31, 0x1F198Cu);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F1984u, 0x1F198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F198Cu;
label_1f198c:
    // 0x1f198c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f198cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f1990:
    // 0x1f1990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1994: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f1994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f1998: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1998u;
    {
        const bool branch_taken_0x1f1998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1998u;
        // 0x1f199c: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1998) {
            ctx->pc = 0x1F19DCu;
            goto label_1f19dc;
        }
    }
    ctx->pc = 0x1F19A0u;
    // 0x1f19a0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f19a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f19a4: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f19a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f19a8: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f19ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f19acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f19b0:
    // 0x1f19b0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f19b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f19b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F19B4u;
    {
        const bool branch_taken_0x1f19b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B4u;
        // 0x1f19b8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19b4) {
            ctx->pc = 0x1F19E8u;
            goto label_1f19e8;
        }
    }
    ctx->pc = 0x1F19BCu;
    // 0x1f19bc: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1f19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1f19c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f19c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f19c4: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1f19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f19c8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f19cc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F19CCu;
    {
        const bool branch_taken_0x1f19cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19cc) {
            ctx->pc = 0x1F19D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19CCu;
            // 0x1f19d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f19b0;
        }
    }
    ctx->pc = 0x1F19D4u;
    // 0x1f19d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F19D4u;
    {
        const bool branch_taken_0x1f19d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19D4u;
        // 0x1f19d8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19d4) {
            ctx->pc = 0x1F19ECu;
            goto label_1f19ec;
        }
    }
    ctx->pc = 0x1F19DCu;
label_1f19dc:
    // 0x1f19dc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f19dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f19e0: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f19e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f19e4: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
label_1f19e8:
    // 0x1f19e8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f19ec:
    // 0x1f19ec: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F19ECu;
    {
        const bool branch_taken_0x1f19ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f19ec) {
            ctx->pc = 0x1F19F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19ECu;
            // 0x1f19f0: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19F4u;
            goto label_1f19f4;
        }
    }
    ctx->pc = 0x1F19F4u;
label_1f19f4:
    // 0x1f19f4: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1f19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x1f19f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f19fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1a00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1a04: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1a08: 0x2673ee40  addiu       $s3, $s3, -0x11C0
    ctx->pc = 0x1f1a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962752));
    // 0x1f1a0c: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A14u);
    ctx->pc = 0x1F1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A0Cu;
    // 0x1f1a10: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1A0Cu, 0x1F1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A14u;
label_1f1a14:
    // 0x1f1a14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a18: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1f1a1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1a20: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1f1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1f1a24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f1a28: 0x2684f900  addiu       $a0, $s4, -0x700
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965504));
    // 0x1f1a2c: 0x26c7e200  addiu       $a3, $s6, -0x1E00
    ctx->pc = 0x1f1a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f1a30: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f1a34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a3c: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f1a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f1a40: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1f1a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a44: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1a48: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1A48u;
    SET_GPR_U32(ctx, 31, 0x1F1A50u);
    ctx->pc = 0x1F1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A48u;
    // 0x1f1a4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1A48u, 0x1F1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A50u;
label_1f1a50:
    // 0x1f1a50: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1A50u;
    {
        const bool branch_taken_0x1f1a50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A50u;
        // 0x1f1a54: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a50) {
            ctx->pc = 0x1F1A70u;
            goto label_1f1a70;
        }
    }
    ctx->pc = 0x1F1A58u;
    // 0x1f1a58: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1A58u;
    SET_GPR_U32(ctx, 31, 0x1F1A60u);
    ctx->pc = 0x1F1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A58u;
    // 0x1f1a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1A58u, 0x1F1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A60u;
label_1f1a60:
    // 0x1f1a60: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1A60u;
    SET_GPR_U32(ctx, 31, 0x1F1A68u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1A60u, 0x1F1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A68u;
label_1f1a68:
    // 0x1f1a68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1A68u;
    {
        const bool branch_taken_0x1f1a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A68u;
        // 0x1f1a6c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a68) {
            ctx->pc = 0x1F1AA8u;
            goto label_1f1aa8;
        }
    }
    ctx->pc = 0x1F1A70u;
label_1f1a70:
    // 0x1f1a70: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1f1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1f1a74: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1A74u;
    SET_GPR_U32(ctx, 31, 0x1F1A7Cu);
    ctx->pc = 0x1F1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A74u;
    // 0x1f1a78: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1A74u, 0x1F1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A7Cu;
label_1f1a7c:
    // 0x1f1a7c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1A7Cu;
    {
        const bool branch_taken_0x1f1a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a7c) {
            ctx->pc = 0x1F1A94u;
            goto label_1f1a94;
        }
    }
    ctx->pc = 0x1F1A84u;
    // 0x1f1a84: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1A84u;
    SET_GPR_U32(ctx, 31, 0x1F1A8Cu);
    ctx->pc = 0x1F1A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A84u;
    // 0x1f1a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1A84u, 0x1F1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A8Cu;
label_1f1a8c:
    // 0x1f1a8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1A8Cu;
    {
        const bool branch_taken_0x1f1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A8Cu;
        // 0x1f1a90: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a8c) {
            ctx->pc = 0x1F1AA8u;
            goto label_1f1aa8;
        }
    }
    ctx->pc = 0x1F1A94u;
label_1f1a94:
    // 0x1f1a94: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1A94u;
    SET_GPR_U32(ctx, 31, 0x1F1A9Cu);
    ctx->pc = 0x1F1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A94u;
    // 0x1f1a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1A94u, 0x1F1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A9Cu;
label_1f1a9c:
    // 0x1f1a9c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1AA4u);
    ctx->pc = 0x1F1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A9Cu;
    // 0x1f1aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1A9Cu, 0x1F1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA4u;
label_1f1aa4:
    // 0x1f1aa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1aa8:
    // 0x1f1aa8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f1aac: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f1aacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1ab0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f1ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f1ab4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f1ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1ab8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f1ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1abc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f1abcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1ac0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f1ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f1ac4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f1ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AC8u;
        // 0x1f1acc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1AD0u;
}
