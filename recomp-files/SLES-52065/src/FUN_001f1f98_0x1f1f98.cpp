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

// Function: FUN_001f1f98
// Address: 0x1f1f98 - 0x1f21d0
void FUN_001f1f98_0x1f1f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1f98_0x1f1f98");
#endif

    switch (ctx->pc) {
        case 0x1f1fe4u: goto label_1f1fe4;
        case 0x1f2004u: goto label_1f2004;
        case 0x1f2020u: goto label_1f2020;
        case 0x1f2074u: goto label_1f2074;
        case 0x1f2098u: goto label_1f2098;
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2184u: goto label_1f2184;
        case 0x1f2194u: goto label_1f2194;
        case 0x1f219cu: goto label_1f219c;
        default: break;
    }

    ctx->pc = 0x1f1f98u;

    // 0x1f1f98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f1f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1f1f9c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f1fa0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1f1fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1f1fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fa8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f1fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f1fac: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1f1facu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fb0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f1fb4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1f1fb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fb8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f1fbc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1f1fbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f1fc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f1fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1fcc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f1fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fd0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1f1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1f1fd4: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1f1fd8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f1fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f1fdc: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F1FDCu;
    SET_GPR_U32(ctx, 31, 0x1F1FE4u);
    ctx->pc = 0x1F1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FDCu;
    // 0x1f1fe0: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F1FDCu, 0x1F1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE4u;
label_1f1fe4:
    // 0x1f1fe4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f1fe8: 0x2452e200  addiu       $s2, $v0, -0x1E00
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959616));
    // 0x1f1fec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1ff0: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f1ff4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1FF4u;
    {
        const bool branch_taken_0x1f1ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ff4) {
            ctx->pc = 0x1F1FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1FF4u;
            // 0x1f1ff8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2008u;
            goto label_1f2008;
        }
    }
    ctx->pc = 0x1F1FFCu;
    // 0x1f1ffc: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F1FFCu;
    SET_GPR_U32(ctx, 31, 0x1F2004u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F1FFCu, 0x1F2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2004u;
label_1f2004:
    // 0x1f2004: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f2004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1f2008:
    // 0x1f2008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f200c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f200cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f2010: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2010u;
    {
        const bool branch_taken_0x1f2010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2010u;
        // 0x1f2014: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2010) {
            ctx->pc = 0x1F204Cu;
            goto label_1f204c;
        }
    }
    ctx->pc = 0x1F2018u;
    // 0x1f2018: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1f2018u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1f201c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f2020:
    // 0x1f2020: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f2020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f2024: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2024u;
    {
        const bool branch_taken_0x1f2024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2024u;
        // 0x1f2028: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2024) {
            ctx->pc = 0x1F2050u;
            goto label_1f2050;
        }
    }
    ctx->pc = 0x1F202Cu;
    // 0x1f202c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f2030: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f2030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2034: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f2034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2038: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f203c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F203Cu;
    {
        const bool branch_taken_0x1f203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f203c) {
            ctx->pc = 0x1F2040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F203Cu;
            // 0x1f2040: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2044u;
    // 0x1f2044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2044u;
    {
        const bool branch_taken_0x1f2044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2044u;
        // 0x1f2048: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2044) {
            ctx->pc = 0x1F2054u;
            goto label_1f2054;
        }
    }
    ctx->pc = 0x1F204Cu;
label_1f204c:
    // 0x1f204c: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1f204cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1f2050:
    // 0x1f2050: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f2054:
    // 0x1f2054: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2054u;
    {
        const bool branch_taken_0x1f2054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2054) {
            ctx->pc = 0x1F2058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2054u;
            // 0x1f2058: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F205Cu;
            goto label_1f205c;
        }
    }
    ctx->pc = 0x1F205Cu;
label_1f205c:
    // 0x1f205c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F205Cu;
    {
        const bool branch_taken_0x1f205c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F205Cu;
        // 0x1f2060: 0x2ec20401  sltiu       $v0, $s6, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f205c) {
            ctx->pc = 0x1F206Cu;
            goto label_1f206c;
        }
    }
    ctx->pc = 0x1F2064u;
    // 0x1f2064: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2064u;
    {
        const bool branch_taken_0x1f2064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2064) {
            ctx->pc = 0x1F207Cu;
            goto label_1f207c;
        }
    }
    ctx->pc = 0x1F206Cu;
label_1f206c:
    // 0x1f206c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F206Cu;
    SET_GPR_U32(ctx, 31, 0x1F2074u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F206Cu, 0x1F2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2074u;
label_1f2074:
    // 0x1f2074: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1F2074u;
    {
        const bool branch_taken_0x1f2074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2074u;
        // 0x1f2078: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2074) {
            ctx->pc = 0x1F21A0u;
            goto label_1f21a0;
        }
    }
    ctx->pc = 0x1F207Cu;
label_1f207c:
    // 0x1f207c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F207Cu;
    {
        const bool branch_taken_0x1f207c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F207Cu;
        // 0x1f2080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f207c) {
            ctx->pc = 0x1F20C0u;
            goto label_1f20c0;
        }
    }
    ctx->pc = 0x1F2084u;
    // 0x1f2084: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f2084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f2088: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f208c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f208cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f2090: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f2094: 0x0  nop
    ctx->pc = 0x1f2094u;
    // NOP
