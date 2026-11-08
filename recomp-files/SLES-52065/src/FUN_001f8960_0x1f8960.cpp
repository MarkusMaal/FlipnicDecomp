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

// Function: FUN_001f8960
// Address: 0x1f8960 - 0x1f8ad4
void FUN_001f8960_0x1f8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8960_0x1f8960");
#endif

    switch (ctx->pc) {
        case 0x1f89b0u: goto label_1f89b0;
        case 0x1f8a30u: goto label_1f8a30;
        case 0x1f8a64u: goto label_1f8a64;
        case 0x1f8a8cu: goto label_1f8a8c;
        case 0x1f8aacu: goto label_1f8aac;
        default: break;
    }

    ctx->pc = 0x1f8960u;

    // 0x1f8960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f8964: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f8968: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f896c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f896cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f8970: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8974: 0x26821600  addiu       $v0, $s4, 0x1600
    ctx->pc = 0x1f8974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 5632));
    // 0x1f8978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f897c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f897cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8980: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f8980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f8984: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f8984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8988: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f898c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f8990: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1f8990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8994: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8994u;
    {
        const bool branch_taken_0x1f8994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8994u;
        // 0x1f8998: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8994) {
            ctx->pc = 0x1F89A4u;
            goto label_1f89a4;
        }
    }
    ctx->pc = 0x1F899Cu;
    // 0x1f899c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1F899Cu;
    {
        const bool branch_taken_0x1f899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F899Cu;
        // 0x1f89a0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f899c) {
            ctx->pc = 0x1F8AB0u;
            goto label_1f8ab0;
        }
    }
    ctx->pc = 0x1F89A4u;
label_1f89a4:
    // 0x1f89a4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f89a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f89a8: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F89A8u;
    SET_GPR_U32(ctx, 31, 0x1F89B0u);
    ctx->pc = 0x1F89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F89A8u;
    // 0x1f89ac: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F89A8u, 0x1F89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F89B0u;
label_1f89b0:
    // 0x1f89b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F89B0u;
    {
        const bool branch_taken_0x1f89b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B0u;
        // 0x1f89b4: 0x3c130039  lui         $s3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89b0) {
            ctx->pc = 0x1F89C0u;
            goto label_1f89c0;
        }
    }
    ctx->pc = 0x1F89B8u;
    // 0x1f89b8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1F89B8u;
    {
        const bool branch_taken_0x1f89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B8u;
        // 0x1f89bc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89b8) {
            ctx->pc = 0x1F8AB0u;
            goto label_1f8ab0;
        }
    }
    ctx->pc = 0x1F89C0u;
label_1f89c0:
    // 0x1f89c0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1f89c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1f89c4: 0x26661680  addiu       $a2, $s3, 0x1680
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 5760));
    // 0x1f89c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F89C8u;
    {
        const bool branch_taken_0x1f89c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89C8u;
        // 0x1f89cc: 0xae721680  sw          $s2, 0x1680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5760), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89c8) {
            ctx->pc = 0x1F89E0u;
            goto label_1f89e0;
        }
    }
    ctx->pc = 0x1F89D0u;
    // 0x1f89d0: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x1f89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x1f89d4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1f89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1f89d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F89D8u;
    {
        const bool branch_taken_0x1f89d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89D8u;
        // 0x1f89dc: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89d8) {
            ctx->pc = 0x1F8A0Cu;
            goto label_1f8a0c;
        }
    }
    ctx->pc = 0x1F89E0u;
label_1f89e0:
    // 0x1f89e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f89e4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1f89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f89e8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1f89e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1f89ec: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x1f89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1f89f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f89f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f89f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f89f8: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f89fc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1f89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f8a00: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1f8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1f8a04: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1f8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x1f8a08: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1f8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_1f8a0c:
    // 0x1f8a0c: 0x26621680  addiu       $v0, $s3, 0x1680
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5760));
    // 0x1f8a10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f8a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a14: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f8a18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8A18u;
    {
        const bool branch_taken_0x1f8a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A18u;
        // 0x1f8a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a18) {
            ctx->pc = 0x1F8A58u;
            goto label_1f8a58;
        }
    }
    ctx->pc = 0x1F8A20u;
    // 0x1f8a20: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f8a24: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1f8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1f8a28: 0x24e41680  addiu       $a0, $a3, 0x1680
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8a2c: 0x0  nop
    ctx->pc = 0x1f8a2cu;
    // NOP
label_1f8a30:
    // 0x1f8a30: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1f8a30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8a34: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f8a38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f8a3c: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x1f8a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f8a40: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f8a44: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1f8a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8a48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F8A48u;
    {
        const bool branch_taken_0x1f8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A48u;
        // 0x1f8a4c: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a48) {
            ctx->pc = 0x1F8A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8a30;
        }
    }
    ctx->pc = 0x1F8A50u;
    // 0x1f8a50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8A50u;
    {
        const bool branch_taken_0x1f8a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a50) {
            ctx->pc = 0x1F8A5Cu;
            goto label_1f8a5c;
        }
    }
    ctx->pc = 0x1F8A58u;
label_1f8a58:
    // 0x1f8a58: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f8a58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
label_1f8a5c:
    // 0x1f8a5c: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8A64u);
    ctx->pc = 0x1F8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A5Cu;
    // 0x1f8a60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F8A5Cu, 0x1F8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A64u;
label_1f8a64:
    // 0x1f8a64: 0x26092bc0  addiu       $t1, $s0, 0x2BC0
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11200));
    // 0x1f8a68: 0x26841600  addiu       $a0, $s4, 0x1600
    ctx->pc = 0x1f8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5632));
    // 0x1f8a6c: 0x26671680  addiu       $a3, $s3, 0x1680
    ctx->pc = 0x1f8a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5760));
    // 0x1f8a70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8a74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f8a78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a7c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8a80: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8a84: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8A84u;
    SET_GPR_U32(ctx, 31, 0x1F8A8Cu);
    ctx->pc = 0x1F8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A84u;
    // 0x1f8a88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8A84u, 0x1F8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A8Cu;
label_1f8a8c:
    // 0x1f8a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a90: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8A90u;
    {
        const bool branch_taken_0x1f8a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A90u;
        // 0x1f8a94: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a90) {
            ctx->pc = 0x1F8AA4u;
            goto label_1f8aa4;
        }
    }
    ctx->pc = 0x1F8A98u;
    // 0x1f8a98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f8a9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8A9Cu;
    {
        const bool branch_taken_0x1f8a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A9Cu;
        // 0x1f8aa0: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a9c) {
            ctx->pc = 0x1F8AACu;
            goto label_1f8aac;
        }
    }
    ctx->pc = 0x1F8AA4u;
label_1f8aa4:
    // 0x1f8aa4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8AA4u;
    SET_GPR_U32(ctx, 31, 0x1F8AACu);
    ctx->pc = 0x1F8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8AA4u;
    // 0x1f8aa8: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8AA4u, 0x1F8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AACu;
label_1f8aac:
    // 0x1f8aac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8ab0:
    // 0x1f8ab0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f8ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f8ab4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f8ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8ab8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f8ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8abc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f8abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8ac0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f8ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8ac4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f8ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8ac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ACCu;
        // 0x1f8ad0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8AD4u;
}