label_1f2098:
    // 0x1f2098: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1f2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1f209c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f20a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f20a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f20a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f20a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f20a8: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x1f20a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1f20ac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f20acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f20b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F20B0u;
    {
        const bool branch_taken_0x1f20b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f20b0) {
            ctx->pc = 0x1F2098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2098;
        }
    }
    ctx->pc = 0x1F20B8u;
    // 0x1f20b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F20B8u;
    {
        const bool branch_taken_0x1f20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20B8u;
        // 0x1f20bc: 0xae500810  sw          $s0, 0x810($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20b8) {
            ctx->pc = 0x1F20D0u;
            goto label_1f20d0;
        }
    }
    ctx->pc = 0x1F20C0u;
label_1f20c0:
    // 0x1f20c0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f20c4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f20c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f20c8: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f20c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f20cc: 0xae500810  sw          $s0, 0x810($s2)
    ctx->pc = 0x1f20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
label_1f20d0:
    // 0x1f20d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f20d4: 0xae57080c  sw          $s7, 0x80C($s2)
    ctx->pc = 0x1f20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 23));
    // 0x1f20d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f20d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f20dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f20e0: 0x2634ee40  addiu       $s4, $s1, -0x11C0
    ctx->pc = 0x1f20e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962752));
    // 0x1f20e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f20e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f20ec: 0x2450e200  addiu       $s0, $v0, -0x1E00
    ctx->pc = 0x1f20ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959616));
    // 0x1f20f0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F20F0u;
    SET_GPR_U32(ctx, 31, 0x1F20F8u);
    ctx->pc = 0x1F20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20F0u;
    // 0x1f20f4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F20F0u, 0x1F20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20F8u;
label_1f20f8:
    // 0x1f20f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f20f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20fc: 0xae560818  sw          $s6, 0x818($s2)
    ctx->pc = 0x1f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2072), GPR_U32(ctx, 22));
    // 0x1f2100: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2108: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f2108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f210c: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1f2110: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f2110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f2114: 0xae5e0814  sw          $fp, 0x814($s2)
    ctx->pc = 0x1f2114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 30));
    // 0x1f2118: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F2118u;
    SET_GPR_U32(ctx, 31, 0x1F2120u);
    ctx->pc = 0x1F211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2118u;
    // 0x1f211c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F2118u, 0x1F2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2120u;
label_1f2120:
    // 0x1f2120: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f2120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f2124: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f2124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2128: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f212c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1f212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1f2130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2134: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1f2138: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f2138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f213c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f213cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2140: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2140u;
    SET_GPR_U32(ctx, 31, 0x1F2148u);
    ctx->pc = 0x1F2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2140u;
    // 0x1f2144: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2140u, 0x1F2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2148u;
label_1f2148:
    // 0x1f2148: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2148u;
    {
        const bool branch_taken_0x1f2148 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2148u;
        // 0x1f214c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2148) {
            ctx->pc = 0x1F2168u;
            goto label_1f2168;
        }
    }
    ctx->pc = 0x1F2150u;
    // 0x1f2150: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2150u;
    SET_GPR_U32(ctx, 31, 0x1F2158u);
    ctx->pc = 0x1F2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2150u;
    // 0x1f2154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2150u, 0x1F2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2158u;
label_1f2158:
    // 0x1f2158: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2158u;
    SET_GPR_U32(ctx, 31, 0x1F2160u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2158u, 0x1F2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2160u;
label_1f2160:
    // 0x1f2160: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F2160u;
    {
        const bool branch_taken_0x1f2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2160u;
        // 0x1f2164: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2160) {
            ctx->pc = 0x1F21A0u;
            goto label_1f21a0;
        }
    }
    ctx->pc = 0x1F2168u;
label_1f2168:
    // 0x1f2168: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f2168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f216c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F216Cu;
    SET_GPR_U32(ctx, 31, 0x1F2174u);
    ctx->pc = 0x1F2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F216Cu;
    // 0x1f2170: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F216Cu, 0x1F2174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2174u;
label_1f2174:
    // 0x1f2174: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2174u;
    {
        const bool branch_taken_0x1f2174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2174) {
            ctx->pc = 0x1F218Cu;
            goto label_1f218c;
        }
    }
    ctx->pc = 0x1F217Cu;
    // 0x1f217c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F217Cu;
    SET_GPR_U32(ctx, 31, 0x1F2184u);
    ctx->pc = 0x1F2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F217Cu;
    // 0x1f2180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F217Cu, 0x1F2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2184u;
label_1f2184:
    // 0x1f2184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2184u;
    {
        const bool branch_taken_0x1f2184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2184u;
        // 0x1f2188: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2184) {
            ctx->pc = 0x1F21A0u;
            goto label_1f21a0;
        }
    }
    ctx->pc = 0x1F218Cu;
label_1f218c:
    // 0x1f218c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F218Cu;
    SET_GPR_U32(ctx, 31, 0x1F2194u);
    ctx->pc = 0x1F2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F218Cu;
    // 0x1f2190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F218Cu, 0x1F2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2194u;
label_1f2194:
    // 0x1f2194: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2194u;
    SET_GPR_U32(ctx, 31, 0x1F219Cu);
    ctx->pc = 0x1F2198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2194u;
    // 0x1f2198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2194u, 0x1F219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F219Cu;
label_1f219c:
    // 0x1f219c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f21a0:
    // 0x1f21a0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1f21a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f21a4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1f21a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f21a8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f21a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f21ac: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f21acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f21b0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f21b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f21b4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f21b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f21b8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f21b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f21bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f21bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f21c0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f21c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f21c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f21c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f21c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F21C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21C8u;
        // 0x1f21cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F21C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F21D0u;
}
